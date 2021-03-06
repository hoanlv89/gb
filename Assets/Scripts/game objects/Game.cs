using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;
using UnityEngine.UI;

public abstract class Game
{
	public const int WIDTH = 1280;
	public const int HEIGHT = 720;
	public static int SCALE_HEIGHT {
		get{
			return 0;
//			return (Screen.height/ Screen.width) * WIDTH;
		}
	}
	public const int PLAYER_VIEW_WIDTH = 156;
	public const int PLAYER_VIEW_HEIGHT = 160;

	public abstract Vector2[] POS2 { get; }

	public abstract Vector2[] POS4 { get; }

	public abstract Vector2[] POS5 { get; }

	public abstract Vector2[] POS9 { get; }

	public GameScene gameScene;
	public string name;
	public int stake;	// muc cuoc trong ban
	public int id;
	public int type;
	public int ag_min; // muc tai san toi thieu dc tham gia
	public int v_min;	// muc vip toi thieu dc tham gia

	List<GameObject> inviteBtns = new List<GameObject>();

	public enum State
	{
		WAITING,
		PLAYING,
		VIEWING,
		MUABANCUA // trang thai doi voi game xoc dia
	}

	private State _state;
	public State state {
		get{
			return _state;
		}
		set{
			_state = value;
			if(_state != null && thisPlayer != null && hostPlayer != null 
			   && _state == State.WAITING && thisPlayer.Equals(hostPlayer)){
				// show 3dots
				gameScene.showThreeDots(true);
			} else {
				gameScene.showThreeDots(false);
			}
		}
	}

	public Game ()
	{
		players = new List<Player> ();
		lastCards = new List<Card> ();
		lastTurnCards = new List<Card> ();
	}

	public List<Player> players;
	public ThisPlayer thisPlayer;
	private Player _hostPlayer;
	public Player hostPlayer{
		get{
			return _hostPlayer;
		}
		set{
			if(_hostPlayer != null)
			{
				// an hien thi doi voi host cu
				_hostPlayer.showHostIcon(false);
			}
			_hostPlayer = value;
			if(_hostPlayer != null){
				// hien thi voi host moi
				_hostPlayer.showHostIcon(true);
			}

			if(state != null && thisPlayer != null && _hostPlayer != null 
			   && _hostPlayer.Equals(thisPlayer) && state == State.WAITING){
				// show 3dots
				gameScene.showThreeDots(true);
			} else {
				gameScene.showThreeDots(false);
			}
		}
	}
	public Player lastPlayer;
	public List<Card> lastCards; // luu de xu ly logic
	public List<Card> lastTurnCards; // luu de xu ly do hoa, su dung o tien len/ sam

	public void setGameConfig (string name, int stake, int id, int type, int agx, int v_min)
	{
		this.name = name;
		this.stake = stake;
		this.id = id;
		this.type = type;
		this.ag_min = stake * agx;
		this.v_min = v_min;

		// TODO view ra man hinh
		gameScene.updateGameConfig ();
	}

	public void changeGameConfig (int stake, int v_min, int ag_min)
	{
		this.stake = stake;
		this.v_min = v_min;
		this.ag_min = ag_min;
		// TODO view ra man hinh
//		gameView.showShortToast("Bàn chơi đã thay đổi mức cược.");
		gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (Strings.instance.ingame_common_configchange);
		gameScene.updateGameConfig (withEffect:true);
		
		// set everyone not ready
		foreach (Player player in players) {
			if (player.Equals (hostPlayer) == false) {
				player.isReady = false;
				player.updateView ();
			}
		}
		updateReadyStatus ();
	}

	public virtual void updateReadyStatus ()
	{
		if(this is GameXocDia)
			return;
		// chi goi voi nhung game can phai gui san sang bang tay
		Debug.Log ("**** update Ready Status ****");
		gameScene.hideGButton ();

		if (thisPlayer.isReady == false && state == State.WAITING)
			gameScene.showReadyButton ();
		
		bool allready = true;
		foreach (Player player in players) {
//			if (state == State.PLAYING)
//				player.updateView();
			if (player.Equals (hostPlayer))
				player.isReady = true;
			allready &= player.isReady;
		}
		
		if (allready && hostPlayer is ThisPlayer && state == State.WAITING && players.Count > 1) {
			gameScene.showStartButton ();
		}
		
		if (state == State.PLAYING || state == State.VIEWING)
			gameScene.hideGButton ();
	}

