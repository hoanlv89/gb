using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TableItem3C : MonoBehaviour {

	// Use this for initialization
	public Text info;
	public Text stake;
	public Image table;
	public Image[] pl= new Image[9];
	public Sprite point_wait;
	int size=0;
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void updateTable(int size,int max,int money){
		info.GetComponent<Text>().text = "" + size + "/" + "" + max;
		stake.GetComponent<Text>().text = Utils.formatCurrency (money);
		Debug.Log ("size ===> " + size);
		Debug.Log ("max ===> " + max);
		if (max < 5) {
			for(int i=4;i<9;i++){
				pl[i].GetComponent<Image>().enabled=false;
//				pl[i].gameObject.SetActive(false);
			}
		}
		if (max == 5) {
			for(int i=5;i<9;i++){
				pl[i].GetComponent<Image>().enabled=false;
//				pl[i].gameObject.SetActive(false);
			}
		}

		for (int i=0; i<9; i++) {
			if(i>size){
				pl[i].GetComponent<Image>().sprite=point_wait;
			}
		}

	}
}
