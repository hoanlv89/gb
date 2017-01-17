using UnityEngine;
using System.Collections;
using SimpleJSON;
using System;

public class DB
{

	private static DB _instance;

	public static DB getInstance {
		get {
			if (_instance == null)
				_instance = new DB ();
			return _instance;
		}
	}

	const string DATE_FORMAT = "yyyy-MM-dd HH:mm";

	private const string K_Language = "k_language";
	private const string K_LoginInfo = "k_login_info";
	private const string K_OnPlayingGame = "k_OnPlayingGame";
	private const string K_LastTimeGameStart = "k_LastTimeGameStart";
	private const string K_StoredDisID = "K_StoredDisID";
	private const string K_StoredVersion = "K_StoredVersion";
	private const string K_StoredFBInvitedFriends = "K_StoredFBInvitedFriends";
	private const string K_invite="K_invite";
	private const string K_SettingSound="K_settingSound";
	private const string K_LoginStatus="K_LoginStatus";

	public string getLanguageInString ()
	{
		return PlayerPrefs.GetString (K_Language, Strings.LANGUAGE_VI);
	}
		
	public void storeLanguage (string language)
	{
		PlayerPrefs.SetString (K_Language, language);
		PlayerPrefs.Save ();
	}

	public void storeDisID (int disID)
	{
		PlayerPrefs.SetInt (K_StoredDisID, disID);
		PlayerPrefs.Save ();
	}

	public void deleteStoredDisID ()
	{
		PlayerPrefs.DeleteKey (K_StoredDisID);
		PlayerPrefs.Save ();
	}

	public int getStoredDisID ()
	{
		return PlayerPrefs.GetInt (K_StoredDisID, -1);
	}

	public void storeVersion (string curversion)
	{
		PlayerPrefs.SetString (K_StoredVersion, curversion);
		PlayerPrefs.Save ();
	}
	
	public string getStoredVersion ()
	{
		return PlayerPrefs.GetString (K_StoredVersion, "unknown");
	}

	public void setInviteLobby(int check){
		PlayerPrefs.SetInt (K_invite, check);
		PlayerPrefs.Save ();
	}

	public int getInviteLobby(){
		return PlayerPrefs.GetInt (K_invite, 0);
	}

	public void storeLoginStatus (int status)
	{
		PlayerPrefs.SetInt (K_LoginStatus, status);
		PlayerPrefs.Save ();
	}

	public int getLoginStatus ()
	{
		return PlayerPrefs.GetInt (K_LoginStatus, 0);
	}

	public void storeUserLoginInfo (LoginInfo loginInfo)
	{
//		if (loginInfo != null && !loginInfo.name.Equals ("1")) {
		if (loginInfo != null) {
			string input = loginInfo.toString ();
			PlayerPrefs.SetString (K_LoginInfo, input);
			PlayerPrefs.Save ();
		} else {
			PlayerPrefs.DeleteKey (K_LoginInfo);
		}
	}

	public LoginInfo getStoredUserLoginInfo ()
	{
		if (PlayerPrefs.HasKey (K_LoginInfo)) {
			string strjson = PlayerPrefs.GetString (K_LoginInfo);
//			Debug.LogWarning ("loginInfo stored: " + strjson);
			var json = JSONClass.Parse (strjson);
			if (json != null)
				return new LoginInfo (json);
		}
		return null;
	}


	// ghi trang thai nay khi bat dau "lc" o cac game
	// >=1: dang trong ban choi
	// 0: khong
	public void storeOnPlayingGame (bool onPlaying)
	{
		String time_now = DateTime.Now.ToString(DATE_FORMAT);
//		if(GameApplication.DEBUG_ON)
//			Debug.LogError("game start on: " + time_now);
		PlayerPrefs.SetInt (K_OnPlayingGame, onPlaying ? 1 : 0);
		PlayerPrefs.SetString (K_LastTimeGameStart, time_now);
		PlayerPrefs.Save ();
	}

	public void storeSettingSoundOn (bool soundOn)
	{
		PlayerPrefs.SetInt (K_SettingSound, soundOn ? 1 : 0);
		PlayerPrefs.Save ();
	}

