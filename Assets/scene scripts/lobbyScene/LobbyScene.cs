using UnityEngine;
using System.Collections;
using System.Linq;
using Styx;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;
using System.IO;
using UnityEngine.UI;

public class LobbyScene : SuperScene, IUpdateUserInfo
{
	[SerializeField]
	Text
		username, balance, vip;
	[SerializeField]
	Text
		textquickjoin, textnewtable, textjointable;
	[SerializeField]
	Image
		avatar, gamelogo; // gamelogo Dau Truong 
	[SerializeField]
	RoomListControl
		roomListControl;
	[SerializeField]
	RoomList3C
		roomList3C;
	[SerializeField]
	RoomListDT
		roomListDT;
	[SerializeField]
	RoomList52
		roomList52;
	[SerializeField]
	RoomListTL
		roomListTL;
	public GameObject doithuongButton, nganhangButton,chatButton,rankButton,settingButton,cashButton;
	public NewTableOptions newTableOption;
	public WaitingDialog tableListWaitingDialog;
	public ShowHideTable showHideTable;

	public Sprite s_chat_button;
	public Sprite s_setting_button;
	public Sprite s_rank_button;
	public Sprite[] stakeLogo;

	// Use this for initialization
	public override void Start ()
	{
		if (GameApplication.IsInitialized == false) {
//			 go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}
		base.Start ();

		if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
			updateInfo ();
			updateRoom3C ();
				
		} else if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
			updateInfo ();
			updateRoom3C ();
		} else if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			//init_dautruong ();
			updateInfo ();
			//updateAvatar ();
			updateRoomDT ();
		} else if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			//init_dautruong ();
			updateInfo ();
			//updateAvatar ();
			updateRoom52 ();
		}

		// check Mail
		checkMail ();

		// kiem tra co hien mua gold ko 
		if(SceneControl.showBuyGoldOnStart){
			gotoPaymentScreen();
			SceneControl.showBuyGoldOnStart = false;
		}

		if(OperatorGame.disableGames.Contains(GameType.GAME_DOITHUONG)){
			doithuongButton.SetActive(false);
			if(GameApplication.gameApp==GameApplication.GameApp.G3C){
				chatButton.GetComponent<RectTransform>().sizeDelta= new Vector2(340f,80f);
				chatButton.GetComponent<RectTransform>().anchoredPosition= new Vector2(-353f,0f);
//				Debug.LogError(s_chat_button.ToString());
				chatButton.GetComponent<Image>().enabled = false;
				chatButton.GetComponent<Image>().sprite = s_chat_button;
				LeanTween.delayedCall(0.1f, delegate(object obj) {
						chatButton.GetComponent<Image>().sprite = s_chat_button;
						chatButton.GetComponent<Image>().enabled = true;
				});
				
//				chatButton.GetComponent<Image>().type = Image.Type.Sliced;
			}
//			chatButton.GetComponent<Image>().enabled=false;
		}

		if(OperatorGame.disableGames.Contains(GameType.BANK_FUNCTION)){
			if(nganhangButton != null)
				nganhangButton.SetActive(false);

			if(cashButton != null)
				cashButton.SetActive(false);

			if(GameApplication.gameApp==GameApplication.GameApp.G3C){
				rankButton.GetComponent<RectTransform>().anchoredPosition= new Vector2(-118f,0.0f);
				rankButton.GetComponent<Image>().sprite = s_rank_button;

				settingButton.GetComponent<RectTransform>().anchoredPosition = new Vector2(58f,0f);
				settingButton.GetComponent<RectTransform>().sizeDelta = new Vector2(228f,80f);
				settingButton.GetComponent<Image>().enabled = false;
				LeanTween.delayedCall(0.1f, delegate(object obj) {
					settingButton.GetComponent<Image>().sprite = s_setting_button;
					settingButton.GetComponent<Image>().enabled = true;
				});
			}
		}

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameLoadSuccess, (float)1f, DSTFBEvent.defaultParams);
	}

	void init_dautruong ()
	{
		// LUU Y: KHONG CON DUNG HAM NAY NUA
		// TODO: luu y khi nao build dau truong phai keo laij lobbyScene_DT vao resources
		textquickjoin.text = Strings.instance.lobby_quickjoin;
		textnewtable.text = Strings.instance.lobby_newtable;
		textjointable.text = Strings.instance.lobby_jointable;

		string resname = "";
		if (cubeia.gameId == GameType.BACAY) {
			resname = "lb_bacay_dautruong";
		} else if (cubeia.gameId == GameType.LIENG) {
			resname = "lb_lieng_dautruong";
		} else if (cubeia.gameId == GameType.BINH) {
			resname = "lb_binh_dautruong";
		} else if (cubeia.gameId == GameType.CHAN) {
			resname = "lb_chan_dautruong";
		} else if (cubeia.gameId == GameType.POKER) {
			resname = "lb_poker_dautruong";
		} else if (cubeia.gameId == GameType.SAM) {
			resname = "lb_samloc_dautruong";
		} else if (cubeia.gameId == GameType.TALA) {
			resname = "lb_tala_dautruong";
		} else if (cubeia.gameId == GameType.TIENLEN) {
			resname = "lb_tienlen_dautruong";
		} else if (cubeia.gameId == GameType.XOCDIA) {
			resname = "lb_xocdia_dautruong";
		} else if (cubeia.gameId == GameType.XITO) {
			resname = "lb_xito_dautruong";
		} 

//		Sprite sprite = GameApplication.resource.getSpriteByPath ("Textures/LobbyScene_DT/" + resname);
		Sprite sprite = Resources.Load<Sprite>("Textures/LobbyScene_DT/" + resname);

		if (sprite != null) {
			//gamelogo.sprite = sprite;
		} else {
			Debug.LogError ("khong tim thay sprite: " + resname);
		}
	}

	public void newTableRequest ()
	{
		SoundManager.instance.playButtonClicked ();
		var data = new JSONClass ();
		data ["evt"] = "pctable";
		cubeia.sendService (data);
		showWaittingDialog (Strings.instance.common_waitingdialog_loading);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameCreatetableClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void showNewTableOption ()
	{
		dismissWaittingDialog ();
		newTableOption.setValues (TableGame.tableOptionList);
		newTableOption.show ();
	}

	public void showTableListWaitingDialog ()
	{
		tableListWaitingDialog.show (Strings.instance.common_waitingdialog_loading);
	}

	public void dismissTablelistWaitingDialog ()
	{
		tableListWaitingDialog.dismiss ();
	}

	public void sendQuickJoin ()
	{
		SoundManager.instance.playButtonClicked ();
		var json = new JSONClass ();
		json ["evt"] = "searchT";
		json ["gameid"].AsInt = cubeia.gameId;

		cubeia.sendService (json);
		showWaittingDialog (Strings.instance.common_waitingdialog_loading);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGamePlaynowCLick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void sendjoinTable (int tableid)
	{
		Debug.Log (" +++++ send sendjoinTable()");
		JoinResponsePacket joinResponsePacket = new JoinResponsePacket ();
		joinResponsePacket.code = 0;
		joinResponsePacket.tableid = tableid;

		int seat = 0;
		joinResponsePacket.seat = (byte)seat;
		joinResponsePacket.status = Enums.JoinResponseStatus.OK;

		cubeia.handleJoinResponsePacket (joinResponsePacket);
	}

	public void sendQueryEmails ()
	{
		cubeia.sendQueryEmails ();
	}

	public void backToHomeScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		previousScene = Application.loadedLevelName;
		Application.LoadLevel (GameApplication.HOMESCENE);
		Tracking.changeScene (GameApplication.HOMESCENE);
//		StartCoroutine(waitForDisconnect());
	}

	public void updateInfo ()
	{
		User user = GameApplication.user;
//		if (this.username != null)
//			this.username.text = user.displayName;
//		if (this.balance != null)
//			this.balance.text = "$" + Utils.formatNumber (user.ag);


		string resname = "";
		if (cubeia.gameId == GameType.BACAY) {
			resname = "Ba Cây";
		} else if (cubeia.gameId == GameType.LIENG) {
			resname = "Liêng";
		} else if (cubeia.gameId == GameType.BINH) {
			resname = "Binh";
		} else if (cubeia.gameId == GameType.CHAN) {
			resname = "Chắn";
		} else if (cubeia.gameId == GameType.POKER) {
			resname = Strings.instance.lobby_game_name_poker;
		} else if (cubeia.gameId == GameType.SAM) {
			resname = "Sâm Lốc";
		} else if (cubeia.gameId == GameType.TALA) {
			resname = "Phỏm";
		} else if (cubeia.gameId == GameType.TIENLEN) {
			resname = "Tiến Lên";
		} else if (cubeia.gameId == GameType.XOCDIA) {
			resname = Strings.instance.lobby_game_name_xocdia;
		} else if (cubeia.gameId == GameType.XITO) {
			resname = "Xì Tố";
		} else if (cubeia.gameId == GameType.G9K) {
			resname = Strings.instance.lobby_game_name_poker9k;
		} else if (cubeia.gameId == GameType.DUMMY) {
			resname = Strings.instance.lobby_game_name_dummy;
		}
		this.balance.text = Utils.formatNumber (user.ag);
		this.username.text = resname;
		if (this.vip != null) {
			this.vip.text = "" + user.vip; 
		}
	}
	
	public void updateAvatar ()
	{
		User user = GameApplication.user;
		if (user.avatarSprite != null)
			avatar.sprite = user.avatarSprite;
		else
			loadImage (GameApplication.user.avatarUrl, avatar, delegate(Sprite sprite) {
				GameApplication.user.avatarSprite = sprite;
			});
	}

	public void updateRoom ()
	{
		foreach (Transform tf in roomListControl.transform)
			Destroy (tf.gameObject);

		// update to the view
		for (int i = 0; i< cubeia.roomList.Length; i++) {
			roomListControl.AddNewItem (cubeia.roomList [i], i);
		}
		// vao room
		// cubeia.unsubcribeRoom(cubeia.currentRoom);
		int indexOfAutoSelectedRoom = 0; 
		// chon room phu hop
		for(int i = 0; i < cubeia.roomList.Length; i++){
			if(cubeia.roomList[i].curPlay <= 200){
				indexOfAutoSelectedRoom = i;
				break;
			}
		}

		roomListControl.viewEffectSelectRoomButton (indexOfAutoSelectedRoom);
		cubeia.currentRoom = cubeia.roomList [indexOfAutoSelectedRoom];
		cubeia.sendSelectR (cubeia.currentRoom);
		dismissWaittingDialog ();
	}

	public void updateRoom3C ()
	{
		int indexOfAutoSelectedRoom = 0; 
		// chon room phu hop
		for(int i = 0; i < cubeia.roomList.Length; i++){
			if(cubeia.roomList[i].curPlay <= 200){
				indexOfAutoSelectedRoom = i;
				break;
			}
		}

		GameObject tableListObject = GameObject.Find ("listRoom");
		if(GameApplication.gameApp==GameApplication.GameApp.GTL){
			roomListTL = (RoomListTL)tableListObject.GetComponent (typeof(RoomListTL));
			roomListTL.choseRoom (indexOfAutoSelectedRoom);
		} else {
			roomList3C = (RoomList3C)tableListObject.GetComponent (typeof(RoomList3C));
			roomList3C.choseRoom (indexOfAutoSelectedRoom);
		}
		//		cubeia.currentRoom = cubeia.roomList [indexRoom-1];
		//		cubeia.sendSelectR (cubeia.currentRoom);
		dismissWaittingDialog ();
	}
	public void updateRoomDT ()
	{
		int indexOfAutoSelectedRoom = 0; 
		// chon room phu hop
		for(int i = 0; i < cubeia.roomList.Length; i++){
			if(cubeia.roomList[i].curPlay <= 200){
				indexOfAutoSelectedRoom = i;
				break;
			}
		}

		int size = GameApplication.stakeList.Capacity;
		if (size >= 8)
			size = 8;
		string dialogPFpath = "prefabs/button_stake";
		Debug.LogError ("LLLL ==> " + size);
		for (int i = 0; i < size; i++) {
			RectTransform bt_stake = Resources.Load (dialogPFpath, typeof(RectTransform)) as RectTransform;
			GameObject btt_stake = Instantiate (bt_stake.gameObject);
			btt_stake.transform.SetParent (mainCanvas.transform.Find("Center"));
			btt_stake.transform.localScale = new Vector3 (0.58f, 0.58f,1.0f);
			ButtonStake bt_stake1 = btt_stake.GetComponent<ButtonStake> ();
			bt_stake1.setData (GameApplication.stakeList [i], GameApplication.ccusList [i], stakeLogo [i]);
			if (i < 4) {
				btt_stake.gameObject.transform.localPosition = new Vector3 (-450 + i * 300, 105);
			} else {
				btt_stake.gameObject.transform.localPosition = new Vector3 (-450 + (i-4) * 300, -150);
			}

		}
//		GameObject tableListObject = GameObject.Find ("listRoom");
//		roomListDT = (RoomListDT)tableListObject.GetComponent (typeof(RoomListDT));
//		roomListDT.choseRoom (indexOfAutoSelectedRoom);
		
		//		cubeia.currentRoom = cubeia.roomList [indexRoom-1];
		//		cubeia.sendSelectR (cubeia.currentRoom);
		dismissWaittingDialog ();
	}
	public void updateRoom52 ()
	{
		int indexOfAutoSelectedRoom = 0; 
		// chon room phu hop
		if (cubeia == null || cubeia.roomList == null) {
			Debug.Log ("sth null");
			dismissWaittingDialog ();
			return;
		}
		for(int i = 0; i < cubeia.roomList.Length; i++){
			if(cubeia.roomList[i].curPlay <= 200){
				indexOfAutoSelectedRoom = i;
				break;
			}
		}
		
		GameObject tableListObject = GameObject.Find ("listRoom");
		roomList52 = (RoomList52)tableListObject.GetComponent (typeof(RoomList52));
		roomList52.choseRoom (indexOfAutoSelectedRoom);
		
		//		cubeia.currentRoom = cubeia.roomList [indexRoom-1];
		//		cubeia.sendSelectR (cubeia.currentRoom;
		dismissWaittingDialog ();
	}


	public void testNotification (string content)
	{
		showServerNotification (content, 50, 0);
	}

	public void regShowInviteBox (string n, int ag, string t, int tid, int agu)
	{
		if (Time.timeSinceLevelLoad > 1f) {
			showInviteBox (n, ag, t, tid, agu);
		} else {
			StartCoroutine (Utils.cr_runDelayed (1f, delegate {
				showInviteBox (n, ag, t, tid, agu);
			}));
		}

	}

	private void showInviteBox (string n, int ag, string t, int tid, int agu)
	{
		SDialog dialog = showDialog (DialogInfo.ThreeChoicesDialog);
		dialog.content.text = Strings.instance.common_message_invite_join_game
			.Replace ("%value1%", n)
				.Replace ("%value2%", Utils.formatCurrency (ag))
				.Replace ("%value3%", "$" + Utils.formatNumber (agu));
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
			cubeia.sendJoinTable (tid);
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
		});
		dialog.neutral.onClick.AddListener (delegate {
			DB.getInstance.setInviteLobby(1);
			dialog.dismiss ();
		});
	}

	public void showChatBox ()
	{
//		goToReplayScene();
//		if (GameApplication.DEBUG_ON){
//		} else {
			STabsScene.tabsType = STabsScene.STabType.CHATROOM;
			STabsScene.currentTabPos = STabsScene.CHATROOM_TATCA;
			gotoStabsScene ();
		Tracking.changeScene("CHAT_LOBBY",true);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameChatClick, (float)1f, DSTFBEvent.defaultParams);
//		}
	}

	public bool showDailyBonus ()
	{
		// donothing
		return false;
	}

	public void test(){
		Debug.LogError("test =================>");
	}
}
