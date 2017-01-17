using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using SimpleJSON;

public class BonusControl : MonoBehaviour {
	public RectTransform minigame;
	public RectTransform area;
	List<RectTransform> bo = new List<RectTransform>();
	Vector2 target = new Vector2();
	public RectTransform bnt_tab;
	public RectTransform panel;
	public static bool checkStart = false;
	public static bool checkClick=false;
	public RectTransform bo_poin;
	public RectTransform numFail;
	public RectTransform pnl_endGame;
	public static int[] listDiem = {10,20,30};
	int mucdiem = 1;
	List<RectTransform> dem = new List<RectTransform>();
	public static List<RectTransform> listBo = new List<RectTransform>();
	int number;
	int random;
	int sobovang = 0;
	int soboxam = 0;
	int count = 0;
	int count2 = 0;
	Vector2 posPanelStart;
	// Use this for initialization

	void Start () {
		//sinh random 9 con bo
		foreach( RectTransform a in Resources.LoadAll ("prefabs/gameslot/bonus/",typeof(RectTransform))){
			bo.Add(a);
		}
		posPanelStart = panel.anchoredPosition;
	}
	void Update(){
		if(checkStart == true){
			foreach(RectTransform i in listBo){
				if(i!=null){
					Destroy(i.gameObject);
				}
			}
			listBo.Clear ();
			creatRandom();
			checkStart = false;
			count = 0;
			count2 =0;
			minigame.FindChild ("note").gameObject.SetActive (false);
			minigame.FindChild("diemcong").GetComponent<Text>().text="0";
		}
		if (checkClick == true) {
			//moi lan kich tang bien dem len 1
			count +=1;
			count2 +=1;
			StartCoroutine(upDiem(count2));
			//chay hien tien
			foreach (RectTransform a in listBo) {
				random = Random.Range(1,10);
				if (a.GetComponent<Animator> ().enabled == false) {
					a.FindChild("Text").GetComponent<Text>().text = "+" + randomDiem(random);
					LeanTween.alpha (a, 0.7f, 0.5f);
					StartCoroutine (showCoin (a));
				} else a.FindChild("Text").GetComponent<Text>().text = "+" + listDiem[count-1].ToString();
			} 
		
			checkClick = false;
		} 
		//khi bien dem = 3, chay thong bao roi chuyen ve game chinh
		if(count == 3){
			//chay thong bao
			StartCoroutine(showNote());
			count = 4;

		}
	}

	public void creatRandom(){
	
		for (int i=1; i<=6; i++) {	
			random = Random.Range (0, 3);
			target.x = Random.Range (-650, 850);
			target.y = Random.Range (-250, 100);
			RectTransform a = Instantiate (bo [random]);
			a.SetParent (area);
			a.localPosition = new Vector2 (-650 + (i - 1) * 300, target.y);
			a.localScale = new Vector3 (1, 1, 0);
			listBo.Add (a);
			if(i==1||i==3||i==5){
				random = Random.Range (0, 3);
				RectTransform b = Instantiate (bo [random]);
				b.SetParent (area);
				b.localPosition = new Vector2 (-550 + (i - 1) * 300, target.y+300);
				b.localScale = new Vector3 (1, 1, 0);
				listBo.Add (b);
			}
		}
		panel.anchoredPosition = posPanelStart;
		panel.SetAsLastSibling ();
		panel.FindChild ("bnt_tab").FindChild ("Text").GetComponent<Text> ().text = "Click to play game!!";
	}

