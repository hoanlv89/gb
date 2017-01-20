using UnityEngine;

// Statics for holding the connection to the SFS server end
// Can then be queried from the entire game to get the connection
using SimpleJSON;
using System;
using BestHTTP.SocketIO;
using System.Collections;
using System.Collections.Generic;

public class GameApplication : MonoBehaviour
{
// hien ko can dung cai nay nua
//	public static string bundleID {
//		get {
//			if (gameApp == GameApp.LangQuat)
//				return "langquat";
//			if (gameApp == GameApp.DauTruong)
//				return "com.dstvn.gamedautruong";
//			if (gameApp == GameApp.G3C)
//				return "com.gamevipdoithuong.gamebaidoithuong";//"com.gamedanhbai.vn";//"com.game3c.gamedangian";
//			if (gameApp == GameApp.G52Fun)
//				return "com.roosam.game3f";//"com.giaitri.danhbai52fun";
//			if (gameApp == GameApp.GTL)
//				return "com.tl.game";
//			return "com.dstvn.gamedautruong";
//		}
//	}

	public static string appleAppID {
		get {
			if (gameApp == GameApp.LangQuat)
				return "none";
			if (gameApp == GameApp.DauTruong)
				return "988325454";
			if (gameApp == GameApp.G3C)
				return "1008087957";
			if (gameApp == GameApp.G52Fun)
				return "1012848930";
			return "988325454";
		}
	}


	// khong can dung 2 cai nay nua
	public static string versionname {
		get {
			return "2.2";
		}
	}

	public static string versioncode {
		get {
			return "44";
		}
	}

	public static bool DEBUG_ON = false;
	public static int ENCODE = 1; // hoac 0
	public static readonly GameApp gameApp = GameApp.DauTruong;

	public enum GameApp
	{
		LangQuat,
		DauTruong, 
		G3C,
		G52Fun,
		GTL
	}

	public static string LOGINSCENE {
		get{
			if (gameApp == GameApp.LangQuat)
				return "LoginScene";
			if (gameApp == GameApp.DauTruong)
				return "LoginScene";
			if (gameApp == GameApp.G3C)
				return "LoginScene3C";
			if (gameApp == GameApp.G52Fun)
				return "LoginScene52";
			if (gameApp == GameApp.GTL)
				return "LoginSceneTL";
			return "LoginScene";
		}
	}
	public const string ROULETTE = "Roulette";
	public const string SLOTSSCENE = "MainGame";
	public const string REPLAYSCENE = "ReplayScene";
	public static string STABSSCENE {
		get{
			if (gameApp == GameApp.LangQuat)
				return "TabsScene";
			if (gameApp == GameApp.DauTruong)
				return "TabsScene";
			if (gameApp == GameApp.G3C)
				return "TabsScene3C";
			if (gameApp == GameApp.G52Fun)
				return "TabsScene52";
			if (gameApp == GameApp.GTL)
				return "TabsSceneTL";
			return "TabsScene";
		}
	}
	public static string HOMESCENE {
		get{
			if (gameApp == GameApp.LangQuat)
				return "HomeScene";
			if (gameApp == GameApp.DauTruong)
				return "HomeScene";
			if (gameApp == GameApp.G3C)
				return "HomeScene3C";
			if (gameApp == GameApp.G52Fun)
				return "HomeScene52";
			if (gameApp == GameApp.GTL)
				return "HomeSceneTL";
			return "HomeScene";
		}
	}
	public static string LOBBYSCENE {
		get{
			if (gameApp == GameApp.LangQuat)
				return "LobbyScene";
			if (gameApp == GameApp.DauTruong)
				return "LobbyScene";
			if (gameApp == GameApp.G3C)
				return "LobbyScene3C";
			if (gameApp == GameApp.G52Fun)
				return "LobbyScene52";
			if (gameApp == GameApp.GTL)
				return "LobbySceneTL";
			return "LobbyScene";
		}
	}
	public static string GAMESCENE {
		get{
			if (gameApp == GameApp.LangQuat)
				return "GameScene";
			if (gameApp == GameApp.DauTruong)
				return "GameScene";
			if (gameApp == GameApp.G3C)
				return "GameScene3C";
			if (gameApp == GameApp.G52Fun)
				return "GameScene52";
			if (gameApp == GameApp.GTL)
				return "GameSceneTL";
			return "GameScene";
		}
	}

