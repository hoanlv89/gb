using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Facebook.Unity;
using BestHTTP.SocketIO;

public class SuperScene : MonoBehaviour
{
	public static string previousScene;
	public static SuperScene instance;
	private CubeiaClient _cubeia;

	public CubeiaClient cubeia {
		get {
			return _cubeia;
		}
		set { 
			_cubeia = value;
		}
	}

	public Canvas mainCanvas;

	// logic stuff
	Toast toastInstance = null;
	SDialog dialogInstance = null;
	IEnumerator toastIEnumerator = null;
	WaitingDialog waittingDialog = null;
	NotificationCenter notificationCenter = null;
	public DebugPanel debugPanel = null;
	private const bool allowCarrierDataNetwork = true;
	private bool showLostInternetConnection = false;
	BannerScene bannerScene = null;
	// connection var
	private const string pingAddress = "8.8.8.8"; // Google Public DNS server
	private const float waitingTime = 35.0f;
	private Ping ping;
	private float pingStartTime;

	private bool _onCheckingConnection = false;

	public bool onCheckingConnection {
		get {
			return _onCheckingConnection;
		}
		set {
			if (GameApplication.DEBUG_ON)
				Debug.LogWarning ("set onCheckingConnection " + value);
			_onCheckingConnection = value;
		}
	}

	// Use this for initialization
	public virtual void Start ()
	{
		if (GameApplication.DEBUG_ON)
			Debug.LogWarning ("Start a new Scene: " + GetType ().ToString ());
		onCheckingConnection = false;

		instance = this;
		cubeia = GameApplication.cubeia;
		mainCanvas = GameObject.FindGameObjectWithTag ("MainCanvas").GetComponent<Canvas> ();
		loadPrefabs ();

		Screen.sleepTimeout = SleepTimeout.NeverSleep;

		if(ping == null && this is LoginScene == false) checkPing ();

		Debug.Log ("FB likes step 0");
		if ((this is HomeScene || this is LobbyScene) && GameApplication.IsInitialized) {
//			if(!string.IsNullOrEmpty(GameApplication.installtrackinglink) &&
//			   GameApplication.user!= null &&
//			   GameApplication.user.id!= null &&
//			   GameApplication.user.name!= null) {
//				JSONArray parameters = new JSONArray();
//				parameters[-1] = HTTPPOSTParam.createParam("userid", GameApplication.user.id);
//				parameters[-1] = HTTPPOSTParam.createParam("username", GameApplication.user.name);
//				parameters[-1] = HTTPPOSTParam.createParam("gcmid", "");
//				parameters[-1] = HTTPPOSTParam.createParam("apnid", (GameApplication.apnDeviceToken == null)?"":GameApplication.apnDeviceToken);
//				parameters[-1] = HTTPPOSTParam.createParam("deviceID", GameApplication.getUniqueIdentifier());
//				parameters[-1] = HTTPPOSTParam.createParam("version", GameApplication.versionname);
//				parameters[-1] = HTTPPOSTParam.createParam("bundleID", GameApplication.bundleID);
//				parameters[-1] = HTTPPOSTParam.createParam("os", "" + GameApplication.iOSVersion);
//				parameters[-1] = HTTPPOSTParam.createParam("appID", "3C_ios_unity");
//
//				Utils.ExeOneStringParam onSuccess = delegate(string result) {
//					Debug.Log("result: "+result);
//					JSONClass jobj = JSONNode.Parse (result).AsObject;
//					int id = jobj["id"].AsInt;
//					string img_url = jobj["imgurl"];
//					if(img_url != null && img_url.Contains ("/") && jobj["showpopup"].AsBool) {
//						DSTAd ad = (DSTAd)GameObject.Instantiate(DSTTrackingSys.instance.pf_DSTAd);
//						ad.transform.SetParent(mainCanvas.transform, false);
//						ad.btnText.text = jobj["buttontext"];
//						if(jobj["close"].AsBool == false) {
//							ad.close.gameObject.SetActive(false);
//						}
//
//						loadImage (img_url, ad.img);
//
//						ad.close.onClick.RemoveAllListeners ();
//						ad.btn.onClick.RemoveAllListeners ();
//
//						ad.close.onClick.AddListener(delegate() {
//							GameObject.Destroy(ad.gameObject);
//							doHTTPRequest(jobj["closeurl"],delegate(string sresult) {
//
//							}, delegate() {
//
//							});
//						});
//						ad.btn.onClick.AddListener (delegate() {
//							GameObject.Destroy(ad.gameObject);
//							Application.OpenURL (jobj["clickurl"]);
//						});
//					}
//				};
//				Utils.Executor onFailed = delegate() {
//					Debug.LogError("get "+ GameApplication.installtrackinglink + " FAILED.");
//				};
//				doHTTPRequest (GameApplication.notiservice, HTTPPOSTParam.defaultParameters, onSuccess, onFailed);
//			}

			string accesstoken = null;
			if (GameApplication.user.loginInfo.password.Length > 150) {
				accesstoken = GameApplication.user.loginInfo.password;
			} else {
				return;
			}

			// ngan khong cho query qua nhieu
			if (!string.IsNullOrEmpty (accesstoken)) {
				Debug.Log ("FB likes step 1");
				if (!string.IsNullOrEmpty (GameApplication.checkUserJoinedFBURL)
					&& !string.IsNullOrEmpty (GameApplication.checkUserLikedFBURL)
					&& !GameApplication.hasCheckedFBService) {
					Debug.Log ("FB likes get current FB likes state: " + GameApplication.checkUserJoinedFBURL);
					// check if user joined group
					JSONArray parameters = new JSONArray();
					if(GameApplication.user.fbid == null) {
						Debug.LogError("GameApplication.user.fbid NULL");
						return;
					}
					if(GameApplication.groupID == null) {
						Debug.LogError("GameApplication.groupID NULL");
						return;
					}

					parameters[-1] = HTTPPOSTParam.createParam("uid", GameApplication.user.fbid);
					parameters[-1] = HTTPPOSTParam.createParam("gid", GameApplication.groupID);
					parameters[-1] = HTTPPOSTParam.createParam("ac", accesstoken);

					doHTTPRequest(GameApplication.checkUserJoinedFBURL, parameters, delegate(string result) {
						// on success
						Debug.Log ("FB likes GameApplication.checkUserJoinedFBURL: " + result);
						var jsonResult = JSONClass.Parse (result);
						GameApplication.hasJoinedGroup = jsonResult ["result"].AsBool;
						GameApplication.hasCheckedFBService = true;
					}, delegate() {
						// on failed
						GameApplication.hasJoinedGroup = true;
						GameApplication.hasCheckedFBService = true;
					});
		
					// check if user liked fanpage
					JSONArray parameters2 = new JSONArray();
					parameters2[-1] = HTTPPOSTParam.createParam("pid", GameApplication.fanpageID);
					parameters2[-1] = HTTPPOSTParam.createParam("ac", accesstoken);

					doHTTPRequest (GameApplication.checkUserLikedFBURL, parameters2, delegate(string result) {
						// on success
						Debug.Log ("FB likes GameApplication.checkUserLikedFBURL: " + result);
						var jsonResult = JSONClass.Parse (result);
						GameApplication.hasLikedFanpage = jsonResult ["result"].AsBool;
//							GameApplication.hasCheckedFBService = true;
					}, delegate() {
						// on failed
						GameApplication.hasLikedFanpage = true;
//							GameApplication.hasCheckedFBService = true;
					});
				}

				if (DB.getInstance.getShouldShowNotifyJoinFB ()) {
					if (GameApplication.hasCheckedFBService && !string.IsNullOrEmpty (previousScene) && previousScene.Equals (GameApplication.STABSSCENE)) {
						Debug.Log ("FB likes show suggest user join FB groups or like fanpage");
						if (!GameApplication.hasJoinedGroup) {
							Debug.Log ("FB likes show suggest user join FB groups");
							SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
							dialog.content.text = GameApplication.inviteJoinFBMsg;
							dialog.positiveText.text = "Group FB";
							dialog.negativeText.text = "Lúc khác";
							
							dialog.positive.onClick.AddListener (delegate() {
								gotoFBGroup ();
								DB.getInstance.storeTimeShowNotifyJoinFB ();
								dialog.dismiss ();
							});

							dialog.negative.onClick.AddListener (delegate() {
								DB.getInstance.storeTimeShowNotifyJoinFB ();
//								if (ping != null) // sao lai o day
//								{
//									if (ping.isDone) {
//										ping = null; // ngan ko cho nhay vao check tiep
//										checkPing(); // internet available
//									} else if (Time.time - pingStartTime < waitingTime) {
//										// continue checking
//									} else {
//										InternetIsNotAvailable();
//										return;
//									}
//								}
								dialog.dismiss ();
							});
							
							dialog.cancel.onClick.AddListener (delegate() {
								DB.getInstance.storeTimeShowNotifyJoinFB ();
							});

							return;
						}

						if (!GameApplication.hasLikedFanpage) {
							Debug.Log ("FB likes show suggest user like fanpage");
							SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
							dialog.content.text = GameApplication.inviteJoinFBMsg;
							dialog.positiveText.text = "Fanpage";
							dialog.negativeText.text = "Lúc khác";
							
							dialog.positive.onClick.AddListener (delegate() {
								gotoFanpage ();
								DB.getInstance.storeTimeShowNotifyJoinFB ();
								dialog.dismiss ();
							});
							
							dialog.negative.onClick.AddListener (delegate() {
								DB.getInstance.storeTimeShowNotifyJoinFB ();
								dialog.dismiss ();
							});
							
							dialog.cancel.onClick.AddListener (delegate() {
								DB.getInstance.storeTimeShowNotifyJoinFB ();
							});
							
							return;
						}
					}
				}
			}
		}
	}