	public void eventTab(){
		StartCoroutine (IeventTab());
		panel.FindChild ("bnt_tab").GetComponent<Button> ().interactable = false;
	}
	IEnumerator IeventTab(){
		LeanTween.moveLocalY (panel.gameObject, 300,1);
		yield return new WaitForSeconds (1);
		panel.SetAsFirstSibling ();
	}
	IEnumerator endGame(){

		pnl_endGame.gameObject.SetActive(true);
//		string coin = "You win "+ diem (mucdiem).ToString();
//		pnl_endGame.FindChild("Panel").FindChild("Text").GetComponent<Text>().text = coin;
		yield return new WaitForSeconds (0.5f);
		foreach(RectTransform a in listBo){
			a.GetComponent<Animator>().enabled = true;
		}
		foreach(RectTransform a in dem){
			LeanTween.alpha(a,0.5f,0.5f);
		}
	}
	IEnumerator showCoin (RectTransform a){
		yield return new WaitForSeconds (1);
		a.FindChild("Text").GetComponent<Text>().gameObject.SetActive(true);
		if(count2!=3){
		yield return new WaitForSeconds (3);
		foreach(RectTransform i in listBo){
			if(i!=null){
				Destroy(i.gameObject);
			}
		}
		listBo.Clear ();
		creatRandom();
		panel.SetAsFirstSibling ();
		}
		//count += 1;
	}
	IEnumerator upDiem(int luot){
		//Debug.Log (luot);
		int diem = int.Parse(minigame.FindChild ("diemcong").GetComponent<Text> ().text);
		yield return new WaitForSeconds (1);
		for(int i=1;i<=listDiem[luot-1]; i++){
			yield return new WaitForSeconds(1.5f/listDiem[luot-1]);
			diem +=1;
			minigame.FindChild("diemcong").GetComponent<Text>().text = diem.ToString();
		}
	}
	IEnumerator showNote(){

		//chay thong bao sau x giay
		yield return new WaitForSeconds (4);
		Debug.LogError ("thong bao");
		panel.SetAsLastSibling ();
//		minigame.FindChild ("note").gameObject.SetActive (true);
//		minigame.FindChild ("note").FindChild ("Text2").GetComponent<Text> ().text = minigame.FindChild ("diemcong").GetComponent<Text> ().text;
		panel.anchoredPosition = new Vector2 (0,300);
		LeanTween.moveLocalY (panel.gameObject, 0,1).setDelay(0.1f);
		panel.FindChild("bnt_tab").FindChild("Text").GetComponent<Text>().text = "You win!!!     " +minigame.FindChild ("diemcong").GetComponent<Text> ().text;
		yield return new WaitForSeconds (1);
		//Destroy( panel.gameObject);
		//panel.SetAsFirstSibling ();
		yield return new WaitForSeconds (3);
		sendFinish ();
		//tro ve game chinh
		foreach(RectTransform i in listBo){
			Destroy(i.gameObject);
		}
		minigame.gameObject.SetActive (false);
		ControlPlay.endGameMini = true;
	}
	IEnumerator on_offItem(){

		foreach(RectTransform a in listBo){
			if(a.FindChild("Button").GetComponent<Button>().interactable == true){
				dem.Add(a);
			}
		}
		foreach(RectTransform a in dem){
			a.FindChild("Button").GetComponent<Button>().interactable = false;
		}
		yield return new WaitForSeconds (2);
		foreach(RectTransform a in dem){
			a.FindChild("Button").GetComponent<Button>().interactable = true;
		}
		dem.Clear ();
	}

	public void sendFinish(){
		var data = new JSONClass();
		data ["evt"] = "slotminifinish";
		GameApplication.cubeia.sendService(data);
	}
	public void back(){
		foreach(RectTransform i in listBo){
			Destroy(i.gameObject);
		}
		listBo.Clear ();
		minigame.gameObject.SetActive (false);

		ControlPlay.endGameMini = true;
	}
	public int randomDiem(int random){
		if (random == 1) {
			return 10;
		} else
		if (random == 2) {
			return 20;
		} else
		if (random == 3) {
			return 30;
		} else
		if (random == 4) {
			return 40;
		} else
		if (random == 5) {
			return 50;
		} else
		if (random == 6) {
			return 60;
		} else
		if (random == 7) {
			return 70;
		} else
		if (random == 8) {
			return 80;
		} else
		if (random == 9) {
			return 90;
		} else
			return 0;
	}
}