	public static string COIN {
		get{
			if (gameApp == GameApp.LangQuat)
				return "Gold";
			if (gameApp == GameApp.DauTruong)
				return "Gold";
			if (gameApp == GameApp.G3C)
				return "Gold";
			if (gameApp == GameApp.G52Fun)
				return "Gold";
			if (gameApp == GameApp.GTL)
				return "ชิป";
			return "Gold";
		}
	}

	private static GameApplication mInstance;
	private static CubeiaClient cubeiaClient;
	private static GameScene mgameScene;
	private static Game mgameObject;
	private static User mUser;
	private static string mUniqueIdentifier;
	public static SocketManager Manager;
	public static Socket socketIO;
	public static bool checkConnectSocketIO = false;

	public static string url_paymentconfig;
	public static string url_getIpByUser;
	public static string url_dis_register;
	public static string url_dis_get_update_info;

	public static string url_postgamelog;
	public static string url_playerReportErr;
	public static string url_receivegamelog;
	public static string url_receivelogs;
	
	public static string url_caothu_ngay;
	public static string url_caothu_tuan;
	public static string url_caothu_thang;
	public static string url_caothu_homqua;
	public static string url_caothu_giaithuong;

	public static string url_dungsi_homqua;
	public static string url_dungsi_tuan;
	public static string url_dungsi_thang;
	public static string url_dungsi_giaituan;
	public static string url_dungsi_giaithang;
	public static string url_dungsi_gioithieu;

	public static string url_sharedailybonus;

	public static String configURL;
	public static String fanpageURL;
	public static String fanpageID;
	public static String groupURL;
	public static String groupID;
	public static String inviteJoinFBMsg;
	public static String checkUserLikedFBURL;
	public static String checkUserJoinedFBURL;
	public static String apnDeviceToken;
	public static String installtrackinglink;
	public static String notiservice;
	public static bool hasInvitableFriends;

	public static bool hasCheckedFBService;
	public static bool hasLikedFanpage;
	public static bool hasJoinedGroup;

	public static string HOTLINE;
	public static int minVip;
	public static int minGold;

	public static int avatar_count;
	public static string avatar_build;
	public static string urlTrackingEvent;

	public static List<int> stakeList = new List<int>();
	public static List<int> ccusList = new List<int>();

	public static string admin_account {
		get {
			if (gameApp == GameApp.LangQuat)
				return "admin";
			if (gameApp == GameApp.DauTruong)
				return "admindautruong";
			if (gameApp == GameApp.G3C)
				return "admingame3c";
			if (gameApp == GameApp.G52Fun)
				return "admin52Fun";
			return "admin";
		}
	}

	public static string referrer {
		get {
			if (gameApp == GameApp.LangQuat)
				return "unity_langquat_official";
			if (gameApp == GameApp.DauTruong)
				return "xuantung"; // ios_dautruong_official
			if (gameApp == GameApp.G3C)
				return "dung59";//"unity_3c_android_official";//"unity_3c_040216";//
			if (gameApp == GameApp.G52Fun)
				return "android_unity_52f_tung_14_4_16";//"unity_52fun_official";//"unity_52fun_040216";//"unity_52fun_official";
			if (gameApp == GameApp.GTL)
				return "3c_publisher04_250706";

			return "dis_unity_official";
		}
	}

	public static int operatorID {
		get {
//			if(DEBUG_ON)
//				return 6000;
			if (gameApp == GameApp.LangQuat)
				return 110;
			if (gameApp == GameApp.DauTruong)
				return 500;
			if (gameApp == GameApp.G3C)
				return 5000;
			if (gameApp == GameApp.G52Fun)
				return 5200;
			if (gameApp == GameApp.GTL)
				return 1000;

			return 500;
		}
	}