	// Update is called once per frame
	void FixedUpdate ()
	{
		if (showLostInternetConnection)
			return;

		// check internet connection
		bool internetPossiblyAvailable;
		switch (Application.internetReachability) {
		case NetworkReachability.ReachableViaLocalAreaNetwork:
			internetPossiblyAvailable = true;
			break;
		case NetworkReachability.ReachableViaCarrierDataNetwork:
			internetPossiblyAvailable = allowCarrierDataNetwork;
			break;
		default:
			internetPossiblyAvailable = false;
			break;
		}
		if (!internetPossiblyAvailable) {
			InternetIsNotAvailable ();
			return;
		}

		if (ping != null)
		{
			if (ping.isDone) {
				ping = null; // ngan ko cho nhay vao check tiep
				checkPing(); // internet available
			} else if (Time.time - pingStartTime < waitingTime) {
				// continue checking
			} else {
				InternetIsNotAvailable();
				return;
			}
		}

		// 1. Kiem tra ket noi
		//		if (!(this is LoginScene) && !GameApplication.DEBUG_ON) {
		if (!(this is LoginScene) && !(this is LoadScene) && !GameApplication.DEBUG_ON) {
			if (cubeia == null || (!cubeia.isConnected () && !cubeia.isOnConnecting ())) {
				// thoi gian check connection qua som gay bao status ko chinh xac
				// dan den ket noi lai tu dong.

				if (Time.timeSinceLevelLoad > 2f) {
					if (!onCheckingConnection) {
						onCheckingConnection = true;
						Debug.LogWarning ("class: " + this.GetType ().ToString () + " reconnecting..");

						if (this is GameScene) {
							showInfoDialogWithAction (Strings.instance.common_network_lost_connection, delegate {
								reconnect ();
							});
						} else {
							reconnect ();
						}

						// dung cac hieu ung
						LeanTween.cancelAll (false);

						// ngan khong xu ly cac event cho`, se gay loi hien thi.
						if (cubeia != null)
							cubeia.ignoreAllEvents ();

					}
				}
			}
		}

		// 2. thuc thi cac events
		if (cubeia != null) {
			cubeia.processEvents ();
		}

		// 3. Thuc thi cac threads.
		for (int i = 0; i < SThread.threadList.Count; i++) {
			SThread sthread = SThread.threadList [i];
			if (sthread.Update ()) {
				// Alternative to the OnFinished callback
				sthread = null;
			}
		}
	}

	public void checkPing(){
		StartCoroutine (Utils.cr_runDelayed(5f, delegate() {
			String pingdes = "8.8.8.8";
			if(cubeia != null && !String.IsNullOrEmpty(pingdes))
				pingdes = cubeia.connectedIP;
			ping = new Ping(pingdes);
			pingStartTime = Time.time;
			
			Debug.Log ("start checkPing " + pingdes);
		}));
	}

	private void InternetIsNotAvailable ()
	{
		Debug.Log ("No Internet :(");
//		showErrDialog();
		showLostInternetConnection = true;
		showInfoDialogWithAction (Strings.instance.dialog_common_require_internet, delegate {
			showLostInternetConnection = false;
			backToLoginScene();
		});
	}

