using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;

public class ScreenList52 : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {
	public RectTransform pfItem;
	public Button bntprev;
	public Button bntnext;
	public Sprite l4t;
	public Sprite l4v;
	public Sprite l5t;
	public Sprite l5v;
	public Sprite l9t;
	public Sprite l9v;
	public Sprite s4t;
	public Sprite s4v;
	public Sprite s5t;
	public Sprite s5v;
	public Sprite s9t;
	public Sprite s9v;
	public string typetabe="";
	List<TableGame> tableList = new List<TableGame> ();
	public static int[,] screenGame;
	public static float checkdrag;
	int numberScreen=0;
	public static int markvip = 2000;
	public static int markThis; //luu gia tri muc cuoc ban choi duoc click
	public static int currentScreen = 0;
	Image[] pl = new Image[9];
	Vector2 pospl5 = new Vector2(-58,-3);
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
		if(tableList.Count>0){
			loadScreen (0,tableList);
		}

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
		if(currentScreen==0){
			bntprev.gameObject.SetActive(false);
		}
		if(currentScreen==numberScreen-1){
			rect.GetChild(6).gameObject.SetActive(false);
			rect.GetChild(7).gameObject.SetActive(false);
			bntnext.gameObject.SetActive(false);
		}
		// 2 ban tiep theo 
		if(currentScreen>=0 && currentScreen<numberScreen-1){
			rect.GetChild(7).Find ("stake").GetComponent<Text> ().text = Utils.formatCurrency (tableList[screenGame[currentScreen+1,0]].mark);
			rect.GetChild(6).Find ("stake").GetComponent<Text> ().text = Utils.formatCurrency (tableList[screenGame[currentScreen+1,3]].mark);
			rect.GetChild(7).Find ("info").GetComponent<Text> ().text = tableList[screenGame[currentScreen+1,0]].plNames.Count + "/" + tableList[screenGame[currentScreen+1,0]].capacity;
			rect.GetChild(6).Find ("info").GetComponent<Text> ().text = tableList[screenGame[currentScreen+1,3]].plNames.Count + "/" + tableList[screenGame[currentScreen+1,3]].capacity;
		
			string type = "l";
			int max = tableList[screenGame[currentScreen+1,0]].capacity;
			if(max<5){
				type += "4";
			} else 
			if(max==5){
				type += "5";
			} else
			{
				type += "9";
			}
			if(tableList[screenGame[currentScreen,5]].mark >= markvip && tableList[screenGame[currentScreen+1,0]].mark >= markvip){
				type += "v";
			} else type += "t";
			rect.GetChild(7).GetComponent<Image>().sprite = getImage(type);
			string type2 = type.Substring(0,2);

			if(tableList[screenGame[currentScreen,5]].mark >= markvip && tableList[screenGame[currentScreen+1,3]].mark >= markvip){
				type2 += "v";
			} else type2 += "t";
			rect.GetChild(6).GetComponent<Image>().sprite = getImage(type2);
			for(int s=0; s<tableList[screenGame[currentScreen+1,0]].plNames.Count;s++){
				rect.GetChild(7).GetChild(s).gameObject.SetActive(true);
				setPosImageOnline((RectTransform)rect.GetChild(7),tableList[screenGame[currentScreen+1,0]].capacity);
			}
			for(int s=0; s<tableList[screenGame[currentScreen+1,3]].plNames.Count;s++){
				rect.GetChild(6).GetChild(s).gameObject.SetActive(true);
				setPosImageOnline((RectTransform)rect.GetChild(6),tableList[screenGame[currentScreen+1,3]].capacity);
			}
		}


		//load man hien tai
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
						setPosImageOnline((RectTransform)rect.GetChild(i), max);
					}
					
					TableGame tg = tableList[dem[j]];
					rect.GetChild(i).GetComponent<Image>().sprite = getImage(typetabe); //doi anh ban theo dung loai
					Text tv_stake = rect.GetChild(i).Find ("stake").GetComponent<Text> ();
					tv_stake.text = Utils.formatCurrency (tableList[dem[j]].mark);
					Text tv_load = rect.GetChild(i).Find ("info").GetComponent<Text> ();
					tv_load.text = tableList[dem[j]].plNames.Count + "/" + tableList[dem[j]].capacity;
					//bat xu kien
					Button button = rect.GetChild(i).GetComponent<Button> ();
					button.onClick.AddListener (delegate() {
						markThis = tg.mark;
						GameApplication.cubeia.sendJoinTable (tg.id); 
						SuperScene.instance.showWaittingDialog (Strings.instance.common_waitingdialog_loading);
					});

//					tv_stake.text = tableList[dem[j]].id + "";
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
						rect.GetChild(i).GetComponent<Image>().sprite = l4v;
					} else
						rect.GetChild(i).GetComponent<Image>().sprite = s4v;
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
						rect.GetChild(i).GetComponent<Image>().sprite = l4v;
					} else
						rect.GetChild(i).GetComponent<Image>().sprite = s4v;
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
	public void setPosImageOnline(RectTransform rect, int max ){
		if(max<5){
			rect.GetChild(0).localPosition = new Vector3(-50,89,0);
			rect.GetChild(1).localPosition = new Vector3(50,89,0);
			rect.GetChild(2).localPosition = new Vector3(-73,-73,0);
			rect.GetChild(3).localPosition = new Vector3(73,-73,0);
		}
		if(max == 5){
			rect.GetChild(0).localPosition = new Vector3(-50,89,0);
			rect.GetChild(1).localPosition = new Vector3(50,89,0);
			rect.GetChild(2).localPosition = new Vector3(-98,-64,0);
			rect.GetChild(3).localPosition = new Vector3(98,-64,0);
			rect.GetChild(4).localPosition = new Vector3(0,-76,0);
		}
		if(max > 5){
			rect.GetChild(0).localPosition = new Vector3(-82,87,0);
			rect.GetChild(1).localPosition = new Vector3(82,87,0);
			rect.GetChild(2).localPosition = new Vector3(-118,-47,0);
			rect.GetChild(3).localPosition = new Vector3(118,-47,0);
			rect.GetChild(4).localPosition = new Vector3(48,-75,0);
			rect.GetChild(5).localPosition = new Vector3(-48,-75,0);
			rect.GetChild(6).localPosition = new Vector3(0,95,0);
			rect.GetChild(7).localPosition = new Vector3(-128,32,0);
			rect.GetChild(8).localPosition = new Vector3(128,32,0);
		}
	}

	public Sprite getImage(string typetabe){
		Sprite img = null;
		if(typetabe=="l4t"){
			img = l4t;
		}
		if(typetabe=="l4v"){
			img = l4v;
		}
		if(typetabe=="l5t"){
			img = l5t;
		}
		if(typetabe=="l5v"){
			img = l5v;
		}
		if(typetabe=="l9t"){
			img = l9t;
		}
		if(typetabe=="l9v"){
			img = l9v;
		}if(typetabe=="l4t"){
			img = l4t;
		}
		if(typetabe=="s4t"){
			img = s4t;
		}
		if(typetabe=="s4v"){
			img = s4v;
		}
		if(typetabe=="s5t"){
			img = s5t;
		}
		if(typetabe=="s5v"){
			img = s5v;
		}
		if(typetabe=="s9t"){
			img = s9t;
		}
		if(typetabe=="s9v"){
			img = s9v;
		}
		return img;
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
