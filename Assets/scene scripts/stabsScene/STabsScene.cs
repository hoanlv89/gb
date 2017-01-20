using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class STabsScene : SuperScene
{
	public enum STabType
	{
		XOSO,
		BANK,
		MAIL,
		FEEDBACK,
		PAYMENT,
		LEADERBOARD,
		LEADERBOARD_GAME,
		HEROBOARD,
		NEWS, 
		HELP,
		PERSONAL,
		CASHOUT,
		BONGDA,
		CHATROOM
	}
	
	// prefabs
	public Sprite bg_btn_active, bg_btn_normal;
	public Button stabsButton;

	// nho cum tabs va specific tab
	public static STabType tabsType = STabType.MAIL;
	public static int currentTabPos;


	// TODO: nho reg cac object nay voi Canvas o STabsScene
//	public GameObject btnResult, btnBet, btnIntro, btnInbox, btnCompose, btnPaymentCard, btnPaymentSMS, btnPaymentRate;
	public RectTransform stabsBtnsParent;
	public RectTransform stabsContentsParent;
	public RectTransform xs_Result, xs_Bet, xs_Intro, xs_Top, mail_Inbox, mail_Inbox_admin, mail_Compose, payment_Card, payment_SMS, payment_ATM, payment_IAP, payment_IAP_android, payment_Rate, news, rules, dieukhoan, huongdan;
	public RectTransform personal_updateInfo, personal_avatar, bank_transfer;
	public LeaderBoard leaderBoard;
	private RectTransform leaderboard_Tienlen, leaderboard_Phom, leaderboard_Xito, leaderboard_Binh, leaderboard_Sam,leaderboard_Lieng,leaderboard_Chan;
	public RectTransform cashout_thecao;
	public RectTransform cashout_vatpham;
	public RectTransform bongda_live;
	public RectTransform bongda_history;
	public RectTransform bongda_top;
	public ChatRoom chatRoom;
	RectTransform chatroom_all;
	RectTransform chatroom_game;
	RectTransform chatroom_thegioi;
	RectTransform chatroom_rieng;
    public RectTransform change_pass;
	public BetControl betControl;
    public RectTransform heroIntro;
	List<Button> btnList;
	List<RectTransform> rtList;
	public const int XS_RESULT = 0;
	public const int XS_BET = 1;
	public const int XS_INTRO = 2;
	public const int MAIL_INBOX = 0;
	public const int MAIL_COMPOSE = 1;
	public const int PAYMENT_CARD = 0;
	public const int PAYMENT_SMS = 1;
	public const int PAYMENT_RATE = 2;
	public const int NEWS = 0;
	public const int RULES = 0;
	public const int DIEUKHOAN = 1;
	public const int LEADERBOARD_NGAY = 0;
	public const int LEADERBOARD_TUAN = 1;
	public const int LEADERBOARD_THANG = 2;
	public const int LEADERBOARD_HOMQUA = 3;
	public const int LEADERBOARD_GIAITHUONG = 4;
	public const int LEADERBOARD_TIENLEN = 0;
	public const int LEADERBOARD_PHOM = 1;
	public const int LEADERBOARD_XITO = 2;
	public const int LEADERBOARD_BINH = 3;
	public const int LEADERBOARD_LIENG = 4;
	public const int LEADERBOARD_CHAN = 5;
	public const int LEADERBOARD_SAM = 6;
	public const int PERSONAL_UPDATEINFO = 0;
	public const int PERSONAL_AVATAR = 1;
	public const int BANK_GETGOLD = 0;
	public const int BANK_TRANSFER = 1;
	public const int CASHOUT_THECAO = 0;
	public const int CASHOUT_VATPHAM = 1;
	public const int BONGDA_LIVE = 0;
	public const int BONGDA_HISTORY = 1;
	public const int BONGDA_TOP = 2;
	public const int CHATROOM_TATCA = 0;
	public const int CHATROOM_GAME = 1;
	public const int CHATROOM_THEGIOI = 2;
	public const int CHATROOM_RIENG = 3;


	// Use this for initialization
	public override void Start ()
	{
		base.Start ();
		if (GameApplication.IsInitialized == false) {
			// go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}

		init ();
	}

	Button createButton (string name)
	{
		Button stabBtn = GameObject.Instantiate<Button> (stabsButton);
		stabBtn.GetComponentInChildren<Text> ().text = name;
		((RectTransform)stabBtn.transform).SetParent (stabsBtnsParent, false);
		return stabBtn;
	}

	public void init ()
	{
		foreach (RectTransform rect in stabsBtnsParent)
			Destroy (rect.gameObject);
		foreach (RectTransform rect in stabsContentsParent)
			rect.gameObject.SetActive (false);

		btnList = new List<Button> ();	
		rtList = new List<RectTransform> ();

		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong && tabsType != STabType.MAIL) {
			GameObject.Find("BtnComposeMail").SetActive(false);
		}

		if (tabsType == STabType.XOSO) {
			btnList.Add (createButton (Strings.instance.gameplay_xoso_tab_result));
			btnList.Add (createButton (Strings.instance.gameplay_xoso_tab_bet));
			btnList.Add (createButton (Strings.instance.gameplay_xoso_tab_top));
			btnList.Add (createButton (Strings.instance.gameplay_xoso_tab_intro));
			rtList.Add (xs_Result);
			rtList.Add (xs_Bet);
			rtList.Add (xs_Top);
			rtList.Add (xs_Intro);
			NameTitle.name = "Xổ Số";
		} else if (tabsType == STabType.BANK) {
			btnList.Add (createButton (Strings.instance.stabs_title_bank_get));
			rtList.Add (mail_Inbox);
			btnList.Add (createButton (Strings.instance.stabs_title_bank_transfer));
			rtList.Add (bank_transfer);
			NameTitle.name = "Ngân Hàng";
			if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				mail_Inbox.offsetMin = new Vector2 (40, 20);
				mail_Inbox.offsetMax = new Vector2 (-40, 10);
			}
		} else if (tabsType == STabType.MAIL) {
			if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox_admin));
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox_players));
				rtList.Add (mail_Inbox_admin);
				rtList.Add (mail_Inbox);
				// an compose box
				Transform composeBox = mail_Inbox.Find ("panelComposeMail");
				if (composeBox != null)
					composeBox.gameObject.SetActive (false);

