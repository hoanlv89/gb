using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class IPCHOSEN : MonoBehaviour {

	public static string IP;
	public Text iptext;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void choseIP(string ip){
		IP = ip;
		iptext.text = ip;
	}
}