	public Player addPlayer (string name, int ag, int lq, int vip, bool isReady, int ik, string imgUrl, string sIP)
	{
//		Debug.Log("ava: " + name + " - " + imgUrl);

		// trường hợp từ vtable -> stable, người chơi đã tồn tại trong list
		// lúc này không cần add lại vào players list nữa
		// Log.e("AVA", name + " ava: " + imgUrl);
		Player player = getPlayer (name);
		if (player != null)
			return player;
		if (name.Equals (GameApplication.user.inGameName)) {
			thisPlayer = new ThisPlayer (name, ag, lq, vip, isReady, ik, imgUrl, sIP);
			players.Add (thisPlayer);
			player = thisPlayer;
		} else {
			player = new OtherPlayer (name, ag, lq, vip, isReady, ik, imgUrl, sIP);
			players.Add (player);
		}
		// TODO view ra man hinh
		gameScene.initializeViewOfPlayers ();
		return player;
	}

	public Player getPlayer (string name)
	{
		foreach (Player player in players) {
			if (player.name.Equals (name)) {
				return player;
			}
		}
		return null;
	}

	public void removePlayer (string name)
	{
		OtherPlayer player = (OtherPlayer)getPlayer (name);
		if(player == null)
			return;
		// xoa cac thanh phan lien quan
		player.removeAllComponentsView();
		players.Remove (player);
		LeanTween.cancel(player.rectTransform.gameObject);
		GameObject.Destroy (player.rectTransform.gameObject);
	}

	public void leaveTable ()
	{
		if (gameScene.controllerControl.gameNotification.gameObject.activeSelf) {
			LeanTween.delayedCall(3f, delegate(object obj) {
				if(gameScene.controllerControl.gameNotification.gameObject.activeSelf) {
					gameScene.controllerControl.gameNotification.dismiss();
					backToLobby();
				}
			});
			gameScene.controllerControl.gameNotification.setOnDismiss (delegate {
				Debug.Log("Call OnDismiss");
				LeanTween.cancelAll(false);
				backToLobby ();
			});
		} else if (thisPlayer.ag < ag_min) {
			SDialog dialog = gameScene.showDialog (DialogInfo.ThreeChoicesDialog);
			dialog.content.text = Strings.instance.ingame_common_kick_not_enough_gold;
			dialog.cancel.onClick.AddListener(delegate {
				dialog.dismiss ();
				backToLobby ();
			});
			dialog.negativeText.text = Strings.instance.ingame_common_force_leave_game_dialog_op1;
			dialog.negative.onClick.AddListener (delegate {
				dialog.dismiss ();
				backToLobby ();
			});
			// moi ban be
			dialog.neutralText.text = Strings.instance.ingame_common_force_leave_game_dialog_op2;
			dialog.neutral.onClick.AddListener (delegate {
				dialog.dismiss ();
				SceneControl.showInviteFriendOnStart = true;
				backToHome();
			});
			// mua gold
			dialog.positiveText.text = Strings.instance.ingame_common_force_leave_game_dialog_op3;
			dialog.positive.onClick.AddListener (delegate {
				dialog.dismiss ();
				SceneControl.showBuyGoldOnStart = true;
				backToLobby ();
			});
		} else {
			backToLobby ();
		}
	}

	public void backToLobby ()
	{
		if (Application.loadedLevelName.Equals (GameApplication.GAMESCENE)) {
			thisPlayer = null;
			hostPlayer = null;
			lastPlayer = null;
			players.Clear ();
			lastCards.Clear ();
			lastTurnCards.Clear ();
			Application.LoadLevel (GameApplication.LOBBYSCENE);
			Tracking.changeScene (GameApplication.LOBBYSCENE);
		}
	}

