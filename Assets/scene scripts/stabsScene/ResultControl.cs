using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class ResultControl : MonoBehaviour
{
	GameObject[] row;

	//[{"Id":220016,"T":3.5,"N":"12","AG":1000,"TC":1},{"Id":220017,"T":3.5,"N":"24","AG":1000,"TC":1}]
	//http://services.athena.vn/ServiceGame/XosoHistory.aspx?uid=1500007653

	void changeContent(string name, string content)
	{
		GameObject go = GameObject.Find(name);
		Text text = go.GetComponentInChildren<Text>();
		text.text = content;
	}

	IEnumerator loadData()
	{
		WWW www = new WWW(GameApplication.url_ketqua_xoso);
		yield return www;
		if (www.error != null) 
			yield break;
		SuperScene.instance.dismissWaittingDialog();
		string data = www.text;

		JSONNode jso = JSON.Parse(data);

		if (GameObject.Find ("textResultTime") != null) {
			Text text = GameObject.Find ("textResultTime").GetComponent<Text> ();
			text.text = Strings.instance.gameplay_xoso_result_time.Replace ("%value1%", jso ["D"].Value);
		}
		string lotteryResult = jso ["KQ"].Value;
		string[] results = lotteryResult.Split(';');

		Debug.Log ("results.Length " + results.Length);
		Debug.Log ("results[0] " + results[0]);
		if (results.Length < 2) { // co the 2
			yield return false;
		} else {
			changeContent ("content00", results [0]);//Dac biet
			changeContent ("content10", results [1]);//Nhat
			changeContent ("content20", results [2]);//Nhi
			changeContent ("content21", results [3]);
			changeContent ("content30", results [4]);//Ba
			changeContent ("content31", results [5]);
			changeContent ("content32", results [6]);
			changeContent ("content33", results [7]);
			changeContent ("content34", results [8]);
			changeContent ("content35", results [9]);
			changeContent ("content40", results [10]);//Tu
			changeContent ("content41", results [11]);
			changeContent ("content42", results [12]);
			changeContent ("content43", results [13]);
			changeContent ("content50", results [14]);//Nam
			changeContent ("content51", results [15]);
			changeContent ("content52", results [16]);
			changeContent ("content53", results [17]);
			changeContent ("content54", results [18]);
			changeContent ("content55", results [19]);
			changeContent ("content60", results [20]);//Sau
			changeContent ("content61", results [21]);
			changeContent ("content62", results [22]);
			changeContent ("content70", results [23]);//Bay
			changeContent ("content71", results [24]);
			changeContent ("content72", results [25]);
			changeContent ("content73", results [26]);
		}

	}
	// Use this for initialization
	void Start()
	{
		GameObject.Find ("name0").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_0;
		GameObject.Find ("name1").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_1;
		GameObject.Find ("name2").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_2;
		GameObject.Find ("name3").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_3;
		GameObject.Find ("name4").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_4;
		GameObject.Find ("name5").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_5;
		GameObject.Find ("name6").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_6;
		GameObject.Find ("name7").GetComponentInChildren<Text> ().text = Strings.instance.gameplay_xoso_rank_7;

		row = new GameObject[8];
		for (int i=0; i<8; i++) {
			row [i] = GameObject.Find("row" + i);
		}

		StartCoroutine(loadData());
		SuperScene.instance.showWaittingDialog(Strings.instance.common_waitingdialog_loading);
	}
	
	// Update is called once per frame
	void Update()
	{
	
	}
}
