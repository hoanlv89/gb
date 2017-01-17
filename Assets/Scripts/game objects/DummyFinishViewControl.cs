using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DummyFinishViewControl : MonoBehaviour {

	public PlayerDumyFInishViewControl view1, view2, view3, view0;
	public Text order, CountDownTimer, text_ready, text_detail;
	public Button Ready;

	public Image curtain;

	float startTime;

	int seconds = 0;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (seconds >= 0) {
			float deltaTime = Time.fixedTime - startTime;
			if(deltaTime > 1f){
				startTime = Time.fixedTime;
				seconds --;
				CountDownTimer.text = seconds + "";
			}
		}
	}

	public void startCountDown(){
		seconds = 20;
		startTime = Time.fixedTime;
		CountDownTimer.text = seconds + "";
	}
}
