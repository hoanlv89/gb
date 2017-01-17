using SimpleJSON;
using System.Collections.Generic;
using Facebook.Unity;

public class DSTFBEvent
{
	public const string UnityAppLaunch = "UnityAppLaunch";
	public const string UnitySigninClick = "UnitySigninClick";
	public const string UnitySigninFail = "UnitySigninFail";
	public const string UnityRegLoginClick = "UnityRegLoginClick";
	public const string UnityRegLoginFalse = "UnityRegLoginFalse";
	public const string UnityFaLoginClick = "UnityFaLoginClick";
	public const string UnityFaLoginFail = "UnityFaLoginFail";
	public const string UnityHallOpenSuccess = "UnityHallOpenSuccess";
	public const string UnityGameClick = "UnityGameClick"; 
	public const string UnityGameLoadSuccess = "UnityGameLoadSuccess";
	public const string UnityPurchaseClick = "UnityPurchaseClick";
	public const string UnityPurchaseCardConfirm = "UnityPurchaseCardConfirm";
	public const string UnityPurchaseCardSuccess = "UnityPurchaseCardSuccess";
	public const string UnityPurchaseSMSClick = "UnityPurchaseSMSClick";
	public const string UnityPurchaseSMSBlock = "UnityPurchaseSMSBlock";
	public const string UnityPurchaseIAPClick = "UnityPurchaseIAPClick";
	public const string UnityPurchaseIAPBlock = "UnityPurchaseIAPBlock";
	public const string UnityPurchaseRateClick = "UnityPurchaseRateClick";
	public const string UnityCashOutClick = "UnityCashOutClick";
	public const string UnityCashOutBlock = "UnityCashOutBlock";
	public const string UnityCashOutConfirm= "UnityCashOutConfirm";
	public const string UnityCashOutSuccess = "UnityCashOutSuccess";
	public const string UnityCashOutFail= "UnityCashOutFail";
	public const string UnityCashOutReview = "UnityCashOutReview";
	public const string UnityBankClick = "UnityBankClick";
	public const string UnityEventClick= "UnityEventClick";
	public const string UnitySettingClick = "UnitySettingClick";
	public const string UnityFanPageClick= "UnityFanPageClick";
	public const string UnityFreeGoldClick = "UnityFreeGoldClick";
	public const string UnityEmailClick = "UnityEmailClick";
	public const string UnityThanbaiClick= "UnityThanbaiClick";
	public const string UnityFeedbackClick = "UnityFeedbackClick";
	public const string UnityRuleClick= "UnityRuleClick";
	public const string UnityGameChatClick = "UnityGameChatClick";
	public const string UnityGameRoomClick = "UnityGameRoomClick";
	public const string UnityGameCreatetableClick = "UnityGameCreatetableClick";
	public const string UnityGameCreatetableConfirm = "UnityGameCreatetableConfirm";
	public const string UnityGameCreatetableSuccess = "UnityGameCreatetableSuccess";
	public const string UnityGamePlaynowCLick = "UnityGamePlaynowCLick";
	public const string UnityGamePlaynowSuccess = "UnityGamePlaynowSuccess";
	public const string UnityGameBackClick = "UnityGameBackClick";
	public const string UnityGameTableClick = "UnityGameTableClick";
	public const string UnityGameTableFail = "UnityGameTableFail";
	public const string UnityGameTableSuccess = "UnityGameTableSuccess";
	public const string UnityPlayReadyClick = "UnityPlayReadyClick";
	public const string UnityPlayStart = "UnityPlayStart";
	public const string UnityPlayFinish = "UnityPlayFinish";
	public const string UnityPlayBackClick = "UnityPlayBackClick";

	public const string UnityJoinTableSuccess = "UnityJoinTableSuccess";
	public const string UnityJoinTableFailed = "UnityJoinTableFailed";

	public static Dictionary<string, object> defaultParams {
		get{
			var fparams = new Dictionary<string, object> ();
			fparams ["fbid"] = Facebook.Unity.FacebookSettings.AppId;
			fparams ["ref"] = GameApplication.referrer;
			fparams ["ver"] = GameApplication.versionname;
			if (SuperScene.instance is LoginScene == false && SuperScene.instance is HomeScene == false) {
				if (GameApplication.cubeia != null)
					fparams ["game"] = getgamename (GameApplication.cubeia.gameId);
				if (GameApplication.user != null)
					fparams ["vip"] = GameApplication.user.vip;
			}

			return fparams;
		}
	}

	public static void LogAppEvent(
		string logEvent,
		float? valueToSum = null,
		Dictionary<string, object> parameters = null)
	{
		if(FB.IsInitialized)
			FB.LogAppEvent(logEvent, valueToSum, parameters);
	}

	static string getgamename(int gid) {
		if (GameType.XOCDIA == gid)
			return "Xoc Dia";
		if (GameType.TIENLEN == gid)
			return "Tien Len";
		if (GameType.TALA == gid)
			return "Phom";
		if (GameType.BINH == gid)
			return "Binh";
		if (GameType.LIENG == gid)
			return "Lieng";
		if (GameType.SAM == gid)
			return "Sam";
		if (GameType.CHAN == gid)
			return "Chan";
		if (GameType.BACAY == gid)
			return "Ba Cay";
		if (GameType.XITO == gid)
			return "Xi To";
		if (GameType.POKER == gid)
			return "Poker";
		return gid + "";
	}

	public static string build(string evname, float sum, JSONArray jarr) {
		#if UNITY_ANDROID
		evname = evname.Replace("IOS_","M_");
		#endif
		JSONClass jobj = new JSONClass ();
		jobj ["ev"] = evname;
		if(sum != null) jobj ["sum"].AsFloat = sum;
		if(jarr != null) jobj ["jarr"] = jarr;

		return jobj.ToString ();
	}

	public static JSONClass buildParam(string pname, string value ) {
		JSONClass jobj = new JSONClass ();
		jobj ["param"] = pname;
		jobj ["value"] = value;

		return jobj;
	}

}

