using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class IPCHOSEN : MonoBehaviour {

	public static string IP;
	public static string OPE;
	public static string GAMEID;
	public InputField iptext;
	public InputField opetext;
	public InputField gameIdText;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void choseIP() {
		IP = iptext.text;
		OPE = opetext.text;
		GAMEID = gameIdText.text;
		Debug.Log (IP);
		Debug.Log (OPE);
		Debug.Log (GAMEID);
	}

}
