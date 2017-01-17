using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using SimpleJSON;

public class BinhResult : MonoBehaviour
{
	public static GameObject binhResult;

	// Use this for initialization
	void Start()
	{
		if (binhResult == null) {
			binhResult = GameObject.Find("BinhResult");
			binhResult.SetActive(false);


		}

	}

	static void addData(int i, string name, int m)
	{
		GameObject playerName = GameObject.Find("binhLeftContent" + (i + 1));
		GameObject result = GameObject.Find("binhRightContent" + (i + 1));

		//if (playerName != null && result != null) {
		Text text1 = playerName.GetComponentInChildren<Text>();
		text1.text = name;
		Text text2 = result.GetComponentInChildren<Text>();
		int absM = Mathf.Abs(m);
		if (m >= 0)
			text2.text = Strings.instance.win + " " + absM + " AG";
		else
			text2.text = Strings.instance.lose + " " + absM + " AG";
		//}
	}

	static void showBinhResult(JSONArray finishArray)
	{
		if (binhResult != null) {
			binhResult.SetActive(true);

			GameObject hPlayer = GameObject.Find("binhLeftHeader");
			GameObject hResult = GameObject.Find("binhRightHeader");
			Text t1 = hPlayer.GetComponentInChildren<Text>();
			t1.text = Strings.instance.binhPlayer;
			Text t2 = hResult.GetComponentInChildren<Text>();
			t2.text = Strings.instance.binhResult;

			for (int i=0; i<finishArray.Count; i++) {
				var jobj = finishArray [i];
				string name = jobj ["N"];
				int m = jobj ["M"].AsInt;
				addData(i, name, m);
			}
		}
	}

	static void hideBinhResult()
	{
		if (binhResult != null)
			binhResult.SetActive(false);
	}

	public static void actionShow(JSONArray finishArray)
	{ //Hien bang, sau do bien mat
		Utils.Executor exe1 = delegate {
			showBinhResult(finishArray);
		};

		Utils.Executor exe2 = delegate {
			//hideBinhResult();
		};


		GameApplication.gameScene.StartCoroutine(Utils.cr_runDelayed(10f, exe1, 4f, exe2));
	}
	
	// Update is called once per frame
	void Update()
	{
	
	}
}
