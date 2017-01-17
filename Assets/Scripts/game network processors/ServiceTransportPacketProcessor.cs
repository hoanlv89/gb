using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using SimpleJSON;
using com.dst.Roulette;
using System.Collections.Generic;
using Facebook.Unity;
using UnityEngine.SceneManagement;

public class ServiceTransportPacketProcessor
{
	public static void handleServiceTransportPacket (ServiceTransportPacket serviceTransportPacket)
	{
		User user = GameApplication.user;
		CubeiaClient cubeia = GameApplication.cubeia;

		string jsonServiceTransportPacket = System.Text.Encoding.UTF8.GetString (serviceTransportPacket.servicedata);
		Debug.Log ("ServiceTransportPacket: " + jsonServiceTransportPacket);
		
		var serviceData = JSONNode.Parse (jsonServiceTransportPacket);
		string evt = serviceData ["evt"];
		//______________________________
		if(evt.Equals("changepass")){
			Debug.Log(serviceData["error"]);
			int error = serviceData["error"].AsInt;
			if(error==1){
				//SuperScene.instance.showInfoDialog("Chúc mừng bạn đã đổi mật khẩu thành công!");
				SuperScene.instance.showInfoDialogWithAction ("Chúc mừng bạn đã đổi mật khẩu thành công!", delegate {
					SceneManager.LoadScene (GameApplication.STABSSCENE);
				});

				if (!string.IsNullOrEmpty (ChangePass._newPass)) {
					GameApplication.user.loginInfo.password = ChangePass._newPass;
				}
			} else
				SuperScene.instance.showInfoDialog("Đổi mật khẩu không thành công, vui lòng kiểm tra lại!");
		}

		//_______________________________
		if(evt.Equals("slotmini")){
			//ControlPlay.checkBonus = true;
		}
		//nhan cac goi cho game slots
		if(evt.Equals("slot")){
			//Debug.Log (ControlPlay.checkBonus);
			string save = "";
			string R = serviceData["R"];//ma tran item
			string WR = serviceData["RW"];//mang cac row win
			string NPR = serviceData["NPR"];//mang so cac item win
			int total = serviceData["Total"].AsInt;//tong so diem thang 
			int[]AR=new int[15];
			int [,] AAR=new int[3,5];
			if(WR == null){ControlPlay.soduong = 0;}

			//kiem tra xem co bao nhieu duong
			if(WR!=null){
				for(int i=0;i<=WR.Length-1;i++){
					if(WR[i].ToString()==";"){
						ControlPlay.soduong+=1;
					}
				}	
			}
			int[]AWR = new int[ControlPlay.soduong];
			int[]ANPR = new int[ControlPlay.soduong];
			//doc mang R tu server
			for(int i=0;i<=R.Length-1;i++){
				if(R[i].ToString() != ";"){
					save = save + R[i].ToString();
				}	else {
					AR[i/2]=int.Parse(save);
					save = "";
					//Debug.LogError(AR[i/2]);
				}
			}
			//chuyen doi tu mang mot chieu sang mang hai chieu
			for(int i=0;i<3;i++){
				for(int j=0;j<5;j++){
					AAR[2-i,j] = AR[i*5+j];
				}
			}
			//doc mang row win tu server
			if(WR!=null){
				int count = 0;
				for(int i=0;i<=WR.Length-1;i++){
					if(WR[i].ToString() != ";"){
						save = save + WR[i].ToString();
					}	else {
						AWR[count]=int.Parse(save);
						save = "";
						count+=1;
					}
				}
			}
			//doc mang Npr tu server
			if(NPR!=null){
				int count = 0;
				for(int i=0;i<=NPR.Length-1;i++){
					if(NPR[i].ToString() != ";"){
						save = save + NPR[i].ToString();
					}	else {
						ANPR[count]=int.Parse(save);
						save = "";
						count+=1;
					}
				}
			}
			ControlPlay.totalWin = total;
			ControlPlay.numberLine = AWR;
			ControlPlay.soluong = ANPR;
			ControlPlay.revMatrix(AAR);
			ControlPlay.checkRun = true;
			ControlPlay.checkAuto = true;
		}

		//______________________________

		if (evt.Equals ("0")) {
			DailyBonusNew.data = null;

			var data = JSONNode.Parse (serviceData ["data"]);
			user.id = data ["Userid"].AsInt;
			user.name = data ["Username"];
			user.ag = data ["AG"].AsInt;
			user.lq = data ["LQ"].AsInt;
			user.vip = data ["VIP"].AsInt;
			user.tinyURL = data ["Tinyurl"];
			User.pd = data ["PD"].AsInt;
			User.od = data ["OD"].AsInt;
			User.mobile = data ["M"];
			User.cmsg = data ["CMsg"].AsInt;
			int nm = data ["NM"].AsInt;
//			nm = 501;// TODO: test
			cmsg.unreadbankmail = (int)(nm / 100);
			cmsg.unreadmail = nm % 100;
			ExpView.evalue = data["MVip"].AsInt;
			PaymentManager.discount = data ["KM"].AsBool;
//			PaymentManager.discount = true;
//			PaymentManager.kmMessage = "Chao mung quoc khanh, khuyen mai 100% tren tat ca cac phuong thuc nap the.";

			OneSignal.SendTag ("deviceid", GameApplication.getUniqueIdentifier ());
			OneSignal.SendTag ("version", Application.version);
			OneSignal.SendTag ("publisher", GameApplication.referrer + "");
			OneSignal.SendTag ("gameport", GameApplication.operatorID + "");
			OneSignal.SendTag ("username", user.name);
			OneSignal.SendTag ("uservip", user.vip+"");
			OneSignal.SendTag ("userid", user.id+"");
			OneSignal.SendTag ("usergold", user.ag+"");

			// set tiep disables gold
//			Debug.LogError("GameApplication.minVip: "+ GameApplication.minVip);
//			Debug.LogError("GameApplication.minGold: "+ GameApplication.minGold);
			if (user.vip < GameApplication.minVip || user.ag < GameApplication.minGold) {
//				Debug.LogError("inhere 1 ");
				// TODO: debug
				if(!GameApplication.DEBUG_ON)
					OperatorGame.setDisableGames (OperatorGame.disablesgamesbyuser);
			} else {
//				Debug.LogError("inhere 2 ");
			}

//			if (user.avatarUrl == null)
			user.avatarUrl = Utils.buildAvatar (user.tinyURL, data ["A"].AsInt);

			// 1: thu BQT, 2: thu chuyen Gold
			if (SuperScene.instance is LoginScene || SuperScene.instance is HomeScene)
				GameApplication.notify_MT = data ["MT"].AsInt;

			GameApplication.showRegName = false;

			if (user.loginInfo.name.Equals ("1")) {
				// neu la tai khoan FB
				string UsernameLQ = data ["UsernameLQ"];
				if (UsernameLQ == null || UsernameLQ.Equals (""))
					GameApplication.showRegName = true;
			}

			JSONClass json_ref = new JSONClass ();
			json_ref ["evt"] = "ref";
			json_ref ["data"] = GameApplication.referrer;
//			Debug.LogError ("ref ====> " + GameApplication.referrer);
			json_ref ["email"] = string.IsNullOrEmpty (GameApplication.user.email) ? "" : GameApplication.user.email;
			json_ref ["version"] = GameApplication.versionname;
			cubeia.sendService (json_ref);

			JSONClass json = new JSONClass ();
			json ["evt"] = "7";
			cubeia.sendService (json);

//			#if UNITY_IOS
			// TODO: test
//			Bugsnag.AddToTab ("user", "username", user.name);
//			Bugsnag.AddToTab ("user", "userid", "" + user.id);
//			Bugsnag.AddToTab ("user", "from", GameApplication.referrer);
//			#endif
//			if(GameApplication.DEBUG_ON){
//				User.pd = 2;
//				GameApplication.showRegName = true;
//				GameApplication.notify_MT = 1;
//			}

			DB.getInstance.storeUserLoginInfo (GameApplication.user.loginInfo);
			DB.getInstance.storeLoginStatus (1);

			// doi voi 8011, ko nhan dc evt 2
//			if (cubeia.gameId == GameType.GATE && !GameApplication.gameApp.Equals (GameApplication.GameApp.GTL)) {
//				SuperScene.instance.dismissWaittingDialog ();
//				if (!SceneManager.GetActiveScene ().name.Equals (GameApplication.HOMESCENE)) {
//					if (SceneManager.GetActiveScene ().name.Equals (GameApplication.LOGINSCENE)) {
//						DB.getInstance.storeLoginStatus (0);
//						DSTFBEvent.LogAppEvent(DSTFBEvent.UnityHallOpenSuccess, (float)1f, DSTFBEvent.defaultParams);
//					}
//					SceneManager.LoadScene (GameApplication.HOMESCENE);
//				}
//			}
		} else if (evt.Equals ("2") || evt.Equals ("getLR")) {
			JSONArray data = JSONNode.Parse (serviceData ["data"]).AsArray;
			Debug.Log (string.Format ("list rooms size : {0}", data.Count));
		

			cubeia.roomList = new RoomGame[data.Count];
			for (int i = 0; i < data.Count; i++) {
				bool isFree = (data [i] ["Id"].AsInt == 5);
				RoomGame roomGame = new RoomGame (
					                    data [i] ["Id"].AsInt,
					                    data [i] ["Name"],
					                    data [i] ["MaxTable"].AsInt,
					                    data [i] ["CurPlay"].AsInt,
					                    data [i] ["MaxPlay"].AsInt,
					                    data [i] ["CurTable"].AsInt,
					                    isFree
				                    );
				cubeia.roomList [i] = roomGame;
			}

			// TODO: vi dc lay dc du lieu roi moi chuyen scene nen ko can cap nhat view doan nay nua
			if (SuperScene.instance is LobbyScene) {
				LobbyScene lobbyScene = (LobbyScene)SuperScene.instance;
				// sau khi da luu room vao cubeia.roomList, update view
				if (GameApplication.gameApp.Equals (GameApplication.GameApp.DauTruong)) {
					lobbyScene.updateRoomDT ();
				} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.G3C)) {
					lobbyScene.updateRoom3C ();
				} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.GTL)) {
					lobbyScene.updateRoom3C ();
				} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.G52Fun)) {
					lobbyScene.updateRoom52 ();
				} else {
					Debug.LogError ("GameApplication.gameApp = " + GameApplication.gameApp);
					Debug.LogError ("Chua ton tai ham update");
					lobbyScene.updateRoomDT ();
				}
			}

			// ** co 2 truong hop xu ly khi mat ket noi
			// ** 1. mat trong ban choi, thuc hien ket noi lai ngay (truong hop man hinh bi den)
			// ** - tu gameScene ta muon game login va vao lai gameScene ngay ko can qua lobby
			// ** 2. User tat app di, mo lai app
			// ** - game tu dang nhap vao thang GameScene ko qua Home va Lobby

			// go to the next scene
			SuperScene.instance.dismissWaittingDialog ();


			// dieu kien tien quyet la phai nhan dc reconnect truoc khi nhan dc "2"
			if (GameApplication.onReconnect) {
				// switch the state ...
				GameApplication.onReconnect = false;

				// then do nothing
				// ko chuyen scence
				// vi se nhan dc JoinGameResponse, game se chuyen sang GameScene
			} else {
				if (SceneManager.GetActiveScene ().name.Equals (GameApplication.LOGINSCENE)) {
					Debug.Log ("step 1");
					DB.getInstance.storeLoginStatus (0);
					SceneManager.LoadScene (GameApplication.HOMESCENE);
					Tracking.changeScene (GameApplication.HOMESCENE);
				} else if (SceneManager.GetActiveScene ().name.Equals (GameApplication.HOMESCENE)) {
					Debug.Log ("step 2");
					if (SuperScene.instance.onCheckingConnection) {
						Debug.Log ("step 3");
						SuperScene.instance.onCheckingConnection = false;
						SceneManager.LoadScene (GameApplication.HOMESCENE);
					} else {
						Debug.Log ("step 4");
//						if(GameApplication.user.vip == 0 && GameApplication.user.ag >= 1000)
//						{
//							var json = new JSONClass ();
//							json ["evt"] = "searchT";
//							json ["gameid"].AsInt = cubeia.gameId;
//
//							cubeia.sendService (json);
//							SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
//						} else {
						//  ngay xua 8011 ko nhan dc evt 2, gio lại nhận đc, nên mình thêm cái này
//						if (cubeia.gameId != GameType.GATE)
							SceneManager.LoadScene (GameApplication.LOBBYSCENE);
							Tracking.changeScene (GameApplication.LOBBYSCENE);
////						}
					}
				} else if (SceneManager.GetActiveScene ().name.Equals (GameApplication.GAMESCENE)) {
					Debug.Log ("step 5");
					// ** thuc te se khong bao gio chay vao day.
					// "old": {
					// ** Ta can backtoLobby khi bi mat ket noi, thuc hien thao tac ket noi lai ngay trong gameScene
					// ** Tuy nhien truong hop rjtable, ta nhan dc evt = 2 sau khi da vao gameScene, ma ko muon thoat ra ngoai
					// }
					GameApplication.game.backToLobby ();
					GameApplication.game = null;
					GameApplication.gameScene = null;
				} else {
					Debug.Log ("step 6");
					SceneManager.LoadScene (GameApplication.LOBBYSCENE);
					Tracking.changeScene (GameApplication.LOBBYSCENE);
				}
			}
		} else if (evt.Equals ("3") || evt.Equals ("selectR")) {
			// sau khi nhan tin hieu vao room, subcribe room nay
			if (SuperScene.instance is LobbyScene) {
				LobbyScene lobby = (LobbyScene)SuperScene.instance;
				lobby.dismissTablelistWaitingDialog ();
			}
			cubeia.subcribeRoom (cubeia.currentRoom);
		} else if (evt.Equals ("firstlogin")) {
			DailyBonusNew.data = serviceData;
			if (SuperScene.instance is HomeScene) {
				((HomeScene)SuperScene.instance).showDailyBonus ();
			}
		} else if(evt.Equals ("siamdaily")){
			int total=serviceData ["M"].AsInt;
			int status =serviceData ["X"].AsInt;
			int friends =serviceData ["F"].AsInt;
			int daily =serviceData ["D"].AsInt;
			int wheel =serviceData ["R"].AsInt;
			if(SuperScene.instance is HomeScene){
				HomeScene home = (HomeScene)SuperScene.instance;
				if(home.dailyBonus != null)
					home.dailyBonus.result(wheel,friends,daily,status,total);
			}
			Debug.LogError("");
		} else if (evt.Equals ("ca")) {
			user.inGameName = serviceData ["data"];
		} else if (evt.Equals ("ltv")) {
			var arr = JSON.Parse (serviceData ["data"]).AsArray;
			RoomGame.visibleList.Clear ();
			GameApplication.stakeList.Clear ();
			GameApplication.ccusList.Clear ();
			for (int i = 0; i < arr.Count; i++) {
				RoomGame.visibleList.Add (arr [i] ["mark"].AsInt);
				GameApplication.stakeList.Add (arr [i] ["mark"].AsInt);
				GameApplication.ccusList.Add (arr [i] ["currplay"].AsInt);
			}
		} else if (evt.Equals ("pctable")) {
			var arr = JSON.Parse (serviceData ["data"]).AsArray;
			TableGame.tableOptionList.Clear ();
			for (int i = 0; i < arr.Count; i++) {
				int d = arr [i] ["D"].AsInt;
				bool enable = false, suggest = false;
				if (d == 0) {
					enable = false;
					suggest = false;
				} else if (d == 1) {
					enable = true;
					suggest = false;
				} else if (d == 2) {
					enable = true;
					suggest = true;
				}
				TableOptionItem option = new TableOptionItem (arr [i] ["M"].AsInt, enable, suggest);
				TableGame.tableOptionList.Add (option);
			}

			if (SuperScene.instance is LobbyScene) {
				((LobbyScene)SuperScene.instance).showNewTableOption ();
			}

			if (SuperScene.instance is GameScene) {
				((GameScene)SuperScene.instance).controllerControl.showGameSettingPanel();
			}
		} else if (evt.Equals ("100")) {
			// OtherFunction.SpecialAlert(decoded.Cmd) ;
			SuperScene.instance.showServerNotification (serviceData ["Cmd"], 1, 30);

		} else if (evt.Equals ("uvip")) {
			int plusAG = serviceData ["AG"].AsInt;
			user.ag = user.ag + plusAG;
			user.vip = 1;
			if(SuperScene.instance is GameScene && GameApplication.game.thisPlayer != null){
//				Debug.LogError ("GameApplication.game.thisPlayer.text_vip.text = 1");
				GameApplication.game.thisPlayer.vip = 1;
				GameApplication.game.thisPlayer.text_vip.text = "1";
				GameApplication.game.thisPlayer.ag = user.ag;
				GameApplication.game.thisPlayer.viewControl.ag.text = "$" + Utils.formatNumber (user.ag);
			}
			SuperScene.instance.showInfoDialog (Strings.instance.common_uplevel);
		} else if (evt.Equals ("uag")) {
			GameApplication.user.ag = serviceData ["ag"].AsInt;
			GameApplication.user.lq = serviceData ["lq"].AsInt;
			GameApplication.user.vip = serviceData ["vip"].AsInt;
			if (SuperScene.instance is IUpdateUserInfo) {
				((IUpdateUserInfo)SuperScene.instance).updateInfo ();
			}
		} else if (evt.Equals ("SAON")) {
			if (PaymentManager.gamenotification) {
				NotificationCenter.staticMessage = serviceData ["Cmd"];
				if(NotificationCenter.staticMessage.Contains("thẻ cào") 
				   || NotificationCenter.staticMessage.Contains("100%")
				   || NotificationCenter.staticMessage.Contains("50%")){
					PaymentManager.discount = PaymentManager.card_enable;
					Debug.Log ("PaymentManager.card_enable: " + PaymentManager.card_enable);
					Debug.Log ("PaymentManager.discount: " + PaymentManager.discount);
					PaymentManager.kmMessage = NotificationCenter.staticMessage;
				}
				SuperScene.instance.showServerNotification (serviceData ["Cmd"], 100, 300);
			}
		} else if (evt.Equals ("SAOFF")) {
			SuperScene.instance.dismissServerNotification ();
		} else if (evt.Equals ("salert")) {
			string message = serviceData ["Cmd"];
			if (message == null || message.Length < 1)
				message = serviceData ["data"];
			SuperScene.instance.showServerNotification (NotificationCenter.Type.red, message, 1, 30);
		} else if (evt.Equals ("autoExit")) {
			if (SuperScene.instance is GameScene) {
				string data = serviceData ["data"];
				((GameScene)SuperScene.instance).controllerControl.gameNotification.showNotificationAutoDismiss (data);
			}
//			SuperScene.instance.showServerNotification (serviceData ["data"], 1, 30);
		} else if (evt.Equals ("rl")) {
			int number_win = serviceData ["N"].AsInt;
			int id = serviceData ["id"].AsInt;
			int ag = serviceData ["LQ"].AsInt;
			user.ag = ag;
			// TODO: roulette
			EventSink.onSpin (number_win, id, ag);
		} else if (evt.Equals ("frl")) {
			int ag = serviceData ["AG"].AsInt;
			user.ag = user.ag + ag;
			EventSink.onFinish (ag);
		}else if (evt.Equals ("am")) {
			int ag = serviceData ["M"].AsInt;
			user.ag = user.ag + ag;
			if(SuperScene.instance is RouletteScene){
				EventSink.onAMFinish (ag);
			}
		} else if (evt.Equals ("xs")) {
			user.ag = serviceData ["AG"].AsInt;
			SuperScene.instance.dismissWaittingDialog ();
			SuperScene.instance.showInfoDialog (Strings.instance.gameplay_xoso_bet_success);
			if (SuperScene.instance is STabsScene) {
				((STabsScene)SuperScene.instance).betControl.updateHistory ();
			}
		} else if (evt.Equals ("10")) {
			string message = serviceData ["Cmd"];
			if (message == null || message.Length < 1)
				message = serviceData ["data"];
			message.Replace("AG", GameApplication.COIN);
			message = Strings.instance.getLocalString (message);

			SuperScene.instance.dismissWaittingDialog ();

			if (SuperScene.instance is HomeScene) {
				HomeScene homeScene = (HomeScene)SuperScene.instance;
				if (homeScene.regFBUserName.gameObject.activeSelf == true) {
					GameApplication.showRegName = false;
					homeScene.regFBUserName.setResult (message);
					return;
				}
			}
			SuperScene.instance.showInfoDialog (message);
		} else if (evt.Equals ("13")) {
			string message = serviceData ["Cmd"];
			if (message == null || message.Length < 1)
				message = serviceData ["data"];
			message = Strings.instance.getLocalString (message);
			
			SuperScene.instance.dismissWaittingDialog ();
			SuperScene.instance.showInfoDialog (message);
		} else if (evt.Equals ("15")) {
			// co thu moi
			bool checkgamesence = false;
			if( SuperScene.instance is GameScene){
				checkgamesence = true;
			} else checkgamesence = false;
			if (serviceData ["T"].AsInt == 10 && checkgamesence==false ) {
				//SuperScene.instance.showServerNotification (Strings.instance.dialog_common_notify_new_mail);
				User.cmsg ++;
				cmsg.unreadmail++;
				SuperScene.instance.showHasMail();
				//Debug.LogError("co mail");
			}
		} else if (evt.Equals ("ivp")) {
			if (SuperScene.instance is GameScene) {
				string data = serviceData["data"];
				if(string.IsNullOrEmpty(data))
					return;
				((GameScene)SuperScene.instance).showInviteBox (JSONClass.Parse (data).AsArray);

			} else if (SuperScene.instance is LobbyScene && DB.getInstance.getInviteLobby()==0) {
				string N = serviceData ["N"];
				int AG = serviceData ["AG"].AsInt;
				string T = serviceData ["T"];
				int TID = serviceData ["TID"].AsInt;
				int AGU = serviceData ["AGU"].AsInt;
				((LobbyScene)SuperScene.instance).regShowInviteBox (N, AG, T, TID, AGU);
			}
		} else if (evt.Equals ("20") || evt.Equals ("21") || evt.Equals ("22")) {
			// danh sach thu he thong
			int totalPages = serviceData ["P"].AsInt;
			JSONArray data = JSONNode.Parse (serviceData ["data"]).AsArray;
//			Mail.mails20.Clear ();
//			Mail.mails21.Clear ();
//			Mail.mails22.Clear ();
			if (evt.Equals ("20")) // he thong
				Mail.mails20.Clear ();
			if (evt.Equals ("21")) // nguoi choi
				Mail.mails21.Clear ();
			if (evt.Equals ("22")) // thu co Gold 
				Mail.mails22.Clear ();
			for (int i = 0; i<data.Count; i++) {
				var jobj = data [i];
				Mail mail = new Mail (
					jobj ["Id"].AsInt,
					jobj ["T"].AsInt,
					jobj ["Vip"].AsInt,
					jobj ["From"],
					jobj ["To"],
					jobj ["AG"].AsInt,
					jobj ["I"].AsInt,
					jobj ["Msg"],
					jobj ["Time"].AsLong,
					jobj ["S"].AsBool,
					jobj ["D"].AsBool
				);
				if (evt.Equals ("20"))
					Mail.mails20.Add (mail);
				if (evt.Equals ("21"))
					Mail.mails21.Add (mail);
				if (evt.Equals ("22"))
					Mail.mails22.Add (mail);
			}
			if (SuperScene.instance is STabsScene) {
				STabsScene stabs = (STabsScene)SuperScene.instance;
				stabs.refreshMail ();
			}
		} else if (evt.Equals ("31")) {
			// da nhan dc tien
			int plus = serviceData ["AG"].AsInt;
			user.ag += plus;
			SuperScene.instance.showInfoDialog (Strings.instance.common_noti_get_gold.Replace ("%value%", Utils.formatNumber (plus) + " " + GameApplication.COIN));
			if (SuperScene.instance is STabsScene) {
				STabsScene stabs = (STabsScene)SuperScene.instance;
				stabs.updateListMailWhenGetGoldOK ();
			}
		} else if (evt.Equals ("RUF")) {
			// da nhan dc tien
			user.name = serviceData ["U"];
			GameApplication.showRegName = false;
			if (SuperScene.instance is HomeScene) {
				HomeScene homeScene = (HomeScene)SuperScene.instance;
				homeScene.showToast (Strings.instance.home_dialog_reg_success);
				homeScene.updateInfo ();
				homeScene.regFBUserName.dismiss ();
			}

		} else if (evt.Equals ("reconnect")) {
			// dat co la dang reconnect
			GameApplication.onReconnect = true;

			// clear old info
			if (SceneManager.GetActiveScene ().name.Equals (GameApplication.GAMESCENE)) {
				// voi cac game auto ready, thi ca nguoi choi cung da bi thay doi, nen ta load lai 
				if(GameApplication.game is IAutoReadyGame || GameApplication.game is GameBinh){
					// bat dau luu lai log van moi
					GamesLogs.newLog();
					LevelManager.Load(GameApplication.GAMESCENE);
					GameApplication.gameScene = null;
					GameApplication.game = null;
				} else {
					GameApplication.game.onReconnection ();
					//			GameApplication.gameScene = null;
				}
			}

			// gui len
			int tableid = int.Parse (serviceData ["Cmd"]); 

			var data = new JSONClass ();
			data ["evt"] = "reconnect";
			data ["tableid"].AsInt = tableid;
			data ["gameid"].AsInt = cubeia.gameId;

			cubeia.sendService (data);
		} else if (evt.Equals ("dp")) {
			// da nhan dc tien
			User.pd = 0;
			int plus = serviceData ["AG"].AsInt;
			user.ag += plus;
			SuperScene.instance.showInfoDialog (Strings.instance.common_noti_get_gold.Replace ("%value%", Utils.formatNumber (plus) + " " + GameApplication.COIN));
			if (SuperScene.instance is HomeScene && GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				HomeScene homeScene = (HomeScene)SuperScene.instance;
				homeScene.updateInfo ();
				homeScene.dailyBonus.gameObject.SetActive (false);
			}
		} else if (evt.Equals ("pf")) {
			SuperScene.instance.showInfoDialog (Strings.instance.updateInfo);
		} else if (evt.Equals ("changea")) {
			int err = serviceData ["error"].AsInt;
			if (err == 0) {
				SuperScene.instance.showInfoDialog (Strings.instance.updateInfo);
				user.avatarUrl = Utils.buildAvatar ("nothing", GameApplication.inChangingAvatar);
				user.avatarSprite = null;
//				if(SuperScene.instance is IUpdateUserInfo){
//					((IUpdateUserInfo)SuperScene.instance).updateAvatar();
//				}
			} else if (err == 1) {
				SuperScene.instance.showInfoDialog ("Chưa hỗ trợ đổi avatar cho user facebook.");
			} else {
				SuperScene.instance.showInfoDialog ("Bạn đang dùng avatar này.");
			}
		} else if (evt.Equals ("fb")) {
			int err = serviceData ["error"].AsInt;
			if (err == 0) {
				SuperScene.instance.showToast (Strings.instance.gameplay_xoso_bet_success);
				int ag = serviceData ["AG"].AsInt;
				GameApplication.user.ag=ag;
				SuperScene.instance.dismissWaittingDialog();
				STabsScene tabs = (STabsScene)SuperScene.instance;
				tabs.closeDialogDatcuocbongda();
			}
			if (err == 1) {
				SuperScene.instance.showToast (Strings.instance.bongda_error1);
				SuperScene.instance.dismissWaittingDialog();
				STabsScene tabs = (STabsScene)SuperScene.instance;
				tabs.closeDialogDatcuocbongda();
			}
		} else if (evt.Equals ("iap_ios")) {
			int status = serviceData ["status"].AsInt;
			SuperScene.instance.showInfoDialog (serviceData ["msg"]);

			if (status == 0) {
				user.ag = serviceData ["gold"].AsInt;
				user.vip = serviceData ["vip"].AsInt;

				if (SuperScene.instance is IUpdateUserInfo) {
					((IUpdateUserInfo)SuperScene.instance).updateInfo ();
				}
			}
		} else if (evt.Equals ("searchTErr")) {
			string msg = serviceData ["data"];
			if(!string.IsNullOrEmpty(msg))
				SuperScene.instance.showInfoDialog (msg);
			SuperScene.instance.dismissWaittingDialog ();
		} else if (evt.Equals ("cashout")) {
			string C = serviceData ["C"];
			string S = serviceData ["S"];
			string msg = "Chúc mừng bạn đã đổi thành công thẻ " + CashoutTheCao.selectedType + " mệnh giá " + CashoutTheCao.selectedValue 
				+ "\nMã PIN: " + C + " Số Serial: " + S ;
			SuperScene.instance.dismissWaittingDialog();
			SuperScene.instance.showInfoDialog (msg);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnityCashOutSuccess, (float)1f, DSTFBEvent.defaultParams);
