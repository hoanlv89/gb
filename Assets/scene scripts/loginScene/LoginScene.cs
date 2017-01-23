using UnityEngine;
using System.Collections;
using System.Linq;
using Styx;
using UnityEngine.UI;
using System;
using SimpleJSON;
using System.Globalization;
using System.Collections.Generic;
using Facebook.Unity;
using BestHTTP.SocketIO;

public class LoginScene : SuperScene
{
	[SerializeField]
	InputField
		text_ope, text_acc, text_pass, text_repeat_pass;
	[SerializeField]
	WaitingDialog
		fbWaitingDialog;
	[SerializeField]
	Button
		fbLoggedOption, fbLogin, fbLogout;
	public Button vietnamese, english;
	public GameObject languageChoser;
	public SignUpPanel signUpPanel;
	public GameObject loginPanel;
	public RectTransform normalLogin;
	public Text hotline;

	void Awake ()
	{
		fbLogin.gameObject.SetActive (true);
		fbLoggedOption.gameObject.SetActive (false);
		FB.Init (SetInit, OnHideUnity);

		Debug.Log("Carrier Name " + Countly.Bindings.GetCarrierName());
	}

	private void SetInit ()
	{
		Debug.Log ("FB init done");
		FB.ActivateApp();
		if (SuperScene.instance is LoginScene) {
			fbWaitingDialog.maxVisibleTimeInSecond = 20f;
			if(fbWaitingDialog != null)
				fbWaitingDialog.dismiss ();
			// xuat hien truong hop null pointer do loginPanel da inActive
			fbLogin.enabled = true;

			GameApplication.user.displayName = null;
			//updateFBStatus ();
		}
	}

	private void OnHideUnity (bool isGameShown)
	{
		if (!isGameShown) {
			Time.timeScale = 0;
		} else {
			Time.timeScale = 1;
		}
	}