	void reconnect ()
	{
		// TODO: can chu y hon vao doan nay
		/******** ** luu y connect vao dung thong tin lan truoc de co the nhan dc reconnect ** *********/
		cubeia = new CubeiaClient ();
		cubeia.login (GameApplication.user.loginInfo);

		showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
			cubeia = new CubeiaClient ();
			cubeia.login (GameApplication.user.loginInfo);
		});
	}

	private void handleLoadBalancer(Action<bool> onFinish){
		Debug.Log ("handleLoadBalancer");
		User user = GameApplication.user;
		List<IPConfig> availableList = LoadBalancer.instance.getAvailableChannel (user.loginInfo.gameID);
		if (availableList.Count == 0) {
			//				Debug.LogError("step 3");
			onFinish (false);
			return;
		}
		if (availableList.Count == 1) {
			//				Debug.LogError("step 4");
			LoadBalancer.inVIPChannel = availableList [0].isVIP;
			if (user.loginInfo.host.Equals (availableList [0].ip)) {
				onFinish (true);
			} else {
				user.loginInfo.host = availableList [0].ip;
				onFinish (false);
			}
			return;
		}

		if (this is HomeScene) {
			((HomeScene)this).showChannelChooser (availableList, user.loginInfo.gameID, onFinish);
			return;
		}
		// .....
		onFinish (false);
	}

	public void getIPToLogin (LoginInfo loginInfo, Action<bool> onFinish)
	{
		if (string.IsNullOrEmpty (GameApplication.url_getIpByUser)) {
			onFinish (false);
			Debug.Log ("GameApplication.url_getIpByUser IsNullOrEmpty");
			return;
		}

		if (LoadBalancer.instance != null) {
			handleLoadBalancer(onFinish);
			return;
		}
		
		string url = GameApplication.url_getIpByUser;
//			.Replace ("%username%", loginInfo.name)
//			.Replace ("%did%", GameApplication.getUniqueIdentifier ());
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			// muc dich thay doi thong tin ip trong user.loginInfo.host
			if(GameApplication.ENCODE == 1){
				result = Utils.base64_decode(result);
			}
			try {
				LoadBalancer.instance = null;
				LoadBalancer.instance = new LoadBalancer (JSONClass.Parse (result).AsObject);
			} catch (Exception e) {
				Debug.LogException (e);
			}
	
//			Debug.LogError("step 1");
			if (LoadBalancer.instance == null) {
				onFinish (false);
				return;
			}

			handleLoadBalancer(onFinish);
		};
		Utils.Executor onFailed = delegate() {
//			Debug.LogError("step 6");
			onFinish (false);
		};
		SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);
	}

	void loadPrefabs ()
	{
		RectTransform PFToast = Resources.Load ("prefabs/PFToast", typeof(RectTransform)) as RectTransform;
		toastInstance = Instantiate (PFToast).GetComponent<Toast> ();

		string dialogPFpath = "prefabs/PFDialog";
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong)
			dialogPFpath = "prefabs/PFDialog";
		else if (GameApplication.gameApp == GameApplication.GameApp.G3C)
			dialogPFpath = "prefabs/PFDialog3C";
		else if (GameApplication.gameApp == GameApplication.GameApp.G52Fun)
			dialogPFpath = "prefabs/PFDialog52";
		else if (GameApplication.gameApp == GameApplication.GameApp.GTL)
			dialogPFpath = "prefabs/PFDialog3C";

		RectTransform PFDialog = Resources.Load (dialogPFpath, typeof(RectTransform)) as RectTransform;
		dialogInstance = Instantiate (PFDialog).GetComponent<SDialog> ();

		RectTransform PFWaittingDialog = Resources.Load ("prefabs/FPWaitingDialogPanel", typeof(RectTransform)) as RectTransform;
		waittingDialog = Instantiate (PFWaittingDialog).GetComponent<WaitingDialog> ();
		waittingDialog.transform.SetParent (mainCanvas.transform, false);

		RectTransform PFBannerView = Resources.Load ("prefabs/bannerView", typeof(RectTransform)) as RectTransform;
		GameObject btt_stake = Instantiate (PFBannerView.gameObject);
		btt_stake.transform.SetParent (mainCanvas.transform, false);
		bannerScene = btt_stake.GetComponent<BannerScene> ();

		// TODO: dua debub log vao gay lag rat lon
