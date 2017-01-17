using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class PlayerDumyFullFinishViewControl : MonoBehaviour {
	public Sprite _1st, _2nd, _3rd, _4th;
	public Image imgOrder;
	public Text name, score, subScore1, subScore2, subScore3, title, title1, title2, result;
	public List<GameObject> gos = new List<GameObject> ();

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
		imgOrder.color = new Color32 (0, 0, 0, 0);
		name.text = "";
		subScore1.text = "";
		subScore2.text = "";
		subScore3.text = "";
		score.text = "";
		title.text = "";
		title1.text = "";
		title2.text = "";
		result.text = "";

		foreach (GameObject go in gos) {
			GameObject.Destroy(go);
		}
		gos.Clear ();
	}
}
