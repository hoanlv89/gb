using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;
using System;

public class BetControl : MonoBehaviour
{
	//Cell 1 : -272, 318.25, 181, 100
	//[{"Id":220016,"T":3.5,"N":"12","AG":1000,"TC":1},{"Id":220017,"T":3.5,"N":"24","AG":1000,"TC":1}]
	GameObject btnX35, btnX75;
	public Sprite sprite_yes, sprite_no;
	List<DataBet> listDataBetX35;
	List<DataBet> listDataBetX75;
	InputField inputGold, inputNumber;
	bool x35 = true;
	[SerializeField]
	Transform content1, content2;
	// prefabs
	public RectTransform XoSoItem;

	/*void changeText (GameObject go, string text)
		{
				Text textComp = go.GetComponentInChildren<Text> ();
				textComp.text = text;
		}*/

	void clearSingleData (List<GameObject> list)
	{
		for (int i=0; i<list.Count; i++) {
			//rowNoiDung[i].SetActive(false);
			GameObject.Destroy (list [i]);
		}
		list.Clear ();
	}

	void clearAllData ()
	{
		foreach (Transform tran in content1) {
			Destroy (tran.gameObject);
		}
		foreach (Transform tran in content2) {
			Destroy (tran.gameObject);
		}
	}

	//**********************************Load Data*****************************************
	void loadData (Transform parent, List<DataBet> listBet)
	{
		for (int i=0; i<listBet.Count; i++) {
			RectTransform rect = (RectTransform)Instantiate (XoSoItem);
			rect.SetParent (parent, false);
			Text tv1 = rect.Find ("number").GetComponent<Text> ();
			Text tv2 = rect.Find ("value").GetComponent<Text> ();
			tv1.text = listBet [i].getN ();
			tv2.text = "$" + Utils.formatNumber (listBet [i].ag);

			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
//				tv1.color = new Color32(113,16,16,255);
//				tv2.color = new Color32(113,16,16,255);
			} else if(GameApplication.gameApp == GameApplication.GameApp.G3C){
				tv1.color = new Color32(255,255,255,255);
				tv2.color = new Color32(255,255,255,255);
			} else if(GameApplication.gameApp == GameApplication.GameApp.G52Fun){
				tv1.color = new Color32(255,255,255,255);
				tv2.color = new Color32(255,255,255,255);
			}
		}
	}

	void loadAllData ()
	{
		clearAllData ();
				
		loadData (content1, listDataBetX35);
		loadData (content2, listDataBetX75);
				
	}
	
	//********************************************************************************************************


//	Sprite loadT2D (string name)
//	{
//		string path = "Textures/GameScene/" + name;
//		Sprite sprite = UnityEngine.Resources.Load<Sprite> (path);
//		if (sprite == null)
//			Debug.LogError ("null " + name);
//		return sprite;
//	}

	// Use this for initialization
	void Start ()
	{
		((RectTransform)transform).anchoredPosition = new Vector2(0,0);
		GameObject.Find ("textCard").GetComponent<Text> ().text = Strings.instance.gameplay_xoso_type;
		GameObject.Find ("textGold").GetComponent<Text> ().text = Strings.instance.gameplay_xoso_stake;
		GameObject.Find ("textNumber").GetComponent<Text> ().text = Strings.instance.gameplay_xoso_number;
		GameObject.Find ("btnBet").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_btn_bet;

		listDataBetX35 = new List<DataBet> ();
		listDataBetX75 = new List<DataBet> ();
		inputGold = GameObject.Find ("inputGold").GetComponent<InputField> ();
		inputNumber = GameObject.Find ("inputNumber").GetComponent<InputField> ();
		btnX35 = GameObject.Find ("x3.5 button");
		btnX75 = GameObject.Find ("x75 button");

//		XoSoItem = Resources.Load ("prefabs/xoso/XoSoItem", typeof(RectTransform)) as RectTransform;
		updateHistory ();
	}

	public void updateHistory ()
	{
		string url = GameApplication.url_xoso + GameApplication.user.id;
		Utils.ExeOneStringParam onSuccess = delegate(string data) {
//			Debug.Log(data);
			//GameObject betHistoryTable = panelBet.transform.Find ("table").gameObject;
			listDataBetX35.Clear ();
			listDataBetX75.Clear ();
			try{
				JSONArray jArr = JSONClass.Parse (data).AsArray;
				for (int i=0; i<jArr.Count; i++) {
//					DataBet db = new DataBet (jArr [i] ["Id"].Value, jArr [i] ["T"].AsFloat, jArr [i] ["N"].AsInt, jArr [i] ["AG"].AsInt, jArr [i] ["TC"].Value);
					DataBet db = new DataBet (jArr [i] ["T"].AsFloat, jArr [i] ["N"], jArr [i] ["AG"].AsInt);
					if (db.t == 3.5f)
						listDataBetX35.Add (db);
					else
						listDataBetX75.Add (db);
				}
				loadAllData ();
			} catch(UnityException e){
				Debug.LogException(e);
			}
		};
		Utils.Executor onFailed = delegate() {
			SuperScene.instance.showToast (Strings.instance.common_network_error);
		};
		SuperScene.instance.doHTTPRequest(url, onSuccess, onFailed);
	}

	//***************************************Dat cuoc***************************************
	void bet (string type)
	{
		try {
			int gold = int.Parse (inputGold.text);
			string number = inputNumber.text;
			if(number.Length<2)
				number = "0" + number;
			if(number.Contains("-")){
				SuperScene.instance.showInfoDialog("Vui lòng nhập từ 00 đến 99.");
				return;
			}
			int minStake = 10;
			if (gold >= minStake && number != null && number.Length > 0) {
				Debug.Log ("BetControl - User ID : " + GameApplication.user.id);
				JSONClass data = new JSONClass ();
				data ["evt"] = "xs";
				data ["T"] = type;
				data ["AG"].AsInt = gold;
				data ["N"] = number;
				GameApplication.cubeia.sendService (data);
				inputGold.text = "";
				inputNumber.text = "";
				SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
				Debug.Log ("Step 3");
			} else {
				SuperScene.instance.showInfoDialog (Strings.instance.gameplay_xoso_minstake_warning.Replace ("%value1%", Utils.formatCurrency (minStake)));
			}
		} catch (Exception e) {
			//SuperScene.instance.showToast ("ERROR GOLD");
			//SuperScene.instance.show
		}
				
	}

	public void addData ()
	{
		if (x35)
			bet ("35");
		else
			bet ("75");
		/*Debug.Log (GameApplication.user.id);
				StartCoroutine (loadBetHistory ());*/
	}

	public void actionX ()
	{
		if (x35) {
			x35 = false;
			btnX35.GetComponent<Image> ().sprite = sprite_no;
			btnX75.GetComponent<Image> ().sprite = sprite_yes;
		} else {
			x35 = true;
			btnX35.GetComponent<Image> ().sprite = sprite_yes;
			btnX75.GetComponent<Image> ().sprite = sprite_no;
		}
	}
	//**************************************************************************
}

public class DataBet
{
	public float t;
	public string n;
	public int ag;
	
	public DataBet (float t, string n, int ag)
	{
		this.t = t;
		this.n = n;
		this.ag = ag;
	}

	public string getN ()
	{
		if (n.Length == 1)
			return "0" + n;
		else if (n.Length == 2)
			return n;
		else
			return "";
	}
}