	public static string gameName {
		get {
			if (gameApp == GameApp.LangQuat)
				return "Làng quạt";
			if (gameApp == GameApp.DauTruong)
				return "Đấu trường";
			if (gameApp == GameApp.G3C)
				return "Game 3C";
			if (gameApp == GameApp.G52Fun)
				return "52Fun";
			if (gameApp == GameApp.GTL)
				return "Game Thai";

			return "Đấu trường";
		}
	}

	// xac dinh co thu den
	public static int notify_MT = 0;

	// xac dinh dang reconnect, khi nhan dc rjtable
	public static bool onReconnect = false;

	// xac dinh mo
	public static bool showRegName = false;

	// ava dang doi
	public static int inChangingAvatar;

	public static User user {
		get {
			if (mUser == null) {
				mUser = new User ();
			}
			return mUser;
		}
		set {
			
		}
	}

	public static Resource resource {
		get {
			return Resource.instance;
		}
	}

	public static Game game {
		get {
			if (mgameObject == null) {
				if (cubeiaClient.gameId == GameType.TIENLEN)
					mgameObject = new GameTienLen ();
				else if (cubeiaClient.gameId == GameType.POKER)
					mgameObject = new GamePoker ();
				else if (cubeiaClient.gameId == GameType.XITO)
					mgameObject = new GameXiTo ();
				else if (cubeiaClient.gameId == GameType.LIENG)
					mgameObject = new GameLieng ();
				else if (cubeiaClient.gameId == GameType.BINH)
					mgameObject = new GameBinh ();
				else if (cubeiaClient.gameId == GameType.SAM)
					mgameObject = new GameSam ();
				else if (cubeiaClient.gameId == GameType.XOCDIA)
					mgameObject = new GameXocDia ();
				else if (cubeiaClient.gameId == GameType.TALA)
					mgameObject = new GameTaLa ();
				else if (cubeiaClient.gameId == GameType.CHAN)
					mgameObject = new GameChan ();
				else if (cubeiaClient.gameId == GameType.G9K)
					mgameObject = new Game9K ();
				else if (cubeiaClient.gameId == GameType.DUMMY)
					mgameObject = new GameDummy ();
			}

			return mgameObject;
		}
		set {
			mgameObject = value;
		}
	}

	public static CubeiaClient cubeia {
		get {
			if (mInstance == null) {
				mInstance = new GameObject ("GameApplication").AddComponent (typeof(GameApplication)) as GameApplication;
			}
			return cubeiaClient;
		}
		set {
			if (mInstance == null) {
				mInstance = new GameObject ("GameApplication").AddComponent (typeof(GameApplication)) as GameApplication;
			}
			cubeiaClient = value;
		} 
	}

	public static GameScene gameScene {
		get {
			return mgameScene;
		}
		set {
			mgameScene = value;
		} 
	}

	public static bool IsInitialized {
		get { 
			return (cubeiaClient != null && mUser != null); 
		}
	}
	
	// Handle disconnection automagically
	// ** Important for Windows users - can cause crashes otherwise
	void OnApplicationQuit ()
	{ 
		//		if (cubeiaClient.IsConnected) {
		//			cubeiaClient.Disconnect();
		//		}
	}

	public static string getUniqueIdentifier() {
		if(mUniqueIdentifier != null){
			Debug.Log ("uid: " + mUniqueIdentifier);
			return mUniqueIdentifier;
		}

		#if UNITY_EDITOR
			mUniqueIdentifier = SystemInfo.deviceUniqueIdentifier;
			return mUniqueIdentifier;
		#endif
		
		#if UNITY_ANDROID
			//do stuff unique to Android
			AndroidJavaClass up = new AndroidJavaClass ("com.unity3d.player.UnityPlayer");
			AndroidJavaObject currentActivity = up.GetStatic<AndroidJavaObject> ("currentActivity");
			AndroidJavaObject contentResolver = currentActivity.Call<AndroidJavaObject> ("getContentResolver");  
			AndroidJavaClass secure = new AndroidJavaClass ("android.provider.Settings$Secure");
			string android_id = secure.CallStatic<string> ("getString", contentResolver, "android_id");
			Debug.Log ("devID: " + android_id);
			mUniqueIdentifier = android_id;
			return mUniqueIdentifier;
		#endif
		mUniqueIdentifier = SystemInfo.deviceUniqueIdentifier;

		return mUniqueIdentifier;
	}

