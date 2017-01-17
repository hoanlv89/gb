using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;


public class News : MonoBehaviour
{
#if UNITY_IOS || UNITY_ANDROID
	protected UniWebView webView;

	// prefabs
	public UniWebView prefabWebView;
#endif
	//items
	public RectTransform NewsItem;
	public RectTransform ListView;
	public RectTransform Content;
	public RectTransform ScrollBar;
	public Button back;

	protected float backButtonWidth = 90f + 25f;
	protected float contentTop {
		get{
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 0.98f;
			else if(GameApplication.gameApp == GameApplication.GameApp.G3C)
				return 0.88f;
			return 0.85f;
		}
	}
	protected float contentBottom {
		get{
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 0.02f;
			else if(GameApplication.gameApp == GameApplication.GameApp.G3C)
				return 0.04f;
			return 0.02f;
		}
	}
	protected float panelTop {
		get{
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 30f+ 90f;
			else if(GameApplication.gameApp == GameApplication.GameApp.G3C)
				return 30f;
			return 30f;
		}
	}
	protected float panelLeft = 30f;
	protected float panelBottom = 0f;
	protected float panelRight = 30f;

	// Use this for initialization
	void Start ()
	{
		init ();
		getNews ();
	}

	void init ()
	{
#if UNITY_IOS || UNITY_ANDROID
		float designWidth = SuperScene.instance.mainCanvas.GetComponent<CanvasScaler> ().referenceResolution.x;
		float ratio = Screen.width/ (float)Screen.height;
		float designHeight = designWidth / ratio;
		webView = GameObject.Instantiate<UniWebView> (prefabWebView);
//		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
//			webView.SetTransparentBackground(true);
		webView.transform.SetParent (this.transform, false);
		webView.loadOnStart = false;
		webView.autoShowWhenLoadComplete = true;
		webView.toolBarShow = true;
		int topmargin = (int)((1f - contentTop + panelTop / designHeight) * Screen.height);
		int bottommargin = (int)((contentBottom + panelBottom / designWidth) * Screen.width);
		int leftmargin = (int)((backButtonWidth + panelLeft) / designHeight * Screen.height);
		int rightmargin = (int)(panelRight / designWidth * Screen.width);

		#if UNITY_IOS
		topmargin /= 2;
		bottommargin /= 2;
		leftmargin /= 2;
		rightmargin /= 2;
		#endif

		Debug.Log ("designHeight : " + designHeight);
		Debug.Log ("designWidth : " + designWidth);
		Debug.Log ("Screen.height : " + Screen.height);
		Debug.Log ("Screen.width : " + Screen.width);
		Debug.Log ("topmargin : " + topmargin);
		Debug.Log ("bottommargin : " + bottommargin);
		Debug.Log ("leftmargin : " + leftmargin);
		Debug.Log ("rightmargin : " + rightmargin);

		webView.insets = new UniWebViewEdgeInsets (topmargin, leftmargin, bottommargin, rightmargin);
		webView.SetShowSpinnerWhenLoading (true);
	
		back.gameObject.SetActive (false);
		webView.Hide ();

		back.onClick.AddListener (delegate {
			back.gameObject.SetActive (false);
			webView.Hide ();
			Content.gameObject.SetActive (true);
			ScrollBar.gameObject.SetActive (true);
		});
#endif
	}

	public virtual void getNews ()
	{
#if UNITY_IOS || UNITY_ANDROID
		Utils.ExeOneStringParam onSuccess = delegate(string result) {
			foreach (RectTransform rect in ListView) {
				Destroy (rect.gameObject);
			}

			JSONArray jarr = JSONNode.Parse (result).AsArray;
			for (int i = 0; i<jarr.Count; i++) {
				RectTransform view = Instantiate (NewsItem);
				NewsItem newsItem = new NewsItem (jarr [i].AsObject);
				newsItem.setView (view);
				view.SetParent (ListView, false);
				Button btn = view.GetComponent<Button> ();

				btn.onClick.AddListener (delegate() {
//					Application.OpenURL(newsItem.link);
					webView.Load (newsItem.link);
					back.gameObject.SetActive (true);
					Content.gameObject.SetActive (false);
					ScrollBar.gameObject.SetActive (false);
				});
			}
			
		};
		Utils.Executor onFailed = delegate() {
			
		};
		SuperScene.instance.doHTTPRequest (GameApplication.url_news, onSuccess, onFailed);
#endif
	}

#if UNITY_IOS || UNITY_ANDROID
	void OnEnable ()
	{
		if (webView != null && back.gameObject.activeSelf)
			webView.Show ();
	}

	void OnDisable ()
	{
		if (webView != null)
			webView.Hide ();
	}
#endif
	
}

class NewsItem
{
	public int id;
	public string title;
	public string time;
	public string link;

	public NewsItem (JSONClass obj)
	{
		id = obj ["id"].AsInt;
		title = obj ["title"];
		time = obj ["time"];
		link = obj ["link"];
		if (!link.Contains ("http://"))
			link = "http://" + link;
	}

	public void setView (RectTransform view)
	{
		Text tv_title = view.Find ("title").GetComponent<Text> ();
		Text tv_time = view.Find ("time").GetComponent<Text> ();

		tv_title.text = this.title;
		tv_time.text = this.time;
	}
}