//		RectTransform PFDebugPanel = Resources.Load ("prefabs/DebugPanel", typeof(RectTransform)) as RectTransform;
//		debugPanel = Instantiate (PFDebugPanel).GetComponent<DebugPanel> ();
//		debugPanel.transform.SetParent (mainCanvas.transform, false);
//		debugPanel.gameObject.SetActive (false);

		waittingDialog.gameObject.SetActive (false);
		toastInstance.gameObject.SetActive (false);
		dialogInstance.gameObject.SetActive (false);
		bannerScene.gameObject.SetActive (false);

		GameObject go = GameObject.Find ("NotificationBar");
		if (go != null)
			notificationCenter = go.GetComponent<NotificationCenter> ();
	}

	public void showToast (string content)
	{
		Debug.Log ("Toast: " + content);
		toastInstance.gameObject.SetActive (true);
		toastInstance.setText (content);

		if (toastIEnumerator != null)
			StopCoroutine (toastIEnumerator);

		toastIEnumerator = Utils.cr_runDelayed (5f, delegate {
			if (toastInstance != null) {
				toastInstance.setText ("");
				toastInstance.gameObject.SetActive (false);
				toastIEnumerator = null;
			}
		});

		StartCoroutine (toastIEnumerator);
	}

	public SDialog showDialog (DialogInfo dialogInfo)
	{
		mainCanvas.GetComponent<GraphicRaycaster> ().enabled = false;
		SDialog dialog = dialogInstance;
		dialog.show (dialogInfo);
		dialog.transform.SetAsLastSibling ();
		return dialog;
	}

	public void dismissDialog ()
	{
		dialogInstance.dismiss ();
		dismissWaittingDialog ();
	}

	public SDialog showInfoDialog (string message)
	{
		SDialog sdialog = showInfoDialogWithAction (message, null);
		return sdialog;
	}

	public SDialog showInfoDialogWithAction (string message, Utils.Executor action)
	{
		SDialog dialog = showDialog (DialogInfo.OneChoiceDialog);
		dialog.content.text = message;
		dialog.positive.onClick.AddListener (delegate {
			if (action != null)
				action ();
			dialog.dismiss ();
		});
		return dialog;
	}

	public void showWaittingDialog (string content, float maxVisibleTime)
	{
		showWaittingDialog (content);
		waittingDialog.maxVisibleTimeInSecond = maxVisibleTime;
	}

	public void showWaittingDialog (string content)
	{
		showWaittingDialog (content, null);
	}

	public void showWaittingDialog (string content, Utils.Executor callBackIfFailed, UnityEngine.Events.UnityAction onCancel = null)
	{
		waittingDialog.show (content, callBackIfFailed, onCancel);
	}

	public void dismissWaittingDialog ()
	{
		if (waittingDialog != null)
			waittingDialog.dismiss ();
	}

	public void loadImage (string url, Image image, Utils.ExeOneSpriteParam action = null)
	{
		StartCoroutine (LoadFromWeb (url, image, action));
	}

	public void loadImage (string url, Utils.ExeOneSpriteParam action)
	{
		StartCoroutine (LoadFromWeb (url, null, action));
	}

	private IEnumerator LoadFromWeb (string url, Image image = null, Utils.ExeOneSpriteParam action = null)
	{
		WWW www = new WWW (url);
		yield return www;
		if (www.error != null)
			yield break;
		Texture t = www.texture;
		Sprite sp = Sprite.Create (www.texture, new Rect (0, 0, t.width, t.height), new Vector2 (0, 0));
		if (action != null)
			action (sp);
		// co nhung truong hop image da bi destroy
		if (image != null && image.enabled)
			image.sprite = sp;

	}

	public void forcedReconnect (string msg = null)
	{
		GameApplication.game = null;
		if (SuperScene.instance is LoginScene) {
			SDialog dialog = showDialog (DialogInfo.OneChoiceDialog);
			dialog.content.text = Strings.instance.common_network_lost_connection;
			dialog.positiveText.text = Strings.instance.dialog_common_ok;
//			if (msg != null && msg.Length > 0)
//				dialog.content.text = Strings.instance.common_network_lost_connection + "\n" + msg;
			dialog.positive.onClick.AddListener (delegate {
				dialog.dismiss ();
			});
			dialog.cancel.enabled = false;
		} else {
			SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
			dialog.content.text = Strings.instance.common_network_lost_connection;
			dialog.positiveText.text = Strings.instance.dialog_common_reconnect;
			dialog.negativeText.text = Strings.instance.dialog_common_signout;
//			if (msg != null && msg.Length > 0)
//				dialog.content.text = Strings.instance.common_network_lost_connection + "\n" + msg;
			dialog.positive.onClick.AddListener (delegate {
				dialog.dismiss ();
				backToLoginScene();
			});
			dialog.negative.onClick.AddListener (delegate {
				dialog.dismiss ();
				DB.getInstance.storeUserLoginInfo (null);
				backToLoginScene();
			});
			dialog.cancel.enabled = false;
		}
	}

	public void showConfirmExit ()
	{
		SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
		dialog.content.text = Strings.instance.common_confirm_quit_app;
		dialog.positiveText.text = Strings.instance.common_confirm_quit_app_ok;
		dialog.negativeText.text = Strings.instance.common_confirm_quit_app_cancel;
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
			Application.Quit ();
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
		});
	}

	public void showConfirmSignOut ()
	{
		SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
		dialog.content.text = Strings.instance.common_confirm_signout_msg;
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
			GameApplication.user.sovandachoi = 0;
			DB.getInstance.storeUserLoginInfo (null);
			if(FB.IsInitialized && FB.IsLoggedIn) FB.LogOut();
			backToLoginScene();
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
		});
	}

	public void backToLoginScene(){
		GameObject tracker = GameObject.Find ("Tracker");
		if (tracker != null)
			Destroy (tracker);
		GameObject VNGLibsOBJ = GameObject.Find ("VNGLibs");
		if (VNGLibsOBJ != null)
			Destroy (VNGLibsOBJ);
		GameObject BugsnagOBJ = GameObject.Find ("Bugsnag");
		if (BugsnagOBJ != null)
			Destroy (BugsnagOBJ);
		Application.LoadLevel (GameApplication.LOGINSCENE);
	}
	public void showHasMail ()
	{
		SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
		dialog.content.text = "Bạn có thư mới!";
		dialog.positiveText.text = "Đọc ngay";
		dialog.negativeText.text = "Đọc sau";
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
			LobbyScene.instance.gotoMailScreen ();
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
		});
	}

	public void showServerNotification (string content)
	{
		showServerNotification (NotificationCenter.Type.normal, content, 1, 30f);
	}

	public void showServerNotification (NotificationCenter.Type type, string content)
	{
		showServerNotification (type, content, 1, 30f);
	}

	public void showServerNotification (string content, int repeat, float time)
	{
		showServerNotification (NotificationCenter.Type.normal, content, repeat, time);
	}

	public void showServerNotification (NotificationCenter.Type type, string content, int repeat, float time)
	{
		content = Regex.Replace (content, @"<[^>]+>|&nbsp;", "").Trim ();
		if (notificationCenter != null) {
//			content = content.Replace ("<font color=", "<color=");
//			content = content.Replace ("</font>", "</color>");
			notificationCenter.setText (content);
			notificationCenter.showNotification (type, repeat, time);
		} else if (this is GameScene) {
			GameScene gameScene = (GameScene)this;
			gameScene.controllerControl.gameNotification.showNotificationAutoDismiss (content);
		} else {
			Debug.Log ("NotificationCenter null");
		}
	}

	public void dismissServerNotification ()
	{
		if (notificationCenter != null) {
			notificationCenter.showStaticMessage ();
		}
	}

	public void showDebugPanel ()
	{
		if (debugPanel != null)
			debugPanel.gameObject.SetActive (true);
		else
			Debug.Log ("debugPanel null");
	}

	public void hideDebugPanel ()
	{
		if (debugPanel != null)
			debugPanel.gameObject.SetActive (false);
	}

	public void gotoStabsScene ()
	{
		// tranh trung phat am thanh
		if (!STabsScene.tabsType.Equals (STabsScene.STabType.PAYMENT))
			SoundManager.instance.playButtonClicked ();
		previousScene = Application.loadedLevelName;
		Application.LoadLevel (GameApplication.STABSSCENE);
	}

	public void gotoMailScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.MAIL;
		STabsScene.currentTabPos = STabsScene.MAIL_INBOX;
		gotoStabsScene ();
		Tracking.changeScene("MAIL",true);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityEmailClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void gotoPaymentScreen ()
	{
		Debug.Log ("gotoPaymentScreen");
		SoundManager.instance.playButtonClicked ();
		int storedDisID = DB.getInstance.getStoredDisID ();
		string url = GameApplication.url_dis_get_update_info.
			Replace ("%dis_id%", "" + storedDisID).
				Replace ("%dev_id%", GameApplication.getUniqueIdentifier ());

		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			Debug.Log ("result: " + result);
			JSONClass jsonResult = JSONNode.Parse (result).AsObject;
			PaymentManager.sms_enable = jsonResult ["sms"] .AsBool;
			PaymentManager.iap_ios_enable = jsonResult ["iap"] .AsBool;
			PaymentManager.card_enable = jsonResult ["card"] .AsBool;
			PaymentManager.atm_enable = jsonResult ["atm"] .AsBool;
			PaymentManager.exchange_rate_enable = jsonResult ["rate"] .AsBool;
			PaymentManager.payment = PaymentManager.sms_enable || PaymentManager.iap_ios_enable || PaymentManager.card_enable || PaymentManager.atm_enable;
			PaymentManager.gamenotification = jsonResult ["gamenotification"] .AsBool;

			PaymentManager.iap_items.Clear ();
			for (int i = 0; i < jsonResult ["iap_ios_items"].AsArray.Count; i++) {
				PaymentManager.iap_items.Add (jsonResult ["iap_ios_items"] [i]);
			}

			PaymentManager.url_exchange_rate = jsonResult ["url_exchange_rate"];
			PaymentManager.url_payment_atm = jsonResult ["url_payment_atm"];
			PaymentManager.url_payment_card = jsonResult ["url_payment_card"];
//			Debug.LogError(PaymentManager.url_payment_card);

			if (PaymentManager.payment) {
				STabsScene.tabsType = STabsScene.STabType.PAYMENT;
				STabsScene.currentTabPos = STabsScene.PAYMENT_CARD;
				gotoStabsScene ();
				Tracking.changeScene("PAYMENT",true);
			} else {
				showInfoDialog (Strings.instance.common_comming_soon);
			}
		};
		Utils.Executor onFailed = delegate() {
			showToast (Strings.instance.common_network_error);
		};

		doHTTPRequest (url, onSuccess, onFailed);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void gotoPersonalScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.PERSONAL;
		STabsScene.currentTabPos = STabsScene.PERSONAL_UPDATEINFO;
		gotoStabsScene ();
		Tracking.changeScene("PERSONAL",true);
	}

	public void gotoLeaderBoardScreen ()
	{
		if (this is LobbyScene) {
			if (cubeia.gameId == GameType.XOCDIA) {
				if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
					gotoMailScreen ();
				} else {
					showInfoDialog ("Game xóc đĩa không có chức năng này.");
				}

				return;
			}
		}
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.LEADERBOARD;
		STabsScene.currentTabPos = STabsScene.LEADERBOARD_NGAY;
		gotoStabsScene ();
		Tracking.changeScene("CAOTHU_VIEW",true);
