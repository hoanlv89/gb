using UnityEngine;
using System.Collections;
using System;
using SimpleJSON;
using UnityEngine.UI;

public class BongDaHistory : MonoBehaviour
{

	public RectTransform itemList;
	public RectTransform Header, Content, ScrollBar;
	public RectTransform pfBongDaItem;
	// Use this for initialization
	void Start ()
	{
		getData ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
	
	public void getData(){
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var data = JSONNode.Parse (result).AsArray;
			for(int i=0;i<data.Count;i++){
				int id = data[i]["Id"].AsInt;
				string de = data[i]["De"];
				string time = data[i]["T"];
				int r = data[i]["R"].AsInt;
				string b = data[i]["B"];
				string bv = data[i]["BV"];
				int ag= data[i]["AG"].AsInt;
				int agwin= data[i]["AG"].AsInt;
				addItem(id,de,getTimeByMilisecond(time),r,b,bv,ag,agwin);
			}
		};
		Utils.Executor onFailed = delegate {
			GameApplication.gameScene.showToast(Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest (GameApplication.url_link_bongda_history+GameApplication.user.id, onSuccess, onFailed);
	}
	
	public void addItem(int id,string de,string time,int result,string b,string bv,int ag,int agwin){
		RectTransform rect = GameObject.Instantiate<RectTransform> (pfBongDaItem);
		rect.transform.SetParent (itemList, false);
		Text tvtime = rect.FindChild ("time").GetComponent<Text> ();
		tvtime.text = time;
		Text tvmatch = rect.FindChild ("match").GetComponent<Text> ();
		tvmatch.text = de;
		RectTransform r_win = rect.FindChild ("win").GetComponent<RectTransform> ();
		RectTransform r_draw = rect.FindChild ("draw").GetComponent<RectTransform> ();
		RectTransform r_lose = rect.FindChild ("lose").GetComponent<RectTransform> ();
		r_win.gameObject.SetActive(false);
		r_draw.gameObject.SetActive(false);
		r_lose.gameObject.SetActive(false);
		string msg = b + " (" + bv + "): " + "<color=#ffff00ff>"+Utils.formatNumber (ag) +"</color>" + " " + GameApplication.COIN;
		rect.FindChild ("result").GetComponent<Text> ().text = msg;
	}
	
	public string getTimeByMilisecond(string time){
		int l = time.Length;
		int s = time.IndexOf("(");
		int f = time.IndexOf(")");
		int x = s+ time.Length - f - 1;
		time = time.Substring (s+1, f - s-1);
		s=time.IndexOf("+");
		string utc = time.Substring (s, time.Length - s);
		string s_time =time.Substring (0, s);
		long l_time = Convert.ToInt64 (s_time);
		DateTime start = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime date= start.AddMilliseconds(l_time).ToLocalTime();
		return date.ToString ("HH:mm dd/MM");
	}
	
	public string getStringResult(int r,string de){
		int l = de.Length;
		int i = de.IndexOf ("-");
		string one = de.Substring (0, i).Trim ();
		string two = de.Substring (i+1, l - i-1).Trim();
		string result = "";
		if (r == 2) {
			result="Hòa";
		}
		if (r == 1) {
			result=one+" thắng";
		}
		if (r == 3) {
			result=two+" thắng";
		}
		return result;
	}
}

