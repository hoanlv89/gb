using UnityEngine;
using System.Collections;

public class DSTTrackingSys : MonoBehaviour {

	public static DSTTrackingSys instance;
	public DSTAd pf_DSTAd;

	// Use this for initialization
	void Start () {
		instance = this;
		DontDestroyOnLoad (gameObject);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void setDeviceToken(string deviceToken){
		Debug.Log ("setDeviceToken: " + deviceToken);
		GameApplication.apnDeviceToken = deviceToken;
	}
}