	/// <summary>
	/// Gets the major iOS version, eg 4, 5, 6.
	/// </summary>
	public static float iOSVersion
	{
		get
		{
			// SystemInfo.operatingSystem returns something like iPhone OS 6.1
			float osVersion = -1f;
			string versionString = SystemInfo.operatingSystem.Replace("iPhone OS ", "");
			float.TryParse(versionString.Substring(0, 1), out osVersion);
			
			return osVersion;
		}
	}
		
	public static String getOSDevice {
		get{ 
			string osSystemString = SystemInfo.operatingSystem;
			string[] oss = osSystemString.Split(' ');
			return oss [0] + "_Unity";
		}
	}


	/// link configure
	/// 
	/// http://services.game3c.info/XosoHistory.aspx?uid=
	public static string url_xoso {
		get {
			if (gameApp == GameApp.LangQuat)
				return "http://services.athena.vn/ServiceGame/XosoHistory.aspx?uid=";
			if (gameApp == GameApp.DauTruong)
				return "http://services.dautruong.info/XosoHistory.aspx?uid=";
			if (gameApp == GameApp.G3C)
				return "http://services.game3c.info/XosoHistory.aspx?uid=";
			if (gameApp == GameApp.G52Fun)
				return "http://services.52fun.club/XosoHistory.aspx?uid=";
			if (gameApp == GameApp.GTL)
				return "http://services.game3c.info/XosoHistory.aspx?uid=";
			
			return "http://services.dautruong.info/XosoHistory.aspx?uid=";
		}
	}

