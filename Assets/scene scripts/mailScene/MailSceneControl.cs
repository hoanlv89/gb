using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Styx;
using SimpleJSON;
using com.cubeia.firebase.io.protocol;
using System.IO;
using UnityEngine.UI;

public class MailSceneControl : SuperScene
{
	float ROW_HEIGHT = 84;
	List<GameObject> rowNguoiGui;
	List<GameObject> rowNoiDung;
	List<LQMail> listMail;
	List<LQMail> listSystemMail;
	List<LQMail> listPlayerMail;
	float Y_MARK = 255;
	//DataFrom1 : X = -414.5, Y = 255, Z = 0, W = 319, H = 84
	//DataContent1 : X = 159.5, Y = 255, Z = 0, W = 829, H = 84
	GameObject scrollview, content, headerFrom, headerContent;
	GameObject inputTo, btnSend, inputContent;
	int CHOOSE_ITEM = 0; //0 = mail, 1 = he thong, 2 = nguoi choi

	void loadData (List<LQMail> list)
	{
		clearData ();
		Y_MARK = (ROW_HEIGHT - 1) * list.Count / 2;
		for (int i=0; i<list.Count; i++) {
			//rowNguoiGui[i] = Instantiate//Instantiate<GameObject>(Resources.Load("prefabs/rowNguoiGui.prefab"));
			GameObject ng;
			GameObject nd;
			// TODO: vua comment
//			if (!list [i].isReaded) {
//				ng = GameObject.Instantiate (UnityEngine.Resources.LoadAssetAtPath ("Assets/Resources/prefabs/mailPrefab/dataFrom.prefab", typeof(GameObject))) as GameObject;
//				nd = GameObject.Instantiate (UnityEngine.Resources.LoadAssetAtPath ("Assets/Resources/prefabs/mailPrefab/dataContent.prefab", typeof(GameObject))) as GameObject;
//			} else {
//				ng = GameObject.Instantiate (UnityEngine.Resources.LoadAssetAtPath ("Assets/Resources/prefabs/mailPrefab/dataFromReaded.prefab", typeof(GameObject))) as GameObject;
//				nd = GameObject.Instantiate (UnityEngine.Resources.LoadAssetAtPath ("Assets/Resources/prefabs/mailPrefab/dataContentReaded.prefab", typeof(GameObject))) as GameObject;
//			}
//			ng.transform.SetParent (content.transform);
//			ng.transform.localScale = Vector3.one;
//			//ng.transform.localPosition = new Vector3 (-414.5f, (ROW_HEIGHT * list.Count / 2) - (ROW_HEIGHT * i) - ROW_HEIGHT / 2, 0);
//			ng.transform.localPosition = new Vector3 (-414.5f, Y_MARK - (ROW_HEIGHT * i), 0);
//			ng.GetComponentInChildren<Text> ().text = list [i].from;
//			ng.name = "" + i;
//			//ng.GetComponent<InputField> ().text = list [i].from;
//			rowNguoiGui.Add (ng);
//
//			nd.transform.SetParent (content.transform);
//			nd.transform.localScale = Vector3.one;
//			//nd.transform.localPosition = new Vector3 (159.5f, (ROW_HEIGHT * list.Count / 2) - (ROW_HEIGHT * i) - ROW_HEIGHT / 2, 0);
//			nd.transform.localPosition = new Vector3 (159.5f, Y_MARK - (ROW_HEIGHT * i), 0);
//			nd.GetComponentInChildren<Text> ().text = list [i].content;
//			//nd.GetComponent<InputField> ().text = list [i].content;
//			nd.name = "" + i;
//			rowNoiDung.Add (nd);

			//Y_MARK -= ROW_HEIGHT;

		}

		for (int i=0; i<list.Count; i++) {
			//rowNguoiGui[i] action
			//rowNoiDung[i] action
			int j = i;
			Button btnNG = rowNguoiGui [j].GetComponent<Button> ();
			btnNG.onClick.AddListener (() => actionBtn ("" + j));

			Button btnND = rowNoiDung [j].GetComponent<Button> ();
			btnND.onClick.AddListener (() => actionBtn ("" + j));
		}
	}