	public void FBlogin ()
	{
		Debug.Log ("FBlogin");
		if(FB.IsLoggedIn){
			getFBInfoBeforeAttemptLoginToGame();
		} else {
			FB.LogInWithReadPermissions (new string[]{"public_profile", "email", "user_friends", "user_likes"}, AuthCallback);
		}

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityFaLoginClick, (float)1f, DSTFBEvent.defaultParams);
	}

	void AuthCallback (ILoginResult result)
	{
		Debug.Log ("AuthCallback");
		if (FB.IsLoggedIn) {
			getFBInfoBeforeAttemptLoginToGame();
			Debug.Log ("FB login work");
		} else {
			showInfoDialog ("FB login fail");
			Debug.Log ("FB login fail");
		}

	}

	void getFBInfoBeforeAttemptLoginToGame(){
		Debug.Log ("getFBInfoBeforeAttemptLoginToGame");
		showWaittingDialog(Strings.instance.common_waitingdialog_loading);
		FB.API ("/me?fields=email,name", HttpMethod.GET, delegate(IGraphResult result) {
			if (result.Error != null) {
				Debug.Log ("getFBInfoBeforeAttemptLoginToGame error: "+ result.Error);
			} else {
				Debug.Log ("getFBInfoBeforeAttemptLoginToGame Result: " + result.RawResult);
				JSONClass jobj = JSONClass.Parse (result.RawResult).AsObject;
				GameApplication.user.displayName = jobj ["name"];
				GameApplication.user.email = jobj ["email"];
				GameApplication.user.fbid = jobj ["id"];
			}
			attemptLogin("1", AccessToken.CurrentAccessToken.TokenString);
		});
	}

	void getFBInfoByAccesstoken(string ac){
		Debug.Log ("getFBInfoByAccesstoken");
		string url = "https://graph.facebook.com/v2.5/me?fields=id%2Cname%2Cemail&access_token=" + ac;
		doHTTPRequest(url, delegate(string result) {
			Debug.Log ("getFBInfoByAccesstoken res: "+ result);
			var jobj = JSONClass.Parse(result);
			if(!string.IsNullOrEmpty(jobj["error"])){
				// chuoi tra ve co truong "error"
			} else {
				GameApplication.user.displayName = jobj ["name"];
				GameApplication.user.email = jobj ["email"];
				GameApplication.user.fbid = jobj ["id"];

				attemptLogin("1", ac);
			}
		}, delegate() {
			dismissWaittingDialog();
		});
	}

	/*
	void updateFBStatus ()
	{
		if (FB.IsLoggedIn) {
			fbWaitingDialog.transform.parent.gameObject.SetActive (false);
			fbLoggedOption.gameObject.SetActive (true);
			fbLoggedOption.onClick.RemoveAllListeners ();
			fbLoggedOption.onClick.AddListener (delegate {
				attemptLogin("1", AccessToken.CurrentAccessToken.TokenString);
			});

			string imgurl = "https://graph.facebook.com/v2.5/" + AccessToken.CurrentAccessToken.UserId + "/picture?width=200&height=200&redirect=true";
			if (fbLoggedOption != null) {
				Image avatar = fbLoggedOption.transform.Find ("FBAvatar").GetComponent<Image> ();
				// TODO: can sua lai doan nay, luon lay anh ngay ca khi avatar == null
				loadImage (imgurl, avatar, delegate {
					GameApplication.user.avatarSprite = avatar.sprite;
				});
			} else {
				Debug.LogError ("FB fbLoggedOption button view null");
			}

			// get image
//			FB.API ("/me/picture?width=128&height=128&redirect=false", Facebook.HttpMethod.GET, delegate(IGraphResult result) {
//				if (result.Error != null) {
//					Debug.Log ("Problem with profile picture");
//				} else {
//					Debug.Log ("Result: " + result.Text);
//					JSONClass jobj = JSONClass.Parse (result.Text).AsObject;
//					int height = jobj ["data"] ["height"].AsInt;
//					int width = jobj ["data"] ["width"].AsInt;
//					string url = jobj ["data"] ["url"];
//					GameApplication.user.avatarUrl = url;
//					if (fbLoggedOption != null) {
//						Image avatar = fbLoggedOption.transform.Find ("FBAvatar").GetComponent<Image> ();
//					// TODO: can sua lai doan nay, luon lay anh ngay ca khi avatar == null
//						loadImage (url, avatar, delegate {
//							GameApplication.user.avatarSprite = avatar.sprite;
//						});
//					} else {
//						Debug.LogError ("FB fbLoggedOption button view null");
//					}
//				}
//			});

			// get name
			FB.API ("/v2.3/me?fields=name", HttpMethod.GET, delegate(IGraphResult result) {
				if (result.Error != null) {
					Debug.Log ("Problem get profile name");
				} else {
					Debug.Log ("Result: " + result.RawResult);
					JSONClass jobj = JSONClass.Parse (result.RawResult).AsObject;
					GameApplication.user.displayName = jobj ["name"];
					if (fbLoggedOption != null) {
						Text name = fbLoggedOption.transform.Find ("FBAvatar").Find ("FBName").GetComponent<Text> ();
						name.text = jobj ["name"];
					} else {
						Debug.LogError ("FB fbLoggedOption button view null");
					}
				}
			});
		} else {
			normalLogin.gameObject.SetActive (true);
			fbLoggedOption.gameObject.SetActive (false);
		}
	}
	*/

	// Use this for initialization
	public override void Start ()
	{
		base.Start ();

		// bat buoc phai lay truoc de gui len khi login
		GameApplication.getUniqueIdentifier();
		cubeia = new CubeiaClient ();

		if (FB.IsInitialized){
//			FB.ActivateApp();
			if(fbWaitingDialog != null)
				fbWaitingDialog.dismiss ();
		} else {
			fbWaitingDialog.show ("");
			fbWaitingDialog.GetComponentInParent<Button> ().enabled = false;
		}

		vietnamese.onClick.AddListener (delegate {
			Strings.currentLanguage = Strings.LANGUAGE_VI;
			changeLanguage (Strings.LANGUAGE_VI);
		});

		english.onClick.AddListener (delegate {
			Strings.currentLanguage = Strings.LANGUAGE_EN;
			changeLanguage (Strings.LANGUAGE_EN);
		});

//		thai.onClick.AddListener (delegate {
//			Strings.currentLanguage = Strings.LANGUAGE_TH;
//			changeLanguage (Strings.LANGUAGE_TH);
//		});

		// dautruong
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
			signUpPanel.gameObject.SetActive (false);
			loginPanel.SetActive (true);
		} else if(GameApplication.gameApp == GameApplication.GameApp.G3C){
			// 3C
			if(text_repeat_pass != null)
				text_repeat_pass.gameObject.SetActive(false);
		} else if(GameApplication.gameApp == GameApplication.GameApp.G52Fun){
			// 52
			if(text_repeat_pass != null)
				text_repeat_pass.gameObject.SetActive(false);
		} else if(GameApplication.gameApp == GameApplication.GameApp.GTL){
			// gtl
			if(text_repeat_pass != null)
				text_repeat_pass.gameObject.SetActive(false);
		}

		// TODO: test
		if (GameApplication.DEBUG_ON) {
			DB.getInstance.deleteStoredDisID ();
			DB.getInstance.storeUserLoginInfo (null);
		}

		getConfigLinks();
		GameApplication.user.displayName = null;
		GameApplication.user.avatarSprite = null;
		cmsg.reset ();

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityAppLaunch, (float)1f, DSTFBEvent.defaultParams);
	}

	private void changeLanguage (string lan)
	{
		Strings.currentLanguage = lan;
		SuperScene.instance.showInfoDialog (Strings.instance.common_change_language);
		languageChoser.SetActive (false);
	}

	// user click vao nut login
	public void login ()
	{
//		Debug.LogError ("s1");
		// game 3c
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			if (signUpPanel != null && signUpPanel.gameObject.activeSelf) {
//				Debug.LogError ("s2");
				signUpPanel.gameObject.SetActive (false);
			} else {
//				Debug.LogError ("s4");
				// chung
				SoundManager.instance.playButtonClicked ();
				try {
					//			int ope = Int32.Parse (text_ope.text);
					string username = text_acc.text;
					string password = text_pass.text;
					
					if ((username.Length < 6) || (password.Length < 6)) {
						showInfoDialog (Strings.instance.common_login_error_3);
						return;
					}
					
					attemptLogin (username, password);
				} catch (FormatException e) {
					Debug.LogException (e);
				} catch (UnityException e) {
					cubeia = new CubeiaClient ();
					Debug.LogException (e);
				}
			}
		} else {
			if (text_repeat_pass != null && text_repeat_pass.gameObject.activeSelf) {
//				Debug.LogError ("s3");
				text_repeat_pass.gameObject.SetActive (false);
			} else {
//				Debug.LogError ("s4");
				// chung
				SoundManager.instance.playButtonClicked ();
				try {
					//			int ope = Int32.Parse (text_ope.text);
					string username = text_acc.text;
					string password = text_pass.text;

					if ((username.Length < 6) || (password.Length < 6)) {
						showInfoDialog (Strings.instance.common_login_error_3);
						return;
					}

					attemptLogin (username, password);
				} catch (FormatException e) {
					Debug.LogException (e);
				} catch (UnityException e) {
					cubeia = new CubeiaClient ();
					Debug.LogException (e);
				}
			}
		}
	}

	public void attemptLogin(string username, string password, bool onRegister = false){
		User user = GameApplication.user;
		user.loginInfo.name = username;
		user.loginInfo.password = password;
		user.loginInfo.operatorID = GameApplication.operatorID;

		LoginInfo storedLoginInfo = DB.getInstance.getStoredUserLoginInfo();
		if(!onRegister && storedLoginInfo != null 
		   && storedLoginInfo.name.Equals(user.loginInfo.name, StringComparison.OrdinalIgnoreCase) 
		   && DB.getInstance.checkOnPlayingGame()){
			user.loginInfo.gameID = storedLoginInfo.gameID;
			user.loginInfo.host = storedLoginInfo.host;
			Debug.LogWarning("OnPlayingGame "+ user.loginInfo.gameID);

			/******** ** luu y connect vao dung thong tin lan truoc de co the nhan dc reconnect ** *********/
			cubeia.login (user.loginInfo);
			showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
				user.loginInfo.gameID = GameType.GATE;
				getIPToLogin(user.loginInfo, delegate {
					cubeia.disconnect ();
					cubeia = new CubeiaClient ();
					cubeia.login (user.loginInfo);
					showWaittingDialog (Strings.instance.common_waitingdialog_loading);
				});	
			}, delegate {
				dismissWaittingDialog();
				user.loginInfo.gameID = GameType.GATE;
				DB.getInstance.storeUserLoginInfo (null);
			});
		} else if(onRegister){
			Debug.LogWarning("onRegister");
			user.loginInfo.gameID = GameType.GATE;
			user.loginInfo.host = CubeiaClient.HOST;
			
			getIPToLogin(user.loginInfo, delegate {
				cubeia.login (user.loginInfo, reg: true);
				showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
					cubeia.disconnect ();
					cubeia = new CubeiaClient ();
					cubeia.login (user.loginInfo);
				});
			});
		} else {
			if(storedLoginInfo != null){
				user.loginInfo.gameID = storedLoginInfo.gameID;
			} else {
				user.loginInfo.gameID = GameType.GATE;
			}
			user.loginInfo.host = CubeiaClient.HOST;
			Debug.LogWarning("Not OnPlayingGame, gameid: "+ user.loginInfo.gameID);

			//TODO: phai lay lai IP
			// dosomething with user.loginInfo
			
			getIPToLogin(user.loginInfo, delegate {
				if (cubeia != null)
					cubeia.disconnect ();
				cubeia = new CubeiaClient ();
				cubeia.login (user.loginInfo);
				showWaittingDialog (Strings.instance.common_waitingdialog_loading, delegate {
					getIPToLogin(user.loginInfo, delegate {
						cubeia.disconnect ();
						cubeia = new CubeiaClient ();
						cubeia.login (user.loginInfo);
						showWaittingDialog (Strings.instance.common_waitingdialog_loading);
					});
				}, delegate {
					dismissWaittingDialog();
					user.loginInfo.gameID = GameType.GATE;
					DB.getInstance.storeUserLoginInfo (null);
				});
			});
		}
	}

	public void showSignUpPanel ()
	{
		// dau truong
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
			SoundManager.instance.playButtonClicked ();
			loginPanel.SetActive (false);
			signUpPanel.gameObject.SetActive (true);
			
			signUpPanel.edtName.text = text_acc.text;
			signUpPanel.edtPass.text = text_pass.text;
		} else if(GameApplication.gameApp == GameApplication.GameApp.G3C) {
			if(text_repeat_pass.gameObject.activeSelf) {
				// dang ky
				string name = text_acc.text;
				string pass = text_pass.text;
				string repeat = text_repeat_pass.text;
				regAccount(name, pass, repeat);
			} else {
				text_repeat_pass.gameObject.SetActive(true);
			}
		} else if(GameApplication.gameApp == GameApplication.GameApp.GTL) {
			if(text_repeat_pass.gameObject.activeSelf) {
				// dang ky
				string name = text_acc.text;
				string pass = text_pass.text;
				string repeat = text_repeat_pass.text;
				regAccount(name, pass, repeat);
			} else {
				text_repeat_pass.gameObject.SetActive(true);
			}
		} else if(GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			if(text_repeat_pass.gameObject.activeSelf) {
				// dang ky
				string name = text_acc.text;
				string pass = text_pass.text;
				string repeat = text_repeat_pass.text;
				regAccount(name, pass, repeat);
			} else {
				text_repeat_pass.gameObject.SetActive(true);
			}
		}
	}

	public void regAccount(string name, string pass, string repeat){
		if (string.IsNullOrEmpty(name) || string.IsNullOrEmpty(pass) || string.IsNullOrEmpty(repeat)) {
			showInfoDialog (Strings.instance.loginscene_warning_fill_all_fields);
			return;
		}
		if (!pass.EndsWith(repeat) || pass.Length != repeat.Length) {
			showInfoDialog (Strings.instance.loginscene_warning_repeat_pass_doesnt_match);
			return;
		}
		if (name.Length < 6) {
			showInfoDialog (Strings.instance.loginscene_warning_name_too_short);
			return;
		}
		// TODO: kieu moi ko dung http
		attemptLogin(name, pass, onRegister: true);

		DSTFBEvent.LogAppEvent(DSTFBEvent.UnityRegLoginClick, (float)1f, DSTFBEvent.defaultParams);

		// TODO: check name <6 ky tu
//		string regUrl = GameApplication.url_regisuser (name, pass, GameApplication.getUniqueIdentifier());
//		Utils.ExeOneStringParam onSuccess = delegate(string result) {
//			Debug.Log(result);
//			int uid = 0;
//			int.TryParse (result,out uid);
//			if (uid > 0) {
//				attemptLogin(name, pass, onRegister: true);
//			}
//			if (uid == -3) {
//				showToast ("Số tài khoản được đăng kí trên thiết bị của bạn đã hết!");
//			}
//			if (uid == -2) {
//				showToast ("Bạn đăng kí quá nhanh , hãy làm chậm lại!");
//			}
//			if (uid == -1 || uid == 0) {
//				showToast ("Tài khoản này đã tồn tại");
//			}
//		};
//		Utils.Executor onFailed = delegate {
//			showToast(Strings.instance.common_network_error);
//		};
//		SuperScene.instance.doHTTPRequest (regUrl, onSuccess, onFailed);
	}

	void getConfigLinks ()
	{
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			if(GameApplication.ENCODE == 1){
				result = Utils.base64_decode(result);
			}
			Debug.Log ("result: " + result);
			JSONClass jsonResult = JSONNode.Parse (result).AsObject;
//			GameApplication.url_config_info = jsonResult ["url_config_info"]; // khong con lay url_config qua day nua
			GameApplication.url_dis_register = jsonResult ["url_dis_register"];
			GameApplication.url_dis_get_update_info = jsonResult ["url_dis_get_update_info"];
//			GameApplication.url_dis_get_update_info = "http://mycafe.co/services.php/tempconfig";
			
			string storedVersion = DB.getInstance.getStoredVersion();

			int storedDisID = DB.getInstance.getStoredDisID();
			if(storedDisID >= 0 && GameApplication.versionname.Equals(storedVersion)){
				getUpdateInfo(storedDisID);
//				getUpdateInfo(2295);
			} else {
				DB.getInstance.storeVersion(GameApplication.versionname);
				regDisIDAndGetUpdateInfo();
			}
		};
		Utils.Executor onFailed = delegate() {
			showToast (Strings.instance.common_network_error);
			Debug.LogError("get " + GameApplication.url_config + " FAILED.");
		};
		doHTTPRequest (GameApplication.url_config, onSuccess, onFailed);
	}

	void getUpdateInfo (int storedDisID)
	{
		string url = GameApplication.url_dis_get_update_info.
			Replace("%dis_id%", "" + storedDisID).
				Replace("%dev_id%", GameApplication.getUniqueIdentifier());

		url += "/" + SystemInfo.operatingSystem.Replace("/","_").Replace("(","").Replace(")","");
		int not_encode = 1;
		if (GameApplication.ENCODE == 1)
			not_encode = 0;
		url += ("" + not_encode);

		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			if(GameApplication.ENCODE == 1){
				result = Utils.base64_decode(result);
			}
			Debug.Log("result " + result);
			JSONClass jsonResult = JSONNode.Parse (result).AsObject;

			if (jsonResult["status"].AsBool == false){
				// Phai gui len dang ky app
				regDisIDAndGetUpdateInfo();
				return;
			}

			// lay thongtin
			BankTransferGold.vipmin = jsonResult["bank"]["vipmin"].AsInt;
			BankTransferGold.valuesList = new List<int>();
			for(int i = 0; i < jsonResult["bank"]["value"].AsArray.Count; i++){
				BankTransferGold.valuesList.Add(jsonResult["bank"]["value"][i].AsInt);
			}
			BankTransferGold.fees = new List<int>();
			for(int i = 0; i < jsonResult["bank"]["fee"].AsArray.Count; i++){
				BankTransferGold.fees.Add(jsonResult["bank"]["fee"][i].AsInt);
			}

			PaymentManager.gamenotification = jsonResult ["gamenotification"] .AsBool;

			GameApplication.configURL = jsonResult ["configURL"];
			GameApplication.fanpageURL = jsonResult ["fanpageURL"];
			GameApplication.fanpageID = jsonResult ["fanpageID"];
			GameApplication.groupURL = jsonResult ["groupURL"];
			GameApplication.groupID = jsonResult ["groupID"];
			GameApplication.inviteJoinFBMsg = jsonResult ["inviteJoinFaBMsg"];
			GameApplication.checkUserLikedFBURL = jsonResult ["likedfbcheck"];
			GameApplication.checkUserJoinedFBURL = jsonResult ["groupfbcheck"];
			GameApplication.installtrackinglink = jsonResult ["installtrackinglink"];
			GameApplication.notiservice = jsonResult ["notiservice"];
			GameApplication.url_getIpByUser = jsonResult ["iplist"];
//			Debug.LogError("GameApplication.url_getIpByUser "+ GameApplication.url_getIpByUser);

			GameApplication.hasInvitableFriends = jsonResult ["hasInvitableFriends"].AsBool;

			GameApplication.url_postgamelog = jsonResult ["postgamelog"];
			GameApplication.url_playerReportErr = jsonResult ["playerReportErr"];
			GameApplication.url_receivegamelog = jsonResult ["receivegamelog"];
			GameApplication.url_receivelogs = jsonResult ["receivelogs"];
			
			GameApplication.url_caothu_ngay = jsonResult ["url_caothu_ngay"];
			GameApplication.url_caothu_tuan = jsonResult ["url_caothu_tuan"];
			GameApplication.url_caothu_thang = jsonResult ["url_caothu_thang"];
			GameApplication.url_caothu_homqua = jsonResult ["url_caothu_homqua"];
			GameApplication.url_caothu_giaithuong = jsonResult ["url_caothu_giaithuong"];

			GameApplication.url_dungsi_homqua = jsonResult ["url_dungsi_homqua"];
			GameApplication.url_dungsi_tuan = jsonResult ["url_dungsi_tuan"];
			GameApplication.url_dungsi_thang = jsonResult ["url_dungsi_thang"];
			GameApplication.url_dungsi_giaituan = jsonResult ["url_dungsi_giaituan"];
			GameApplication.url_dungsi_giaithang = jsonResult ["url_dungsi_giaithang"];
			GameApplication.url_dungsi_gioithieu = jsonResult ["url_dungsi_gioithieu"];

			GameApplication.url_sharedailybonus = jsonResult ["url_sharedailybonus"];
			
			GameApplication.avatar_count = jsonResult ["avatar_count"].AsInt;
			if(GameApplication.avatar_count == null) GameApplication.avatar_count = 32;
			GameApplication.avatar_build = jsonResult ["avatar_build"];

			GameApplication.urlTrackingEvent = jsonResult["urlTrackingEvent"];
			Debug.LogError("URL TRACKING ==> " + GameApplication.urlTrackingEvent);
			if(!String.IsNullOrEmpty(GameApplication.urlTrackingEvent)){
				Utils.ExeOneStringParam onSuccess1 = delegate(string result1) {
					connectSocketIO();
				};
				Utils.Executor onFailed1 = delegate() {
					Debug.LogError("socketio not connected !");
				};
				doHTTPRequest (GameApplication.urlTrackingEvent, onSuccess1, onFailed1);
			}
//			Debug.Log("GameApplication.checkUserLikedFBURL "+ GameApplication.checkUserLikedFBURL);
//			Debug.Log("GameApplication.checkUserJoinedFBURL "+ GameApplication.checkUserJoinedFBURL);

			OperatorGame.setDisableGames(jsonResult ["disablegames"]);
			OperatorGame.disablesgamesbyuser = jsonResult ["disablegamesbyuser"];
			GameApplication.minVip = jsonResult["minvip"].AsInt;
			GameApplication.minGold = jsonResult["mingold"].AsInt;

			PaymentManager.sms_enable = jsonResult ["sms"] .AsBool;
			PaymentManager.iap_ios_enable = jsonResult ["iap"] .AsBool;
			PaymentManager.card_enable = jsonResult ["card"] .AsBool;
			PaymentManager.atm_enable = jsonResult ["atm"] .AsBool;
			PaymentManager.exchange_rate_enable = jsonResult ["rate"] .AsBool;
			Debug.Log ("PaymentManager.card_enable: " + PaymentManager.card_enable);

			LeaderBoard.presents = jsonResult["gtcaothu"];

//			string urlTrackingEvent = jsonResult ["urlTrackingEvent"];
//			SocketIO.SocketIOComponent.instance.Connect(urlTrackingEvent);

			// LAY THONG TIN UPDATE
			// khi status==true thi moi ton tai cac truong duoi day.
			int mode = jsonResult["updatemode"].AsInt;
			// mode == 0, vao thang ko can hoi
			// mode == 1, hoi update, 2 lua chon
			// mode == 2, hoi update, khong lua chon
			// mode == 3, thong bao, 1 lua chon OK va vao game
			// mode == 4, thong bao, 1 lua chon OK va finish
			if (mode == 0) {
				getConfig(jsonResult);
			} else if (mode > 0) {
				string op1 = jsonResult["updateop1"];
                string op2 = jsonResult["updateop2"];
                string msg = jsonResult["updatemsg"];
                string target = jsonResult["updatetarget"];

				SDialog infoDialog;
				if (mode == 2 || mode == 3 || mode == 4) {
					// show 1 lua chon duy nhat
					infoDialog = showDialog(DialogInfo.OneChoiceDialog);
				} else {
					infoDialog = showDialog(DialogInfo.OKCancelDialog);
				}

				infoDialog.content.text = msg;
				infoDialog.positiveText.text = op1;
				infoDialog.negativeText.text = op2;
				infoDialog.positive.onClick.AddListener(delegate {
					infoDialog.dismiss();
					if (mode == 1 || mode == 2) {
						gotoAppStore(target);
						Application.Quit ();
					} else if (mode == 3) {
						getConfig(jsonResult);
					} else if (mode == 4) {
						Application.Quit ();
					}
				});
				infoDialog.negative.onClick.AddListener(delegate {
					infoDialog.dismiss();
					getConfig(jsonResult);
				});

				infoDialog.invisibleXbutton();
			}
		};
		Utils.Executor onFailed = delegate() {
//			getConfig(jsonResult);
			Debug.LogError("get " + url + " Failed.");
		};
		doHTTPRequest (url, onSuccess, onFailed);
	}

	void gotoAppStore (string target)
	{
		Application.OpenURL(target);
	}

	void regDisIDAndGetUpdateInfo ()
	{
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
//			Debug.Log("result: "+result);
			if(GameApplication.ENCODE == 1) {
				result = Utils.base64_decode(result);
			}

			JSONClass jobj = JSONNode.Parse (result).AsObject;
			int id = jobj["id"].AsInt;
			DB.getInstance.storeDisID(id);
			
			getUpdateInfo(id);
		};
		Utils.Executor onFailed = delegate() {
//			getConfig();
			Debug.LogError("get "+ GameApplication.url_dis_register + " FAILED.");
		};
		doHTTPRequest (GameApplication.url_dis_register, HTTPPOSTParam.defaultParameters, onSuccess, onFailed);
	}
	
	void getConfig (JSONClass jsonResult)
	{
		CubeiaClient.HOST = jsonResult ["defaultip"];
		GameApplication.url_paymentconfig = jsonResult ["url_payment_config"];
		OperatorGame.setGames(jsonResult ["listGame"].AsArray);
		string thotline = jsonResult ["hotline"];

		if (thotline != null && thotline.Length > 0)
			hotline.text = "Hotline: " + thotline;
		else
			hotline.text = "";

		Hints.Init (jsonResult ["hints"].AsArray);

//		DailyBonus.init(jsonResult["info"]["dailybonusGold"].AsArray);

		tryAutoLogin();

		// get Paymentconfig
//		SMSSyntax.Init (jsonResult ["sms_providers"].AsArray, jsonResult ["sms_providers_3"].AsArray, jsonResult ["sms_providers_2"].AsArray);


//		Utils.ExeOneStringParam onSuccess = delegate(string result) {
//			Debug.Log ("result: " + result);
//			JSONClass jsonResult = JSONNode.Parse (result).AsObject;
//			CubeiaClient.HOST = jsonResult ["info"] ["ip"];
////			GameApplication.url_fanpage = jsonResult ["info"] ["fanpage"]; // khong con lay fanpage qua day nua
//			GameApplication.url_paymentconfig = jsonResult ["info"] ["paymentconfig"];
//
//			OperatorGame.setGames(jsonResult ["info"]["listGame"].AsArray);
//
//			hotline.text = "Hotline: "+ jsonResult["info"]["hotline"];
//
////			if(GameApplication.DEBUG_ON)
////				CubeiaClient.HOST = "203.162.166.104";
//			Hints.Init (jsonResult ["hints"].AsArray);
//			// viettel - mobifone - vinaphone
//			SMSSyntax.Init (jsonResult ["sms_providers"].AsArray, jsonResult ["sms_providers_3"].AsArray, jsonResult ["sms_providers_2"].AsArray);
//			DailyBonus.init(jsonResult["info"]["dailybonusGold"].AsArray);
//
//			tryAutoLogin();
//		};
//		Utils.Executor onFailed = delegate() {
//			Debug.LogError("get "+ GameApplication.configURL + " FAILED.");
//			showToast (Strings.instance.common_network_error);
//			tryAutoLogin();
//		};
//
//		doHTTPRequest (GameApplication.configURL, onSuccess, onFailed);
	}

	private void tryAutoLogin(){
//		 TODO: for unity editor test
//		if(GameApplication.DEBUG_ON)
//			DB.getInstance.storeUserLoginInfo (null);
		LoginInfo storedLoginInfo = DB.getInstance.getStoredUserLoginInfo();
		if(storedLoginInfo != null){
			//			Debug.LogWarning("loginInfo "+ loginInfo.toString());
			// luu y co luc doan nay bi loi
			try {
				if(storedLoginInfo.name.Length > 3){
					text_acc.text = storedLoginInfo.name;
					text_pass.text = storedLoginInfo.password;
				} else {
					text_acc.text = "";
					text_pass.text = "";
				}

				// xem xet co nen login tu dong hay ko
				if(DB.getInstance.getLoginStatus() != 1){
					return;
				}
				
				// login tu dong. Khi ma nguoi choi bat dau mo game tu ngoai.
				if(previousScene == null){
					User user = GameApplication.user;
					user.loginInfo = storedLoginInfo;

					// doi voi tai khoan tu dong dang nhap la FB, Lay lai du lieu tu FB
					if(FB.IsLoggedIn){
						Debug.Log("________ AUTOLOGIN: BY FACEBOOK");
						getFBInfoBeforeAttemptLoginToGame();
					} else {
						Debug.Log("________ AUTOLOGIN: BY REMEMBERED INFO");
						if(user.loginInfo.password.Length > 150){
							// assumm user loggedin by facebook
							getFBInfoByAccesstoken(user.loginInfo.password);
						} else {
							attemptLogin(user.loginInfo.name, user.loginInfo.password);
						}
					}
					return;
				} 
			} catch (Exception e){
				Debug.LogException(e);
				#if UNITY_IOS
				Bugsnag.Notify(e);
				#endif
			}
		} else {
			Debug.LogWarning("storedLoginInfo null");
		}

		// TODO: tu dong login
//		attemptLogin("3", GameApplication.getUniqueIdentifier());
	}

	public void logoutFB ()
	{
		Debug.Log ("call logout FB");
		FB.LogOut ();
		StartCoroutine (CheckForSuccessfulLogout ());
	}

	IEnumerator CheckForSuccessfulLogout ()
	{
		if (FB.IsLoggedIn) {
			yield return new WaitForSeconds (0.1f);
			StartCoroutine (CheckForSuccessfulLogout ());
		} else {
			// Here you have successfully logged out.
			// Do whatever you want as I do, I just enabled Login Button and Disabled
			// logout button through this method.
			// EnableFacebookLoginButton ();
			fbLogin.gameObject.SetActive (true);
			fbLoggedOption.gameObject.SetActive (false);
		}
	}


}
