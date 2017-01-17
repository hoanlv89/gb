using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System;

public class BongDaLive : MonoBehaviour
{
	public RectTransform itemList;
	public RectTransform Header, Content, ScrollBar;
	public RectTransform pfBongDaItem;
	public RectTransform bongdaDatcuoc;
	float bet;
	int i_datcuoc;
	// Use this for initialization
	void Start ()
	{
		getData ();
	}
	
	// Update is called once per frame
	void Update ()
	{
	
//		STabsScene tabs = SuperScene.instance;
//		tabs.selectTab (STabsScene.BONGDA_TOP);
	}

	public void getData ()
	{
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			var data = JSONNode.Parse (result).AsArray;
			for (int i=0; i<data.Count; i++) {
				int id = data [i] ["Id"].AsInt;
				string de = data [i] ["De"];
				string time = data [i] ["T"];
				float win = data [i] ["W"].AsFloat;
				float draw = data [i] ["D"].AsFloat;
				float lose = data [i] ["L"].AsFloat;
				int r = data [i] ["R"].AsInt;
				addItem (id, de, getTimeByMilisecond (time), win, draw, lose, r,i);
			}
		};
		Utils.Executor onFailed = delegate {
			GameApplication.gameScene.showToast (Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest (GameApplication.url_link_bongda, onSuccess, onFailed);
	}

	public void addItem (int id, string de, string time, float win, float draw, float lose, int result,int pos)
	{
		RectTransform rect = GameObject.Instantiate<RectTransform> (pfBongDaItem);
		rect.transform.SetParent (itemList, false);
		if (pos % 2 == 1) {
			rect.GetComponent<Image> ().color = new Color32 (0, 0, 0, 140);
		} else {
			rect.GetComponent<Image> ().color = new Color32 (0, 0, 0, 0);
		}
		Text tvtime = rect.FindChild ("time").GetComponent<Text> ();
		tvtime.text = time;
		Text tvmatch = rect.FindChild ("match").GetComponent<Text> ();
		tvmatch.text = de;
		RectTransform r_win = rect.FindChild ("win").GetComponent<RectTransform> ();
		RectTransform r_draw = rect.FindChild ("draw").GetComponent<RectTransform> ();
		RectTransform r_lose = rect.FindChild ("lose").GetComponent<RectTransform> ();

		if (result == 0) {
			r_win.FindChild ("Text").GetComponent<Text> ().text = "" + win;
			r_draw.FindChild ("Text").GetComponent<Text> ().text = "" + draw;
			r_lose.FindChild ("Text").GetComponent<Text> ().text = "" + lose;
			rect.FindChild ("result").GetComponent<Text> ().enabled = false;
		} else {
			r_win.gameObject.SetActive (false);
			r_draw.gameObject.SetActive (false);
			r_lose.gameObject.SetActive (false);
			rect.FindChild ("result").GetComponent<Text> ().text = getStringResult (result, de);
		}
		r_win.transform.GetComponent<Button> ().onClick.AddListener (delegate() {
			bongdaDatcuoc.gameObject.SetActive (true);
			datcuoc (win, de, id, 1);
		});
		r_draw.transform.GetComponent<Button> ().onClick.AddListener (delegate() {
			bongdaDatcuoc.gameObject.SetActive (true);
			datcuoc (draw, de, id, 2);
		});
		r_lose.transform.GetComponent<Button> ().onClick.AddListener (delegate() {
			bongdaDatcuoc.gameObject.SetActive (true);
			datcuoc (lose, de, id, 3);
		});
	}

	public string getTimeByMilisecond (string time)
	{
		int l = time.Length;
		int s = time.IndexOf ("(");
		int f = time.IndexOf (")");
		int x = s + time.Length - f - 1;
		time = time.Substring (s + 1, f - s - 1);
		s = time.IndexOf ("+");
		string utc = time.Substring (s, time.Length - s);
		string s_time = time.Substring (0, s);
		long l_time = Convert.ToInt64 (s_time);
		DateTime start = new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		DateTime date = start.AddMilliseconds (l_time).ToLocalTime ();
		return date.ToString ("HH:mm dd/MM");
	}

	public string getStringResult (int r, string de)
	{
		int l = de.Length;
		int i = de.IndexOf ("-");
		string one = de.Substring (0, i).Trim ();
		string two = de.Substring (i + 1, l - i - 1).Trim ();
		string result = "";
		if (r == 2) {
			result = "Hòa";
		}
		if (r == 1) {
			result = "<color=#ffff00ff>"+one+"</color>" + " thắng";
		}
		if (r == 3) {
			result = "<color=#ffff00ff>"+two +"</color>"+" thắng";
		}
		return result;
	}

	public void datcuoc (float bet, string de, int id, int cua)
	{
		this.bet = bet;
		int l = de.Length;
		int i = de.IndexOf ("-");
		string one = de.Substring (0, i).Trim ();
		string two = de.Substring (i + 1, l - i - 1).Trim ();
		bongdaDatcuoc.Find ("home").GetComponent<Text> ().text = one;
		bongdaDatcuoc.Find ("away").GetComponent<Text> ().text = two;
		string msg = "";
		if (cua == 2) {
			msg = "Hòa";
		}
		if (cua == 1) {
			msg = one + " thắng";
		}
		if (cua == 3) {
			msg = two + " thắng";
		}
		bongdaDatcuoc.Find ("cuoc").GetComponent<Text> ().text = msg;
		bongdaDatcuoc.Find ("btOK").GetComponent<Button> ().onClick.RemoveAllListeners();
		bongdaDatcuoc.Find ("btOK").GetComponent<Button> ().onClick.AddListener (delegate() {
			if (i_datcuoc > 0) {
				var data = new JSONClass ();
				data ["evt"] = "fb";
				data ["AG"].AsInt = i_datcuoc;
				data ["Bet"].AsInt = cua;
				data ["ID"].AsInt = id;
				GameApplication.cubeia.sendService (data);
				SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
			} else {
				SuperScene.instance.showInfoDialog (Strings.instance.bongda_error1);
			}
		});
		bongdaDatcuoc.Find ("close").GetComponent<Button> ().onClick.RemoveAllListeners();
		bongdaDatcuoc.Find ("close").GetComponent<Button> ().onClick.AddListener (delegate() {
			bongdaDatcuoc.gameObject.SetActive (false);
		});
	}

	public void updateAGwin ()
	{
		string cuoc = bongdaDatcuoc.Find ("InputField").GetComponent<InputField> ().text;
		
		int i_cuoc = -1;
		int.TryParse (cuoc, out i_cuoc);
		if (i_cuoc < 0) {
			return;
		}

		int nhandc = (int)(i_cuoc * bet);
		bongdaDatcuoc.Find ("agwin").GetComponent<Text> ().text = Utils.formatNumber(nhandc) + " " + GameApplication.COIN;
		i_datcuoc = i_cuoc;
	}
}

