using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Threading;
using SimpleJSON;
using System.Collections.Generic;
using System;
using Facebook.Unity;

public class HomeScene : SuperScene, IUpdateUserInfo
{
	[SerializeField]
	Text
		username, balance, vip;
	[SerializeField]
	Image
		avatar;
	[SerializeField]
	Scrollbar
		scrollbar;
//	public GameObject inviteFBFriendsPanel;
	public GameObject doithuongButton, nganhangButton;
	public Sprite sprite_channel_vip, sprite_channel_public;
	public RectTransform ChannelChosser;
//	public DailyBonusNew dailyBonus;
	public RegFBUserName regFBUserName;
	public GameListControl gameListControl;
//	public GameListControlDummy gameListControlThaiLand;
	//public RectTransform bgCountMsg;

	public FBFriends fbFriends;
	public Image image; // animator game Thai
	public RuntimeAnimatorController emos;

	public Sprite background_3c;
	public RectTransform topPannel;

	// Use this for initialization
	public override void Start ()
	{
		if (GameApplication.IsInitialized == false) {
			// go to the login scene
			Application.LoadLevel (GameApplication.LOGINSCENE);
			return;
		}
		base.Start ();

		scrollbar.value = 0f;
		// reset game object
		GameApplication.game = null;
		updateInfo ();
		updateAvatar ();

		if (!checkForChangeName ()) {
			if (!showDailyBonus ()) {
				// check Mail
				checkMail ();
			}
		}

		// kiem tra xem co phai doi ten hay khong

		if (GameApplication.gameApp != GameApplication.GameApp.GTL) {
			gameListControl.clearAll();
			for(int i = 0; i < OperatorGame.games.Count; i++){
				int gameID = OperatorGame.games[i];
				if(OperatorGame.disableGames.Contains(gameID) == false)
					gameListControl.addGameItem(gameID);
				else Debug.LogWarning("disable game: " + gameID);
			}
		}
		if (GameApplication.gameApp == GameApplication.GameApp.GTL) {
//			gameListControl.addGameItem (GameType.SLOTS);
			gameListControl.clearAll();
			gameListControl.addGameItem (GameType.G9K);
			gameListControl.addGameItem (GameType.DUMMY);
			gameListControl.addGameItem (GameType.POKER);
			gameListControl.addGameItem (GameType.ROULETTE);
			gameListControl.addGameItem (GameType.XOCDIA);
			Animator animator = image.rectTransform.GetComponent<Animator> ();
			animator.enabled = true;
			image.gameObject.SetActive(true);
			animator.runtimeAnimatorController=emos;
		}
		/*
		if (GameApplication.DEBUG_ON) {
			//			gameListControl.addGameItem (GameType.SLOTS);
			gameListControl.clearAll();
			gameListControl.addGameItem (GameType.XITO);
//			gameListControl.addGameItem (GameType.DUMMY);
			gameListControl.addGameItem (GameType.POKER);
			gameListControl.addGameItem (GameType.ROULETTE);
			gameListControl.addGameItem (GameType.XOCDIA);
		}*/

		if(OperatorGame.disableGames.Contains(GameType.GAME_DOITHUONG)){
			
			if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
				doithuongButton.GetComponent<RectTransform> ().FindChild ("Text").GetComponent<Text> ().text = "52 FUN";
			} else if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
				// TODO: doan nay hoi vo ly
				doithuongButton.SetActive (true);
				doithuongButton.GetComponent<RectTransform> ().GetComponent<Image> ().sprite = background_3c;
				doithuongButton.GetComponent<RectTransform> ().GetComponent<Image> ().type = Image.Type.Simple;
				doithuongButton.GetComponent<RectTransform> ().FindChild ("Doithuong").gameObject.SetActive (false);
			} else if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				doithuongButton.SetActive (false);
			}
		}

		if(GameApplication.gameApp==GameApplication.GameApp.GTL){
			doithuongButton.SetActive(true);
		}

		if(OperatorGame.disableGames.Contains(GameType.DUNGSI)){
			GameObject obj = GameObject.Find("Hero");
			if(obj != null){
				obj.SetActive(false);
//				obj.GetComponent<Button>().onClick.RemoveAllListeners();
//				obj.GetComponent<Button>().onClick.AddListener(delegate() {
//					showInfoDialog(Strings.instance.common_comming_soon);
//				});
			}
		}

		if(OperatorGame.disableGames.Contains(GameType.NEWS)){
			GameObject obj = GameObject.Find("NewsDT_");
			if(obj != null){
				obj.SetActive(false);
			}
		}

		if(OperatorGame.disableGames.Contains(GameType.BANK_FUNCTION)){
			if(topPannel != null)
				topPannel.gameObject.SetActive(false);
		}

		// kiem tra co hien moi ban ko
		if(SceneControl.showInviteFriendOnStart){
//			if(fbFriends!= null){
//				fbFriends.gameObject.SetActive(true);
//				SceneControl.showInviteFriendOnStart = false;
//			} else {
			SceneControl.showInviteFriendOnStart = false;
			JSONClass data = new JSONClass();
			data["from"] = "" + GameApplication.user.id;

			FB.AppRequest (
				GameApplication.gameName + " đánh bài đổi thưởng cực hấp dẫn, hot nhất hiện nay!",
				null,
				null,
				null,
				default(int?),
				data.ToString(),
				"Cùng chơi " + GameApplication.gameName + " với mình nhé!",
				appRequestCallback
			);
//			}
		}

