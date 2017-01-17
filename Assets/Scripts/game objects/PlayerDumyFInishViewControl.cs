using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerDumyFInishViewControl : MonoBehaviour {
	public Image ava;
	public Sprite _1st, _2nd, _3rd, _4th;
	public Image imgOrder;
	public Text name, title, score, wingold;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void setOrderImg(int order){
		if (order == 0) {
			imgOrder.sprite = _1st;
		}
		if (order == 1) {
			imgOrder.sprite = _2nd;
		}
		if (order == 2) {
			imgOrder.sprite = _3rd;
		}
		if (order == 3) {
			imgOrder.sprite = _4th;
		}
		imgOrder.color = new Color32 (255, 255, 255, 210);
	}

	public void resetView(){
		ava.color = new Color32 (0, 0, 0, 0);
		imgOrder.color = new Color32 (0, 0, 0, 0);
		name.text = "";
		title.text = "";
		score.text = "";
		wingold.text = "";
	}
}