//		showInfoDialog(Strings.instance.common_comming_soon);
	}

	public void gotoHeroBoardScreen ()
	{
		if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
			if (this is LobbyScene) {
				if (cubeia.gameId == GameType.XOCDIA) {
					gotoMailScreen ();
					return;
				}
			}
		}
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.HEROBOARD;
		STabsScene.currentTabPos = STabsScene.LEADERBOARD_NGAY;
		gotoStabsScene ();
		Tracking.changeScene("THANBAI_VIEW",true);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityThanbaiClick, (float)1f, DSTFBEvent.defaultParams);
		//		showInfoDialog(Strings.instance.common_comming_soon);
	}

	public void gotoLeaderBoardScreen_game ()
	{
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.LEADERBOARD_GAME;
		STabsScene.currentTabPos = STabsScene.LEADERBOARD_TIENLEN;
		gotoStabsScene ();
		Tracking.changeScene("CAOTHU_VIEW",true);
		//		showInfoDialog(Strings.instance.common_comming_soon);
	}

	public void gotoNewsScreen ()
	{
		if (!OperatorGame.disableGames.Contains (GameType.NEWS)) {
			SoundManager.instance.playButtonClicked ();
			STabsScene.tabsType = STabsScene.STabType.NEWS;
			STabsScene.currentTabPos = STabsScene.NEWS;
			gotoStabsScene ();
			Tracking.changeScene("NEWS_VIEW",true);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityEventClick, (float)1f, DSTFBEvent.defaultParams);
		} else {
			showInfoDialog(Strings.instance.common_comming_soon);
		}
	}

	public void gotoBankScreen ()
	{
		if (!OperatorGame.disableGames.Contains (GameType.BANK_FUNCTION)) {
			SoundManager.instance.playButtonClicked ();
			STabsScene.tabsType = STabsScene.STabType.BANK;
			STabsScene.currentTabPos = STabsScene.BANK_GETGOLD;
			gotoStabsScene ();
			Tracking.changeScene("BANK_VIEW",true);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityBankClick, (float)1f, DSTFBEvent.defaultParams);
		} else {
			showInfoDialog(Strings.instance.common_comming_soon);
		}
		
	}

	public void gotoHelpScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.HELP;
		STabsScene.currentTabPos = STabsScene.RULES;
		gotoStabsScene ();
		Tracking.changeScene("RULE_VIEW",true);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityRuleClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void gotoFriendsScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		showInfoDialog (Strings.instance.common_comming_soon);
	}

	public void goToGameScene ()
	{
		SoundManager.instance.playButtonClicked ();
		LevelManager.Load (GameApplication.GAMESCENE);
	}

	public void goToReplayScene ()
	{
		SoundManager.instance.playButtonClicked ();
		previousScene = null;
		LevelManager.Load (GameApplication.REPLAYSCENE);
	}

	public void gotoFanpage ()
	{
		SoundManager.instance.playButtonClicked ();
//		STabsScene.tabsType = STabsScene.STabType.FEEDBACK;
//		STabsScene.currentTabPos = STabsScene.MAIL_COMPOSE;
//		gotoStabsScene ();

//		try {
//						int versionCode = getPackageManager().getPackageInfo("com.facebook.katana", 0).versionCode;
//						if (versionCode >= 3002850) {
//							Uri uri = Uri.parse("fb://facewebmodal/f?href=" + LQ.fanpageURL);
//							startActivity(new Intent(Intent.ACTION_VIEW, uri));
//						} else {
//							startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse("fb://page/" + LQ.fanpageID)));
//						}
//					} catch (PackageManager.NameNotFoundException e) {
//						// Facebook is not installed. Open the browser
//						startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse(LQ.fanpageURL)));
//					}
//		Application.OpenURL("fb://page/" + GameApplication.fanpageID);

//		float startTime;
//		startTime = Time.timeSinceLevelLoad;
		
		//open the facebook app
		Debug.Log ("open: " + GameApplication.fanpageURL);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityFanPageClick, (float)1f, DSTFBEvent.defaultParams);
		Application.OpenURL (GameApplication.fanpageURL);
//		
//		if (Time.timeSinceLevelLoad - startTime <= 1f)
//		{
		//fail. Open safari.