	public static string url_ketqua_xoso{
		get{
			if (GameApplication.gameApp == GameApplication.GameApp.LangQuat) {
				return "http://services.athena.vn/ServiceGame/Xoso.aspx";
			} else if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
				return "http://services.dautruong.info/ServiceGame/Xoso.aspx";
			} else if(GameApplication.gameApp == GameApplication.GameApp.G3C){
				return "http://services.game3c.info/Xoso.aspx";
			} else if(GameApplication.gameApp == GameApplication.GameApp.G52Fun){
				return "http://services.52fun.club/Xoso.aspx";
			} else if(GameApplication.gameApp == GameApplication.GameApp.GTL){
				return "http://services.game3c.info/Xoso.aspx";
			}
			return "http://services.dautruong.info/ServiceGame/Xoso.aspx";
		}
	}

	public static string url_topcaothu_xoso {
		get {
			if (gameApp == GameApp.LangQuat)
				return "http://services.athena.vn/ServiceGame/XosoHistoryWin.aspx";
			if (gameApp == GameApp.DauTruong)
				return "http://services.dautruong.info/XosoHistoryWin.aspx";
			if (gameApp == GameApp.G3C)
				return "http://services.game3c.info/XosoHistoryWin.aspx";
			if (gameApp == GameApp.G52Fun)
				return "http://services.52fun.club/XosoHistoryWin.aspx";
			if (gameApp == GameApp.GTL)
				return "http://services.game3c.info/XosoHistoryWin.aspx";
			
			return "http://services.dautruong.info/XosoHistoryWin.aspx";
		}
	}

	public static string url_payment_card {
		get {
			if (gameApp == GameApp.LangQuat)
				return "http://game.athena.vn/mpayment/card.php?userid=";
			if (gameApp == GameApp.DauTruong)
				return "http://payment.dautruong.info/card.php?userid=";
			if (gameApp == GameApp.G3C)
				return "http://payment.game3c.info/card.php?userid=";
			if (gameApp == GameApp.G52Fun)
				return "http://payment.52fun.club/card.php?userid=";
			if (gameApp == GameApp.GTL)
				return "http://payment.game3c.info/card.php?userid=";

			return "http://payment.dautruong.info/card.php?userid=";
		}
	}

	public static string url_config {
		get {
			if(gameApp == GameApp.DauTruong)
//				return "http://mobile.dautruong.info/config_links.json";
				return "http://mobile.tracking.88club.org/config_links";
			if(gameApp == GameApp.G3C)
				return "http://mservices.game3c.info/config_links.json";
			if(gameApp == GameApp.G52Fun)
				return "http://mservices.52fun.club/config_links.json";
			if(gameApp == GameApp.GTL)
				return "http://mservices.game3c.info/config_links.json";

			return "http://mservices.game3c.info/config_links.json";
		}
	}

	public static string url_news {
		get {
			if(gameApp == GameApp.DauTruong)
				return "http://news.dautruong.info";
			if(gameApp == GameApp.G3C)
				return "http://game3c.info/news/";
			if(gameApp == GameApp.G52Fun)
				return "http://news.52fun.club";
			if(gameApp == GameApp.GTL)
				return "http://game3c.info/news/";
			
			return "http://news.dautruong.info";
		}
	}

	public static string url_exp {
		get {
			if(gameApp == GameApp.DauTruong)
				return "http://services.dautruong.info/UserExp.aspx?u=";
			if(gameApp == GameApp.G3C)
				return "http://services.game3c.info/UserExp.aspx?u=";
			if(gameApp == GameApp.G52Fun)
				return "http://services.52fun.club/UserExp.aspx?u=";
			if(gameApp == GameApp.GTL)
				return "http://services.game3c.info/UserExp.aspx?u=";

			return "http://services.dautruong.info/UserExp.aspx?u=";
		}
	}

	public static string url_caothu(int gameid) { 
		if(gameApp == GameApp.DauTruong)
			return "http://services.dautruong.info/CTThang.aspx?gid=" + gameid;
		if(gameApp == GameApp.G3C)
			return "http://services.game3c.info/CTThang.aspx?gid=" + gameid;
		if(gameApp == GameApp.G52Fun)
			return "http://services.52fun.club/CTThang.aspx?gid=" + gameid;
		if(gameApp == GameApp.GTL)
			return "http://services.game3c.info/CTThang.aspx?gid=" + gameid;

		return "http://services.dautruong.info/CTThang.aspx?gid=" + gameid;
	}

	public static string url_cashout_thecao{
		get{
			if(gameApp == GameApp.DauTruong)
				return "http://mobile.dautruong.info/thecaodt.json";
			if(gameApp == GameApp.G3C)
				return "http://mservices.game3c.info/thecao3c.json";
			if(gameApp == GameApp.G52Fun)
				return "http://mservices.52fun.club/thecao52fun.json";
			if(gameApp == GameApp.GTL)
				return "http://mservices.game3c.info/thecao3c.json";
			
			return "http://mservices.game3c.info/thecao3c.json";
		}
	}

	public static string url_cashout_vatpham{
		get{
			if(gameApp == GameApp.DauTruong)
				return "http://mobile.dautruong.info/doithuongdt.json";
			if(gameApp == GameApp.G3C)
				return "http://mservices.game3c.info/doithuong3c.json";
			if(gameApp == GameApp.G52Fun)
				return "http://mservices.52fun.club/doithuong52fun.json";
			if(gameApp == GameApp.GTL)
				return "http://mservices.game3c.info/doithuong3c.json";
			
			return "http://mservices.52fun.club/doithuong52fun.json";
		}
	}

	public static string url_link_bongda{
		get{
			if(gameApp == GameApp.DauTruong)
				return "http://services.dautruong.info/Football.aspx?type=1";
			if(gameApp == GameApp.G3C)
				return "http://services.game3c.info/Football.aspx?type=1";
			if(gameApp == GameApp.G52Fun)
				return "http://services.52fun.club/Football.aspx?type=1";
			if(gameApp == GameApp.GTL)
				return "http://services.game3c.info/Football.aspx?type=1";
			
			return "http://services.game3c.info/Football.aspx?type=1";
		}
	}

	public static string url_link_bongda_history
	{
		get{
			if(gameApp == GameApp.DauTruong)
				return "http://services.dautruong.info/Football.aspx?uid=";
			if(gameApp == GameApp.G3C)
				return "http://services.game3c.info/Football.aspx?uid=";
			if(gameApp == GameApp.G52Fun)
				return "http://services.52fun.club/Football.aspx?uid=";
			if(gameApp == GameApp.GTL)
				return "http://services.game3c.info/Football.aspx?uid=";
			
			return "http://services.game3c.info/Football.aspx?uid=";
		}
	}

	public static string get_url_caothu_ngay(int gameid) {
		return url_caothu_ngay + gameid;
	}
	
	public static string get_url_caothu_tuan(int gameid) { 
		return url_caothu_tuan + gameid;
	}
	
	public static string get_url_caothu_thang(int gameid) { 
		return url_caothu_thang + gameid;
	}
	
	public static string get_url_caothu_homqua(int gameid) { 
		return url_caothu_homqua + gameid;
	}
	
	public static string get_url_caothu_giaithuong(int gameid) { 
		return url_caothu_giaithuong + gameid;
	}

