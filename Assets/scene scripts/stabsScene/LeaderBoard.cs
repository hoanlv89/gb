using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using SimpleJSON;

public class LeaderBoard : MonoBehaviour
{
   
	private int flag;
	//item
	public RectTransform LeaderboardItem;
	public RectTransform TOP3;
	public RectTransform ListView;
	public RectTransform Content;
	public RectTransform ScroolBar;
	public Sprite[] listTopRank = new Sprite[3] ;
	public static string presents;

	// Use this for initialization
	void Start ()
	{
		if (TOP3 != null)
			TOP3.gameObject.SetActive (false);

	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public virtual void getLeaderBoard (string url)
	{
		if (string.IsNullOrEmpty (url))
			return;
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			foreach (RectTransform rect in ListView) {
				if(rect != TOP3)
					Destroy (rect.gameObject);
			}
			Debug.Log ("string result ==> " + result);
			if(result.Length > 0) {
				JSONArray jarr = JSONNode.Parse (result).AsArray;
				for (int i = 0; i < jarr.Count; i++) {
					
					LeaderBoardItems newsItem = new LeaderBoardItems (jarr [i].AsObject);

//					if(GameApplication.gameApp == GameApplication.GameApp.DauTruong||GameApplication.gameApp == GameApplication.GameApp.G52Fun){
					if(i==0||i==1||i==2){
//						Debug.LogError("STabsScene.currentTabPos == 2 " + (STabsScene.currentTabPos == 2));
//						Debug.LogError("TOP3 != null " + (TOP3 != null));
						if(GameApplication.gameApp == GameApplication.GameApp.DauTruong
							&& SuperScene.instance is STabsScene
							&& STabsScene.tabsType == STabsScene.STabType.HEROBOARD
							&& STabsScene.currentTabPos == 2
							&& TOP3 != null){
							TOP3.gameObject.SetActive(true);
							Transform tran = TOP3.FindChild("Top" + (i+1));
							Image Avatar = tran.FindChild("Avatar").GetComponent<Image>();
							Text Name = tran.FindChild("Name").GetComponent<Text>();
							Text Present = tran.FindChild("Present").GetComponent<Text>();

							string _avurl = Utils.buildAvatar(newsItem.url, newsItem.av);
							SuperScene.instance.loadImage(_avurl, Avatar);
							Name.text = newsItem.name;
							Present.text = getPresent(i);
							continue; // vi ko can load avatar nua
						} else {
							if(TOP3 != null)
								TOP3.gameObject.SetActive(false);
							RectTransform view = Instantiate (LeaderboardItem);
							view.SetParent (ListView, false);
							newsItem.setView (view, i+1);

							GameObject imgrank = view.FindChild("ImageRank").gameObject;
							imgrank.gameObject.SetActive(true);
							imgrank.GetComponent<Image>().sprite = listTopRank[i];
							view.Find ("rannk").gameObject.SetActive(false);
							GameObject name = view.FindChild("playerName").gameObject;
							name.GetComponent<Text>().color= new Color32(255,240,0,255);
							GameObject point = view.FindChild("point").gameObject;
							point.GetComponent<Text>().color= new Color32(255,240,0,255);

//							Image avatar = view.FindChild("avatar").GetComponent<Image>();
//							string avurl = Utils.buildAvatar(newsItem.url, newsItem.av);
//							SuperScene.instance.loadImage(avurl, avatar);
						}
					} else  {
						RectTransform view = Instantiate (LeaderboardItem);
						view.SetParent (ListView, false);
						newsItem.setView (view, i+1);
						GameObject imgrank = view.FindChild("ImageRank").gameObject;
						imgrank.gameObject.SetActive(false);

//						Image avatar = view.FindChild("avatar").GetComponent<Image>();
//						string avurl = Utils.buildAvatar(newsItem.url, newsItem.av);
//						SuperScene.instance.loadImage(avurl, avatar);
					}
				}
			}
			
		};
		Utils.Executor onFailed = delegate() {
		};
		SuperScene.instance.doHTTPRequest (url, onSuccess, onFailed);
	}

	string getPresent(int i){
		if (!string.IsNullOrEmpty (presents)) {
			string[] res = presents.Split (new []{ ';' });
			if(i>res.Length) return res[0];
			return res [i];
		}
		return "undefined";
	}
}

class LeaderBoardItems
{
	public string url;
	public string name;
	public int point;
	public int av;
	public int M;
	public int V;

	public LeaderBoardItems (JSONClass obj)
	{
		url = obj ["Url"];
		name = obj ["N"];
		point = obj ["A"].AsInt;
		av = obj ["Av"].AsInt;
		M = obj ["M"].AsInt;
		V = obj ["V"].AsInt;

//		if (av == 0) {
//			av = point + 1;
//		}
	}

	public void setView (RectTransform view, int rank)
	{
		Color c1 = new Color32 (0, 0, 0, 0);
		Color c2 = new Color32 (0, 0, 0, 110);
		Image bg = view.GetComponent<Image> ();

		if (GameApplication.gameApp.Equals (GameApplication.GameApp.G52Fun)) {
			bg.color = (rank % 2 == 1) ? c1 : c2;
		} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.G3C)) {
		} else if (GameApplication.gameApp.Equals (GameApplication.GameApp.DauTruong)) {

		}
		Text playerName = view.Find ("playerName").GetComponent<Text> ();
		Text rannk = view.Find ("rannk").GetComponent<Text> ();
		Text txt_point = view.Find ("point").GetComponent<Text> ();
		// TODO: luu y doan nay o cac game khca co the loi
		Image avatar = view.Find ("avatar").GetComponent<Image> ();
		rannk.text = rank.ToString ();
		playerName.text = name;
		txt_point.text = Utils.formatNumber (point);
//		SuperScene.instance.loadImage (Utils.buildAvatar (av), avatar, null);

//		Debug.LogError (rank + " av: "+ av+" name: " +name);
		if (av == 0 ) {
			if (name.Contains ("fb.")) {
				string fbid = name.Substring (3);
				SuperScene.instance.loadImage (Utils.buildFBAvatar (fbid), avatar, null);
			} else if (url.Contains ("fb.")) {
				string fbid = url.Substring (3);
				SuperScene.instance.loadImage (Utils.buildFBAvatar (fbid), avatar, null);
			} else if (IsDigitsOnly(url) && url.Length > 5) {
				SuperScene.instance.loadImage (Utils.buildFBAvatar (url), avatar, null);
			} else if (IsDigitsOnly(url) && url.Length < 3) {
				av = System.Int32.Parse(url);
				SuperScene.instance.loadImage (Utils.buildAvatar (av), avatar, null);
			} else { // chiu, load anh zing
//				Debug.LogError ("url: "+ Utils.buildAvatar (name, av));
				SuperScene.instance.loadImage (Utils.buildAvatar (name, av), avatar, null);
			}
		} else {
			SuperScene.instance.loadImage (Utils.buildAvatar (av), avatar, null);
		}

	}

	bool IsDigitsOnly(string str)
	{
		foreach (char c in str)
		{
			if (c < '0' || c > '9')
				return false;
		}
		
		return true;
	}
}
