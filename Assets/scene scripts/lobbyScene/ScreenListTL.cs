using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ScreenListTL : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {
	public RectTransform pfItem;
	public Button bntprev;
	public Button bntnext;
	public string typetabe="";
	List<TableGame> tableList = new List<TableGame> ();
	public static int[,] screenGame;
	public static float checkdrag;
	int numberScreen=0;
	public static int markvip = 2000;
	public static int markThis; //luu gia tri muc cuoc ban choi duoc click
	public static int currentScreen = 0;
	Transform[] pl = new Transform[9];
	Vector2 pospl5 = new Vector2(-58,-3);
	public Sprite point_wait;
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public void revListTable(List<TableGame> tableList){
		this.tableList = tableList;
		foreach (Transform child in transform) {
			GameObject.Destroy (child.gameObject);
		}
		//sap xep ban to len dau list
		for (int i = 0; i<tableList.Count - 1; i++) {
			for (int j = i; j<tableList.Count; j++) {
				TableGame iTableGame = tableList [i];
				TableGame jTableGame = tableList [j];
				if ((iTableGame.mark < jTableGame.mark) 
				    || ((iTableGame.mark == jTableGame.mark) && 
				    ((float)iTableGame.plNames.Count / iTableGame.capacity > (float)jTableGame.plNames.Count / jTableGame.capacity))) {
					TableGame tTableGame = jTableGame;
					tableList [j] = tableList [i];
					tableList [i] = tTableGame;
				}
			}
		}

		currentScreen = 0;
		numberScreen = (int)tableList.Count / 6 + 1;
		//Debug.LogError ("so man choi"+numberScreen);
		screenGame = new int[numberScreen,6];
		for(int i=0;i<numberScreen-1;i++){
			for(int j=0;j<6;j++){
				screenGame[i,j] = j+i*6;
			}
		}
		for(int j=0;j<6;j++){
			screenGame[numberScreen-1,j] = tableList.Count-1-j;
		}
		//moi lan nhan list thi load screen dau tien
			loadScreen (0,tableList);
		//bntnext.gameObject.SetActive(true);
	}
	//tao ra mot man choi chua dinh nghia
	void AddNewItem(){
		RectTransform rect = (RectTransform)Instantiate (pfItem);
		rect.transform.SetParent (this.transform, false);
	}
	//load man choi dua vao bien currentScreen
	//currentScreen = phan tu i cua screenGame
	//lay thong tin tu ban va dinh nghia pfItem
	public void loadScreen(int currentScreen,List<TableGame> tableList){
		bntnext.gameObject.SetActive(true);
		bntprev.gameObject.SetActive(true);
		RectTransform rect = (RectTransform)Instantiate (pfItem);
		rect.transform.SetParent (this.transform, false);
		for (int i=0; i<8; i++) {
			rect.GetChild(i).gameObject.SetActive(true);
			if(i>=tableList.Count){
				rect.GetChild(i).gameObject.SetActive(false);
			}
		}
		if(currentScreen==0){
			rect.GetChild(7).gameObject.SetActive(false);
			bntprev.gameObject.SetActive(false);
		} 
		if(currentScreen==numberScreen-1){
			rect.GetChild(6).gameObject.SetActive(false);
			bntnext.gameObject.SetActive(false);
		}
		//ban 0 tiep theo 
		if(currentScreen>=0 && currentScreen<numberScreen-1){
			if(tableList[screenGame[currentScreen,5]].mark >= markvip && tableList[screenGame[currentScreen+1,0]].mark >= markvip){
//				rect.GetChild(6).GetComponent<Image>().sprite = l4v;
			}
		}
		//ban ke truoc
		if(currentScreen>0 && currentScreen<=numberScreen-1){
			if(tableList[screenGame[currentScreen,0]].mark >= markvip){
//				rect.GetChild(7).GetComponent<Image>().sprite = l4v;
			}
		}





		int[] dem = new int[6];//bien trung gian luu ban choi tu x den x+6
		for(int i=0;i<numberScreen;i++){
			for(int j=0;j<6;j++){
				if(currentScreen==i){
					dem[j]= screenGame[i,j];
					//Debug.LogError ("bien dem "+dem[j]);
				}
			}
		}
		for(int j=0;j<tableList.Count;j++){
			for(int i=0;i<6;i++){
				if(i==j){
					typetabe="";
					//to nho
					if(i==1||i==2||i==0){
						typetabe += "s";
					} else typetabe += "l";
					//so nguoi
					int max = tableList[dem[j]].capacity;
					int size = tableList[dem[j]].plNames.Count;
					if(max<5){
						typetabe += "4";
					} else 
					if(max==5){
						typetabe += "5";
					} else
					{
						typetabe += "9";
					}
					//vip hay thuong
					if(tableList[dem[j]].mark>=markvip){
						typetabe += "v";
					} else typetabe += "t";
					//hien thi anh nguoi online
					for(int s=0; s<size; s++){
						rect.GetChild(i).GetChild(s).gameObject.SetActive(true);
						pl [0] = (rect.GetChild (i).FindChild ("pl1"));
						pl [1] = (rect.GetChild (i).FindChild ("pl2"));
						pl [2] = (rect.GetChild (i).FindChild ("pl3"));
						pl [3] = (rect.GetChild (i).FindChild ("pl4"));
						pl [4] = (rect.GetChild (i).FindChild ("pl5"));
						pl [5] = (rect.GetChild (i).FindChild ("pl6"));
						pl [6] = (rect.GetChild (i).FindChild ("pl7"));
						pl [7] = (rect.GetChild (i).FindChild ("pl8"));
						pl [8] = (rect.GetChild (i).FindChild ("pl9"));
						if(size==5&&max==5){
							Vector3 pos = rect.GetChild(i).FindChild("pl5").localPosition;
							pos.x = 0;
							rect.GetChild(i).FindChild("pl5").localPosition = pos;
						} 
						for (int k=0; k<9; k++) {
							if(k>=max){
								pl [k].gameObject.SetActive(false);
							}
							if(k>size-1){
								pl [k].GetComponent<Image>().sprite=point_wait;
							}
						}
					}

					TableGame tg = tableList[dem[j]];
					Text tv_stake = rect.GetChild(i).Find ("stake").GetComponent<Text> ();
					tv_stake.text = Utils.formatCurrency (tableList[dem[j]].mark);
					Text tv_load = rect.GetChild(i).Find ("info").GetComponent<Text> ();
					tv_load.text = tableList[dem[j]].plNames.Count + "/" + tableList[dem[j]].capacity;
					//bat xu kien
					Button button = rect.GetChild(i).FindChild("Button").GetComponent<Button> ();
					button.onClick.AddListener (delegate() {
						markThis = tg.mark;
						GameApplication.cubeia.sendJoinTable (tg.id); 
						SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
				});
				}else{

				}
			}
		}
	}
	public void nextScreen(){
		StartCoroutine (ieNextScreen());
	}
	public void preScreen(){
		StartCoroutine (iePrevScreen());
	}

	IEnumerator ieNextScreen(){
		if(currentScreen<numberScreen-1){
			currentScreen += 1;
			RectTransform rect = (RectTransform)Instantiate (pfItem);
			rect.transform.SetParent (this.transform, false);
			
			if(currentScreen==numberScreen-1){
				bntnext.gameObject.SetActive(false);
				rect.GetChild(6).gameObject.SetActive(false);
			}
			//set hinh anh cho man nay
			for(int i=0; i<6;i++){
				if(tableList[screenGame[currentScreen,i]].mark >= markvip){
					if(i==0||i==1||i==2){
//						rect.GetChild(i).GetComponent<Image>().sprite = l4v;
					} 
//						rect.GetChild(i).GetComponent<Image>().sprite = s4v;
				}
			}
			rect.anchoredPosition = new Vector2 (1540,0);
			float posXCenter = transform.GetChild (0).localPosition.x;
			LeanTween.moveLocalX (transform.GetChild(0).gameObject,-1400,0.2f);
			LeanTween.moveLocalX (transform.GetChild(1).gameObject,posXCenter,0.2f);
			yield return new WaitForSeconds (0.2f);
			foreach (Transform child in transform) {
				GameObject.Destroy (child.gameObject);
			}
			loadScreen(currentScreen,tableList);
			bntprev.gameObject.SetActive (true);
		}

	}
	IEnumerator iePrevScreen(){
		if(currentScreen>0){
			RectTransform rect = (RectTransform)Instantiate (pfItem);
			rect.transform.SetParent (this.transform, false);
			currentScreen -= 1;
			if(currentScreen==0){
				bntprev.gameObject.SetActive(false);
				rect.GetChild(7).gameObject.SetActive(false);
			}
			//set hinh anh cho man nay
			for(int i=0; i<6;i++){
				if(tableList[screenGame[currentScreen,i]].mark >= markvip){
					if(i==0||i==1||i==2){
//						rect.GetChild(i).GetComponent<Image>().sprite = l4v;
					} 
//						rect.GetChild(i).GetComponent<Image>().sprite = s4v;
				}
			}
			rect.anchoredPosition = new Vector2 (-1540,0);
			float posXCenter = transform.GetChild (0).localPosition.x;
			LeanTween.moveLocalX (transform.GetChild(0).gameObject,1400,0.2f);
			LeanTween.moveLocalX (transform.GetChild(1).gameObject,posXCenter,0.2f);
			yield return new WaitForSeconds (0.2f);
			foreach (Transform child in transform) {
				GameObject.Destroy (child.gameObject);
			}
			loadScreen(currentScreen,tableList);
			bntnext.gameObject.SetActive (true);
		}

	}
	#region IEndDragHandler implementation
	
	public void OnEndDrag (PointerEventData eventData)
	{
		float posdragLast=checkdrag;
		checkdrag = Input.mousePosition.x;
		if(checkdrag-posdragLast<0){
			nextScreen();
		}
		if(checkdrag-posdragLast>0){
			preScreen();
		}
	}
	
	#endregion
	
	#region IDragHandler implementation
	
	public void OnDrag (PointerEventData eventData)
	{
		//throw new System.NotImplementedException ();
	}
	
	#endregion
	
	#region IBeginDragHandler implementation
	
	public void OnBeginDrag (PointerEventData eventData)
	{
		checkdrag = Input.mousePosition.x;
		//Debug.LogError (checkdrag);
	}
	
	#endregion
}