	void actionBtn (string s)
	{
		Debug.Log ("NG-ND " + s);
	}

	void clearData ()
	{
		for (int i=0; i<rowNoiDung.Count; i++) {
			//rowNoiDung[i].SetActive(false);
			GameObject.Destroy (rowNoiDung [i]);
		}
		
		for (int i=0; i<rowNguoiGui.Count; i++) {
			//rowNguoiGui[i].SetActive(false);
			GameObject.Destroy (rowNguoiGui [i]);
		}
		
		rowNguoiGui.Clear ();
		rowNoiDung.Clear ();
	}

	void initComponent ()
	{
		listMail = LQMail.getSampleListMail ();
		listSystemMail = LQMail.getSystemMail (listMail);
		listPlayerMail = LQMail.getPlayerMail (listMail);
		rowNguoiGui = new List<GameObject> ();
		rowNoiDung = new List<GameObject> ();
		scrollview = GameObject.Find ("ScrollView");
		content = GameObject.Find ("ContentMail");
		headerFrom = GameObject.Find ("HeaderFrom");
		headerContent = GameObject.Find ("HeaderContent");
		inputTo = GameObject.Find ("inputTo");
		inputContent = GameObject.Find ("inputContent");
		btnSend = GameObject.Find ("btnSend");

		showEditMail ();
	}
	// Use this for initialization
	public override void Start ()
	{
		/*base.Start ();
				if (GameApplication.IsInitialized == false) {
						// go to the login scene
						Application.LoadLevel (GameApplication.LOGINSCENE);
						return;
				}*/
		initComponent ();
	}

	void Update ()
	{
	}

	void showEditMail ()
	{
		//Hide Table
		headerFrom.SetActive (false);
		headerContent.SetActive (false);
		scrollview.SetActive (false);
		//Show Edit Mail
		inputTo.SetActive (true);
		btnSend.SetActive (true);
		inputContent.SetActive (true);
	}
	
	void hideEditMail ()
	{
		//Show Table
		headerFrom.SetActive (true);
		headerContent.SetActive (true);
		scrollview.SetActive (true);
		//Hide Edit Mail
		inputTo.SetActive (false);
		btnSend.SetActive (false);
		inputContent.SetActive (false);
	}

	bool t = false;

	public void onClickCreateMail ()
	{
		//Debug.Log ("Create Mail");
		/*if (t) {
						showEditMail ();
						t = false;
				} else {
						hideEditMail ();
						t = true;
				}*/
		showEditMail ();
		CHOOSE_ITEM = 0;
	}

	public void onClickSystemMail ()
	{
		//Debug.Log ("System Mail");
		hideEditMail ();
		RectTransform rt = content.GetComponent<RectTransform> ();
		rt.sizeDelta = new Vector2 (1148, ROW_HEIGHT * (listSystemMail.Count + 1));
		CHOOSE_ITEM = 1;
		loadData (listSystemMail);
	}

	public void onClickPlayerMail ()
	{
		//Debug.Log ("Player Mail");
		hideEditMail ();
		RectTransform rt = content.GetComponent<RectTransform> ();
		rt.sizeDelta = new Vector2 (1148, ROW_HEIGHT * (listPlayerMail.Count + 1));
		CHOOSE_ITEM = 2;
		loadData (listPlayerMail);
	}

	public void onClickExit ()
	{
		Debug.Log ("EXIT MAIL");
	}

	public void onClickSendMail ()
	{
		string to = inputTo.GetComponent<InputField> ().text;
		string content = inputContent.GetComponent<InputField> ().text;
		if (to.Length < 1 || to.Length > 160) {
			Debug.Log ("ERROR - LENGTH STRING");
		} else {
			Debug.Log (to + " " + content);
		}
	}

	/*public void onClickItem ()
		{
				switch (CHOOSE_ITEM) {
				case 1:
						break;
				case 2:
						break;
				}
		}*/
}
