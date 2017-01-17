using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;
using System.Collections.Generic;

public class GameScene : SuperScene
{
	// prefabs
	public Transform Character;
	public Transform TransformCard;
	public Transform TransformCardBackWithNumber;
	public Transform Chip;
	public Transform ChipBet;
	public Transform selectCard;

	// logic stuff
	protected Game game;

	// view stuff
	public RectTransform playerLayer;
	public RectTransform cardLayer;
	public RectTransform effectLayer;
	public RectTransform cardOnHandLayer;
	protected Text textGameInfo;
//	protected Image threeDots;
	protected Text textGameName;
	protected Button gButton;
	protected RectTransform buttonLeaveTable;
	protected RectTransform buttonInvite;

	//
	public GameSceneControl controllerControl;


	public static float thisPlayerCardInHandPosY {
		get {
			if(GameApplication.gameScene is GameSceneDummy) {
				float screenheight = 1280 * Screen.height/ (float)Screen.width;
				float y = -Game.HEIGHT * 0.42f * screenheight / 720;
				return y;
			} else {
				float screenheight = 1280 * Screen.height/ (float)Screen.width;
				float y = -Game.HEIGHT * 0.35f * screenheight / 720;
				return y;
			}
		}
	}

	// Use this for initialization
	public override void Start ()
	{
		base.Start ();
		game = GameApplication.game;

		// initialize view
		initializeView ();

		// make a reference to this Game Scene
		Debug.LogWarning ("Make a reference to the GameScene");
		GameApplication.gameScene = this;
		game.gameScene = this;

		// quan trong, lock khi nhan dc joinTable
		cubeia.unLockProcessing ();

//		if(GameApplication.DEBUG_ON)
//			GameObject.Find("EventsControl").GetComponent<EventListControl>().autoHandle();
	}

	protected virtual void initializeView ()
	{
		playerLayer = GameObject.Find ("PlayerLayer").GetComponent<RectTransform> ();
		cardLayer = GameObject.Find ("CardsLayer").GetComponent<RectTransform> ();
		effectLayer = GameObject.Find ("EffectLayer").GetComponent<RectTransform> ();
		cardOnHandLayer = GameObject.Find ("CardOnHandLayer").GetComponent<RectTransform> ();
		textGameInfo = GameObject.Find ("GameInfo").GetComponent<Text> ();
//		threeDots = GameObject.Find ("ThreeDots").GetComponent<Image>();
		buttonLeaveTable = (RectTransform)GameObject.Find ("LeaveTable").transform;
		controllerControl = GameObject.Find ("ControlLayer").GetComponent<GameSceneControl> ();
//		buttonInvite = (RectTransform)GameObject.Find ("Invite").transform;
		textGameName = GameObject.Find ("gameName").GetComponent<Text> ();
		gButton = controllerControl.btn_start;
		gButton.gameObject.SetActive (false);

		if (GameApplication.cubeia.gameId == GameType.XOCDIA||GameApplication.cubeia.gameId == GameType.CHAN) {
			textGameName.gameObject.SetActive(false);
		}
		if (GameApplication.cubeia.gameId == GameType.TIENLEN) {
			textGameName.text="Tiến Lên";
		}
		if (GameApplication.cubeia.gameId == GameType.TALA) {
			textGameName.text="Phỏm";
		}
		if (GameApplication.cubeia.gameId == GameType.BINH) {
			textGameName.text="Mậu Binh";
		}
		if (GameApplication.cubeia.gameId == GameType.SAM) {
			textGameName.text="Sâm Lốc";
		}
		if (GameApplication.cubeia.gameId == GameType.LIENG) {
			textGameName.text="Liêng";
		}
		if (GameApplication.cubeia.gameId == GameType.XITO) {
			textGameName.text="Xì Tố";
		}
		if (GameApplication.cubeia.gameId == GameType.POKER) {
			textGameName.text="Poker";
		}
		if (GameApplication.cubeia.gameId == GameType.G9K) {
			textGameName.text="9K";
		}
		if (GameApplication.cubeia.gameId == GameType.DUMMY) {
			textGameName.text="ดัมมี่";
		}

		if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
//			bgInfo.GetComponent<Image>().enabled=true;
			buttonLeaveTable.GetComponent<Image>().sprite=controllerControl.s_back_c3gold;
//			buttonLeaveTable.anchoredPosition=new Vector2(20,-10);
//			textGameInfo.rectTransform.anchoredPosition=new Vector2(115,-10);
//			bgText.GetComponent<Image>().enabled=true;
//			buttonInvite.GetComponent<Image>().sprite=controllerControl.s_invite_c3gold;
//			buttonInvite.anchoredPosition=new Vector2(-20,-10);
		}

		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			Color32 color = new Color32(1,1,1,0);
			buttonLeaveTable.GetComponent<Image>().color = color;
			//buttonChat.GetComponent<Image>().rectTransform.anchoredPosition=new Vector2(-8,0);
//			Debug.LogError(ScreenList.markThis);
//			if(ScreenList.markThis >= ScreenList.markvip){
//				controllerControl.bgControl.bg_tienlen.FindChild("Ban vip").gameObject.SetActive(true);
//			}
		}
		if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
		}
		if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