	public bool getSettingSoundOn ()
	{
		int ir = PlayerPrefs.GetInt (K_SettingSound, 1);
		return (ir >= 1);
	}

	public void storeTimeShowNotifyJoinFB ()
	{
		PlayerPrefs.SetString ("JoinFBInviteShowTime", DateTime.Now.ToString(DATE_FORMAT));
		PlayerPrefs.Save ();
	}
	
	public bool getShouldShowNotifyJoinFB ()
	{
//		Debug.LogError("Call Me");
		if(PlayerPrefs.HasKey("JoinFBInviteShowTime") == false) {
//			Debug.LogError("Store Time");
			PlayerPrefs.SetString ("JoinFBInviteShowTime", DateTime.Now.ToString(DATE_FORMAT));
			return true;
		}
//		PlayerPrefs.DeleteKey("JoinFBInviteShowTime");
		string JoinFBInviteShowTimeInString = PlayerPrefs.GetString ("JoinFBInviteShowTime", DateTime.Now.ToString(DATE_FORMAT));
		DateTime JoinFBInviteShowTime = DateTime.ParseExact(JoinFBInviteShowTimeInString, DATE_FORMAT, null);
		return true;
		if(JoinFBInviteShowTime.AddHours(1).CompareTo(DateTime.Now) <= 0){
//			Debug.LogError("TRUE");
			return true;
		}
//		Debug.LogError("False");
		return false;
	}

	public bool checkOnPlayingGame ()
	{
		int status = PlayerPrefs.GetInt (K_OnPlayingGame, 0);
		if (status != 0){
			try {
				string started_game_time_stored_string = PlayerPrefs.GetString (K_LastTimeGameStart, DateTime.Now.ToString(DATE_FORMAT));
//				if(GameApplication.DEBUG_ON)
//					Debug.LogError("started_game_time_stored: " + started_game_time_stored_string);
				DateTime started_game_time_stored = DateTime.ParseExact(started_game_time_stored_string, DATE_FORMAT, null);
				// qua 4 phut troi qua
//				Debug.LogError(started_game_time_stored.AddMinutes(4).CompareTo(started_game_time_stored) + "");
//				Debug.LogError(started_game_time_stored.AddMinutes(-4).CompareTo(started_game_time_stored) + "");
//				Debug.LogError(started_game_time_stored.CompareTo(started_game_time_stored) + "");
				// A.CompareTo(B) > 0 : A after B
				// A.CompareTo(B) < 0 : A before B
				// A.CompareTo(B) = 0 : A on B
				if(started_game_time_stored.AddMinutes(4).CompareTo(DateTime.Now) >= 0){
					return true;
				}
			} catch (FormatException e){
				Debug.LogException(e);
				return false;
			}
		}
		return false;
	}

	public void storeInvitedFriends (string fbid)
	{
		JSONClass obj = new JSONClass();
		obj["fbid"] = fbid;
		obj["time"] = DateTime.Now.AddDays(1).ToString(DATE_FORMAT);

		JSONArray jarr = getInvitedFriends();
		jarr[-1] = obj;

		PlayerPrefs.SetString (K_StoredFBInvitedFriends, jarr.ToString());
		PlayerPrefs.Save ();
	}
	
	public JSONArray getInvitedFriends ()
	{
		string res = PlayerPrefs.GetString (K_StoredFBInvitedFriends, "");
		JSONArray jarr = new JSONArray();
		if(res.Length > 0){
			jarr = JSONClass.Parse(res).AsArray;

			// loai bo nhung nguoi da moi tren 1 ngay
			if(FBFriends.do_not_invite_two_time_in_one_day){
				for(int i = 0; i<jarr.Count; i++){
					JSONClass obj = jarr[i].AsObject;
					DateTime expiredDate = DateTime.ParseExact(obj["time"], DATE_FORMAT, null);

					// now is after expiredDate
					if(DateTime.Now.CompareTo(expiredDate) >= 0){
						jarr.Remove(i);
						i--;
					}
				}
			}
		} 

		return jarr;
	}

}