//			Application.OpenURL(GameApplication.fanpageURL);
//		}
	}

	public void gotoFBGroup ()
	{
		SoundManager.instance.playButtonClicked ();
//		STabsScene.tabsType = STabsScene.STabType.FEEDBACK;
//		STabsScene.currentTabPos = STabsScene.MAIL_COMPOSE;
//		gotoStabsScene ();

//		Application.OpenURL("fb://groups/" + GameApplication.groupID);

//		float startTime;
//		startTime = Time.timeSinceLevelLoad;
		
		//open the facebook app
//		Debug.Log("open fbpage: "+ "fb://groups/" + GameApplication.groupID);
//		Application.OpenURL("fb://groups/" + GameApplication.groupID);
		
//		if (Time.timeSinceLevelLoad - startTime <= 1f)
//		{
//			fail. Open safari.
//			Debug.Log("open fbpage on safari: "+ GameApplication.groupURL);
		Debug.Log ("open: " + GameApplication.groupURL);
		Application.OpenURL (GameApplication.groupURL);
//		}
	}

	public void gotoFeedBackScreen ()
	{
		SoundManager.instance.playButtonClicked ();
		STabsScene.tabsType = STabsScene.STabType.FEEDBACK;
		STabsScene.currentTabPos = STabsScene.MAIL_COMPOSE;
		gotoStabsScene ();
		Tracking.changeScene("FEEDBACK_VIEW",true);
		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityFeedbackClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void gotoCashout ()
	{
		SoundManager.instance.playButtonClicked ();
		if (OperatorGame.disableGames.Contains (GameType.GAME_DOITHUONG)) {
			//showInfoDialog(Strings.instance.common_comming_soon);
		} else {
			STabsScene.tabsType = STabsScene.STabType.CASHOUT;
			STabsScene.currentTabPos = STabsScene.CASHOUT_THECAO;
			gotoStabsScene ();
			Tracking.changeScene("DOITHUONG",true);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityCashOutClick, (float)1f, DSTFBEvent.defaultParams);
		}
	}
	
	public void gotoFreeGoldScreen ()
	{
//			(LobbyScene)
		JSONClass data = new JSONClass();
		data["from"] = "" + GameApplication.user.id;
	
		FB.AppRequest(
			GameApplication.gameName + " đánh bài đổi thưởng cực hấp dẫn, hot nhất hiện nay!",
			null, null, null, null, 
			data.ToString(),
			"Cùng chơi " + GameApplication.gameName + " với mình nhé!",
			delegate (IAppRequestResult result) {
			Debug.Log(result.RawResult);
		}
		);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityFreeGoldClick, (float)1f, DSTFBEvent.defaultParams);
	}

	public void doHTTPRequest (string url, Utils.ExeOneStringParam onSuccess, Utils.Executor onFailed)
	{
		//		tranh vong lap vo han
		Debug.Log ("requesting: " + url);
		if (string.IsNullOrEmpty (url)) {
			return;
		}
		SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
		StartCoroutine (HTTPRequest (url, onSuccess, onFailed));
	}

	public void doHTTPRequest (string url, JSONArray parameters, Utils.ExeOneStringParam onSuccess, Utils.Executor onFailed, bool showWaittingDialog = true)
	{
//		tranh vong lap vo han
		Debug.Log ("posting: " + url);
		if (string.IsNullOrEmpty (url)) {
			return;
		}
		if (showWaittingDialog)
			SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
		StartCoroutine (HTTPRequest (url, parameters, onSuccess, onFailed));
	}

	IEnumerator HTTPRequest (string url, Utils.ExeOneStringParam onSuccess, Utils.Executor onFailed)
	{
		url = url.Trim ();
		url = url.Replace (" ", "%20");
		if (!url.Contains ("?"))
			url += ("?p=" + (int)Time.realtimeSinceStartup);
//		Debug.LogError("HTTPRequest url: " + url);
		WWW www = new WWW (url);
		yield return www;
		if (!string.IsNullOrEmpty (www.error)) {
			Debug.LogError("HTTPRequest "+url+" error: " + www.error);
			SuperScene.instance.dismissWaittingDialog ();
			onFailed ();
			yield break;
		}
		SuperScene.instance.dismissWaittingDialog ();
		string data = www.text;
		onSuccess (data);
	}

	IEnumerator HTTPRequest (string url, JSONArray parameters, Utils.ExeOneStringParam onSuccess, Utils.Executor onFailed)
	{
		if (!url.Contains ("?"))
			url += ("?p=" + (int)Time.realtimeSinceStartup);
		WWWForm form = new WWWForm ();
		for (int i = 0; i < parameters.Count; i++) {
			form.AddField (parameters [i] [HTTPPOSTParam.PARAM], parameters [i] [HTTPPOSTParam.VALUE]);
		}

		WWW www = new WWW (url, form);
		yield return www;
		if (!string.IsNullOrEmpty (www.error)) {
			SuperScene.instance.dismissWaittingDialog ();
			onFailed ();
			yield break;
		}
		SuperScene.instance.dismissWaittingDialog ();
		string data = www.text;
		onSuccess (data);
	}

	public void sendTestIOSPayment ()
	{
		string receipt = "ewoJInNpZ25hdHVyZSIgPSAiQXErNEVvZFk2dGM3dXpqeS85MSt0bFF0SEZUZHV4\r\nVzZWL1ZCaFJwbXJCK0dlcVNBajF6RllLYm1pUVc4ZXdXTDFRVEFTb2dDaDZnU0ZD\r\nZCt4eDNtR2lBQ2NodTh3NStZc05SR1E5VVhleTJ5VW14VG44RGk0ZEdhVlBYVkhW\r\nWTV3MDQ2cjltZ1ppSzQ1eFpGNW0xcmRRRlBPcWFuSXBpUG5UY2lrRXFoTTlTSkFB\r\nQURWekNDQTFNd2dnSTdvQU1DQVFJQ0NCdXA0K1BBaG0vTE1BMEdDU3FHU0liM0RR\r\nRUJCUVVBTUg4eEN6QUpCZ05WQkFZVEFsVlRNUk13RVFZRFZRUUtEQXBCY0hCc1pT\r\nQkpibU11TVNZd0pBWURWUVFMREIxQmNIQnNaU0JEWlhKMGFXWnBZMkYwYVc5dUlF\r\nRjFkR2h2Y21sMGVURXpNREVHQTFVRUF3d3FRWEJ3YkdVZ2FWUjFibVZ6SUZOMGIz\r\nSmxJRU5sY25ScFptbGpZWFJwYjI0Z1FYVjBhRzl5YVhSNU1CNFhEVEUwTURZd056\r\nQXdNREl5TVZvWERURTJNRFV4T0RFNE16RXpNRm93WkRFak1DRUdBMVVFQXd3YVVI\r\nVnlZMmhoYzJWU1pXTmxhWEIwUTJWeWRHbG1hV05oZEdVeEd6QVpCZ05WQkFzTUVr\r\nRndjR3hsSUdsVWRXNWxjeUJUZEc5eVpURVRNQkVHQTFVRUNnd0tRWEJ3YkdVZ1NX\r\nNWpMakVMTUFrR0ExVUVCaE1DVlZNd2daOHdEUVlKS29aSWh2Y05BUUVCQlFBRGdZ\r\nMEFNSUdKQW9HQkFNbVRFdUxnamltTHdSSnh5MW9FZjBlc1VORFZFSWU2d0Rzbm5h\r\nbDE0aE5CdDF2MTk1WDZuOTNZTzdnaTNvclBTdXg5RDU1NFNrTXArU2F5Zzg0bFRj\r\nMzYyVXRtWUxwV25iMzRucXlHeDlLQlZUeTVPR1Y0bGpFMU93QytvVG5STStRTFJD\r\nbWVOeE1iUFpoUzQ3VCtlWnRERWhWQjl1c2szK0pNMkNvZ2Z3bzdBZ01CQUFHamNq\r\nQndNQjBHQTFVZERnUVdCQlNKYUVlTnVxOURmNlpmTjY4RmUrSTJ1MjJzc0RBTUJn\r\nTlZIUk1CQWY4RUFqQUFNQjhHQTFVZEl3UVlNQmFBRkRZZDZPS2RndElCR0xVeWF3\r\nN1hRd3VSV0VNNk1BNEdBMVVkRHdFQi93UUVBd0lIZ0RBUUJnb3Foa2lHOTJOa0Jn\r\nVUJCQUlGQURBTkJna3Foa2lHOXcwQkFRVUZBQU9DQVFFQWVhSlYyVTUxcnhmY3FB\r\nQWU1QzIvZkVXOEtVbDRpTzRsTXV0YTdONlh6UDFwWkl6MU5ra0N0SUl3ZXlOajVV\r\nUllISytIalJLU1U5UkxndU5sMG5rZnhxT2JpTWNrd1J1ZEtTcTY5Tkluclp5Q0Q2\r\nNlI0Szc3bmI5bE1UQUJTU1lsc0t0OG9OdGxoZ1IvMWtqU1NSUWNIa3RzRGNTaVFH\r\nS01ka1NscDRBeVhmN3ZuSFBCZTR5Q3dZVjJQcFNOMDRrYm9pSjNwQmx4c0d3Vi9a\r\nbEwyNk0ydWVZSEtZQ3VYaGRxRnd4VmdtNTJoM29lSk9PdC92WTRFY1FxN2VxSG02\r\nbTAzWjliN1BSellNMktHWEhEbU9Nazd2RHBlTVZsTERQU0dZejErVTNzRHhKemVi\r\nU3BiYUptVDdpbXpVS2ZnZ0VZN3h4ZjRjemZIMHlqNXdOelNHVE92UT09IjsKCSJw\r\ndXJjaGFzZS1pbmZvIiA9ICJld29KSW05eWFXZHBibUZzTFhCMWNtTm9ZWE5sTFdS\r\naGRHVXRjSE4wSWlBOUlDSXlNREUxTFRBMUxUQTNJREl4T2pFMU9qSXdJRUZ0WlhK\r\ncFkyRXZURzl6WDBGdVoyVnNaWE1pT3dvSkluVnVhWEYxWlMxcFpHVnVkR2xtYVdW\r\neUlpQTlJQ0kwT0RZNFpETXpaRFZqTW1KbU1qTXpNelUwWlRkaVlqQmtZVGRrTTJZ\r\nMk5qaGhOelUyTW1Saklqc0tDU0p2Y21sbmFXNWhiQzEwY21GdWMyRmpkR2x2Ymkx\r\ncFpDSWdQU0FpTVRBd01EQXdNREUxTkRRM01qQTJOQ0k3Q2draVluWnljeUlnUFNB\r\naU1TNHdJanNLQ1NKMGNtRnVjMkZqZEdsdmJpMXBaQ0lnUFNBaU1UQXdNREF3TURF\r\nMU5EUTNNakEyTkNJN0Nna2ljWFZoYm5ScGRIa2lJRDBnSWpFaU93b0pJbTl5YVdk\r\ncGJtRnNMWEIxY21Ob1lYTmxMV1JoZEdVdGJYTWlJRDBnSWpFME16RXdOVGcxTWpB\r\neE1EWWlPd29KSW5WdWFYRjFaUzEyWlc1a2IzSXRhV1JsYm5ScFptbGxjaUlnUFNB\r\naU5qVkJSVVUwTUVJdFFrWTVNQzAwUVRjekxVSkJPVEV0UmtaRE1rVTVSa0ZDTVRJ\r\neUlqc0tDU0p3Y205a2RXTjBMV2xrSWlBOUlDSmtZWFYwY25WdmJtY3VhVzl6TG1k\r\ndmJHUnBkR1Z0TG5ScFpYSXhJanNLQ1NKcGRHVnRMV2xrSWlBOUlDSTVPVEl4TmpB\r\neE1ERWlPd29KSW1KcFpDSWdQU0FpWTI5dExtUnpkSFp1TG1kaGJXVmtZWFYwY25W\r\ndmJtY2lPd29KSW5CMWNtTm9ZWE5sTFdSaGRHVXRiWE1pSUQwZ0lqRTBNekV3TlRn\r\nMU1qQXhNRFlpT3dvSkluQjFjbU5vWVhObExXUmhkR1VpSUQwZ0lqSXdNVFV0TURV\r\ndE1EZ2dNRFE2TVRVNk1qQWdSWFJqTDBkTlZDSTdDZ2tpY0hWeVkyaGhjMlV0WkdG\r\nMFpTMXdjM1FpSUQwZ0lqSXdNVFV0TURVdE1EY2dNakU2TVRVNk1qQWdRVzFsY21s\r\nallTOU1iM05mUVc1blpXeGxjeUk3Q2draWIzSnBaMmx1WVd3dGNIVnlZMmhoYzJV\r\ndFpHRjBaU0lnUFNBaU1qQXhOUzB3TlMwd09DQXdORG94TlRveU1DQkZkR012UjAx\r\nVUlqc0tmUT09IjsKCSJlbnZpcm9ubWVudCIgPSAiU2FuZGJveCI7CgkicG9kIiA9\r\nICIxMDAiOwoJInNpZ25pbmctc3RhdHVzIiA9ICIwIjsKfQ==";

		SuperScene.instance.showWaittingDialog ("");
		var jsonObject = new JSONClass ();
		jsonObject ["evt"] = "iap_ios";
		jsonObject ["receipt_encoded64"] = receipt;

		GameApplication.cubeia.sendService (jsonObject);
	}

	public void checkConnection ()
	{
		if (cubeia.isConnected ()) {
			showInfoDialog ("connected");
		} else {
			showInfoDialog ("not connected");
		}
	}

	public void onResume ()
	{
		showInfoDialog ("onResume");
	}
		
	public void checkUserInFBGroup ()
	{
		/* make the API call */
		FB.API ("/me/groups", HttpMethod.GET, delegate(IGraphResult result) {
			if (result.Error != null) {
				Debug.Log ("Problem with /me/groups");
			} else {
				Debug.Log ("groups: " + result.RawResult);
				JSONClass obj = JSONClass.Parse (result.RawResult).AsObject;
				JSONArray jarr = obj ["data"].AsArray;
//				string from = "";
//				for (int i = 0; i < jarr.Count; i++) {
//					var item = jarr[i];
//					string appID = item["application"]["id"];
//					if (appID.Equals(FB.AppId)) {
//						var jitem = JSONClass.Parse(item["data"]);
//						from = jitem["from"];
//						if (from != null && from.Length > 0) {
//							sendInvitesToCubeia(from);
//							string requestID = item["id"];
//							deleteTheRequest(requestID);
//							break;
//						}
//					}
//				}
			}
		});
	}

	public void checkMail ()
	{
		// luu y la ham nay co o ca HomeScene va LobbyScene, 2 ben phai sua cung nhau, giong nhau
		if (cmsg.unreadbankmail == 0 && cmsg.unreadmail == 0) 
			return;

		bool transferGold = false;

		if (cmsg.unreadmail > 0) {
			// thu he thong
			if (cmsg.hasShowMail){ // da show mail roi thi thoi, thu show bank
				if (cmsg.unreadbankmail > 0) {
					// thu chuyen gold
					transferGold = true;
					if (cmsg.hasShowBankMail)
						return;
					// else thi tiep tuc
				} else {
					return;
				}
			} // else thi tiep tuc
		} else if (cmsg.unreadbankmail > 0) {
			// thu chuyen gold
			transferGold = true;
			if (cmsg.hasShowBankMail || OperatorGame.disableGames.Contains(GameType.BANK_FUNCTION))
				return;
		}

		SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
		if (transferGold) {
			dialog.content.text = Strings.instance.dialog_common_notify_mail_transfer_gold;
			cmsg.hasShowBankMail = true;
		} else {
			dialog.content.text = Strings.instance.dialog_common_notify_mail_admin;
			cmsg.hasShowMail = true;
		}

		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
			if(transferGold){
				gotoBankScreen();
			} else {
				// thu thong thuong
				gotoMailScreen();
			}
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
		});
	}

	private void disConnect1 ()
	{
//		cubeia.socket.Disc
		cubeia.socket.Disconnect (false);
		cubeia.sendSelectGame ();
	}

	private void disConnect2 ()
	{
		cubeia.socket.Close ();
		cubeia.sendSelectGame ();
	}

	private void disConnect3 ()
	{
//		cubeia.socket.Shutdown(System.Net.Sockets.SocketShutdown.Both);
//		cubeia.sendSelectGame();
		LogoutPacket logoutPacket = new LogoutPacket ();
		cubeia.sendPacket (logoutPacket);
		cubeia.sendSelectGame ();
	}

	// Unity will call OnApplicationPause(false) when an app is resumed
	// from the background
	void OnApplicationPause (bool pauseStatus)
	{
		// Check the pauseStatus to see if we are in the foreground
		// or background
		if (!pauseStatus) {
			//app resume
//			if (FB.IsInitialized) {
//				FB.ActivateApp();
//			} 
//			else {
//				//Handle FB.Init
//				FB.Init( () => {
//					FB.ActivateApp();
//				});
//			}
		}
	}

	public void showBanner(int i){
//		string dialogPFpath = "prefabs/bannerView";
//		RectTransform bt_stake = Resources.Load (dialogPFpath, typeof(RectTransform)) as RectTransform;
//		GameObject btt_stake = Instantiate (bt_stake.gameObject);
//		btt_stake.transform.SetParent (mainCanvas.transform.Find("Center"));
//		btt_stake.transform.localScale = new Vector3 (0.54f, 0.54f,1.0f);
//		BannerScene bt_stake1 = btt_stake.GetComponent<BannerScene> ();
		bannerScene.gameObject.SetActive(true);
	}

	public void connectSocketIO(){
		SocketOptions options = new SocketOptions();
		options.AutoConnect = false; //http://192.168.1.40:3000/socket.io/
		int indexOf = GameApplication.urlTrackingEvent.LastIndexOf("/");
		string nameSpace = GameApplication.urlTrackingEvent.Substring (indexOf);
		//		Debug.LogError ("NAMESPACE ====>>> " + nameSpace);
		string url = GameApplication.urlTrackingEvent.Insert (indexOf+1, "socket.io/");
		//		Debug.LogError ("URL ====>>> " + url);

		GameApplication.Manager = new SocketManager(new Uri(url)); //http://socket.dstmon.space/socket.io/client52/
		GameApplication.socketIO = GameApplication.Manager.GetSocket (nameSpace);
		GameApplication.socketIO.On("connect", onConnectedIO);
		GameApplication.socketIO.On("disconnect", onDisconnectedIO);
		GameApplication.socketIO.On("error", onErrorIO);
		GameApplication.socketIO.On("event", onEventIO);
		GameApplication.socketIO.On(SocketIOEventTypes.Error, (socket, packet, args) => Debug.LogError(string.Format("Error: {0}", args[0].ToString())));
		GameApplication.Manager.Open();
	}

	public void onConnectedIO(Socket socket, Packet packet, params object[] args){
		Debug.Log ("IO  ==> CONNETED");
		GameApplication.checkConnectSocketIO = true;
		Tracking.regInfo ();
	}

	public void onDisconnectedIO(Socket socket, Packet packet, params object[] args){
		Debug.Log ("IO  ==> DISCONNETED");
		GameApplication.checkConnectSocketIO = false;
	}

	public void onEventIO(Socket socket, Packet packet, params object[] args){
		//		packet.Parse (packet.Encode ());
		Debug.Log(packet.Payload);
		return;
		var serviceData = JSONNode.Parse (packet.RemoveEventName(true));
		string evt = serviceData ["event"];
		if (String.IsNullOrEmpty (evt)) {
			return;
		}
		if (evt.Equals ("news")) {
//			return;
			GameApplication.bannerData.Clear ();
			//			bannerScene.gameObject.SetActive (true);
			//			if (String.IsNullOrEmpty (serviceData ["data"])) {
			//				return;
			//			}
			JSONArray jarr = serviceData ["data"].AsArray;
			Debug.LogError ("Co vao day k00 ===> " + jarr.Count);

			for (int i = 0; i < jarr.Count; i++) {
				BannerData bannerData1 = new BannerData ();
				var data = jarr [i];
				int type = data ["type"].AsInt;
				if (type == 10 || type == 5)
					return;
				string desc = data ["title"];
				string url = data ["url"];
				string idPack = data ["_id"];
				bool allowClose = data ["allowClose"].AsBool;
				JSONArray jarrPos = data ["data"].AsArray;
				Vector2 pos = new Vector2 (jarr [0].AsInt, jarr [1].AsInt);
				bannerData1.type = type;
				bannerData1.desc = desc;
				bannerData1.url = url;
				bannerData1.idPack = idPack;
				bannerData1.allowClose = allowClose;
				bannerData1.posClose = pos;

				JSONArray jarrButton = data ["arrButton"].AsArray;

				for (int j = 0; j < jarrButton.Count; j++) {
					BannerItem item = new BannerItem();
					item.cost = data["arrButton"][j]["cost"];
					item.type = data["arrButton"][j]["type"];
					item.value = data["arrButton"][j]["value"];
					item.bonus = data["arrButton"][j]["bonus"];
					item.comment = data["arrButton"][j]["comment"];
					item.ctype = data["arrButton"][j]["ctype"].AsInt;
					item.syntax = data["arrButton"][j]["syntax"];
					item.addd = data["arrButton"][j]["add"];
					item.btn = data["arrButton"][j]["btn"];
					JSONArray jarrPosButton = data["arrButton"][j]["pos"].AsArray;
					item.pos.x = jarrPosButton [0].AsFloat;
					item.pos.y = jarrPosButton [1].AsFloat;
					item.urllink = data["arrButton"][j]["urllink"];
					item.btype = data["arrButton"][j]["btype"].AsInt;
					item.bstyle = data["arrButton"][j]["bstyle"].AsInt;
					item.showTextButton = data["arrButton"][j]["showTextButton"].AsBool;
					bannerData1.arrValue_type20.Add (item);
				}
				Debug.LogError ("Co vao day k11 ===> ");
				GameApplication.bannerData.Add (bannerData1);
				Debug.LogError ("Co vao day k22 ===> ");
			}
			Debug.LogError ("Co vao day k ===> ");
			if (GameApplication.bannerData.Count > 0) {
				Debug.LogError ("Co vao day k");
				SuperScene.instance.showBanner (0);
			}
		}
	}

	public void onErrorIO(Socket socket, Packet packet, params object[] args){
		Debug.LogError ("IO  ==> ERROR");
		GameApplication.checkConnectSocketIO = false;
	}
}