//			bgSetting.gameObject.SetActive(false);
//			textGameInfo.enabled = false;
			if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
				textGameInfo.rectTransform.anchorMax = new Vector2(0,1);
				textGameInfo.rectTransform.anchorMin = new Vector2(0,1);
				textGameInfo.rectTransform.anchoredPosition=new Vector2(150,-55);
				Color32 color = new Color32(255,255,255,255);
				textGameInfo.color = color;
			}
		}

		if(GameApplication.gameApp != GameApplication.GameApp.GTL) {
			controllerControl.bgControl.bg_xocdia.gameObject.SetActive(false);
//			controllerControl.bgControl.bg_tienlen.gameObject.SetActive(true);
		}
//		Image background = GameObject.Find ("BackgroundDT").GetComponent<Image> ();
//		background.sprite = controllerControl.bgControl.bg_tienlen;

		if (GameApplication.cubeia.gameId == GameType.G9K) {
			playerLayer.FindChild("Dealer").gameObject.SetActive(true);
			playerLayer.FindChild("Dealer").GetComponent<Animator>().enabled=false;
		}
		Character = Resources.Load ("prefabs/Character", typeof(Transform)) as Transform;
		TransformCard = Resources.Load ("prefabs/Card", typeof(Transform)) as Transform;
		TransformCardBackWithNumber = Resources.Load ("prefabs/CardBackWithNumber", typeof(Transform)) as Transform;
		Chip = Resources.Load ("prefabs/ChipImage", typeof(Transform)) as Transform;
		ChipBet = Resources.Load ("prefabs/ChipBet", typeof(Transform)) as Transform;
		selectCard = Resources.Load ("prefabs/tala/selectCard", typeof(Transform)) as Transform;



//		GameObject[] gobjs = GameObject.FindGameObjectsWithTag("TestObject");
//		foreach (GameObject gobj in gobjs) {
//			gobj.SetActive(false);
//		}

		controllerControl.xocDiaFunction.gameObject.SetActive(false);
		controllerControl.samFunction.gameObject.SetActive(false);