//		if(GameApplication.gameApp==GameApplication.GameApp.DauTruong){
//			gameListControl.addGameItem (GameType.ROULETTE);
//		}

//		 kiem tra loi moi FB va xac nhan loi moi
		if (FB.IsLoggedIn && GameApplication.user.loginInfo.name.Equals("1")) {
			getFBRequestIds();
			checkFBRequest();
//			checkUserInFBGroup();
		}
	}

	protected void getFBRequestIds() {
		/* make the API call */
		FB.API ("/me/apprequests", HttpMethod.GET, delegate(IGraphResult result) {
			Debug.Log ("Exec FB.API");
			if (result.Error != null) {
				Debug.Log ("Problem with /me/apprequests " + result.Error);
			} else {
				Debug.Log ("apprequests: "+ result.RawResult);
				JSONClass obj = JSONClass.Parse(result.RawResult).AsObject;
				JSONArray jarr = obj["data"].AsArray;
				string from = "";
				for (int i = 0; i < jarr.Count; i++) {
					var item = jarr[i];
					string appID = item["application"]["id"];
					if (appID.Equals(FB.AppId)) {
						var jitem = JSONClass.Parse(item["data"]);
						if(jitem == null) {
							from = item["data"];
						} else {
							from = jitem["from"];
						}
						if (from != null && from.Length > 0) {
							sendInvitesToCubeia(from);
							string requestID = item["id"];
							deleteTheRequest(requestID);
							break;
						}
					}
				}
			}
		});
	}

	protected void sendInvitesToCubeia(string invites) {
		JSONClass obj = new JSONClass();
		obj["evt"] = "inviteF";
		obj["data"] = invites;

		GameApplication.cubeia.sendService(obj);
	}
	
	protected void checkFBRequest() {
		// Check if the user is authenticated and
		// an incoming notification needs handling
		if (FB.IsLoggedIn && FBRequest.fbrequestId != null) {
			showToast("Incoming request");
			getRequestData(FBRequest.fbrequestId);
			FBRequest.fbrequestId = null;
		}
	}
	
	private void getRequestData(string inRequestId) {
		// Create a new request for an HTTP GET with the
		// request ID as the Graph path.
		FB.API (inRequestId, HttpMethod.GET, delegate(IGraphResult result) {
			if (result.Error != null) {
				Debug.Log ("Problem with getRequestData " + inRequestId);
			} else {
//				GraphObject graphObject = result.getGraphObject();
//				FacebookRequestError error = response.getError();
//				// Default message
//				String message = "Incoming request";
//				if (graphObject != null) {
//					// Check if there is extra data
//					if (graphObject.getProperty("data") != null) {
//						try {
//							// Get the data, parse info to get the key/value info
//							JSONObject dataObject = new JSONObject((String) graphObject.getProperty("data"));
//							String lqid = dataObject.getString("lqid");
//							JSONObject fromObject = (JSONObject) graphObject.getProperty("from");
//							String sender = fromObject.getString("name");
//							String title = sender + " sent you a gift";
//							// Create the text for the alert based on the sender
//							// and the data
//							message = title + "\n\n" + "lqid: " + lqid;
//							showInfoDialog(message);
//							System.out.println(message);
//						} catch (JSONException e) {
//							message = "Error getting request info";
//						}
//					} else if (error != null) {
//						message = "Error getting request info";
//					}
//				}
//				showLongToast(message);
			}
		});
	}
	
	public void deleteTheRequest(string requestID) {
		/* make the API call */
		FB.API ("/"+requestID, HttpMethod.DELETE, delegate(IGraphResult result) {
			if (result.Error != null) {
				Debug.Log ("Problem with deleteTheRequest " + result.Error);
		}});
	}

	bool checkForChangeName ()
	{
		regFBUserName.gameObject.SetActive (GameApplication.showRegName);
		return GameApplication.showRegName;
	}

	public void updateInfo ()
	{
		User user = GameApplication.user;
		this.username.text = user.displayName;
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			this.balance.text = Utils.formatNumber (user.ag) + " Gold";
			this.vip.text = "VIP" + (user.vip) / 1; 
		} else {
			this.vip.text = "VIP" + user.vip; 
			this.balance.text = Utils.formatNumber (user.ag);
		}
		dismissWaittingDialog ();
