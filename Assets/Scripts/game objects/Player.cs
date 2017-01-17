using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleJSON;
using System.ComponentModel;
using System.Threading;

public class Player
{
	public Game game;
	public GameScene gameScene;
	
	// logical game stuff
	public bool boLuot = false;
	public bool isfold = false;
	public int totalBetChip;
	public List<Card> baidadanh_tala = new List<Card> ();//dung cho ta la
	public List<Card> baidaan_tala = new List<Card> ();//dung cho ta la
	public List<List<Card>> listphomha = new List<List<Card>> ();//dung cho ta la
	public int phomIndex = 0;// dùng để lưu phỏm số bao nhiêu

	public List<CardChan> chan_cards = new List<CardChan> ();
	// danh sach ca hoac chan an dc
	public List<CardChan> chan_cards1 = new List<CardChan> ();
	// danh sach bai danh ra hoac boc dc
	public List<CardChan> chan_cards2 = new List<CardChan> ();
	
	// logical profile stuff
	private string _displayName;
	
	public string displayName {
		get {
			if (_displayName == null)
				return name;
			return _displayName;
		}
		set {
			_displayName = value;
		}
	}
	
	public string name;
	public int diem_Dummy;
	public int ag;
	public int lq;
	public int vip;
	private bool _isReady;
	public bool isReady{
		get{
			return _isReady;
		}
		set{
//			Debug.LogError(name + " set ready: "+ value);
			_isReady = value;
		}
	}
	public int ik;
	public bool isHost;
	public int mark;
	public int rank;
	public string sIP;
	public string ava_url;
	
	// view stuff
	public RectTransform rectTransform;
	public CharacterScript viewControl;
	public ChipBetControl chipBetControl;
	public Text text_name;
	public Image image_avatar;
	public Image image_curtain;
	public Text text_status;
	public Text text_winning;
	public Text text_vip;
	
	// xoc dia , xac dinh player lam cai
	public int D = 0;
	public int mb = 0;

	// binh
	public int maubinh=0;
	public bool binhlung=false;

	// check click emoji
	public bool isClickPlayer=false;
	public ItemResult itemResult = new ItemResult ();
	// other stuff
	Sprite defaultFBAvatar;
	public Dictionary<string, string> betMap =
		new Dictionary<string, string> ();

	public Player getPreviousPlayer ()
	{
		int count = game.players.Count;
		int pindex = (game.players.IndexOf (this) - 1 + count) % count;
		Player pl = game.players [pindex];

		if (game.state == Game.State.VIEWING && pl is ThisPlayer)
			return pl.getPreviousPlayer ();
		else
			return pl;
	}
	
	public struct DatCuoc
	{
		public int cua;
		public RectTransform rect;
		
		public DatCuoc (int cua, RectTransform rect)
		{
			this.cua = cua;
			this.rect = rect;
		}
	}
	
	public List<DatCuoc> listDatCuoc = new List<DatCuoc> ();
	
	public Player (string name, int ag, int lq, int vip, bool isReady, int ik, string avatar_url, string iSP)
	{
		this.game = GameApplication.game;
		this.gameScene = GameApplication.gameScene;
		
		this.name = name;
		this.ag = ag;
		this.lq = lq;
		this.vip = vip;
		this.isReady = isReady;
		this.ik = ik;
		this.sIP = iSP;
		this.isHost = false;
		this.ava_url = avatar_url;
	}
	
	public virtual void setTransform (RectTransform rectTransform)
	{
		this.rectTransform = rectTransform;
		this.viewControl = rectTransform.GetComponent<CharacterScript> ();

		if(game is GameDummy)
			rectTransform.localScale = new Vector3 (0.9f, 0.9f, 1);

		if(game is Game9K)
			rectTransform.localScale = new Vector3 (0.9f, 0.9f, 1);

		text_name = rectTransform.Find ("NameBG").Find ("Name").GetComponent<Text> ();
		text_vip = rectTransform.Find ("NameBG").Find ("Image").Find ("vip").GetComponent<Text> ();
		image_avatar = rectTransform.Find ("Panel").Find ("Panel").Find ("Avatar").GetComponent<Image> ();
		image_curtain = rectTransform.Find ("Curtain").GetComponent<Image> ();
		text_status = rectTransform.Find ("BoLuot").GetComponent<Text> ();
		text_winning = rectTransform.Find ("Winning").GetComponent<Text> ();
		viewControl.updateVipView( checkVIP ());
		showHostIcon (false);

		Button btn = rectTransform.GetComponent<Button> ();
		btn.onClick.AddListener (delegate {
			//game.state == Game.State.WAITING && 
			if (game.state != Game.State.VIEWING && !game.thisPlayer.Equals(this)) {
				// xac dinh player dc chon trc
				gameScene.controllerControl.flyEmo.selectedPlayer = this;
				// show options
//				gameScene.controllerControl.PlayerOption.show();
				gameScene.controllerControl.flyEmo.show();
			}
		});
		
		text_status.enabled = false;
		text_winning.enabled = false;
	}

	public bool checkVIP ()
	{
		bool check = false;
	
		if (ag >= 3000000)
			check= true;
		if (ag >= 2000000 && vip >= 3)
			check= true;
		if (ag >= 1500000 && vip >= 4)
			check= true;
		if (ag >= 1000000 && vip >= 5)
			check= true;
		if (ag >= 500000 && vip >= 6)
			check= true;
		if (vip >= 7)
			check= true;

		return check;
	}
	
	public void updateView ()
	{
		// Bi Loi cho nay
		try{
			float y = viewControl.ag.rectTransform.anchoredPosition.y;
			if(game.hostPlayer != null && this.Equals(game.hostPlayer)){
				viewControl.ag.rectTransform.anchoredPosition = new Vector2(15,y);
			} else {
				viewControl.ag.rectTransform.anchoredPosition = new Vector2(0,y);
			}
			if(game != null && game is GameDummy)
				viewControl.ag.text = "<color=white>"+diem_Dummy+"</color> " + Utils.formatCurrency(ag);
			else 
				viewControl.ag.text = "$" + Utils.formatNumber (ag);

			text_name.text = displayName;
			text_vip.text = vip + "";
			checkVIP ();
			if (D == 1) {
				text_name.color = Color.yellow;
			} else {
				text_name.color = Color.white;
			}

			// mot so game tu ready
			if (game is IAutoReadyGame == false){
				setDarker (!isReady);
			}
		} catch(MissingReferenceException e){
			Debug.Log("MissingReferenceException");
			// xay ra khi player da ltable, nhung 1s sau moi thuc hien hieu ung.
		} catch(System.NullReferenceException e){
			Debug.Log("System.NullReferenceException");
			// xay ra khi player da ltable, nhung 1s sau moi thuc hien hieu ung.
		}
	}
	
	public void updateAvatar ()
	{
		if (ava_url != null && ava_url.Contains ("/")) {
			gameScene.loadImage (ava_url, image_avatar);
		} else {
			image_avatar.sprite = viewControl.defaultFBAvatar;
		}
	}
	
	public void setDarker (bool darker)
	{
		Debug.Log(name + " set darker: "+ darker);
		Color color = image_curtain.color;
		color.a = darker ? 0.7f : 0.0f;
		if (image_curtain != null)
			image_curtain.color = color;
	}

	public void showHostIcon (bool show)
	{
		if (viewControl != null){
			viewControl.hosticon.SetActive (show);
			float width = 180f;
			if(show)
				width = 150f;
			viewControl.ag.rectTransform.sizeDelta = new Vector2(width, viewControl.ag.rectTransform.sizeDelta.y);
		}
	}
	
	public void becomeAttractive ()
	{
		RectTransform rect = rectTransform.Find ("Panel").GetComponent<RectTransform> ();
		System.Action<Vector2> onUpdate = delegate(Vector2 size) {
			rect.sizeDelta = size;
		};
		LeanTween.value (rectTransform.gameObject, onUpdate, new Vector2 (156, 156), new Vector2 (196, 196), 0.8f).setEase (LeanTweenType.easeInOutBounce).setOnComplete (delegate() {
			rect.sizeDelta = new Vector2 (196, 196);
			viewControl.info.anchoredPosition = new Vector2 (0, -70);
		});
	}
	
	public void becomeNormal ()
	{
		RectTransform rect = rectTransform.Find ("Panel").GetComponent<RectTransform> ();
		System.Action<Vector2> onUpdate = delegate(Vector2 size) {
			rect.sizeDelta = size;
		};
		LeanTween.value (rectTransform.gameObject, onUpdate, new Vector2 (196, 196), new Vector2 (156, 156), 0.8f).setEase (LeanTweenType.easeOutExpo).setOnComplete (delegate() {
			rect.sizeDelta = new Vector2 (156, 156);
			viewControl.info.anchoredPosition = new Vector2 (0, -62);
		});
	}
	
	public virtual void updatePostion (Vector2 position, bool withEffect = true)
	{		
		// luu y khi su dung cr_runDelayed, phai check object con ton tai hay khong
		// khi ham nay dc goi 2 lan lien tiep update.
		// ham 1 goi step 1, ham 2 goi step 2, nhung vi ham 1 chay lien tuc nen ket qua se la ham 1 thay vi ham 2
		//=> thu goi cancel xem
		LeanTween.cancel(rectTransform.gameObject);

		if (withEffect) {
			// step 1
//			Debug.LogError(name + " step 1 "+ position.ToString());
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.5f, delegate {
				if (rectTransform != null)
					rectTransform.anchoredPosition = position;
			}));
			
