using UnityEngine;
using System.Collections;
using SimpleJSON;
using System;

public class User
{
	public int id;
	public int ag;
	public string name;
	public int lq;
	public int dm;
	public int vip;
	public string tinyURL;
	public string email;
	public string fbid;
	private string _avatarUrl;
	private string _ingameName;
	private string _displayName;
	private int _sovandachoi;
	private Sprite _sprite;
	public static int od;// số ngày online
	public static int pd;// số tiền tương ứng vs số ngày online
	public static string mobile;// sdt nguoi choi
	public static int cmsg; // so thu chua doc
	public LoginInfo loginInfo = new LoginInfo ();

	public int sovandachoi {
		get{ return _sovandachoi;}
		set{ _sovandachoi = value;}
	}

	public void updateData (int id, int ag, string name, int lq)
	{
		this.id = id;
		this.ag = ag;
		this.name = name;
		this.lq = lq;
	}

	public string displayName {
		get {
			return name;
//			if (_displayName == null)
//				return name;
//			return _displayName;
		} 
		set {
			_displayName = value;
		}
	}

	public string inGameName {
		get {
			if (_ingameName == null || _ingameName.Length < 1)
				return name;
			return _ingameName;
		}
		set {
			_ingameName = value;
		}
	}

	public string avatarUrl {
		get {
			return _avatarUrl;
		}
		set {
			_avatarUrl = value;
		}
	}

	public Sprite avatarSprite {
		get {
			return _sprite;
		}
		set {
			_sprite = value;
		}
	}
}

public class LoginInfo
{
	public string name;
	public string password;
	public int operatorID;
	public string host;
	public int gameID;

	public LoginInfo ()
	{ 
	}

	public LoginInfo (JSONNode json)
	{
//		if(GameApplication.DEBUG_ON)
//			Debug.Log(json.ToString());
		name = json["name"];
		password = json["password"];
		operatorID = json["operatorID"].AsInt;
		gameID = json["gameID"].AsInt;
		host = json["host"];
	}

	public string toString(){
		var json = new JSONClass();
		json["name"] = name;
		json["password"] = password;
		json["operatorID"].AsInt = operatorID;
		json["gameID"].AsInt = gameID;
		json["host"] = host;
		return json.ToString();
	}
}

