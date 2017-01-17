using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System;
using Facebook.Unity;

public class DailyBonusNew : MonoBehaviour {
	public static JSONNode data;
	public Image wheel;
	public Image vipview;
	public Button spin;

	public Sprite sactive, sdeactive;
	public RectTransform[] CViewLeft;
	public RectTransform[] CViewRight;

	public RectTransform finish;
	public Text kqQuay, kqBanbe, kqOnline, kqVip, kq;

	public Toggle shareFB;

	Color32 blue = new Color32(0,6,188,255);
	Color32 yelow = new Color32(255,248,0,255);

	const int pieces = 16;
	float phi0 = 360f / pieces * 0.5f;

	public Button close;

	// Use this for initialization
	void Start () {
		initView ();

//		doSpin (100);
		spin.onClick.AddListener(delegate {
			var data = new JSONClass ();
			data ["evt"] = "siamdaily";
			GameApplication.cubeia.sendService (data);
		});
	}

	void initView(){
		finish.gameObject.SetActive (false);
		shareFB.gameObject.SetActive (FB.IsInitialized && !string.IsNullOrEmpty(GameApplication.url_sharedailybonus));

		int vip = 0;
		int iv = 0;
		if(GameApplication.user != null)
			vip = GameApplication.user.vip;
		if (vip < 4)
			iv = 0;
		else if (vip < 6)
			iv = 1;
		else if (vip < 8)
			iv = 2;
		else if (vip == 8)
			iv = 3;
		else if (vip == 9)
			iv = 4;
		else if (vip == 10)
			iv = 5;

		Vector3 v3 = vipview.rectTransform.eulerAngles;
		v3.z = 60f * iv;
		vipview.rectTransform.eulerAngles = v3;

		if (data == null)
			return;
//		{
//			"evt": "firstlogin",
//			"CF": 0,
//			"OD": 3,
//			"ListCF": "1;10;20;50;100;",
//			"ListF": "100;500;800;1200;2000;",
//			"ListO": "100;500;800;1200;2000;",
//			"ListR": "100;500;1000;2000;5000;10000;"
//		}
		int CF = data ["CF"].AsInt;
		int OD = data ["OD"].AsInt;
		string slistCF = data ["ListCF"];
		string slistF = data ["ListF"];
		string slistO = data ["ListO"];
		string slistR = data ["ListR"];

		string[] listCF = slistCF.Split (new string[] { ";" }, StringSplitOptions.None);
		string[] listF = slistF.Split (new string[] { ";" }, StringSplitOptions.None);
		string[] listO = slistO.Split (new string[] { ";" }, StringSplitOptions.None);
		string[] listR = slistR.Split (new string[] { ";" }, StringSplitOptions.None);

		int count = 0;
		for (int i = CViewLeft.Length - 1; i >= 0; i--) {
			int selectedpos = -1;
			if (CF >= 100)
				selectedpos = 0;
			else if (CF >= 50)
				selectedpos = 1;
			else if (CF >= 20)
				selectedpos = 2;
			else if (CF >= 10)
				selectedpos = 3;
			else if (CF >= 1)
				selectedpos = 4;
			
			CViewLeft [i].GetComponent<Image> ().sprite = (i == selectedpos)?sactive:sdeactive;
			CViewLeft [i].FindChild("Text").GetComponent<Text> ().text = listF[count] + " Gold";//phai
			CViewLeft [i].FindChild("Text (1)").GetComponent<Text> ().text = listCF[count]+ " Bạn";// trai
			CViewLeft [i].FindChild("Text (1)").GetComponent<Text> ().color = (i == selectedpos)?blue:yelow;

			count++;
		}

		count = 0;
		for (int i = CViewRight.Length - 1; i >= 0; i--) {
			int selectedpos = 4;
			if (OD >= 5)
				selectedpos = 0;
			else if (OD == 4)
				selectedpos = 1;
			else if (OD == 3)
				selectedpos = 2;
			else if (OD == 2)
				selectedpos = 3;
			else if (OD < 2)
				selectedpos = 4;

			CViewRight [i].GetComponent<Image> ().sprite = (i == selectedpos)?sactive:sdeactive;
			CViewRight [i].FindChild("Text").GetComponent<Text> ().text = listO[count] + " Gold";//phai
			CViewRight [i].FindChild("Text (1)").GetComponent<Text> ().text = "Ngày "+(count + 1) + ((count>=4)?"+":"");// trai
			CViewRight [i].FindChild("Text (1)").GetComponent<Text> ().color = (i == selectedpos)?blue:yelow;

			count++;
		}
	}

	public void doSpin(int gold, Action onFinish){
		Debug.Log ("doSpin " + gold);
//		float cr = wheel.rectTransform.eulerAngles.z % 360; // toa do hien tai
		int targeti = getWheelPos (gold);
		// convert sang toa do goc
		float targetr = (2 * targeti + 1) * phi0 - 360 * UnityEngine.Random.Range(4,7);
//		Debug.Log ("cr: " + cr);
		Debug.Log ("targetr: " + targetr);

		float time = Mathf.Abs (targetr) / 400f;
		LeanTween.rotateZ (wheel.gameObject, targetr, time).setOnComplete (delegate(object obj) {
			Vector3 v3 = wheel.rectTransform.eulerAngles;
			v3.z = v3.z % 360;
			wheel.rectTransform.eulerAngles = v3;
			Debug.Log ("targetr: " + v3.z);	

			if(onFinish != null)
				onFinish();
		});
//		LeanTween.rotate (wheel.rectTransform, targetr, 2f);
	}

	public void result(int wheel, int friends, int daily, int status, int total){
		doSpin (wheel, onFinish:delegate() {
			finish.gameObject.SetActive (true);

			kqVip.text = "" + status;
			kqQuay.text = "0";
			kqBanbe.text = "0";
			kqOnline.text = "0";
			kq.text = "0";

			close.onClick.AddListener(delegate() {
				data = null; // quan trong
				GameObject.Destroy(gameObject);
				if(shareFB.isOn && FB.IsInitialized && !string.IsNullOrEmpty(GameApplication.url_sharedailybonus)){
					FB.ShareLink(
						new Uri(GameApplication.url_sharedailybonus),
						callback: ((HomeScene)SuperScene.instance).ShareCallback
					);
				} else {
					SuperScene.instance.checkMail();
				}
			});

			setTextValue(kqQuay, wheel, delegate() {
				setTextValue(kqBanbe, friends, delegate(){
					setTextValue(kqOnline, daily, delegate(){
						setTextValue(kq, total);
					});
				});
			});
		});

		GameApplication.cubeia.sendUAG ();
	}

	void setTextValue(Text text, int intvalue, Action onFinish = null){
		LTDescr ltd = LeanTween.value (gameObject, 0, intvalue, 1f).setOnUpdate (delegate(float value) {
			text.text = Utils.formatNumber ((int)value);
		});
		if(onFinish != null) ltd.setOnComplete(onFinish);
	}

	int getWheelPos(int gold){
		int[] list = new int[]{};
		if (gold == 100) {
			list = new int[] { 2,7,12,15};
		}
		if (gold == 500) {
			list = new int[] { 0,3,8,13};
		}
		if (gold == 1000) {
			list = new int[] { 4,9,14};
		}
		if (gold == 2000) {
			list = new int[] { 10};
		}
		if (gold == 5000) {
			list = new int[] { 5};
		}
		if (gold == 10000) {
			list = new int[] { 1,6,11};
		}

		if (list.Length < 1)
			return -1;
		
		int i = UnityEngine.Random.Range(0,list.Length);
		return list [i];
	}
}