//		if (User.cmsg > 0) {
//			bgCountMsg.gameObject.SetActive(true);
//			bgCountMsg.Find("Text").GetComponent<Text>().text=""+User.cmsg;
//		}
	}

	public void updateAvatar ()
	{
		Debug.Log("updateAvatar");
		User user = GameApplication.user;
		if (user.avatarSprite != null){
			avatar.sprite = user.avatarSprite;
		} else {
			loadImage (GameApplication.user.avatarUrl, avatar, delegate(Sprite sprite) {
				GameApplication.user.avatarSprite = sprite;
			});
		}
	}

	public void checkFBisLoggedIn(){
		showInfoDialog(GameApplication.user.avatarUrl+"\n"+(FB.IsLoggedIn?"FB is logged in":"FB is not logged in"));
	}

	public void loginToGame (int gameID)
	{
//		gameID = GameType.G9K;
		Debug.Log("Click Game Icon: "+ gameID);
		if (gameID == GameType.ROULETTE) {
			// TODO: tam thoi bo roulette
//			showInfoDialog(Strings.instance.common_comming_soon);
			previousScene = Application.loadedLevelName;
			LevelManager.Load (GameApplication.ROULETTE);
		} else if (gameID == GameType.SLOTS) {
			showInfoDialog(Strings.instance.common_comming_soon);
//			Application.LoadLevel (GameApplication.SLOTSSCENE);
		} else if (gameID == GameType.XOSO) {
			STabsScene.tabsType = STabsScene.STabType.XOSO;
			STabsScene.currentTabPos = STabsScene.XS_BET;
			gotoStabsScene ();
			Tracking.changeScene("XOSO",true);
		} else if (gameID == GameType.BANK_DAUTRUONG) {
			gotoBankScreen();
		} else if (gameID == GameType.BONGDA) {
			STabsScene.tabsType = STabsScene.STabType.BONGDA;
			STabsScene.currentTabPos = STabsScene.BONGDA_LIVE;
			gotoStabsScene ();
			Tracking.changeScene("BONGDA",true);
		} else {
			// ngat ket noi thoi diem nay lam phat sinh mot khoang thoi gian cubeia.isConnected == false
			// => chuong trinh tu dong ket noi lai.
			//			return;
			
			//			if(GameApplication.DEBUG_ON){
			//				cubeia.gameId = gameID;
			//				cubeia.sendSelectGame(gameID);
			//				return;
			//			}
			
			User user = GameApplication.user;
			user.loginInfo.gameID = gameID;
			
			//TODO: phai lay lai IP
			// dosomthing with user.loginInfo

			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityGameClick, (float)1f, DSTFBEvent.defaultParams);
			
			getIPToLogin(user.loginInfo, delegate (bool selectG_only){
				// luu y phai dat ten bien _user khac / hoac khong who knows?
				//				User user = GameApplication.user;
				if(selectG_only && cubeia != null && cubeia.isConnected()){
					cubeia.gameId = user.loginInfo.gameID;
					cubeia.sendSelectGame();
					showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
						cubeia.disconnect ();
						cubeia = new CubeiaClient ();
						cubeia.login (user.loginInfo);
					});
				} else {
					if (cubeia != null)
						cubeia.disconnect ();
					cubeia = new CubeiaClient ();
					cubeia.login (user.loginInfo);
					showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
						cubeia.disconnect ();
						cubeia = new CubeiaClient ();
						cubeia.login (user.loginInfo);
					});
				}
			});
		}
	}

	public void exit ()
	{
		SoundManager.instance.playButtonClicked ();
		if (Application.loadedLevelName.Equals (GameApplication.HOMESCENE)) {
			GameApplication.cubeia.disconnect ();
			GameApplication.cubeia = null;
			previousScene = Application.loadedLevelName;
			Application.LoadLevel (GameApplication.LOGINSCENE);
		}
	}

	/////////////////////////////

	public bool showDailyBonus ()
	{
		Debug.Log ("check show login");
//		User.pd = 1500;  
//		if(User.pd > 0){
//			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
		// tru khi dang hien dat ten
//		if (GameApplication.showRegName == false && DailyBonusNew.data != null) {
//			dailyBonus.gameObject.SetActive (true);
//			dailyBonus.transform.SetAsLastSibling ();
//			return true;
//		}

		return false;
//		}
//		}
	}

 	public void showChannelChooser (List<IPConfig> availableList, int gameID, Action<bool> onFinish)
	{
		ChannelChosser.gameObject.SetActive(true);
		RectTransform content = ChannelChosser.Find("ScrollView").Find("Content").GetComponent<RectTransform>();
		foreach(RectTransform item in content){
			Destroy(item.gameObject);
		}

		for (int i = 0; i < availableList.Count; i++) {
			IPConfig ipconfig = availableList[i];

			RectTransform rect = new GameObject ("ChannelItem").AddComponent<RectTransform>();
			Image img = rect.gameObject.AddComponent <Image>();
			Button btn = rect.gameObject.AddComponent <Button>();
			LayoutElement lo = rect.gameObject.AddComponent <LayoutElement>();

			lo.preferredWidth = 250;
			lo.preferredHeight = 220;

			rect.SetParent(content, false);
//			rect.anchoredPosition = new Vector2(230, 220);

			// tv.setText(availableList.get(i).name);
			if (availableList[i].name.Equals("vip", System.StringComparison.CurrentCultureIgnoreCase))
				img.sprite = sprite_channel_vip;
			else
				img.sprite = sprite_channel_public;

			btn.onClick.AddListener(delegate {
				bool pass = LoadBalancer.instance.checkConditionLogin(ipconfig, GameApplication.user.ag);
				if (pass) {
					GameApplication.user.loginInfo.host = ipconfig.ip;
					LoadBalancer.inVIPChannel = ipconfig.isVIP;
					onFinish(false);
				}
				ChannelChosser.gameObject.SetActive(false);
			});
		}
	}

	public void showInviteFBFriends() {
//		if(GameApplication.hasInvitableFriends && fbFriends!= null){
//			fbFriends.gameObject.SetActive(true);
//		} else {
			JSONClass data = new JSONClass();
			data["from"] = "" + GameApplication.user.id;

			FB.AppRequest (
				GameApplication.gameName + " đánh bài đổi thưởng cực hấp dẫn, hot nhất hiện nay!",
				null,
				null,
				null,
				default(int?),
				data.ToString(),
				"Cùng chơi " + GameApplication.gameName + " với mình nhé!",
				appRequestCallback
			);
//		}
	}

	private void appRequestCallback (IAppRequestResult result)
	{                                                                                                                              
		if (result != null) {   
			Debug.Log ("FBResult: " + result.RawResult);
			//			var responseObject = Json.Deserialize(result.Text) as Dictionary<string, object>;          
			var jobj = JSONNode.Parse (result.RawResult);
			//			object obj = 0;                                                                                                        
			if (jobj ["cancelled"].AsBool == true) {                                                                                                                      
				Debug.Log ("Request cancelled");
			} else if (jobj ["to"].AsArray.Count >= 1) {                
				Debug.Log ("Request sent");
				string request = jobj ["request"];
				JSONArray to = jobj ["to"].AsArray;
			}                                                                                                                      
		}                                                                                                                          
	}

	public void gotoRo(){
		previousScene = Application.loadedLevelName;
		LevelManager.Load (GameApplication.ROULETTE);
	}

	public void ShareCallback (IShareResult result) {
		if (result.Cancelled || !String.IsNullOrEmpty(result.Error)) {
			Debug.Log("ShareLink Error: "+result.Error);
		} else if (!String.IsNullOrEmpty(result.PostId)) {
			// Print post identifier of the shared content
			Debug.Log(result.PostId);
		} else {
			// Share succeeded without postID
			Debug.Log("ShareLink success!");
		}
		SuperScene.instance.checkMail();
	}
}
