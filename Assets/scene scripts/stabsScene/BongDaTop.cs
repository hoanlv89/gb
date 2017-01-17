using UnityEngine;
using System.Collections;
using System;
using SimpleJSON;
using UnityEngine.UI;

public class BongDaTop : MonoBehaviour
{
	public RectTransform itemList;
	public RectTransform Header, Content, ScrollBar;
	public RectTransform pfBongDaTopItem;
	string url2="";
	string url1="";
	int selected;
	public RectTransform bselect;
	// Use this for initialization
	void Start ()
	{
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			url2="http://services.dautruong.info/ServiceGame/Football.aspx?type=2";
			url1="http://services.dautruong.info/ServiceGame/Football.aspx?type=3";
		}
		if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
			url2="http://services.game3c.info/Football.aspx?type=2";
			url1="http://services.game3c.info/Football.aspx?type=3";
		}
		if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			url2="http://services.52fun.club/Football.aspx?type=2";
			url1="http://services.52fun.club/Football.aspx?type=3";
		}
		getData (url1);
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
	
	public void getData(string url){
		for (int i = 0; i<itemList.childCount; i++) {
			Transform child = itemList.GetChild (i);
			Destroy (child.gameObject);
		}
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var data = JSONNode.Parse (result).AsArray;
			for(int i=0;i<data.Count;i++){
				string u = data[i]["U"];
				string m = data[i]["M"];
				string time = data[i]["T"];
				int av = data[i]["AV"].AsInt;
				int ag= data[i]["AG"].AsInt;
				addItem(i,u,m,time,av,ag);
			}
		};
		Utils.Executor onFailed = delegate {
			GameApplication.gameScene.showToast(Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);
	}
	
	public void addItem(int i,string u,string m,string time,int av,int ag){
		RectTransform rect = GameObject.Instantiate<RectTransform> (pfBongDaTopItem);
		rect.transform.SetParent (itemList, false);
		Text tvstt = rect.FindChild ("stt").GetComponent<Text> ();
		tvstt.text = ""+(i+1);
		Text tvtime = rect.FindChild ("date").GetComponent<Text> ();
		tvtime.text =getTimeByMilisecond(time);
		Text tvmatch = rect.FindChild ("match").GetComponent<Text> ();
		tvmatch.text = m;
		Text tvname = rect.FindChild ("name").GetComponent<Text> ();
		tvname.text = u;
		Text tvag = rect.FindChild ("agwin").GetComponent<Text> ();
		tvag.text = Utils.formatNumber(ag)+" "+GameApplication.COIN;
		Image imgava = rect.FindChild ("Image").GetComponent<Image> ();
		if(av == 0 && u.Contains("fb.")){
			string fbid = u.Substring(3);
			SuperScene.instance.loadImage (Utils.buildFBAvatar(fbid), imgava, null);
		} else {
			SuperScene.instance.loadImage (Utils.buildAvatar(av), imgava, null);
		}

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
		return date.ToString ("dd/MM");
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

	public void select(int i){
		if (i == 1) {
			getData(url1);
			bselect.FindChild("Text").GetComponent<Text>().text="Tháng";
		}
		if (i == 2) {
			getData(url2);
			bselect.FindChild("Text").GetComponent<Text>().text="Tuần";
		}
	}

	public void select(){
		selected = selected % 2 + 1;
		select(selected);
	}
}