//    public static string url_dungsi_homqua(int gameid)
//    {
//        if (gameApp == GameApp.DauTruong)
//            return "http://services.dautruong.info/CTDungsy.aspx?gid=3";
//		if (gameApp == GameApp.G3C)
//			return "http://services.game3c.info/CTDungsy.aspx?gid=3";
//		if (gameApp == GameApp.G52Fun)
////			return "http://services.dautruong.info/CTDungsy.aspx?gid=3";
//			return "http://services.52fun.club/CTDungsy.aspx?gid=3";
//        else return null;
//    }
//    public static string url_dungsi_tuan(int gameid)
//    {
//        if (gameApp == GameApp.DauTruong)
//            return "http://services.dautruong.info/CTDungsy.aspx?gid=1";
//		if (gameApp == GameApp.G3C)
//			return "http://services.game3c.info/CTDungsy.aspx?gid=1";
//		if (gameApp == GameApp.G52Fun)
////			return "http://services.dautruong.info/CTDungsy.aspx?gid=1";
//			return "http://services.52fun.club/CTDungsy.aspx?gid=1";
//        else return null;
//    }
//    public static string url_dungsi_thang(int gameid)
//    {
//        if (gameApp == GameApp.DauTruong)
//			return "http://services.dautruong.info/CTDungsy.aspx?gid=2";
//		if (gameApp == GameApp.G3C)
//			return "http://services.game3c.info/CTDungsy.aspx?gid=2";
//		if (gameApp == GameApp.G52Fun)
////			return "http://services.dautruong.info/CTDungsy.aspx?gid=2";
//			return "http://services.52fun.club/CTDungsy.aspx?gid=2";
//        else return null;
//    }
//
//	public static string url_dungsi_giaituan(int gameid)
//	{
//		if (gameApp == GameApp.DauTruong)
//			return "http://services.dautruong.info/ServiceGame/CTDisplay.aspx?gid=8015";
//		if (gameApp == GameApp.G3C)
//			return "http://services.game3c.info/CTDisplay.aspx?gid=8015";
//		if (gameApp == GameApp.G52Fun)
//			return "http://services.52fun.club/CTDungsy.aspx?gid=8015";
//		else return null;
//	}
//
//	public static string url_dungsi_giaithang(int gameid)
//	{
//		if (gameApp == GameApp.DauTruong)
//			return "http://services.dautruong.info/ServiceGame/CTDisplay.aspx?gid=8016";
//		if (gameApp == GameApp.G3C)
//			return "http://services.game3c.info/CTDisplay.aspx?gid=8016";
//		if (gameApp == GameApp.G52Fun)
//			return "http://services.52fun.club/CTDungsy.aspx?gid=8016";
//		else return null;
//	}
}