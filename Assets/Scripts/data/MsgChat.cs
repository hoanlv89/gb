using UnityEngine;
using System.Collections;
using SimpleJSON;
using System;
using System.Collections.Generic;

public class MsgChat {
	public int type;
	public string name;
	public int vip;
	public string msg;
	public string url;	
	public static List<MsgChat> all = new List<MsgChat> ();
	public static List<MsgChat> game = new List<MsgChat> ();
	public static List<MsgChat> thegio = new List<MsgChat> ();
	public static List<MsgChat> rieng = new List<MsgChat> ();

	public MsgChat(int type,string name,int vip,string msg,string url){
		this.type = type;
		this.name = name;
		this.vip = vip;
		this.msg = msg;
		this.url = url;
	}

	public MsgChat(string jsonObj){
		var data = JSONNode.Parse (jsonObj);
		int vip = -1;
		string name = data["N"];
		if (name.Contains ("#")) {
			string [] ns = name.Split('#');
			name = ns[0];
			vip = Convert.ToInt32(ns[1]);	
		}
		this.name = name;
		this.vip = vip;
		this.type=data["T"].AsInt;
		string msg=data["D"];
		if (msg.Contains ("#")) {
			int i = msg.IndexOf("#");
			string url = msg.Substring(i+1);
			this.url=url;
			msg=msg.Substring(0,i);
		}
		this.msg = msg;
	}
}