	public void backToHome ()
	{
		if (Application.loadedLevelName.Equals (GameApplication.GAMESCENE)) {
			thisPlayer = null;
			hostPlayer = null;
			lastPlayer = null;
			players.Clear ();
			lastCards.Clear ();
			lastTurnCards.Clear ();
			Application.LoadLevel (GameApplication.HOMESCENE);
			Tracking.changeScene (GameApplication.HOMESCENE);

			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPlayBackClick, (float)1f, DSTFBEvent.defaultParams);
		}
	}

	public Vector2 getViewPositionOfPlayer (Player player)
	{
		int maxsize = 4;
		if(this is GameSam || this is GameXiTo ){
			maxsize = 5;
		} else if(this is GamePoker || this is GameXocDia || this is GameLieng || this is Game9K){
			maxsize = 9;
		}

		int size = players.Count;
		Vector2[] POS = POS2;
		if (size > 5 || (size == 5 && maxsize > 5))
			POS = POS9;
		else if (size > 4 || (size == 4 && maxsize > 4))
			POS = POS5;
		else if (size > 2)
			POS = POS4;

		if (this is GameDummy)
			POS = POS4;

		int viewSize = POS.Length;

		int i = players.IndexOf (player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf (thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}

		return POS [i];
	}

	//tra ve nguoi choi thu may, bat dau tu 0
	public int getViewIndexOfPlayer (Player player){
		int maxsize = 4;
		if(this is GameSam || this is GameXiTo ){
			maxsize = 5;
		} else if(this is GamePoker || this is GameXocDia || this is GameLieng || this is Game9K){
			maxsize = 9;
		}

		int size = players.Count;
		Vector2[] POS = POS2;
		if (size > 5 || (size == 5 && maxsize > 5))
			POS = POS9;
		else if (size > 4 || (size == 4 && maxsize > 4))
			POS = POS5;
		else if (size > 2 || (size == 2 && maxsize > 2))
			POS = POS4;

		if (this is GameDummy)
			POS = POS4;

		int viewSize = POS.Length;
		
		int i = players.IndexOf (player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf (thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}


		// ngoai le cho Dummy
		if (this is GameDummy == false) {
			if (players.Count == 2 && i > 0)
				i = 2;
		}

		return i;
	}

	public virtual string gameInfoToString ()
	{
		string spliter = "\n";
		if (this is GameDummy||this is Game9K)
			spliter = " ";
		return Strings.instance.gamescene_gameinfo_table + ": " + id + spliter + Strings.instance.gamescene_gameinfo_stake + ": " + Utils.formatCurrency (stake, withDolarSign: false);
	}

	public void updateAllPlayersViewPosition (bool withEffect = true)
	{
		int maxsize = 4;

		if(this is GameSam || this is GameXiTo ){
			maxsize = 5;
		} else if(this is GamePoker || this is GameXocDia || this is GameLieng || this is Game9K){
			maxsize = 9;
		}

		int size = players.Count;
		Vector2[] POS = POS2;
		if (size > 5 || (size == 5 && maxsize > 5))
			POS = POS9;
		else if (size > 4 || (size == 4 && maxsize > 4))
			POS = POS5;
		else if (size > 2 || (size == 2 && maxsize > 2))
			POS = POS4;

		if(this is GameDummy ){
			POS = POS4;
		}

		foreach(GameObject go in inviteBtns){
			GameObject.Destroy(go);
		}
		inviteBtns.Clear();

		// sinh ra cac nut invite
		// TODO: neu da du capacity roi thi ko sinh nua
		for(int i = 0; i< POS.Length; i++){
			RectTransform rect = GameObject.Instantiate<RectTransform>(gameScene.controllerControl.bgControl.pf_invite);
			rect.SetParent(gameScene.playerLayer, false);
			rect.localScale= new Vector3(0.87f,0.87f,1);
			rect.anchoredPosition = POS[i];
			inviteBtns.Add(rect.gameObject);
			rect.GetComponent<Image>().sprite=gameScene.controllerControl.bgControl.invite_1;

			if(gameScene.cubeia.gameId==GameType.XOCDIA){
				rect.GetComponent<Image>().sprite=gameScene.controllerControl.bgControl.invite_2;
			}
			rect.GetComponent<Button>().onClick.AddListener(delegate {
				gameScene.controllerControl.inviteBoxControl.show();
			});
		}

		foreach (Player player in players) {
			Vector2 position = getViewPositionOfPlayer (player);
			int occupiedPos = getViewIndexOfPlayer(player);
			// buoc phai in ra thi update moi dung, eo' hieu!
			Debug.Log("position: "+ position);
			Debug.Log("occupiedPos: "+ occupiedPos);
			GameObject.Destroy(inviteBtns[occupiedPos]);

			// nhung game duoi day ko co vi tri OnPlaying ma chi co mot vi tri
			if(state.Equals(State.PLAYING) && player is ThisPlayer && !(this is GameXocDia) && !(this is GameChan) && !(this is GameDummy)){
				((ThisPlayer)player).setOnPlayingPosition();
			} else if(!state.Equals(State.WAITING)) {
				player.updatePostion (position, false);
			} else if(player is OtherPlayer){
				player.updatePostion (position, withEffect);
			} else {
				// this player do nothing
			}
		}

	}

	public void clearLastGameCards ()
	{
		// TODO: Xoa man hinh
		gameScene.clearCardLayer ();
//		gameView.cards_layer.removeAllViews();
//		foreach (Player player in players) {
//			if (player.sptext != null)
//				gameView.chats_layer.removeView(player.sptext);
//			player.view_boluot.setVisibility(View.INVISIBLE);
//			player.view_chat.setVisibility(View.INVISIBLE);
//		}
	}

	public virtual void startGame (JSONArray jcards)
	{
		foreach (Player player in players) {
			player.boLuot = false;
			player.updateView ();
			if (player is OtherPlayer) {
				((OtherPlayer)player).removeFinishCards ();
			}
		}
	}

	public virtual void onReconnection(){
		// xoa cac cay bai cua cac players
		lastCards.Clear ();
		lastTurnCards.Clear ();
		lastPlayer = null;

		foreach(Player player in players){
			player.stopCountDown ();

			// tala
			player.baidaan_tala.Clear();
			player.baidadanh_tala.Clear();
			player.baidadanh_tala.Clear();

			if( player is OtherPlayer){
				OtherPlayer otherPlayer = (OtherPlayer)player;
				// xoa view truoc, tranh truong hop ko xoa dc view vi mat lien ket logic
				GameObject.Destroy(otherPlayer.cardTransform.gameObject);

				otherPlayer.cardsInHandList.Clear();
				otherPlayer.cardTransform = null;
				otherPlayer.cardsInHand = 0;
			} else {
				thisPlayer.cards.Clear();
			}
		}

		foreach(RectTransform rect in gameScene.cardLayer)
		{
			GameObject.Destroy(rect.gameObject);
		}
	}

	public virtual void finishThisGame (JSONArray finishArray)
	{
		if (state != State.VIEWING) {
			GameApplication.user.sovandachoi++;
			if(GameApplication.user.sovandachoi >= 7 && GameApplication.user.vip == 0) {
				var data = new JSONClass();
				data["evt"] = "uvip";
				data["vip"].AsInt = 1;
				GameApplication.cubeia.sendService(data);
			}
		}

		state = State.WAITING;
		lastCards.Clear ();
		lastTurnCards.Clear ();
//		thisPlayer.recommendCardsList.clear();

		// ko lam to avatar cua thisPlayer nua
		thisPlayer.becomeNormal();
	
		// game poker da tu dong san sang, tru Xi To
		if(this is IAutoReadyGame == false){
			// set everyone not ready
			foreach (Player player in players) {
				if (player.Equals (hostPlayer) == false) {
					player.isReady = false;
					gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
						if(player != null)
							player.updateView ();
					}));
				}
			}
			if (thisPlayer.Equals (hostPlayer) == false) {
				thisPlayer.countDownReady ();
			}
		}
		// khong dc update ready o cho nay, chay hieu ung xong thi update
		// updateReadyStatus();
	}

	public void changeTableProperty (int stake, int v_min, int ag_min)
	{
		this.stake = stake;
		this.v_min = v_min;
		this.ag_min = ag_min;
		Debug.Log (name + " " + stake + " " + id + " ");
		// TODO view ra man hinh
		gameScene.showToast (Strings.instance.gamescene_msg_change_setting);
		gameScene.updateGameConfig (withEffect: true);
		
		// set everyone not ready
		foreach (Player player in players) {
			if (player.Equals (hostPlayer) == false) {
				player.isReady = false;
				player.updateView ();
			}
		}
		updateReadyStatus ();

		// an bang option
		gameScene.controllerControl.hideGameSettingPanel();
	}

	public string convertResult (int s)
	{
		switch (s) {
		case 1:
			return Strings.instance.gameplay_group_card_type_single;
		case 2:
			return Strings.instance.gameplay_group_card_type_pair;
		case 3:
			return Strings.instance.gameplay_group_card_type_twopair;
		case 4:
			return Strings.instance.gameplay_group_card_type_threeofakind;
		case 5:
			return Strings.instance.gameplay_group_card_type_fivestraight;
		case 6:
			return Strings.instance.gameplay_group_card_type_fiveflush;
		case 7:
			return Strings.instance.gameplay_group_card_type_fullhouse;
		case 8:
			return Strings.instance.gameplay_group_card_type_fourofakind;
		case 9:
			// Royal Flush
			return Strings.instance.gameplay_group_card_type_fiveflushstraight;
				
		default:
				// showResultPoker("Mậu");
			return "";
		}
	}
}