//		buttonInvite.onClick.AddListener(delegate {
//			showInfoDialog("clicked");
//		});
	}

	public void showInviteBox (JSONArray asArray)
	{
		controllerControl.inviteBoxControl.showPlayers(asArray);
	}

	/// <summary>
	/// call from Game
	/// </summary>

	public void updateGameConfig (bool withEffect = false)
	{
		if(withEffect) {
			char[] str = game.gameInfoToString ().ToCharArray();
			textGameInfo.text = "";
			for (int i = 0; i< str.Length; i++){
				int index = i;
				LeanTween.delayedCall(i * 0.05f, delegate(object obj) {
					textGameInfo.text += (str[index] + "");
				});
			}
		} else {
			textGameInfo.text = game.gameInfoToString ();
		}
	}

	public void showThreeDots(bool show){
//		threeDots.enabled = show;
	}

	public virtual void initializeViewOfPlayers ()
	{
		foreach (Player player in game.players) {
			// tao view cua player va dat vao gameScene
			if (player.rectTransform != null)
				continue;
			player.setTransform ((RectTransform)Instantiate (Character));
			player.rectTransform.SetParent (playerLayer, false);

			Vector2 position = game.getViewPositionOfPlayer (player);
			player.rectTransform.anchoredPosition = position;

//			LeanTween.value (player.rectTransform.gameObject, 0f, 1f, 0.3f).setEase (LeanTweenType.easeOutQuart).setOnUpdate (
//				delegate(float value) {
			// mo dan
//				player.rectTransform.
//			});
			player.updateView ();
			// udpate avatar 1 lan duy nhat
			player.updateAvatar ();
		}
	}

	public void showReadyButton ()
	{
		Debug.LogWarning ("showReadyButton");
		gButton.gameObject.SetActive (true);
		gButton.GetComponent<Image> ().sprite = controllerControl.bgControl.sprite_ready;
		gButton.onClick.RemoveAllListeners ();
		gButton.onClick.AddListener (delegate {
			cubeia.sendReadyGame ();
		});

		if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
			gButton.transform.FindChild("Text").GetComponent<Text>().text = Strings.instance.gameplay_siam_btn_sansang;
		}
	}

	public void showStartButton ()
	{
		Debug.LogWarning ("showStartButton");
		gButton.gameObject.SetActive (true);
		gButton.GetComponent<Image> ().sprite = controllerControl.bgControl.sprite_start;

		gButton.onClick.RemoveAllListeners ();
		gButton.onClick.AddListener (delegate {
			cubeia.sendStartGame ();
		});

		if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
			gButton.transform.FindChild("Text").GetComponent<Text>().text = Strings.instance.gameplay_siam_btn_batdau;
		}
	}

	public void hideGButton ()
	{
		Debug.LogWarning ("hideGButton");
		gButton.gameObject.SetActive (false);
	}

	public void disableLeaveGameButton ()
	{
		if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
			buttonLeaveTable.GetComponent<Image>().sprite=controllerControl.s_back_c3gold_invi;
			buttonLeaveTable.GetComponent<Button>().enabled=false;
		} else {
			buttonLeaveTable.gameObject.SetActive (false);
		}
	}

	public void enableLeaveGameButton (int delay = 1)
	{
		StartCoroutine(Utils.cr_runDelayed(delay,delegate {
			if(buttonLeaveTable != null){
				if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
					buttonLeaveTable.GetComponent<Image>().sprite=controllerControl.s_back_c3gold;
					buttonLeaveTable.GetComponent<Button>().enabled=true;
					if (GameApplication.cubeia.gameId == GameType.XOCDIA) {
						buttonLeaveTable.GetComponent<Image>().sprite=controllerControl.s_btn_back_3c_xd;
					}
				} else {
					buttonLeaveTable.gameObject.SetActive (true);
				}
			}
		}));
	}

	public virtual void startDealing ()
	{
		Debug.LogWarning ("start dealing");
	}

	void deleteObject (GameObject go)
	{
		GameObject.Destroy (go);
	}

	public void clearCardLayer ()
	{
		foreach (Transform child in cardLayer) {
			GameObject.Destroy (child.gameObject);
		}
		foreach (Transform child in cardOnHandLayer) {
			GameObject.Destroy (child.gameObject);
		}
		//clear other card
		if (GameApplication.cubeia.gameId == GameType.BINH) {
			foreach (Player p in game.players) {
				if (p is OtherPlayer) {
					((OtherPlayer)p).clearCardInHand_Binh ();
				}
			}
		}
	}

	public void send_leaveTable ()
	{
		cubeia.sendLeaveTable ();
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameBackClick, (float)1f, DSTFBEvent.defaultParams);
	}


}