using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BannerScene : MonoBehaviour {

	public Button close;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void showBanner(int index){
	
	}

	public void exitBanner(){
		if (gameObject != null && gameObject.activeSelf == true) {
			gameObject.SetActive(false);
		}
	}
}