			LeanTween.moveLocal (rectTransform.gameObject, new Vector3 (position.x, position.y, 0), 0.4f).setEase (LeanTweenType.easeOutQuart).setOnComplete (delegate() {
//				Debug.LogError(name + " step 1 called");
				if (rectTransform != null)
					rectTransform.anchoredPosition = position;
			});
		} else {
			// step 2
//			Debug.LogError(name + " step 2 "+ position.ToString());
//			LeanTween.moveLocal (rectTransform.gameObject, new Vector3 (position.x, position.y, 0), 0.01f);
			rectTransform.anchoredPosition = position;
			// khong hieu sao ham nay doi khi ko chay
			LeanTween.delayedCall(0.6f, delegate(object obj) {
				if(rectTransform != null)
					rectTransform.anchoredPosition = position;
			});
		}
		
	}
	
	public virtual void countDown (int time = 20)
	{
		Debug.LogWarning (displayName + " counting down");
		viewControl.countDown (time);
		becomeNormal ();
	}

	public void countDownWithRemaining (int seconds)
	{
		if (seconds >= 20 || seconds <= 0) {
			seconds = 20;
		} 
		float countedAmount = 1f - seconds / 20f;
		viewControl.countDownByRemaining (countedAmount, seconds);
		becomeNormal ();

		Debug.Log (name + " countDownWithRemaining " + countedAmount);
	}
	
	public void stopCountDown ()
	{
		Debug.LogWarning (displayName + " stop counting down");
		viewControl.stopCountDown ();
	}
	
	void antien_effect (Player player1, Player player2, int value)
	{
		// sinh ra tien
		RectTransform pf = Resources.Load ("prefabs/ChipImage", typeof(RectTransform)) as RectTransform;
		RectTransform chipimage = GameObject.Instantiate (pf);
		chipimage.SetParent (gameScene.cardLayer, false);
		chipimage.anchoredPosition = player2.getChipsPos ();
		
		Vector2 target = player1.getChipsPos ();
		LeanTween.moveLocal (chipimage.gameObject, new Vector3 (target.x, target.y, 0), 0.5f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		// tien bay len...
		player2.minus_gold_effect (player2.ag - value, -value);
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.5f, delegate {
			player1.plus_gold_effect (player1.ag + value, value);
		}));
		
	}
	
	public virtual void danhbaiTienlen (List<Card> cards, int mc, string nn)
	{
		Debug.LogWarning ("process danh bai");
		// hiển thị tiền ăn phạt, làm trước khi gán lastPlayer
		if (mc > 0 && game.lastPlayer != null) {
			antien_effect (this, game.lastPlayer, mc * game.stake);
		}
		
		// gán lastplayer
		game.lastPlayer = this;
		
		// sử dụng lastCards
		// ...
		// gán lastCards
		game.lastCards = cards;
		
		// dừng đếm giờ mình
		this.stopCountDown ();
		
		// đếm giờ người kế tiếp
		game.getPlayer (nn).onTurnTienLen ();
		
		
		// sound effect
		//		if (cards.size() == 1 && cards.get(0).getN_tienlen() == 15) {
		//			SoundPlayer.playSoundTienLen(gameView, 10);
		//		}
		//		if (cards.size() == 1 && cards.get(0).getN_tienlen() != 15) {
		//			SoundPlayer.playSoundTienLen(gameView, 11);
		//		}
		//		
		//		if (cards.size() >= 2) {
		//			Random random = new Random();
		//			int i = random.nextInt(4);
		//			SoundPlayer.playSoundTienLen(gameView, i);
		//		}
	}
	
	public void boluot (string nextPlayer)
	{
		// ngung dem gio
		stopCountDown ();

		// ngung blinking
		if(this is ThisPlayer) {
			((ThisPlayer)this).fbtn_1.GetComponent<Blinking2>().setBlinking(false);
			((ThisPlayer)this).fbtn_3.GetComponent<Blinking2>().setBlinking(false);
		}
		
		boLuot = true;
		showBoLuot ();
		
		// kiem tra la turn moi
		int songuoiboluot = 0;
		if (game.state == Game.State.VIEWING) {
			songuoiboluot = 1;
		}
		foreach (Player player in game.players) {
			if (player.boLuot) {
				songuoiboluot++;
			}
		}
		
		if (songuoiboluot >= game.players.Count - 1) {
			// turn moi
			// up bai cay bai turn cu
			foreach (Card cardx in game.lastTurnCards) {
				Card card = cardx;
				card.image.sprite = GameApplication.resource.getCardBackSprite ();
				LeanTween.delayedCall(2.5f, delegate(object obj) {
					if(card != null && card.rectTransform != null){
						game.lastTurnCards.Remove(card);
						GameObject.Destroy(card.rectTransform.gameObject);
					}
				});
			}
			// set thuoc tinh boluot ve false
			// xoa banner Bỏ lượt ở các player đi
			foreach (Player player in game.players) {
				player.boLuot = false;
				player.hideStatus ();
			}
			game.lastCards.Clear ();
		}
		
		// dem gio nguoi ke tiep, chạy trước khi kiểm tra turn mới để ẩn
		// btn_boluot
		// tuy nhiên khi đó lastcards chưa được clear() nên sẽ tự động gợi ý
		// theo bài cũ
		game.getPlayer (nextPlayer).onTurnTienLen ();
	}
	
	void showBoLuot ()
	{
		text_status.text = Strings.instance.gameplay_tienlen_drop_turn;
		text_status.enabled = true;
		text_status.GetComponent<Gradient> ().topColor = new Color32 (255, 255, 255, 255);
		text_status.GetComponent<Gradient> ().bottomColor = new Color32 (0, 0, 0, 255);
		setDarker (true);
	}
	
	public virtual void showCardXiTo (int icard)
	{
	}
	
	public void hideStatus ()
	{
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			setDarker (!isReady);
			if (text_status != null)
				text_status.enabled = false;
		}));
	}
	
	public void plus_gold_effect (int ag, int winnings)
	{
		if (rectTransform == null)
			return; // truong hop user da bay
		// Muc dich la de tien bay de len Cards
		text_winning.rectTransform.SetParent (gameScene.effectLayer, true);
		text_winning.rectTransform.SetAsLastSibling ();
		
		text_winning.text = Utils.formatNumberWithSign (winnings);
		text_winning.enabled = true;
		text_winning.rectTransform.anchoredPosition = rectTransform.anchoredPosition + new Vector2 (0, -68f);
		text_winning.GetComponentInParent<Gradient> ().enabled = true;
		LeanTween.moveLocalY (text_winning.gameObject, rectTransform.anchoredPosition.y + 68f, 4f).setEase (LeanTweenType.linear);
		//		LeanTween.moveY (text_winning.gameObject, 68f, 4f).setEase (LeanTweenType.linear);
		updateGoldWithAnimation (this.ag, ag, 1.6f);
		
		gameScene.StartCoroutine (Utils.cr_runDelayed (5.0f, delegate {
			if (text_winning != null) {
				text_winning.enabled = false;
				text_winning.GetComponentInParent<Gradient> ().enabled = false;
			}
		}));
	}
	
	public void minus_gold_effect (int ag, int winnings)
	{
		if (rectTransform == null)
			return; // truong hop user da bay
		// Muc dich la de tien bay de len Cards
		text_winning.rectTransform.SetParent (gameScene.effectLayer, true);
		text_winning.rectTransform.SetAsLastSibling ();
		
		text_winning.text = Utils.formatNumberWithSign (winnings);
		text_winning.enabled = true;
		text_winning.rectTransform.anchoredPosition = rectTransform.anchoredPosition + new Vector2 (0, -68f);
		
		LeanTween.moveLocalY (text_winning.gameObject, rectTransform.anchoredPosition.y + 68f, 4f).setEase (LeanTweenType.linear);
		updateGoldWithAnimation (this.ag, ag, 1.6f);
		
		gameScene.StartCoroutine (Utils.cr_runDelayed (5.0f, delegate {
			if (text_winning != null) {
				text_winning.enabled = false;
				//				text_winning.GetComponentInParent<Gradient> ().enabled = false;
			}
		}));
	}
	
	void finishEffect (string result, int ag, int winnings)
	{
		if (rectTransform == null)
			return; // truong hop user da bay
		// hiệu ứng cộng AG, hiệu ứng simple particles
		if (winnings > 0) {
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, () => {
				plus_gold_effect (ag, winnings);
			}));
			
			viewControl.showWinnerImage (result);
			gameScene.StartCoroutine (Utils.cr_runDelayed (5.0f, () => {
				viewControl.showWinnerImage (null);
			}));
		} else if (winnings < 0) {
			minus_gold_effect (ag, winnings);
			viewControl.showPokerHandImage (result);
			
			gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
				if (viewControl != null)
					viewControl.showPokerHandImage (null);
			}));
		}
	}
	
	public virtual void finishTienLen (int v, int ag, int winnings, int d, JSONArray jcards)
	{
//		hideStatus ();
		stopCountDown ();
//		gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
//			updateView ();
//		}));
//		updateView ();
		
		string result = Strings.instance.gameplay_win;

		if(game is GameTienLen){
			Debug.Log("case Tien len");
			if (v == 2)
				result = Strings.instance.lose;
			if (v == 3)
				result = Strings.instance.gameplay_four_of_two;
			if (v == 4)
				result = Strings.instance.gameplay_five_straight_pairs;
			if (v == 5)
				result = Strings.instance.gameplay_six_pairs;
			if (v == 6)
				result = Strings.instance.gameplay_royal_flush; // sanh rong
		} else { // game sam
			Debug.Log("case Sam");
			bool sam = ((GameSam)game).sam;
			if (v == 1){
				if(sam){
					if(jcards.Count == 0)
						result = "ăn sâm";
					else
						result = "bắt sâm";
				}
			}
			if (v == 2){
				if(sam){
					result = "bị bắt sâm";
				}
			}
			if(v == 10){
				if(sam){
					if(jcards.Count == 0){
						// trong cac truong hop thua chi show voi truong hop bi phat
						result = "Phạt";
						finishEffect (result, ag, winnings);
						return;
					}
				}
			}

			if (v == 3)
				result = "5 đôi";
			if (v == 4)
				result = "3 xám";
			if (v == 5)
				result = "đồng hoa";
			if (v == 6)
				result = "Tứ qúy";
			if (v == 7)
				result = "sảnh rồng";
			if (v == 8)
				result = "đền làng";
			if (v == 10){
				Debug.Log("case 10 winning: "+ winnings);
				result = "Cóng";
				if (d < 16)
					result = "Thua";
			}
		}
		// hiệu ứng cộng AG, hiệu ứng simple particles
//		if (winnings <= 0) {
//			// nguoi thua ko show banner
//			result = null;
//		}

		Debug.Log(name + " result: "+ result);
		finishEffect (result, ag, winnings);
	}

	public virtual void finishDummy (int v, int ag, int d, int winnings, JSONArray jcards)
	{
		diem_Dummy = 0;
		this.ag = ag;
	}

	public virtual void finishTala (int v, int ag, int d, int winnings, JSONArray jcards)
	{
//		hideStatus ();
		stopCountDown ();
//		updateView ();

		string result = Strings.instance.gameplay_win;
		if (v == 1 && d == 0) {
			result = "Ù";
			if (this is ThisPlayer)
				SoundManager.instance.playTala_u ();
		} else if (v == 1) {
			result = "nhất";// ù
			if (this is ThisPlayer)
				SoundManager.instance.playNhatAudio ();
		} else if (v == 2) {
			result = "nhì";
			if (this is ThisPlayer)
				SoundManager.instance.playBetAudio ();
		} else if (v == 3) {
			result = "ba";
			if (this is ThisPlayer)
				SoundManager.instance.playBetAudio ();
		} else if (v == 4) {
			result = "thua";
			if (this is ThisPlayer)
				SoundManager.instance.playBetAudio ();
		} else if (v == 5) {
			result = "móm";
			if (this is ThisPlayer)
				SoundManager.instance.playTala_mom ();
		} else if (v == 6) {
			result = "thua";
			if (this is ThisPlayer)
				SoundManager.instance.playTala_mom ();
		} else if (v == 7) {
			result = "đền";
			if (this is ThisPlayer)
				SoundManager.instance.playTala_mom ();
		} else if (v == 8) {
			result = "thắng";
			if (this is ThisPlayer)
				SoundManager.instance.playNhatAudio ();
		} else if (v == 9) {
			result = "đền";
			if (this is ThisPlayer)
				SoundManager.instance.playTala_mom ();
		}

		// hiệu ứng cộng AG, hiệu ứng simple particles
//		if (winnings <= 0 ) {
			// nguoi thua ko show banner
//			result = null;
//		}
		
		finishEffect (result, ag, winnings);

		//////
//		phom_ha = 0;
//		this.ag = ag;
//		for (ImgCard imgCard : baiha) {
//			imgCard.bringToFront();
//		}
	}

	public virtual void finishPoker (int s, int ag, int winnings, JSONArray jcards, JSONArray jcardsWin)
	{
		hideStatus ();
		stopCountDown ();
		updateView ();
		
		string result = game.convertResult (s);
		
		if (winnings > 0) {
			if (gameScene is GameScenePoker)
				((GameScenePoker)gameScene).showBestHand (result);
			gameScene.StartCoroutine (Utils.cr_runDelayed (5.0f, () => {
				if (gameScene is GameScenePoker)
					((GameScenePoker)gameScene).removeBestHand ();
			}));
			result = Strings.instance.gameplay_winer;
		}
		
		if (isfold)
			result = "";
		
		finishEffect (result, ag, winnings);
	}
	
	public virtual void finishXiTo (int ag, int winnings, JSONArray jcards)
	{
		hideStatus ();
		stopCountDown ();
		updateView ();
		string result = "";
		//deal not bai tren tay
		int startIndex = 0;
		float margin = 0.66f;
		if (isfold) {
			// nhung nguoi up bai ko hien result
			result = "";
		} else {
			if (this is ThisPlayer) {
				ThisPlayer thisPlayer = (ThisPlayer)this;
				// ko che mo cay bai dau tien nua
				thisPlayer.cards [0].image.color = new Color32 (255, 255, 255, 255);
				// chia them
				startIndex = thisPlayer.cards.Count;
				for (int i = startIndex; i<jcards.Count; i++) {
					Card card = Card.decode_xito (jcards [i].AsInt);
					thisPlayer.cards.Add (card);
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					card.rectTransform = rect;
					rect.anchoredPosition = ((GameXiTo)game).getViewPositionOfPlayersCard (this, margin, 1f, i, jcards.Count);
					rect.SetParent (gameScene.cardLayer, false);
					
					LeanTween.moveLocal (rect.gameObject, new Vector3 (0, 200, 0), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i - startIndex) * 0.2f);
				}
			} else {
				OtherPlayer otherPlayer = (OtherPlayer)this;
				//mo 2 cay bai dau tien
				otherPlayer.cardsInHandList [0].GetComponent<Image> ().sprite = Card.decode_xito (jcards [0].AsInt).getSprite ();
				otherPlayer.cardsInHandList [1].GetComponent<Image> ().sprite = Card.decode_xito (jcards [1].AsInt).getSprite ();
				//chia them
				startIndex = otherPlayer.cardsInHandList.Count;
				for (int i = startIndex; i<jcards.Count; i++) {
					Card card = Card.decode_xito (jcards [i].AsInt);
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					otherPlayer.cardsInHandList.Add (rect);
					card.rectTransform = rect;
					rect.anchoredPosition = ((GameXiTo)game).getViewPositionOfPlayersCard (this, margin, 1f, i, jcards.Count);
					rect.SetParent (gameScene.cardLayer, false);
					LeanTween.moveLocal (rect.gameObject, new Vector3 (0, 200, 0), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i - startIndex) * 0.2f);
				}
			}	
			// sap xep cac quan bai truoc do
			// loai bo truong hop thisPlayer view chu ko tham gia choi
			// bang cach set thisPlayer.isFold = true khi vtable
			
			for (int i = 0; i < startIndex; i++) {
				RectTransform rect;
				if (this is ThisPlayer) {
					rect = ((ThisPlayer)this).cards [i].rectTransform;
				} else {
					rect = ((OtherPlayer)this).cardsInHandList [i];
				}
				Vector2 vec = ((GameXiTo)game).getViewPositionOfPlayersCard (this, margin, 1f, i, jcards.Count);
				LeanTween.moveLocal (rect.gameObject, new Vector3 (vec.x, vec.y, 0), 0.6f).setEase (LeanTweenType.easeOutQuart);
			}
			
			// TODO: tu jcards ta phai lay dc s
			
			CardUtils.GroupType gt = CardUtils.getGroupCardType_XiTo (jcards);
			result = CardUtils.getGroupTypeString (gt);
		}
		// show bai lon nhat o giua ban.
		//		if (winnings > 0) {
		//			if (gameScene is GameSceneXiTo)
		//				((GameSceneXiTo)gameScene).showBestHand(result);
		//			gameScene.StartCoroutine(Utils.cr_runDelayed(5.0f, () => {
		//				if (gameScene is GameSceneXiTo)
		//					((GameSceneXiTo)gameScene).removeBestHand();
		//			}));
		//			result = Strings.instance.gameplay_winer;
		//		}
		
		finishEffect (result, ag, winnings);
	}
	
	public virtual void finishLieng (int ag, int winnings, JSONArray jcards)
	{
		hideStatus ();
		stopCountDown ();
		updateView ();
		string result = "";
		
		CardUtils.GroupType gt = CardUtils.getGroupCardType_Lieng (jcards);
		if (gt == CardUtils.GroupType.Single) {
			int r = CardUtils.getLiengScore (jcards);
			result = Strings.instance.gameplay_lieng_result.Replace ("%value1%", "" + r);
			if (r > 1)
				result = result.Replace ("(s)", "s");
			else
				result = result.Replace ("(s)", "");
		} else {
			result = CardUtils.getGroupTypeString (gt);
		}
		// nhung nguoi up bai ko hien result
		if (isfold)
			result = "";
		
		finishEffect (result, ag, winnings);
	}

	public virtual void finish9K (int ag, int winnings, JSONArray jcards,int mark)
	{
		hideStatus ();
		stopCountDown ();
		removeOnTurnRequest ();
		updateView ();
		string result = "";

		if (mark > 1100) {
			result = Strings.instance.gameplay_group_card_type_threeofakind;
		} else if (mark > 1000) {
			result = Strings.instance.gameplay_group_card_type_fiveflushstraight;
		} else if (mark > 900) {
			result = Strings.instance.gameplay_group_card_type_bodoi;
		} else if (mark > 800) {
			result = Strings.instance.gameplay_group_card_type_fivestraight;
		} else if (mark > 700) {
			result = Strings.instance.gameplay_group_card_type_fiveflush;
		} else if (mark < 700) {
			CardUtils.GroupType gt = CardUtils.getGroupCardType_Lieng (jcards);
			if (gt == CardUtils.GroupType.Single) {
				int r = CardUtils.getLiengScore (jcards);
				result = Strings.instance.gameplay_lieng_result.Replace ("%value1%", "" + r);
				if (r > 1)
					result = result.Replace ("(s)", "s");
				else
					result = result.Replace ("(s)", "");
			}
		}
		
//		CardUtils.GroupType gt = CardUtils.getGroupCardType_Lieng (jcards);
//		if (gt == CardUtils.GroupType.Single) {
//			int r = CardUtils.getLiengScore (jcards);
//			result = Strings.instance.gameplay_lieng_result.Replace ("%value1%", "" + r);
//			if (r > 1)
//				result = result.Replace ("(s)", "s");
//			else
//				result = result.Replace ("(s)", "");
//		} else {
//			result = CardUtils.getGroupTypeString (gt);
//		}
		// nhung nguoi up bai ko hien result
		int startIndex = 0;
		if (isfold){
			result = "";
		}else{
			if(this is ThisPlayer){

			}else{
				OtherPlayer otherPlayer = (OtherPlayer)this;
				for (int i = 0; i<jcards.Count; i++) {
					otherPlayer.cardsInHandList [i].GetComponent<Image> ().sprite = Card.decode_lieng (jcards [i].AsInt).getSprite ();
					LeanTween.scale (otherPlayer.cardsInHandList [i].gameObject, new Vector3 (0.85f, 0.85f, 1f), 0.3f).setEase (LeanTweenType.easeOutQuart);
				}
			}
		}
		
		finishEffect (result, ag, winnings);
	}

	private void updateGoldWithAnimation (int oldAG, int curAG, float time)
	{
		this.ag = curAG;
		viewControl.updateGoldViewAnimate (oldAG, curAG, time);
	}
	
	public void updateGoldWithAnimation (int plusAG, float time = 1.2f)
	{
		updateGoldWithAnimation (this.ag, this.ag + plusAG, time);
	}
	
	public void chat (string content, string type,string nname,string name,bool logtoChat = true)
	{
		if(type.Contains("*e")){
			int length = type.Length - 2;
			string sv = type.Substring (2, length);
			int v = 0;
			if(int.TryParse(sv, out v) && v >= 0 && v<=12)
			{
				if(v<=12){
					viewControl.showEmoticon(v);
				}else{
					Sprite s = gameScene.controllerControl.chatPanel.getSpriteFromString("*e"+v);
					if(s!=null){
						viewControl.showEmo(s);
					}
				}
			} else {
				viewControl.addChatContent (Utils.autoLineBreakingString (content), getChatsPos ());
			}		
		} else if(type.Contains("*f")) {
			int length = type.Length - 2;
			string sv = type.Substring (2, length);
			int v = 0;
			Player nPlayer = GameApplication.game.getPlayer(nname);
			Player player = GameApplication.game.getPlayer(name);
			if(int.TryParse(sv, out v) && v >= 0 && v<=5)
			{
				if(v<=5&& nPlayer!=null&&player!=null){
					player.viewControl.flyEmo = GameObject.Instantiate<RectTransform>(player.viewControl.pfflyEmo);
					player.viewControl.flyEmo.SetParent(gameScene.cardLayer);
					player.viewControl.flyEmo.anchoredPosition=player.rectTransform.anchoredPosition;
					nPlayer.viewControl.showEmoticonPlayer(v,player.viewControl.flyEmo,nPlayer);
				}
			} else {
				viewControl.addChatContent (Utils.autoLineBreakingString (content), getChatsPos ());
			}	
		} else {
			viewControl.addChatContent (Utils.autoLineBreakingString (content), getChatsPos ());
			if(logtoChat)
			MessageLog.instance.putMessage (" # " + displayName + ": " + content);
		}
	}
	
	public void nhanAGtuServer (int plusag)
	{
		this.ag += plusag;
		updateView ();
		if (this is ThisPlayer) {
			GameApplication.user.ag = this.ag;
			gameScene.controllerControl.xocDiaFunction.getValue();
			gameScene.controllerControl.xocDiaFunction.changeBackground(0);
		}
	}
	
	public virtual void onTurnPoker ()
	{
		countDown ();
	}
	
	public virtual void onTurnTienLen ()
	{
		countDown ();
	}
	
	public virtual void onTurnSam ()
	{
		countDown ();
	}
	
	public void check ()
	{
		if (getChipBetControl ().totalValue == 0)
			getChipBetControl ().updateValue ("Check", Strings.instance.gameplay_poker_check);
		else 
			getChipBetControl ().updateValue ("Call", 0);
		removeOnTurnRequest ();
	}
	
	public Vector2 getChipsPos ()
	{
		Vector2 playerPos = rectTransform.anchoredPosition;
		return new Vector2 (playerPos.x, playerPos.y - 79);
	}
	
	public virtual Vector2 getChatsPos ()
	{
		Vector2 playerPos = game.getViewPositionOfPlayer (this);
		return new Vector2 (playerPos.x + 15, playerPos.y + 100);
	}
	
	void effectTransferChiptoMyPot ()
	{
		// sinh ra tien
		RectTransform pf = Resources.Load ("prefabs/ChipImage", typeof(RectTransform)) as RectTransform;
		RectTransform chipimage = GameObject.Instantiate (pf);
		chipimage.SetParent (gameScene.cardLayer, false);
		chipimage.anchoredPosition = getChipsPos ();
		
		Vector2 target = new Vector2 (0, 0);
		if (game is IPokerGameLiked)
			target = ((IPokerGameLiked)game).getViewPositionOfChipBetPlayer (this);
		
		Debug.Log (name + " bet onstart " + target.ToString ());
		LeanTween.moveLocal (chipimage.gameObject, new Vector3 (target.x, target.y, 0f), 0.45f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);

		SoundManager.instance.play_to ();
	}
	
	// lieng, xito,
	public void betOnStart (int plusChip)
	{
		getChipBetControl ().updateValue ("Call", plusChip);
		getChipBetControl ().transform.SetAsFirstSibling ();
		updateGoldWithAnimation (-plusChip);
		
		effectTransferChiptoMyPot ();
	}
	
	public void call (int plusChip)
	{
		getChipBetControl ().updateValue ("Call", plusChip);
		updateGoldWithAnimation (-plusChip);
		removeOnTurnRequest ();
		
		effectTransferChiptoMyPot ();
	}
	
	public void raise (int plusChip)
	{
		getChipBetControl ().updateValue ("Raise", plusChip);
		updateGoldWithAnimation (-plusChip);
		removeOnTurnRequest ();
		
		effectTransferChiptoMyPot ();
	}
	
	public void allin (int plusChip)
	{
		getChipBetControl ().updateValue ("AllIn", plusChip);
		updateGoldWithAnimation (-plusChip);
		removeOnTurnRequest ();
		
		effectTransferChiptoMyPot ();
		
		// TODO: show status allin
		text_status.text = Strings.instance.gameplay_poker_allin;
		text_status.enabled = true;
		text_status.GetComponent<Gradient> ().topColor = new Color32 (255, 255, 0, 255);
		text_status.GetComponent<Gradient> ().bottomColor = new Color32 (255, 0, 0, 255);
	}
	
	public virtual void fold ()
	{
		getChipBetControl ().updateValue ("Fold", Strings.instance.gameplay_poker_fold);
		removeOnTurnRequest ();
		isfold = true;
		
		// TODO: show status fold
		text_status.text = Strings.instance.gameplay_poker_fold;
		text_status.enabled = true;
		text_status.GetComponent<Gradient> ().topColor = new Color32 (255, 255, 255, 255);
		text_status.GetComponent<Gradient> ().bottomColor = new Color32 (0, 0, 0, 255);
		setDarker (true);
		
		becomeNormal ();
	}
	
	public void removeOnTurnRequest ()
	{
		if (gameScene is IPokerSceneLiked) {
			((IPokerSceneLiked)gameScene).removeOnTurnRequest ();
		}
	}
	
	public void smallBlind (int stake)
	{
		totalBetChip = stake;
		getChipBetControl ().updateValue ("SmallBlind", stake);
		updateGoldWithAnimation (-stake);
		
		effectTransferChiptoMyPot ();
	}
	
	public void bigBlind (int stake)
	{
		totalBetChip = 2 * stake;
		getChipBetControl ().updateValue ("BigBlind", 2 * stake);
		updateGoldWithAnimation (-2 * stake);
		
		effectTransferChiptoMyPot ();
	}
	
	public ChipBetControl getChipBetControl ()
	{
		if (chipBetControl == null) {
			RectTransform chipBetRectTransform = (RectTransform)GameObject.Instantiate (gameScene.ChipBet);
			chipBetRectTransform.SetParent (gameScene.cardLayer, false);
			chipBetControl = chipBetRectTransform.GetComponent<ChipBetControl> ();
			if (game is IPokerGameLiked) {
				Vector2 target = ((IPokerGameLiked)game).getViewPositionOfChipBetPlayer (this);
				chipBetControl.setPosition (target);
			}
			
		}
		return chipBetControl;
	}
	
	//************************************Binh****************************************
	public void effectCoinBinh (int ag)
	{ //Hieu ung AG bay len
		GameObject agText = null;
		if (ag >= 0) {
			agText = GameObject.Instantiate (Resources.Load ("prefabs/Binh/BinhAgPlus", typeof(GameObject))) as GameObject;
		} else
			agText = GameObject.Instantiate (Resources.Load ("prefabs/Binh/BinhAgMinus", typeof(GameObject))) as GameObject;
		
		if (agText != null) {
			agText.transform.SetParent (GameApplication.gameScene.cardLayer);
			agText.transform.localScale = Vector3.one;
			Text content = agText.GetComponentInChildren<Text> ();
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, () => {
				content.text = Utils.formatNumberWithSign (ag);
				content.enabled = true;
				content.rectTransform.anchoredPosition = new Vector2 (0, -68f);
				content.GetComponentInParent<Gradient> ().enabled = true;
				
				LeanTween.moveLocalY (agText.gameObject, 68f, 4f);
				updateGoldWithAnimation (this.ag, ag, 1.6f);
			}, 5.8f, () => {
				if (agText != null) {
					//GameObject.Destroy(agText);
				}
			}));
		}
	}
	
	public virtual void finishBinh (int v, int ag, int winnings, JSONArray jcards)
	{
//		hideStatus ();
		stopCountDown ();
//		gameScene.StartCoroutine (Utils.cr_runDelayed (1f, delegate {
//			updateView ();
//		}));
		//effectCoinBinh(winnings);
		
		/*List<int> listV = Binh_CardValues.getValueListCard (jcards);

				List<int> chi3 = Binh_CardValues.getValueListChild (listV, 3);
				List<int> chi2 = Binh_CardValues.getValueListChild (listV, 2);
				List<int> chi1 = Binh_CardValues.getValueListChild (listV, 1);

				Debug.Log ("Player-347-" + name + " : Chi 1 : " + Binh_CardValues.chiValue (chi1).name + " // " + Binh_CardValues.debugListCard (chi1));*/
		
		// hiệu ứng cộng AG, hiệu ứng simple particles
		if (winnings > 0) {
			gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, () => {
				text_winning.text = Utils.formatNumberWithSign (winnings);
				text_winning.enabled = true;
				text_winning.rectTransform.anchoredPosition = new Vector2 (0, -68f);
				text_winning.GetComponentInParent<Gradient> ().enabled = true;
				Hashtable param = new Hashtable ();
				param.Add ("islocal", true);
				param.Add ("y", 68f);
				param.Add ("time", 4f);
				param.Add ("easeType", "linearTween");
				iTween.MoveTo (text_winning.gameObject, param);
				
				updateGoldWithAnimation (this.ag, ag, 1.6f);
			}, 5.8f, () => {
				if (text_winning != null) {
					text_winning.enabled = false;
					text_winning.GetComponentInParent<Gradient> ().enabled = false;
				}
			}));
			//string result = Strings.in;
			string result = Strings.instance.win;
			if (v == 10)
				result = Strings.instance.gameplay_binh_mb_basanh;
			else if (v == 11)
				result = Strings.instance.gameplay_binh_mb_bathung;
			else if (v == 12)
				result = Strings.instance.gameplay_binh_mb_saudoi;
			else if (v == 13)
				result = Strings.instance.gameplay_binh_mb_donghoa; //13 cay cung mau
			else if (v == 14)
				result = Strings.instance.gameplay_binh_mb_sanhrong;//2-A
			else if (v == 15)
				result = Strings.instance.gameplay_binh_mb_sanhrongdonghoa; 
			viewControl.showWinnerImage (result);
			gameScene.StartCoroutine (Utils.cr_runDelayed (6.0f, () => {
				viewControl.showWinnerImage (null);
			}));
		} else {
			text_winning.text = Utils.formatNumberWithSign (winnings);
			text_winning.enabled = true;
			text_winning.rectTransform.anchoredPosition = new Vector2 (0, -68f);
			Hashtable param = new Hashtable ();
			param.Add ("islocal", true);
			param.Add ("y", 68f);
			param.Add ("time", 4f);
			param.Add ("easeType", "linearTween");
			iTween.MoveTo (text_winning.gameObject, param);
			updateGoldWithAnimation (this.ag, ag, 1.6f);
			
			if (v < 0)
				viewControl.showOtherImage (Strings.instance.gameplay_binh_binhlung);
			
			gameScene.StartCoroutine (Utils.cr_runDelayed (5f, () => {
				// de phong truong hop nguoi choi da thoat
				if (text_winning != null)
					text_winning.enabled = false;
			}));
		}
	}
	
	/********************* Ham danh cho Xoc Dia ******************************/
	public void setSoGoldDaDatBanDau (int cuadat, int soGold)
	{
		// TODO: lam hieu ung dat Gold Ban dau
		//		throw new System.NotImplementedException ("lam hieu ung dat Gold Ban dau cho Xoc Dia");
	}
	
	public void datcuoc_xocdia (int cuadat, int menhgia, bool isFly)
	{	

		List<int> listXu = new List<int> ();
		int coinImg = 10;
		if (menhgia == game.gameScene.controllerControl.xocDiaFunction.value[0]) {
			coinImg = 0;
			listXu.Add (coinImg);
		} else if (menhgia == game.gameScene.controllerControl.xocDiaFunction.value[1]) {
			coinImg = 1;
			listXu.Add (coinImg);
		} else if (menhgia == game.gameScene.controllerControl.xocDiaFunction.value[2]) {
			coinImg = 2;
			listXu.Add (coinImg);
		} else if (menhgia == game.gameScene.controllerControl.xocDiaFunction.value[3]) {
			coinImg = 3;
			listXu.Add (coinImg);
		} else if (menhgia == game.gameScene.controllerControl.xocDiaFunction.value[4]) {
			coinImg = 4;
			listXu.Add (coinImg);
		} else {
			int v1 = menhgia / (game.gameScene.controllerControl.xocDiaFunction.value[4]+100);
			int v2 = (menhgia - game.gameScene.controllerControl.xocDiaFunction.value[4] * v1) / (game.gameScene.controllerControl.xocDiaFunction.value[3]);
			int v3 = (menhgia - game.gameScene.controllerControl.xocDiaFunction.value[4] * v1 - game.gameScene.controllerControl.xocDiaFunction.value[3] * v2) / (game.gameScene.controllerControl.xocDiaFunction.value[2]);
			int v4 = (menhgia - game.gameScene.controllerControl.xocDiaFunction.value[4] * v1 - game.gameScene.controllerControl.xocDiaFunction.value[3] * v2 - game.gameScene.controllerControl.xocDiaFunction.value[2] * v3) / (game.gameScene.controllerControl.xocDiaFunction.value[1] * 2);
			int v5 = (menhgia - game.gameScene.controllerControl.xocDiaFunction.value[4] * v1 - game.gameScene.controllerControl.xocDiaFunction.value[3] * v2 - game.gameScene.controllerControl.xocDiaFunction.value[2] * v3 - game.gameScene.controllerControl.xocDiaFunction.value[1] * v4) / (game.gameScene.controllerControl.xocDiaFunction.value[0]);
			
			if (v1 > 0) {
				listXu.Add (4);
			}
			if (v2 > 0) {
				listXu.Add (3);
			}
			if (v3 > 0) {
				listXu.Add (2);
			}
			if (v4 > 0) {
				listXu.Add (1);
			}
			if (v5 >= 0) {
				listXu.Add (0);
			}
		}

		Transform transform = null;
		if (cuadat == 1) {
			transform = gameScene.controllerControl.xocDiaFunction.cua1.transform;
		}
		if (cuadat == 2) {
			transform = gameScene.controllerControl.xocDiaFunction.cua2.transform;
		}
		if (cuadat == 3) {
			transform = gameScene.controllerControl.xocDiaFunction.cua3.transform;
		}
		if (cuadat == 4) {
			transform = gameScene.controllerControl.xocDiaFunction.cua4.transform;
		}
		if (cuadat == 5) {
			transform = gameScene.controllerControl.xocDiaFunction.cua5.transform;
		}
		if (cuadat == 6) {
			transform = gameScene.controllerControl.xocDiaFunction.cua6.transform;
		}
		// sinh ra tien
		for (int i=0; i<listXu.Count; i++) {
			GameSceneXocDia gameSceneXocDia = (GameSceneXocDia)gameScene;
			GameXocDia gameXocDia = (GameXocDia)game;
			RectTransform functionXocDiaRectTransform = (RectTransform)gameScene.controllerControl.xocDiaFunction.transform;
			RectTransform pf = Resources.Load ("prefabs/XocDia/PFChipXocDia", typeof(RectTransform)) as RectTransform;
			RectTransform chipimage = GameObject.Instantiate (pf);
			
			int coinType = listXu [i];
			chipimage.GetComponent<Image> ().sprite = gameSceneXocDia.sxus [coinType];
			chipimage.SetParent (functionXocDiaRectTransform, false);
			if (isFly) {
				chipimage.anchoredPosition = game.getViewPositionOfPlayer (this);
				
				//gameSceneXocDia.listXuDatCuocTrenBan.Add (chipimage);
				listDatCuoc.Add (new DatCuoc (cuadat, chipimage));
				
				Vector2 target = gameXocDia.getVitriCuaDat (cuadat);
				int ranx = UnityEngine.Random.Range (-70, 70);
				int rany = UnityEngine.Random.Range (-30, 30);
				LeanTween.moveLocal (chipimage.gameObject, new Vector3 (target.x + ranx, target.y + rany, 0f), 0.45f)
					.setOnComplete (delegate() {
					chipimage.SetParent (transform.Find ("xu"), true);

				})
					.setEase (LeanTweenType.easeOutQuart);
			} else {
				Vector2 target = gameXocDia.getVitriCuaDat (cuadat);
				int ranx = UnityEngine.Random.Range (-70, 70);
				int rany = UnityEngine.Random.Range (-30, 30);
				target.x = target.x + ranx;
				target.y = target.y + rany;
				chipimage.anchoredPosition = target;
				listDatCuoc.Add (new DatCuoc (cuadat, chipimage));
				chipimage.SetParent (transform, true);
			}
		}

	}
	
	public void huycuoc ()
	{
		Vector2 target = game.getViewPositionOfPlayer (this); 
		for (int i=0; i<listDatCuoc.Count; i++) {
			DatCuoc d = listDatCuoc [i];
			RectTransform chipimage = d.rect;
			RectTransform functionXocDiaRectTransform = (RectTransform)gameScene.controllerControl.xocDiaFunction.transform;
			chipimage.SetParent (functionXocDiaRectTransform, true);
			LeanTween.moveLocal (chipimage.gameObject, new Vector3 (target.x, target.y, 0f), 0.45f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}
		listDatCuoc.Clear ();
	}
	
	public virtual void finishXocDia (int result, int agwin, int ag)
	{
		this.ag = ag;
		finishEffect (null, ag, agwin);
		if(agwin>0){
			viewControl.show_win_xocdia();
		}
		Vector2 target = game.getViewPositionOfPlayer (this); 
		for (int i=0; i<listDatCuoc.Count; i++) {
			DatCuoc d = listDatCuoc [i];
			RectTransform chipimage = d.rect;
			RectTransform functionXocDiaRectTransform = (RectTransform)gameScene.controllerControl.xocDiaFunction.transform;
			chipimage.SetParent (functionXocDiaRectTransform, true);
			if (checkWinXocDia (result, d.cua)) {
				LeanTween.moveLocal (chipimage.gameObject, new Vector3 (target.x, target.y, 0f), 1f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
			} else {
				GameObject.Destroy (chipimage.gameObject);
			}
		}
		listDatCuoc.Clear ();

	}
	
	public bool checkWinXocDia (int result, int cua)
	{
		if (result == 1) {
			if (cua == 1) {
				return true;
			}
		}
		if (result == 2) {
			if (cua == 2) {
				return true;
			}
		}
		if (result == 3) {
			if (cua == 3 || cua == 1) {
				return true;
			}
		}
		if (result == 4) {
			if (cua == 4 || cua == 2) {
				return true;
			}
		}
		if (result == 5) {
			if (cua == 5 || cua == 2) {
				return true;
			}
		}
		if (result == 6) {
			if (cua == 6 || cua == 1) {
				return true;
			}
		}
		return false;
	}

	/************** Ham ta la ***************/
	public virtual void danhTaLa (Card card, string nn, int jsonA)
	{
		// gán lastplayer
		game.lastPlayer = this;
			//them} bai da danh vao list
		baidadanh_tala.Add (card);
		// gan lastCard, 
		// tuy nhien khi vtable kho xac dinh dc lastcard.
		// hien tai chua can dung den lastCard
		Debug.Log ("danh" + card.encode_tala ());
		// dừng đếm giờ mình
		this.stopCountDown ();
		// đếm giờ người kế tiếp
		game.getPlayer (nn).onTurnTaLa ();
		//kiem tra co hien thi goi y an bai khong
		//		if (jsonA == 1) {
		//			Button button = card.rectTransform.GetComponent<Button> ();
		//			button.onClick.AddListener (delegate {
		//				//xu ly gui len sau
		//				
		//				Debug.Log ("nhan su kien");
		//			});
		//		}

		// show nut xep bai
		gameScene.controllerControl.talaFuntions.hideTaLaOnTurnFuntions ();
	}
	
	public virtual void bocbaiTaLa (Card card)
	{
		if (gameScene is GameSceneTaLa) {
			GameSceneTaLa gstala = (GameSceneTaLa)gameScene;
			int sobaicon = gstala.giamsolabai ();
			if (sobaicon < 1)
				GameObject.Destroy (gstala.bobai.gameObject);
			else
				gstala.bobai.Find ("Text").GetComponent<Text> ().text = sobaicon.ToString ();

			if (gstala.selectedCardArrow1 != null)
				GameObject.Destroy (gstala.selectedCardArrow1.gameObject);
			if (gstala.selectedCardArrow2 != null)
				GameObject.Destroy (gstala.selectedCardArrow2.gameObject);
		}

	}

	public virtual Card anbaiTaLa (int code)
	{
		if (game.lastPlayer == null) {
			// truong hop vtable ma nhan dc 'ac' ngay thi khong xac dinh dc lastPlayer

			int thisPlayerIndex = game.players.IndexOf (this);
			int lastPlayerIndex = ((thisPlayerIndex - 1) + (game.players.Count - 1)) % (game.players.Count - 1);

			// 1
			// lastPlayerIndex = ((1-1) + (3-1))% 2 = 0

			// 0
			// lastPlayerIndex = ((0-1) + (3-1))% 2 = 1

			// 0
			// lastPlayerIndex = ((0-1) + (4-1))% 3 = 2
			game.lastPlayer = game.players [lastPlayerIndex];
		}

		Card card = findCardInList (Card.decode_tala (code), game.lastPlayer.baidadanh_tala);
		// neu server chay ko loi thi chac chan tim dc.

		game.lastPlayer.baidadanh_tala.Remove (card);
		baidaan_tala.Add (card);


		GameSceneTaLa gstala = (GameSceneTaLa)gameScene;
		if (gstala.selectedCardArrow1 != null)
			GameObject.Destroy (gstala.selectedCardArrow1.gameObject);
		if (gstala.selectedCardArrow2 != null)
			GameObject.Destroy (gstala.selectedCardArrow2.gameObject);

		// hieu ung cong tien
		int songuoichoi = game.players.Count;
		if (game.state == Game.State.VIEWING)
			songuoichoi--;

		int tongbaidanh = 0;
		foreach (Player player in game.players)
			tongbaidanh += player.baidadanh_tala.Count;
		int mc = baidaan_tala.Count;
		if (tongbaidanh >= 3 * songuoichoi)
			mc = 4;
		if (game.lastPlayer != null) {
			antien_effect (this, game.lastPlayer, mc * game.stake);
		}

		return card;
	}

	public virtual void guibaiTaLa (string player_nhan, List<Card> cards_gui)
	{
		string str = "";
		foreach (Card card in cards_gui)
			str += card.getResourceName () + "; ";
		Debug.Log (name + " gui " + player_nhan + " " + str);

		Player player = game.getPlayer (player_nhan);

		int tmax = 8; // chong vong lap vo han neu co loi
		while (cards_gui.Count > 0 && tmax-- > 0) {
			foreach (Card card in cards_gui) {
				foreach (List<Card> phom in player.listphomha) {
					string strx = "";
					foreach (Card cw in phom)
						strx += cw.getResourceName () + "; ";
					if (try_guibai (card, phom)) {
						Debug.Log ("gui duoc " + card.getResourceName () + " vao " + strx);
						card.removeEventTriggerTaLa ();
						cards_gui.Remove (card);
						phom.Add (card);
						if (this is ThisPlayer)
							((ThisPlayer)this).cards.Remove (card);
						// hieu ung
						int phomIndex = player.listphomha.IndexOf (phom) + 1;
						Vector2 target = player.getVitriHaPhom (phomIndex);
						System.Action<object> onComplete = delegate(object obj) {
							// xep lai view index cua phom
							foreach (List<Card> m_phom in player.listphomha) {
								foreach (Card cw in m_phom)
									cw.rectTransform.SetAsLastSibling ();
							}
						};
						LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
						LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x + (phom.Count - 1) * 30f, target.y, 0f), 0.4f)
							.setEase (LeanTweenType.easeOutQuart).setOnComplete (onComplete);

						if (cards_gui.Count < 1)
							return;
					} else {
						Debug.Log ("khong gui duoc " + card.getResourceName () + " vao " + strx);
					}
				}
			}
		}
	}

	public virtual void guibaiDummy (string player_nhan, Card card, List<Card> xcards, int CM, int NNCM)
	{
		string str = "";
		foreach (Card _card in xcards)
			str += _card.getResourceName () + "; ";
		Debug.Log (name + " gui " + player_nhan + " " + str);
		
		Player player = game.getPlayer (player_nhan);
		int viewIndex = game.getViewIndexOfPlayer (this);
		Debug.LogError (name + " viewIndex: "+ viewIndex);
		Color color = Color.white;
		if (viewIndex == 0) {
			color = new Color32(20,101,121,104);
		} else if (viewIndex == 1) {
			color = new Color32(136,171,119,104);
		} else if (viewIndex == 2) {
			color = new Color32(11,108,91,104);
		} else if (viewIndex == 3) {
			color = new Color32(115,135,0,104);
		}

		foreach (List<Card> phom in player.listphomha) {
			if (findCardInList(phom[0], xcards) != null) {
				card.removeEventTriggerDummy ();
				phom.Add (card);
				if (this is ThisPlayer)
					((ThisPlayer)this).cards.Remove (card);
				if (this is OtherPlayer)
					((OtherPlayer)this).cards.Remove (card);
				// hieu ung
				int phomIndex = player.listphomha.IndexOf (phom) + 1;

				// TODO: can sort lai, do mau
				// xep lai bai tren phom
				card.setColor(color);
				phom.Sort (CardUtils.ComparisionDummy1);
				for(int i = 0; i < phom.Count; i++) {
					Card icard = phom[i];
					icard.rectTransform.SetAsLastSibling();
					Vector2 target = player.getVitriHaPhom_Dummy (phomIndex, i, phom.Count);
					LeanTween.scale (icard.rectTransform, new Vector3 (GameSceneDummy.K_SCALE, GameSceneDummy.K_SCALE, 1f), 0.7f).setEase (LeanTweenType.easeOutQuart);
					LeanTween.moveLocal (icard.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.7f)
						.setEase (LeanTweenType.easeOutQuart);//.setOnComplete (onComplete);
				}
				break;
			} else {
				Debug.Log ("khong gui duoc " + card.getResourceName ());
			}
		}

		// hieu ung an diem
		int diemtruoc = diem_Dummy;
		int diemsau = CM;
		hieu_ung_an_diem_dummy (diemtruoc, diemsau);

		if (NNCM != 0) {
			player.hieu_ung_an_diem_dummy(player.diem_Dummy, NNCM);
		}

		SoundManager.instance.play_gui ();
	}

	void hieu_ung_an_diem_dummy(int diemtruoc, int diemsau, int AT = 20){
		int delta = diemsau - diemtruoc;
		if (delta != 0) {
			Text diem = viewControl.ag;
			// 1. cong tien
			LeanTween.value(diem.gameObject, diemtruoc, diemsau, 1.0f).setEase(LeanTweenType.easeInOutSine)
				.setOnUpdate (delegate(float _val) {
					diem.text = "<color=white>"+((int) _val).ToString()+"</color> " + Utils.formatCurrency(ag);
				});
			diem_Dummy = diemsau;
			LeanTween.value(diem.gameObject, 0f, 2f, 1.0f).setEase(LeanTweenType.easeInOutSine)
				.setOnUpdate(delegate(float _val) {
					_val = 1f - Mathf.Abs(_val - 1f);
					float k = 1.2f * _val + 1f;
					diem.rectTransform.localScale = new Vector3(k, k, 1f);
				});
			
			// 2. 
			RectTransform ScoreDummyText = (RectTransform)GameObject.Instantiate (DummyRes.Instance.pf_score_dummy_text);
			ScoreDummyText.SetParent(rectTransform, false);
			ScoreDummyText.anchoredPosition = new Vector2(0 , -75f);;
			
			ScoreDummyText.GetComponent<Text>().text = Utils.formatNumberWithSign(delta);
			LeanTween.moveLocalY(ScoreDummyText.gameObject, 15f, 1.8f).setEase(LeanTweenType.easeInOutSine)
				.setDestroyOnComplete(true);
			
			// 3. anim
			Animator anim = null;
			if(AT == 1) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim1);
			} else if(AT == 3) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim1);
			} else if(AT == 10) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else if(AT == 11) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else if(AT == 12) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else if(AT == 13) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else if(AT == 14) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else if(AT == 15) {
				anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim2);
			} else {
				return;
			}

			RectTransform rect = anim.GetComponent<RectTransform>();
			rect.SetParent(gameScene.effectLayer, false);
			rect.anchoredPosition = new Vector2(0f, 0f);

			int view_pos = game.getViewIndexOfPlayer(this);
			if(view_pos == 0) {
				rect.anchoredPosition  = new Vector2 (-240, -80);
			} else if(view_pos == 1) {
				rect.anchoredPosition  = new Vector2 (240, -80);
			} else if(view_pos == 2) {
				rect.anchoredPosition  = new Vector2 (240, 220);
			} else if(view_pos == 3) {
				rect.anchoredPosition  = new Vector2 (-240, 220);
			}

			LeanTween.delayedCall(4f, delegate (object obj) {
				GameObject.Destroy(rect.gameObject);
			});
		}
	}

	bool try_guibai (Card card, List<Card> phom)
	{
		List<Card> phom_moi = new List<Card> ();
		phom_moi.AddRange (phom);
		phom_moi.Add (card);

		if (CardUtils.checkTuQuy (phom_moi))
			return true;
		else 
			return CardUtils.checkSanhTala (phom_moi);
	}
	
	public virtual void habaiTaLa (List<Card> cards)
	{
		phomIndex = phomIndex + 1;
	}
	
	public Vector2 getVitriBaiDanhTaLa (int i, int count)
	{
		Vector2 pos = new Vector2 (0, 0);
		int vitringuoichoi = game.getViewIndexOfPlayer (this);

		int margin = Card.WIDTH * 3 / 5;
		if (vitringuoichoi == 0) {
			int width = (count - 1) * margin;
			pos = new Vector2 (350 + i * margin - width, -110);
		}

		if (vitringuoichoi == 1) {
			int width = (count - 1) * margin;
			pos = new Vector2 (350 + i * margin - width, 110);
		}

		if (vitringuoichoi == 2) {
			pos = new Vector2 (-350 + i * margin, 110);
		}

		if (vitringuoichoi == 3) {
			pos = new Vector2 (-350 + i * margin, -110);
		}

		return  pos;
	}

	public Vector2 getVitriBaiAnTaLa (int vitricaybai)
	{
		Vector2 pos = new Vector2 (0, 0);
		int vitringuoichoi = game.getViewIndexOfPlayer (this);
		int margin = 50;
		
		if (vitringuoichoi == 1) {
			pos = new Vector2 (426, - vitricaybai * margin);
			
		}
		if (vitringuoichoi == 2) {
			OtherPlayer otherPlayer = (OtherPlayer)this;
			Vector2 vitribai = rectTransform.anchoredPosition + otherPlayer.cardTransform.anchoredPosition;
			// giong voi vi tri dat cay bai khi start game
			pos = new Vector2 (105 + margin + vitricaybai * margin, vitribai.y);
			
		}
		if (vitringuoichoi == 3) {
			pos = new Vector2 (-426, - vitricaybai * margin);
			
		}
		return  pos;
	}

	public Vector2 getVitriHienBaiTrenTayTaLa (int i, int count)
	{
		Vector2 pos = new Vector2 (0, 0);
		int vitringuoichoi = game.getViewIndexOfPlayer (this);
		
		if (vitringuoichoi == 1) {
			int margin = 40;
			int theight = (count - 1) * margin + Card.HEIGHT;
			pos = new Vector2 (426, theight / 2 - i * margin);
			
		}
		if (vitringuoichoi == 2) {
			int margin = 30;
			pos = new Vector2 (105 + i * margin, 265);
		}
		if (vitringuoichoi == 3) {
			int margin = 40;
			int theight = (count - 1) * margin + Card.HEIGHT;
			pos = new Vector2 (-426, theight / 2 - i * margin);
			
		}
		return  pos;
	}

	public Vector2 getVitriHaPhom (int phomIndex)
	{
		Vector2 pos = new Vector2 (0, 0);
		int vitringuoichoi = game.getViewIndexOfPlayer (this);

		int margin = 60;
		if (vitringuoichoi == 0) {
			pos = new Vector2 (-25, -110 - (phomIndex - 1) * margin);
		}
		if (vitringuoichoi == 1) {
			pos = new Vector2 (210, 50 - (phomIndex - 1) * margin);
		}
		if (vitringuoichoi == 2) {
			pos = new Vector2 (-25, 150 - (phomIndex - 1) * margin);
		}
		if (vitringuoichoi == 3) {
			pos = new Vector2 (-350, 50 - (phomIndex - 1) * margin);
		}
		return  pos;
	}

	public Vector2 getVitriHaPhom_Dummy (int phomIndex, int cardindex, int size)
	{
		Vector2 pos = new Vector2 (0, 0);
		int vitringuoichoi = game.getViewIndexOfPlayer (this);

		float cardwidth = Card.WIDTH * 0.6f;

		phomIndex -= 1;
		int dx = phomIndex % 3;
		int dy = phomIndex / 3;

		float marginy = 70;
		float marginx = cardwidth * 3.3f;
		if (vitringuoichoi == 0) {
			pos = new Vector2 (-372 + dx * marginx, -10 - dy * marginy);
		}
		if (vitringuoichoi == 1) {
			pos = new Vector2 (70 + dx * marginx, -10 - dy * marginy);
		}
		if (vitringuoichoi == 2) {
			pos = new Vector2 (70 + dx * marginx, 296 - dy * marginy);
		}
		if (vitringuoichoi == 3) {
			pos = new Vector2 (-372 + dx * marginx, 296 - dy * marginy);
		}

		// tinh vi tri tung cay bai
		float maxmargin = 0.5f * cardwidth;
		
		float maxwidth = 3 * cardwidth;
		float margin = (maxwidth - cardwidth) /(size - 1);
		
		margin = (margin < maxmargin) ? margin : maxmargin;
		float left = cardindex * margin - maxwidth * 0.5f + cardwidth * 0.8f;

		return  pos + new Vector2(left, 0);
	}

	public void xepbaidadanh_tala (bool all = false)
	{
		int count = baidadanh_tala.Count;
//		if(!all)
//			count--;
		for (int i = 0; i < count; i++) {
			Card card = baidadanh_tala [i];
			card.rectTransform.localScale = Vector3.one;
			card.rectTransform.SetSiblingIndex (i);
			Vector2 vitribai = getVitriBaiDanhTaLa (i, count);

			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (vitribai.x, vitribai.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}

	}

	public virtual void onTurnTaLa (int time = 25)
	{
		countDown (time);
	}

	public virtual void onTurnDummy (int time = 25)
	{
		countDown (time);
		if (game is GameDummy) {
			lightDown(DummyRes.Instance.light_turn_0);
			lightDown(DummyRes.Instance.light_turn_1);
			lightDown(DummyRes.Instance.light_turn_2);
			lightDown(DummyRes.Instance.light_turn_3);
			int view_pos = game.getViewIndexOfPlayer (this);

			if (view_pos == 0) {
				lightUp(DummyRes.Instance.light_turn_0);
			} else if (view_pos == 1) {
				lightUp(DummyRes.Instance.light_turn_1);
			} else if (view_pos == 2) {
				lightUp(DummyRes.Instance.light_turn_2);
			} else if (view_pos == 3) {
				lightUp(DummyRes.Instance.light_turn_3);
			}
		}
	}

	private void lightDown(GameObject light){
		if (light.activeSelf) {
			LeanTween.value (DummyRes.Instance.gameObject, 255f, 0f, 0.5f).setOnUpdate (delegate(float value) {
				light.GetComponent<Image> ().color = new Color32 (255, 255, 255, (byte)value);
			}).setOnComplete (delegate(object obj) {
				light.SetActive (false);
			});
		}
	}
	private void lightUp(GameObject light){
		light.SetActive(true);
		LeanTween.value (DummyRes.Instance.gameObject, 0f, 255f, 0.5f).setOnUpdate (delegate(float value) {
			light.GetComponent<Image> ().color = new Color32 (255, 255, 255, (byte)value);
		});
	}

	// phuc vu cho reconnect
	public virtual void showCardsInHandByReconnectionTienLen (JSONArray asArray)
	{

	}

	public static Card findCardInList (Card gcard, List<Card> cards)
	{
//		Debug.Log("gcard: " + gcard.getResourceName());
		foreach (Card card in cards) {
//			Debug.Log("card: " + card.getResourceName());
			if (card.encode ().Equals (gcard.encode ()))
				return card;
		}
		return null;
	}

	public static CardChan findCardInList (int code, List<CardChan> cards, bool sameisok = false)
	{
		CardChan xcard  = CardChan.decode(code);
		foreach (CardChan card in cards) {
//			Debug.LogError("x "+ card.code);
			if(sameisok){
				if (card.N == xcard.N && card.S == xcard.S)
					return card;
			} else {
				if (card.code == code)
					return card;
			}
		}
		return null;
	}

	public void bao_mot ()
	{
		chat ("Báo 1", "","","",logtoChat: false);
		viewControl.showWinnerImage ("Báo 1");
	}

	public void bao_sam ()
	{
		viewControl.showWinnerImage ("Báo sâm");
	}


	/******************************** Game Chan **************************************/
	public virtual void startGameChan (JSONArray jcards)
	{
//		throw new NotImplementedException ();
		chan_cards.Clear ();
		chan_cards1.Clear ();
		chan_cards2.Clear ();
	}

	public virtual void danhBaiChan (int t, int code, int mcode, string nname, string nd)
	{
		Debug.Log(name+ " danhbai bai c="+ code+ " name: "+ CardChan.getName(code));
		if (name.Equals (nd) == false) {
			Debug.Log ("danh tra cua, n != nd");
		}
		game.lastPlayer = this;

		if (((GameChan)game).lastCardChan != null && ((GameChan)game).lastCardChan.rectTransform != null)
			((GameChan)game).lastCardChan.rectTransform.localScale = Vector3.one;

//		Log.i("ĐÁNH BÀI", name + " " + code + " : " + new CardChan(code, PlayingTableChan.this));
		stopCountDown ();
		Player nextPlayer = game.getPlayer (nname);

		// t=25 khi other player danh tra cua
		if (t == 0 || t == 25) {
			// bốc hoặc ăn
//			nextPlayer.startTurnCounting(1);
			nextPlayer.countDown (15);
			if (nextPlayer is ThisPlayer)
				gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (1);
		} else {
			// t==24
//			nextPlayer.startTurnCounting(3);
			nextPlayer.countDown (15);
			if (nextPlayer is ThisPlayer)
				gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (3);
		}
//		lastPlayer = getPlayer(nd);
		
		// gợi ý
		if (mcode != 0 && nextPlayer is ThisPlayer && (((GameChan)game).huongdan == 1 || GameApplication.DEBUG_ON)) {
			CardChan hcard = findCardInList (mcode, nextPlayer.chan_cards);
			hcard.isSelected = true;
		}
	}

	public virtual void anbaiChan (int cc1, int cc2, string fname = "")
	{
//		startTurnCounting(2);
		countDown (15);
	}

	public void bocbaiChan (int c, int ca = 0)
	{
		Debug.Log(name+ " boc bai c="+ c+ " name: "+ CardChan.getName(c));
		game.lastPlayer = this;
		if (((GameChan)game).lastCardChan != null && ((GameChan)game).lastCardChan.rectTransform != null)
			((GameChan)game).lastCardChan.rectTransform.localScale = Vector3.one;

		if (this is ThisPlayer) {
			CardChan selectedCard = gameScene.controllerControl.chanFuntions.selectedCard;
			if (selectedCard != null) {
				selectedCard.isSelected = false;
				selectedCard = null;
			}

			gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (3);
		}
		// logic part
		CardChan card = CardChan.decode (c);
		card.rectTransform = GameObject.Instantiate<RectTransform> (((GameSceneChan)gameScene).TransformCardChan);
		card.rectTransform.SetParent (gameScene.cardLayer, false);
		card.rectTransform.anchoredPosition = new Vector2 (0f, 130f);
		card.rectTransform.localScale = new Vector3 (0.3f, 0.3f, 1f);
		card.rectTransform.Rotate (0f, 0f, -15f);
		card.image.color = new Color32 (182, 182, 182, 255);

		chan_cards2.Add (card);

		// view part
		if (chan_cards2.Count > 1) {
//			ObjectAnimator.ofFloat(chan_cards2.get(chan_cards2.size() - 2), "scaleX", 1).start();
//			ObjectAnimator.ofFloat(chan_cards2.get(chan_cards2.size() - 2), "scaleY", 1).start();
		}

//		card.setColorFilter(0xff99ad9e, android.graphics.PorterDuff.Mode.MULTIPLY);

		Vector2 target = ((GameChan)game).getCard2Pos (this, chan_cards2.Count - 1);
		card.rectTransform.pivot = new Vector2 (0.5f, 0.5f);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0), 0.3f).setEase (LeanTweenType.easeInBack);
		LeanTween.scale (card.rectTransform.gameObject, CardChan.lastCardScale, 0.3f);
		LeanTween.rotateZ (card.rectTransform.gameObject, 0f, 0.3f);

		((GameChan)game).lastCardChan = card;

		// gợi ý // lưu ý là chỉ khi nào mình là người bốc acode mới !=0
		if (ca != 0 && this is ThisPlayer && (((GameChan)game).huongdan == 1 || GameApplication.DEBUG_ON)) {
			CardChan hcard = findCardInList (ca, chan_cards);
			hcard.isSelected = true;
		}

	}

	public virtual void duoibaiChan (string nn, int acode)
	{
		game.lastPlayer = this; // co le khong can thiet
		stopCountDown ();
	}

	public virtual void habaiuChan (JSONArray jarr, int cc1, int cc2, int chiuu)
	{
		stopCountDown ();
		gameScene.playerLayer.SetSiblingIndex (gameScene.cardLayer.GetSiblingIndex () + 1);
	}

	public void xepbaiu (List<CardChan> list, int row)
	{
		Debug.Log("xepbai count: "+ list.Count);
		for (int i = 0; i < list.Count; i++) {
			CardChan ccard = list [i];
			Debug.Log("ccard: " + ccard.code);
			Debug.Log("ccard: " + CardChan.getName( ccard.code));

			ccard.rectTransform.SetAsLastSibling ();
			ccard.rectTransform.pivot = new Vector2 (0.5f, 0.5f);
			Vector2 target = Vector2.zero;
			target.x = ((GameChan)game).getCard3PosX (i, list.Count);
			target.y = ((GameChan)game).getCard3PosY (row);
			LeanTween.scale (ccard.rectTransform.gameObject, Vector3.one, 0.3f).setDelay (i * 0.09f + 0.3f * (row - 1));
			LeanTween.moveLocal (ccard.rectTransform.gameObject, new Vector3 (target.x, target.y, 0), 0.3f).setDelay (i * 0.09f + 0.3f * (row - 1));
			LeanTween.rotateZ (ccard.rectTransform.gameObject, 0f, 0.3f).setDelay (i * 0.09f + 0.3f * (row - 1));
		}
	}

	public virtual void kg (int m, JSONArray arrMark, string C, string CC, int G)
	{
		GameSceneChan gs = (GameSceneChan)gameScene;
		ChanFunction chanFuntions = gameScene.controllerControl.chanFuntions;

		chanFuntions.tvcuoc.text = (C + (game.type == 1 && G > 0 ? " (" + G + " gà)" : ": "));
		chanFuntions.tvcuoc.text += (m + " điểm");
		chanFuntions.tvcuoc.text += ("\n(" + CC + ")");

		ArrayList chips = new ArrayList ();
		
		for (int i = 0; i < arrMark.Count; i++) {
			JSONClass jobj = arrMark [i].AsObject;
			Player pl = game.getPlayer (jobj ["N"]);
			// trường hợp mình là viewtable
			// một ng chơi mất kết nối thì sẽ ltable và stable ngay khi
			// nhận được kg 100 ms sau mới thực hiện kg,
			// nhưng lúc này ng chơi đã ltable
			if (pl == null)
				continue;
			int oldAG = pl.ag;
			int ag = jobj ["A"].AsInt;
			int winnings = ag - oldAG;

			pl.hideStatus ();
			pl.stopCountDown ();
			pl.isReady = false;
			pl.updateView ();
			pl.finishEffect ("", ag, winnings);

			if(pl is ThisPlayer){
				// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
				if (game.stake != 5){
					GameApplication.user.ag = ag;
				}
			}

			// hiệu ứng bay coin từ người thua cuộc
			if (pl.name.Equals (name, System.StringComparison.CurrentCultureIgnoreCase) == false) {
				RectTransform chip = (RectTransform)GameObject.Instantiate (gameScene.Chip);
				chip.SetParent (gameScene.playerLayer, false);
				
				Vector2 position = new Vector2 ();
				position.x = pl.rectTransform.anchoredPosition.x;
				position.y = pl.rectTransform.anchoredPosition.y + pl.viewControl.ag.rectTransform.anchoredPosition.y;
				chip.anchoredPosition = position;
				
				chips.Add (chip);
			}
		}

		// because winner is this
		float targetx = rectTransform.anchoredPosition.x;
		float targety = rectTransform.anchoredPosition.y + viewControl.ag.rectTransform.anchoredPosition.y;
		foreach (RectTransform chip in chips) {
			LeanTween.moveLocal (chip.gameObject, new Vector3 (targetx, targety, 0), 0.8f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}

		LeanTween.delayedCall (6f, delegate(object obj) {
			// luu y, khi xoa cac item, game co the dang o van moi roi
			if (game.state == Game.State.WAITING) {
				if(chanFuntions != null && chanFuntions.xuongu_dialog!= null)
					chanFuntions.xuongu_dialog.gameObject.SetActive (false);
				if(chanFuntions != null)
					foreach (RectTransform rect in chanFuntions.dealingPanel)
						GameObject.Destroy (rect.gameObject);
				foreach (RectTransform rect in gameScene.cardLayer)
					GameObject.Destroy (rect.gameObject);
			}
		});

	}

	public void requestChiu (int ci, string nn, JSONNode obj)
	{
		// logic part
		// dung dem thang bi chiu
		stopCountDown ();
		if (game.getPlayer (nn) is ThisPlayer) {
			// dem gio 5 giay thang chiu bai
			game.getPlayer (nn).countDown (5);
			gameScene.showServerNotification ("Hãy lựa chọn chíu bài 5s");
			gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (4);
			gameScene.controllerControl.chanFuntions.chiuObject = (JSONClass)obj;

			LeanTween.delayedCall (5f, delegate(object o) {
				if (gameScene.controllerControl.chanFuntions.btnChiu.gameObject.activeSelf) {
					JSONClass jobj = new JSONClass ();
					jobj ["evt"] = "ccc";
					gameScene.cubeia.sendDataGame (jobj);
				}
			});
		} else {
			gameScene.showToast ("Đợi " + nn + " quyết định chíu bài");
//			SDialog sdialog = gameScene.showInfoDialog ("Đợi " + nn + " quyết định chíu bài");
//			sdialog.autoDismiss = true;
//			sdialog.autoDismissTime = 5f;
//			sdialog.onDismiss = delegate {
//				// nothing
//			};
		}
	}

	public void chiu (int ci, string from_name)
	{
		// đánh bài
//		startTurnCounting(2);
		countDown (15);
		if (this is ThisPlayer) {
			gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (2);
		}
		int cc = ((ci - 1) / 4) * 4;

		anbaiChan (cc + 1, cc + 2, from_name);
		anbaiChan (cc + 3, cc + 4, from_name);
//		if(ci >= (cc + 1) && ci <= (cc + 2) ){
//		} else {
//			anbaiChan (cc + 1, cc + 2);
//			anbaiChan (cc + 3, cc + 4, from_name);
//		}s
	}

	public void bocbaihoaco (int code)
	{
		bocbaiChan (code);
		
		foreach (Player pl in game.players) {
			pl.stopCountDown ();
			pl.isReady = false;
		}

		LeanTween.delayedCall (1f, delegate(object obj) {
			SDialog dialog = gameScene.showInfoDialog ("Hòa cả làng");
			dialog.autoDismiss = true;
			dialog.autoDismissTime = 4f;
			dialog.onDismiss = delegate {
				// clear cây bài
				foreach (Player pl in game.players) {
					foreach (CardChan card in pl.chan_cards) {
						GameObject.Destroy (card.rectTransform.gameObject);
					}
					foreach (CardChan card in pl.chan_cards1) {
						GameObject.Destroy (card.rectTransform.gameObject);
					}
					foreach (CardChan card in pl.chan_cards2) {
						GameObject.Destroy (card.rectTransform.gameObject);
					}
					pl.chan_cards.Clear ();
					pl.chan_cards1.Clear ();
					pl.chan_cards2.Clear ();
				}
				if (game.thisPlayer.Equals (game.hostPlayer)) {
					game.thisPlayer.isReady = true;
				} else {
					game.thisPlayer.isReady = false;
				}
				game.updateReadyStatus ();

				gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (0);
			};

		});

	}
	/*********************** GAME DUMMY ************************/

	public virtual void danhbaiDummy (Card card, string nn, int jsonA, int M, bool goiyan)
	{
		GameSceneDummy gsDummy = (GameSceneDummy)gameScene;
		// gán lastplayer
		game.lastPlayer = this;
		//them bai da danh vao list
		gsDummy.baitrenban.Add (card);
		// gan lastCard, 
		// tuy nhien khi vtable kho xac dinh dc lastcard.
		// hien tai chua can dung den lastCard
		Debug.Log ("danh" + card.encode_dummy ());
		// dừng đếm giờ mình
		this.stopCountDown ();
		// đếm giờ người kế tiếp
		game.getPlayer (nn).onTurnDummy ();
		//kiem tra co hien thi goi y an bai khong

		// them action card.
		card.rectTransform.SetAsLastSibling ();
		card.rectTransform.GetComponent<Button> ().onClick.RemoveAllListeners ();
		card.rectTransform.GetComponent<Button> ().onClick.AddListener (delegate() {
			if(((GameDummy)game).cardInAutoSelectModeHa){
				game.thisPlayer.autoselectphom_dummy(card);
			} else if(((GameDummy)game).cardInAutoSelectModeGui){
				game.thisPlayer.autoselectgui_dummy(card);
			} else {
				card.isSelected = !card.isSelected;
				float delta_y = 0f;
				if (card.isSelected) {
					delta_y = 12f;
				}
	//			float x = GameApplication.game.thisPlayer.getInHandCardsPos(this);
				float y = 72 + delta_y;
	//			LeanTween.moveLocalX(rectTransform.gameObject, x, 0.3f).setEase(LeanTweenType.easeOutQuart);
				LeanTween.moveLocalY (card.rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);
			}
		});

		// hieu ung an diem
		int diemtruoc = diem_Dummy;
		int diemsau = diem_Dummy + M;
		hieu_ung_an_diem_dummy (diemtruoc, diemsau, AT:13);

		SoundManager.instance.playDanhbai();
	}

	public virtual void bocbaiDummy (Card card, bool goiyU)
	{
		if (gameScene is GameSceneDummy) {
			GameSceneDummy gamescene = (GameSceneDummy)gameScene;
			int sobaicon = gamescene.giamsolabai ();
			if (sobaicon < 1)
				GameObject.Destroy (gamescene.bobai.gameObject);
			else
				gamescene.bobai.Find ("Text").GetComponent<Text> ().text = sobaicon.ToString ();
			
//			if(goiyan)
//				Debug.LogError("An dc do");
		}

		SoundManager.instance.play_boc ();

		stopCountDown ();
		countDown ();		
	}
	 
	public static Vector2 getVitriBaiDanhDummy (int i, int count)
	{
		Vector2 pos = new Vector2 (-260, 72); // la vi tri cay bai dau tien show ra khi chia bai
		int margin = Card.WIDTH * 3 / 5;

		return pos + new Vector2 (i * margin, 0);
	}

	public virtual void habaiDummy (List<Card> cards, int CM, int M, int AT, int DT, string NN, int NNCM, bool goiyan)
	{
		phomIndex = phomIndex + 1;

		// hieu ung an diem
		int diemtruoc = diem_Dummy;
		int diemsau = CM;
		hieu_ung_an_diem_dummy (diemtruoc, diemsau, AT);
		if (!string.IsNullOrEmpty (NN) && NNCM != 0) {
			Player player = game.getPlayer(NN);
			if(player!=null) {
				player.hieu_ung_an_diem_dummy(player.diem_Dummy, NNCM);
			}
		}

		Vector2 target1 = getVitriHaPhom_Dummy (phomIndex, 0, cards.Count);
		Vector2 target2 = getVitriHaPhom_Dummy (phomIndex, cards.Count - 1, cards.Count);

		// chay hieu ung ha bai neu co
		LeanTween.delayedCall(0.5f, delegate (object obj) {
			hieu_ung_ha_bai_dummy(AT, (target2 + target1)/2 - new Vector2(0, 10));
		});
		SoundManager.instance.play_ha ();
	}

	void hieu_ung_ha_bai_dummy(int AT, Vector2 target){
		Sprite sprite = null;
		switch (AT) {
		case 1: // anim1
			sprite = DummyRes.Instance.layladau;
			break;
		case 10: // adnim10
			sprite = DummyRes.Instance.vutladapdau;
			break;
		case 11: //anim 11
			sprite = DummyRes.Instance.vuatladapspecto;
			break;
		case 13: //anim 11
			sprite = DummyRes.Instance.vutdummy;
			break;
		}
		if(sprite == null)
			return;

		Animator anim = (Animator)GameObject.Instantiate (DummyRes.Instance.pf_anim_habai_eff);
		RectTransform rect = anim.GetComponent<RectTransform>();
		rect.SetParent(gameScene.effectLayer, false);
		rect.anchoredPosition = target;
		rect.GetComponent<Image> ().sprite = sprite;
//		anim.
		
		LeanTween.delayedCall(2.8f, delegate (object obj) {
			GameObject.Destroy(rect.gameObject);
		});
	}

	public Vector2 getDummyTextFinishPos(){
		int view_pos = game.getViewIndexOfPlayer (this);
		if(view_pos == 0) {
			return new Vector2 (0, 30);
		} else if(view_pos == 1) {
			return new Vector2 (227, -81);
		} else if(view_pos == 2) {
			return new Vector2 (227, 222);
		} else if(view_pos == 3) {
			return new Vector2 (-227, 222);
		}

		return Vector2.zero;
	}

	public int hienbaidaha_Dummy (JSONArray cardArrays)
	{
		int socay = 0;
		for (int j = 0; j < cardArrays.Count; j++) {
			JSONArray cardArray = cardArrays [j].AsArray;
			
			List<Card> phom = new List<Card>();
			++phomIndex;
			for (int i=0; i < cardArray.Count; i++) {
				int code = cardArray [i].AsInt;
				Card card = Card.decode_dummy (code);
				card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.SetParent (gameScene.cardLayer);
				card.rectTransform.localScale = new Vector3(GameSceneDummy.K_SCALE, GameSceneDummy.K_SCALE, 1f);
				
				if(code > 100){
					card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
				}
				
				Vector2 target = getVitriHaPhom_Dummy (phomIndex, i, cardArray.Count);
				card.rectTransform.anchoredPosition = target;
				
				phom.Add(card);
			}
			listphomha.Add(phom);
			socay += cardArray.Count;
		}
		
		return socay;
	}
}