//				GameObject.Find("BtnComposeMail").SetActive(true); 
				mail_Inbox.offsetMin = new Vector2 (40, 20);
				mail_Inbox.offsetMax = new Vector2 (-40, 20);
			} else {
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox));
				btnList.Add (createButton (Strings.instance.gameplay_mail_compose));
				rtList.Add (mail_Inbox);
				rtList.Add (mail_Compose);
			}
			NameTitle.name = "Hộp Thư";
		} else if (tabsType == STabType.FEEDBACK) {
			if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox_admin));
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox));
				rtList.Add (mail_Inbox_admin);
				rtList.Add (mail_Inbox);

				// hien compose box
				Transform composeBox = mail_Inbox_admin.Find ("panelComposeMail");
				if (composeBox != null) {
					composeBox.gameObject.SetActive (true);
					composeBox.GetComponent<CTComposeMail> ().EdtReceiver.text = GameApplication.admin_account;
				}

				currentTabPos = MAIL_INBOX;

				mail_Inbox.offsetMin = new Vector2 (40, 20);
				mail_Inbox.offsetMax = new Vector2 (-40, 20);
			} else {
				btnList.Add (createButton (Strings.instance.gameplay_mail_inbox));
				btnList.Add (createButton (Strings.instance.gameplay_mail_compose));
				rtList.Add (mail_Inbox);
				rtList.Add (mail_Compose);
				currentTabPos = MAIL_COMPOSE;
			}
			NameTitle.name = "Góp ý";
		} else if (tabsType == STabType.PERSONAL) {
			btnList.Add (createButton (Strings.instance.person_info));
			btnList.Add (createButton (Strings.instance.person_avatar));
			rtList.Add (personal_updateInfo);
			rtList.Add (personal_avatar);
			if (GameApplication.user.loginInfo.name != "1") {
				btnList.Add (createButton ("Đổi mật khẩu"));
				rtList.Add (change_pass);
			}
			// it nhat la game 52fun ko thay font size
			if (!GameApplication.gameApp.Equals (GameApplication.GameApp.G52Fun)) {
				foreach (Button r in btnList) {
					r.transform.FindChild ("Text").GetComponent<Text> ().fontSize = 32;
				}
			}
			if (currentTabPos > 1)
				currentTabPos = PERSONAL_UPDATEINFO;
			NameTitle.name = "Cá Nhân";
		} else if (tabsType == STabType.PAYMENT) {
			NameTitle.name = "Nạp";
			if (PaymentManager.card_enable) {
				btnList.Add (createButton (Strings.instance.gameplay_payment_card));
				rtList.Add (payment_Card);
			}
			if (PaymentManager.sms_enable) {
				btnList.Add (createButton (Strings.instance.gameplay_payment_sms));
				rtList.Add (payment_SMS);
			}

			// TODO: tam thoi chua add payment ATM vao
//			if(PaymentManager.atm_enable && string.IsNullOrEmpty(PaymentManager.url_payment_atm)){
//				btnList.Add (createButton (Strings.instance.gameplay_payment_atm));
//				rtList.Add (payment_ATM);
//			}
			if (PaymentManager.iap_ios_enable) {
				#if UNITY_IOS
				btnList.Add (createButton (Strings.instance.gameplay_payment_iap));
				rtList.Add (payment_IAP);
				#endif

				#if UNITY_ANDROID
					btnList.Add (createButton (Strings.instance.gameplay_payment_iap));
					rtList.Add (payment_IAP_android);
				#endif
			}
			if (PaymentManager.exchange_rate_enable) {
				btnList.Add (createButton (Strings.instance.gameplay_payment_rate));
				rtList.Add (payment_Rate);
			}

		} else if (tabsType == STabType.NEWS) {
			NameTitle.name = "Tin Tức";
			btnList.Add (createButton (Strings.instance.gameplay_news));
			rtList.Add (news);
		} else if (tabsType == STabType.HELP) {
			NameTitle.name = "Giúp Đỡ";
			btnList.Add (createButton (Strings.instance.gameplay_help_rules));
			rtList.Add (rules);
			btnList.Add (createButton (Strings.instance.gameplay_help_dieukhoan));
			rtList.Add (dieukhoan);
			if (PaymentManager.card_enable || PaymentManager.sms_enable || PaymentManager.atm_enable) {
				btnList.Add (createButton (Strings.instance.gameplay_help_huongdan));
				rtList.Add (huongdan);
			}
		} else if (tabsType == STabType.LEADERBOARD) {
			NameTitle.name = "Cao Thủ";
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_ngay));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_tuan));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_thang));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_homqua));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_giaithuong));
//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_lieng));
//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_chan));
			RectTransform rectLeaderBoard = leaderBoard.GetComponent<RectTransform> ();
			leaderboard_Tienlen = rectLeaderBoard;
			leaderboard_Phom = rectLeaderBoard;
			leaderboard_Xito = rectLeaderBoard;
