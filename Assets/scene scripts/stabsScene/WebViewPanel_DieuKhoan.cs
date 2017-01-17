using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WebViewPanel_DieuKhoan : MonoBehaviour
{
#if UNITY_IOS || UNITY_ANDROID
	protected UniWebView webView;
	// prefabs
	public UniWebView prefabWebView;
#endif
	protected float contentTop {
		get {
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 0.98f;
			return 0.85f;
		}
	}
	protected float contentBottom {
		get {
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 0.02f;
			return 0.05f;
		}
	}
	protected float panelTop {
		get {
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return 30f + 150f;
			return 30f;
		}
	}
	protected float panelLeft = 30f;
	protected float panelBottom = 0f;
	protected float panelRight = 30f;

	protected virtual string link {
		get {
			return "http://mservices.game3c.info/luatchoi/dieukhoan.html";
		}
	}

	// Use this for initialization
	void Start ()
	{
#if UNITY_IOS || UNITY_ANDROID
		float designHeight = SuperScene.instance.mainCanvas.GetComponent<CanvasScaler> ().referenceResolution.y;
		webView = GameObject.Instantiate<UniWebView> (prefabWebView);
//		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
//			webView.SetTransparentBackground(true);
		webView.transform.SetParent (this.transform, false);
		webView.loadOnStart = false;
		webView.autoShowWhenLoadComplete = true;
		webView.toolBarShow = true;
		int topmargin = (int)((1f - contentTop + panelTop / designHeight) * Screen.height);
		int bottommargin = (int)((contentBottom + panelBottom / designHeight) * Screen.height);
		int leftmargin = (int)(panelLeft / designHeight * Screen.height);
		int rightmargin = (int)(panelRight / designHeight * Screen.height);
		

		#if UNITY_IOS
		topmargin /= 2;
		bottommargin /= 2;
		leftmargin /= 2;
		rightmargin /= 2;
		#endif

		Debug.Log ("topmargin : " + topmargin);
		Debug.Log ("bottommargin : " + bottommargin);
		Debug.Log ("leftmargin : " + leftmargin);
		Debug.Log ("rightmargin : " + rightmargin);
	
		webView.insets = new UniWebViewEdgeInsets (topmargin, leftmargin, bottommargin, rightmargin);
		webView.SetShowSpinnerWhenLoading (true);
		
		webView.Load (link);
#endif
	}

#if UNITY_IOS || UNITY_ANDROID
	void OnEnable ()
	{
		if (webView != null)
			webView.Show ();
	}

	void OnDisable ()
	{
		if (webView != null)
			webView.Hide ();
	}
#endif
}