//			var fbparams = new Dictionary<string, object>();
//			fbparams.Add("username", GameApplication.user.name);
//			fbparams.Add("vip", GameApplication.user.vip);
//			fbparams.Add("gold", GameApplication.user.ag);
//			fbparams.Add("card", CashoutTheCao.selectedValue);
//			FB.LogAppEvent("cashout_done", (float)1, fbparams);
		} else if (evt.Equals ("7")) {
			int freeGold = serviceData["data"].AsInt;
			user.ag += freeGold;
			string msg=Strings.instance.common_gift_money.Replace("%Game%",GameApplication.gameName).Replace("%1000%",Utils.formatNumber(freeGold)).Replace("%Gold%",GameApplication.COIN);
//			SDialog dialog = SuperScene.instance.showInfoDialog(
//				GameApplication.gameName + " gửi tặng bạn " + 
//				Utils.formatNumber(freeGold) + " " + GameApplication.COIN + ". Chúc bạn chơi game vui vẻ!");
			SDialog dialog = SuperScene.instance.showInfoDialog(msg);
			dialog.onDismiss = delegate {
				if(SuperScene.instance is IUpdateUserInfo)
					((IUpdateUserInfo) SuperScene.instance).updateInfo();
			};
		} else if (evt.Equals ("16")) {
//			int status = serviceData ["status"].AsInt;
			MsgChat msgChat = new MsgChat(jsonServiceTransportPacket);
			MsgChat.all.Add(msgChat);
			if(msgChat.type==2){
				MsgChat.game.Add(msgChat);
			}
			if(msgChat.type==1){
				MsgChat.thegio.Add(msgChat);
			}
			if(msgChat.type==4){
				MsgChat.rieng.Add(msgChat);
			}
			if (SuperScene.instance is STabsScene && STabsScene.tabsType == STabsScene.STabType.CHATROOM) {
				STabsScene stabs = (STabsScene)SuperScene.instance;
				stabs.refreshChat (msgChat.type);
			}
		}
	}

}