//			leaderboard_Phom = rectLeaderBoard;
			leaderboard_Binh = rectLeaderBoard;
			leaderboard_Sam = rectLeaderBoard;
//			leaderboard_Lieng = rectLeaderBoard;
			//			leaderboard_Chan = rectLeaderBoard;
			rtList.Add (leaderboard_Tienlen);
			rtList.Add (leaderboard_Phom);
			rtList.Add (leaderboard_Xito);
			rtList.Add (leaderboard_Binh);
			rtList.Add (leaderboard_Sam);
//			rtList.Add (leaderboard_Lieng);
//			rtList.Add (leaderboard_Chan);
		} 
		//			btnList.Add (createButton ("Ngày hôm qua"));
		//			btnList.Add (createButton ("Tháng này"));
		//			btnList.Add (createButton ("Tháng trước"));
		//			btnList.Add (createButton ("Giới thiệu"));
		//			btnList.Add (createButton ("Giới thiệu"));
		else if (tabsType == STabType.HEROBOARD) {
			NameTitle.name = "Dũng sĩ";
			if (GameApplication.gameApp == GameApplication.GameApp.G52Fun)
				NameTitle.name = "Vua bài";
			
			if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				btnList.Add (createButton ("Hiện tại"));
				btnList.Add (createButton ("Hôm qua"));
				btnList.Add (createButton ("Tháng trước"));
				btnList.Add (createButton ("Giới Thiệu"));

				//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_lieng));
				//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_chan));
				RectTransform rectLeaderBoard = leaderBoard.GetComponent<RectTransform> ();
				leaderboard_Tienlen = rectLeaderBoard;
				leaderboard_Phom = rectLeaderBoard;
				leaderboard_Xito = rectLeaderBoard;
				//			leaderboard_Phom = rectLeaderBoard;
				//			leaderboard_Lieng = rectLeaderBoard;
				//			leaderboard_Chan = rectLeaderBoard;
				rtList.Add (leaderboard_Tienlen);
				rtList.Add (leaderboard_Phom);
				rtList.Add (leaderboard_Xito);
				rtList.Add (heroIntro);
			} else {
				btnList.Add (createButton ("Hôm Qua"));
				btnList.Add (createButton ("Tuần"));
				btnList.Add (createButton ("Tháng"));
				btnList.Add (createButton ("Giải Tuần"));
				btnList.Add (createButton ("Giải Tháng"));
				btnList.Add (createButton ("Giới Thiệu"));

				//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_lieng));
				//			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_chan));
				RectTransform rectLeaderBoard = leaderBoard.GetComponent<RectTransform> ();
				leaderboard_Tienlen = rectLeaderBoard;
				leaderboard_Phom = rectLeaderBoard;
				leaderboard_Xito = rectLeaderBoard;
				leaderboard_Sam = rectLeaderBoard;
				leaderboard_Chan = rectLeaderBoard;
				//			leaderboard_Chan = rectLeaderBoard;
				rtList.Add (leaderboard_Tienlen);
				rtList.Add (leaderboard_Phom);
				rtList.Add (leaderboard_Xito);
				rtList.Add (leaderboard_Sam);
				rtList.Add (leaderboard_Chan);
				rtList.Add (heroIntro);
			}
		} 
		else if (tabsType == STabType.CASHOUT) {
			NameTitle.name = "Đổi Thưởng";
			btnList.Add (createButton (Strings.instance.cashout_thecao));
			btnList.Add (createButton (Strings.instance.cashout_vatpham));
			rtList.Add (cashout_thecao);
			rtList.Add (cashout_vatpham);
			currentTabPos = CASHOUT_THECAO;
		}else if (tabsType == STabType.BONGDA) {
			NameTitle.name = "Bóng Đá";
			btnList.Add (createButton (Strings.instance.bongda_live));
			btnList.Add (createButton (Strings.instance.bongda_history));
			btnList.Add (createButton (Strings.instance.bongda_top));
			rtList.Add (bongda_live);
			rtList.Add (bongda_history);
			rtList.Add (bongda_top);
			currentTabPos = BONGDA_LIVE;
		}else if (tabsType == STabType.CHATROOM) {
			NameTitle.name = "Chat";
			btnList.Add (createButton (Strings.instance.chatroom_all));
			btnList.Add (createButton (Strings.instance.chatroom_game));
			btnList.Add (createButton (Strings.instance.chatroom_thegioi));
			btnList.Add (createButton (Strings.instance.chatroom_rieng));
			RectTransform rectLeaderBoard = chatRoom.GetComponent<RectTransform>();
			chatroom_all = rectLeaderBoard;
			chatroom_game = rectLeaderBoard;
			chatroom_thegioi = rectLeaderBoard;
			chatroom_rieng = rectLeaderBoard;
			rtList.Add (chatroom_all);
			rtList.Add (chatroom_game);
			rtList.Add (chatroom_thegioi);
			rtList.Add (chatroom_rieng);
			currentTabPos = CHATROOM_TATCA;
		} else if (tabsType == STabType.LEADERBOARD_GAME) {
			NameTitle.name = "Cao Thủ";

//			public const int LEADERBOARD_TIENLEN = 0;
//			public const int LEADERBOARD_PHOM = 1;
//			public const int LEADERBOARD_XITO = 2;
//			public const int LEADERBOARD_BINH = 3;
//			public const int LEADERBOARD_LIENG = 4;
//			public const int LEADERBOARD_CHAN = 5;
//			public const int LEADERBOARD_SAM = 6;

			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_tienlen));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_phom));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_xito));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_binh));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_lieng));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_chan));
			btnList.Add (createButton (Strings.instance.gameplay_leaderboard_sam));
			RectTransform rectLeaderBoard = leaderBoard.GetComponent<RectTransform>();
			leaderboard_Tienlen = rectLeaderBoard;
			leaderboard_Phom = rectLeaderBoard;
			leaderboard_Xito = rectLeaderBoard;
			leaderboard_Binh = rectLeaderBoard;
			leaderboard_Lieng = rectLeaderBoard;
			leaderboard_Chan = rectLeaderBoard;
			leaderboard_Sam = rectLeaderBoard;
			rtList.Add (leaderboard_Tienlen);
			rtList.Add (leaderboard_Phom);
			rtList.Add (leaderboard_Xito);
			rtList.Add (leaderboard_Binh);
			rtList.Add (leaderboard_Lieng);
			rtList.Add (leaderboard_Chan);
			rtList.Add (leaderboard_Sam);
		}
		bindBtnsWithContents (btnList, rtList);

		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			// neu chi co 1 tabs -> an no di.
			if(btnList.Count < 2)
			{
				GameObject.Destroy(btnList[0].gameObject);
				GameObject.Find("image_line").SetActive(false);
			}
		}
		// default
		selectTab (currentTabPos);

		// truong hop dac biet:
		if (tabsType == STabType.FEEDBACK){
			changeToComposeMailTab(GameApplication.admin_account);
		}
	}

	void bindBtnsWithContents (List<Button> btnList, List<RectTransform> rtList)
	{
		int size = Mathf.Min (btnList.Count, rtList.Count);
		// duy nhat thiet ke cua dau truong phai thu nho cac title lai, 3C khong can => update: gio thi can roi
		if(size >= 6){
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
				for(int i =0; i<size; i++){
					LayoutElement layoutElement = btnList[i].GetComponent<LayoutElement>();
					layoutElement.preferredHeight = 70f;
					layoutElement.preferredWidth = 170f;
					btnList [i].GetComponentInChildren<Text> ().fontSize = 30;
				}
			}
			if(GameApplication.gameApp == GameApplication.GameApp.G3C){
				for(int i =0; i<size; i++){
					LayoutElement layoutElement = btnList[i].GetComponent<LayoutElement>();
					layoutElement.preferredHeight = 92f;
					layoutElement.preferredWidth = 184f;
					btnList [i].GetComponentInChildren<Text> ().fontSize = 30;
				}
			}

		}
		for (int i = 0; i< size; i++) {
			int pos = i;
			btnList [i].GetComponent<Button> ().onClick.AddListener (delegate {
				SoundManager.instance.playButtonClicked ();
				selectTab (pos);
			});
			btnList [i].gameObject.SetActive (true);
			rtList [i].gameObject.SetActive (false);
		}
	}

	public void selectTab (int pos)
	{

		for (int i = 0; i< rtList.Count; i++) {
			btnList [i].GetComponent<Image> ().sprite = bg_btn_normal;
			rtList [i].gameObject.SetActive (false);
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				btnList [i].GetComponentInChildren<Text>().color = new Color32(255,255,255,255);
			}
		}
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			btnList [pos].GetComponentInChildren<Text>().color = new Color32(255,255,255,255);
		}
		btnList [pos].GetComponent<Image> ().sprite = bg_btn_active;
		rtList [pos].gameObject.SetActive (true);
		rtList [pos].anchoredPosition = new Vector2 (0, rtList [pos].anchoredPosition.y);
		currentTabPos = pos;
			
			
		if(tabsType == STabType.LEADERBOARD && leaderBoard != null){
			Debug.Log("tabsType == STabType.LEADERBOARD && leaderBoard != null");
			if (currentTabPos == STabsScene.LEADERBOARD_NGAY) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_ngay(cubeia.gameId));
			} else if (currentTabPos == STabsScene.LEADERBOARD_TUAN) {
			leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_tuan(cubeia.gameId));
			} else if (currentTabPos == STabsScene.LEADERBOARD_THANG) {
			leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(cubeia.gameId));
			} else if (currentTabPos == STabsScene.LEADERBOARD_HOMQUA) {
			leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_homqua(cubeia.gameId));
			} else if (currentTabPos == STabsScene.LEADERBOARD_GIAITHUONG) {
			leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_giaithuong(cubeia.gameId));
			} else {
				Debug.Log("Tab no support");
			}
		}

		if(GameApplication.gameApp ==  GameApplication.GameApp.DauTruong &&
			tabsType == STabType.HEROBOARD && leaderBoard != null){
			Debug.Log("tabsType == STabType.HEROBOARD && leaderBoard != null");
			if (currentTabPos == 0) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_homqua); // homnay
			} else if (currentTabPos == 1) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_thang);// hom qua
			} else if (currentTabPos == 2) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_giaituan); // giai thang
			} else {
				Debug.Log("Tab no support");
			}
		} else if(tabsType == STabType.HEROBOARD && leaderBoard != null){
			Debug.Log("tabsType == STabType.HEROBOARD && leaderBoard != null");
			if (currentTabPos == 0) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_homqua);
			} else if (currentTabPos == 1) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_tuan);
			} else if (currentTabPos == 2) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_thang);
			} else if (currentTabPos == 3) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_giaituan);
			} else if (currentTabPos == 4) {
				leaderBoard.getLeaderBoard (GameApplication.url_dungsi_giaithang);
			}  else {
				Debug.Log("Tab no support");
			}
		}

		if(tabsType == STabType.LEADERBOARD_GAME && leaderBoard != null){
			Debug.Log("tabsType == STabType.LEADERBOARD_GAME && leaderBoard != null");
			if (currentTabPos == STabsScene.LEADERBOARD_TIENLEN) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.TIENLEN));
			} else if (currentTabPos == STabsScene.LEADERBOARD_PHOM) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.TALA));
			} else if (currentTabPos == STabsScene.LEADERBOARD_XITO) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.XITO));
			} else if (currentTabPos == STabsScene.LEADERBOARD_CHAN) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.CHAN));
			} else if (currentTabPos == STabsScene.LEADERBOARD_BINH) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.BINH));
			}else if (currentTabPos == STabsScene.LEADERBOARD_LIENG) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.LIENG));
			} else if (currentTabPos == STabsScene.LEADERBOARD_SAM) {
				leaderBoard.getLeaderBoard (GameApplication.get_url_caothu_thang(GameType.SAM));
			} else {
				Debug.Log("Tab no support");
			}
		}
		
		if (tabsType == STabType.CHATROOM && chatRoom != null) {
			chatRoom.init();
		}

	}

	public void refreshMail ()
	{
		// fill data tu Mail.mails
		if(mail_Inbox.gameObject.activeSelf) {
			CTInbox ctInbox = mail_Inbox.GetComponent<CTInbox> ();
			ctInbox.refreshMail ();
		}

		if(mail_Inbox_admin.gameObject.activeSelf) {
			CTInbox ctInbox = mail_Inbox_admin.GetComponent<CTInbox> ();
			ctInbox.refreshMail ();
		}
	}

	public void refreshChat (int type)
	{
		if(chatroom_game == null)
			return;
		// fill data tu Mail.mails
		if (type == 2) {
			ChatRoom ctInbox = chatroom_game.GetComponent<ChatRoom> ();
			ctInbox.init ();
		}
		if (type == 4) {
			ChatRoom ctInbox = chatroom_rieng.GetComponent<ChatRoom> ();
			ctInbox.init ();
		}
		if (type == 1) {
			ChatRoom ctInbox = chatroom_thegioi.GetComponent<ChatRoom> ();
			ctInbox.init ();
		}
	}

	public void updateListMailWhenGetGoldOK(){
		CTInbox ctInbox = mail_Inbox.GetComponent<CTInbox> ();
		ctInbox.updateViewDeleteReadingMail();
	}

	public void changeToComposeMailTab (string receiver)
	{
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
			// da reg o GUI

			CTComposeMail ctComposeMail = mail_Inbox.Find("panelComposeMail").GetComponent<CTComposeMail> ();
			ctComposeMail.EdtReceiver.text = receiver;


			CTComposeMail ctComposeMailAd = mail_Inbox_admin.Find("panelComposeMail").GetComponent<CTComposeMail> ();
			ctComposeMailAd.EdtReceiver.text = receiver;
		} else {
			selectTab (MAIL_COMPOSE);
			CTComposeMail ctComposeMail = mail_Compose.GetComponent<CTComposeMail> ();
			ctComposeMail.EdtReceiver.text = receiver;
		}
	}

	public void showIAPItems(){
		PaymentIAP_IOS paymentIAPcomponent = payment_IAP.GetComponent<PaymentIAP_IOS> ();
		paymentIAPcomponent.showItems ();
	}

	public void backToHome ()
	{
		GameApplication.cubeia.sendUAG();
		SoundManager.instance.playButtonClicked ();
		if (previousScene != null && previousScene!= GameApplication.STABSSCENE){
			Application.LoadLevel (previousScene);
			Tracking.changeScene (previousScene);
		}
		else if(previousScene== "TabsScene52") {
			Application.LoadLevel (GameApplication.LOBBYSCENE);
			Tracking.changeScene (GameApplication.LOBBYSCENE);
		}
		else{
			Application.LoadLevel (GameApplication.HOMESCENE);
			Tracking.changeScene (GameApplication.HOMESCENE);
		}

		previousScene = GameApplication.STABSSCENE;
	}

	public void closeDialogDatcuocbongda(){
		BongDaLive live = bongda_live.GetComponent<BongDaLive> ();
		live.bongdaDatcuoc.gameObject.SetActive (false);
	}
}
