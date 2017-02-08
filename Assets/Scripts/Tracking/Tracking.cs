using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;

public class Tracking
{
	public static void regInfo(){
		JSONClass data = new JSONClass();
		data ["disid"].AsInt = DB.getInstance.getStoredDisID();
		data ["bundle"] = "com.gamebigone.chaonammoi2017";
		data ["app_version"] = GameApplication.versionname;
		data ["operator"].AsInt = GameApplication.operatorID;
		data ["did"] = GameApplication.getUniqueIdentifier();
		#if UNITY_EDITOR
			data ["provider"] = "unknow";
		#else
			data ["provider"] = Countly.Bindings.GetCarrierName();	
		#endif

		data ["device_OS"] = GameApplication.getOSDevice;
		data ["device_OS_version"] = "frl";
		if (GameApplication.user.name != null) {
			data ["username"] = GameApplication.user.name;
			data ["userid"].AsInt = GameApplication.user.id;
			data ["logged_in_game_host"] = GameApplication.user.loginInfo.host;
			data ["gameid"].AsInt = GameApplication.user.loginInfo.gameID;
			data ["ag"].AsInt = GameApplication.user.ag;
			data ["vip"].AsInt = GameApplication.user.vip;
			data ["lq"].AsInt = GameApplication.user.lq;
			data ["dm"].AsInt = GameApplication.user.dm;
		}
		data ["scene_name"] = "LOGIN_VIEW";
		if (GameApplication.checkConnectSocketIO) {
			GameApplication.socketIO.Emit("reginfo", data.ToString());
			Debug.LogError ("LOG TRACKING EVENT CONNECT ===> " + data.ToString ());
		}
	}

	public static void changeScene(string sceneName,bool isTabsScene = false){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			data ["username"] = GameApplication.user.name;
			data ["userid"].AsInt = GameApplication.user.id;
			data ["logged_in_game_host"] = GameApplication.user.loginInfo.host;
			data ["gameid"].AsInt = GameApplication.user.loginInfo.gameID;
			data ["ag"].AsInt = GameApplication.user.ag;
			data ["vip"].AsInt = GameApplication.user.vip;
			data ["lq"].AsInt = GameApplication.user.lq;
			data ["dm"].AsInt = GameApplication.user.dm;
			#if UNITY_EDITOR
				data ["provider"] = "unknow";
			#else
				data ["provider"] = Countly.Bindings.GetCarrierName();	
			#endif
			data ["operator"].AsInt = GameApplication.operatorID;
			if(sceneName.Equals(GameApplication.LOGINSCENE) && !isTabsScene)
				sceneName = "LOGIN_VIEW";
			if(sceneName.Equals(GameApplication.HOMESCENE) && !isTabsScene)
				sceneName = "GAMELIST_VIEW";
			if(sceneName.Equals(GameApplication.LOBBYSCENE) && !isTabsScene)
				sceneName = "LOBBY";
			if(sceneName.Equals(GameApplication.GAMESCENE) && !isTabsScene)
				sceneName = "GAME_VIEW";
			data ["scene_name"] = sceneName;
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("changeScene", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT CHANGE SCENE ===> " + data.ToString ());
			}
		}
	}

	public static void logEventSuggestBanner(int type,string idPack){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			if(type==1)
				data ["event"] = "clickButtonShowPayment";
			if(type==2)
				data ["event"] = "closeBanner";
			if(type==3)
				data ["event"] = "clickButtonIAP";
			if(type==4)
				data ["event"] = "clickButtonSms";
			if(type==5)
				data ["event"] = "clickButtonCard";
			if(type==6)
				data ["event"] = "clickButonViewAd";
			if(type==7)
				data ["event"] = "clickButtonHaveNothing";
			if(type==8)
				data ["event"] = "clickButtonOpenUrl";
			if(type==9)
				data ["event"] = "clickButtonOpenShare";
			if(type==10)
				data ["event"] = "clickButtonOpenTransfer";
			if(type==11)
				data ["event"] = "clickButtonOpenCashout";
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT CLICKBUTTON BANNER ===> " + data.ToString ());
			}
		}
	}

	public static void sendLeaveTable(int ag,int dm,int stake){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			data ["ag"].AsInt = ag;
			data ["dm"].AsInt = dm;
			data ["stake"].AsInt = stake;
			data ["staketype"].AsInt = 0;
			data ["event"] = "leaveTable";
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT LEAVE TABLE ===> " + data.ToString ());
			}
		}
	}

	public static void sendCtable(int tid,int stake){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			data ["event"] = "ctable";
			data ["tid"].AsInt = tid;
			data ["stake"].AsInt = stake;
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT CTABLE ===> " + data.ToString ());
			}
		}
	}

	public static void sendJoinTable(int tid){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			data ["event"] = "joinTable";
			data ["staketype"].AsInt = 0;
			data ["tableId"].AsInt = tid;
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT JOINTABLE ===> " + data.ToString ());
			}
		}
	}

	public static void sendStatePayment(bool card, bool sms, bool iap, bool fromconfig){
		JSONClass data = new JSONClass();
		if (GameApplication.user.name != null) {
			data ["card"].AsBool = card;
			data ["sms"].AsBool = sms;
			data ["iap"].AsBool = iap;
			data ["fromconfig"].AsBool = fromconfig;
			data ["event"] = "statepayment";
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT STATE PAYMENT ===> " + data.ToString ());
			}
		}
	}

	public static void sendLQ(){

	}

	public static void sendInfoFinish(JSONArray finishArray){
		JSONClass data = new JSONClass();
		JSONArray jarr_name = new JSONArray();
		JSONArray jarr_vip = new JSONArray();
		List<int> vip = new List<int> ();
		List<string> name = new List<string> ();
		if (GameApplication.user.name != null) {
			for (int i = 0; i < finishArray.Count; i++) {
				var jobj = finishArray [i];
				string n = jobj ["N"];
				Player player = GameApplication.game.getPlayer(n);
				vip.Add (player.vip);
				name.Add (n);
			}

			foreach(int i in vip)
				jarr_vip [-1].AsInt = i;
			foreach(string i in name)
				jarr_name [-1] = i;
			data ["vip"] = jarr_vip;
			data ["player"] = jarr_name;
			data ["event"] = "finish";
			if (GameApplication.checkConnectSocketIO) {
				GameApplication.socketIO.Emit("event", data.ToString());
				Debug.LogError ("LOG TRACKING EVENT FINISHGAME ===> " + data.ToString ());
			}
		}
	}
}

