using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;

public class Rules : News
{
	public override void getNews ()
	{
		foreach (RectTransform rect in ListView) {
			Destroy (rect.gameObject);
		}

//		webView.SetTransparentBackground(true);

		List<RuleItem> listRules = new List<RuleItem> ();
		listRules.Add (new RuleItem ("Tien len", "http://services.athena.vn/mservices/luatchoi/tienlen.html"));
		listRules.Add (new RuleItem ("Chan", "http://services.athena.vn/mservices//luatchoi/chan.html"));
		listRules.Add (new RuleItem ("Ta la", "http://services.athena.vn/mservices//luatchoi/tala.html"));
		listRules.Add (new RuleItem ("Xi to", "http://services.athena.vn/mservices//luatchoi/xito.html"));
		listRules.Add (new RuleItem ("Lieng", "http://services.athena.vn/mservices//luatchoi/lieng.html"));
		listRules.Add (new RuleItem ("Roulette", "http://services.athena.vn/mservices//luatchoi/roulette.html"));
		listRules.Add (new RuleItem ("Binh", "http://services.athena.vn/mservices//luatchoi/binh.html"));
		listRules.Add (new RuleItem ("Bong da", "http://services.athena.vn/mservices//luatchoi/bongda.html"));
		listRules.Add (new RuleItem ("Xo So", "http://services.athena.vn/mservices//luatchoi/xoso.html"));
		listRules.Add (new RuleItem ("Ba cay", "http://services.athena.vn/mservices//luatchoi/bacay.html"));
			
		for (int i = 0; i<listRules.Count; i++) {
			RectTransform view = Instantiate (NewsItem);
			RuleItem newsItem = listRules [i];
			newsItem.setView (view);
			view.SetParent (ListView, false);
			Button btn = view.GetComponent<Button> ();
				
			btn.onClick.AddListener (delegate() {
//				Application.OpenURL(newsItem.link);
#if UNITY_IOS || UNITY_ANDROID
				webView.Load (newsItem.link);
				back.gameObject.SetActive (true);
				Content.gameObject.SetActive (false);
				ScrollBar.gameObject.SetActive (false);
#endif
			});
		}
			
	
	}
}

class RuleItem
{
	public string title;
	public string link;
	
	public RuleItem (string title, string link)
	{
		this.title = title;
		this.link = link;
		if (!this.link.Contains ("http://"))
			this.link = "http://" + this.link;
	}
	
	public void setView (RectTransform view)
	{
		Text tv_title = view.Find ("title").GetComponent<Text> ();
		tv_title.text = this.title;
	}
}