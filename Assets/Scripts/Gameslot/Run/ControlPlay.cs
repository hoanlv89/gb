using UnityEngine;
using System.Collections;
using UnityEngine.UI;
//using System;
using UnityEngine.EventSystems;
using System.Collections.Generic;


public class ControlPlay : SlotomaniaScene {
	public RectTransform test;
	ControlNumberButton ct = new ControlNumberButton ();
	TransMatrixPos transMatrixpos = new TransMatrixPos();
	public SlotsGameScene slotsence;
	ColorLine color = new ColorLine ();//mau cua border
	Item item = new Item();
	User user;

	//AudioSlot ads = new AudioSlot ();

	int numberItemCreat = 25;
	int timeControl = 4;
	public static int totalWin;
	public int totalGold;
	public static int send_nLine;
	public static bool checkRun = false; //khi server nhan duoc du lieu tra ve thi chay
	public static bool checkAuto = false;
	public static bool endGameMini = false;
	bool stopSpin = false; //kiem tra khi bam stop luc dang auto
	bool auto = false;
	bool isRun = false;
	bool firstSpin = true;
    bool check = true; //quan ly chay ham mot lan trong ham update
	public static bool checkBonus = false; //kiem tra xem co bonus khong
	public bool checkScatter = false;
	bool isScatter = false;
	int countScatter = 1;
	public bool finishRun = false;//bien kiem tra trang thai chay moi lan spin
	float dTime; //quan ly thoi gian
	float startSpinTime;//quan ly thoi gian
	//static int[,] resultsMatrix = new int[3,5];//nhan mang ma tran ket qua tu server
	static int[,] resultsMatrix = {{9,1,4,2,2},{3,4,0,2,7,},{8,4,3,1,2}};
	public int[] itemCreat = {25,29,33,37,41};
	public int[] arrLineEf = {0,0,0,0,0};
	public static int soduong = 2;
	public static int[] numberLine = {1};//nhan danh sach cac duong duoc an tu server
	public static int[] soluong= {5};//so item an tren moi duong
	int [,] posMatrix; //dung de xu li line

	public RectTransform border;
	public RectTransform[,] listCreat = new RectTransform[200,10];
	RectTransform [,] ldem = new RectTransform[200,10];//luu tam de sau khi run xong thi xoa
	RectTransform[] listLine = new RectTransform[100];//danh sach cac duong duoc an, tao de xu ly do hoa
	RectTransform[,] listBorder = new RectTransform[20,20];//danh sach cac o duoc hien border
	RectTransform[,] listNen = new RectTransform[10,10];//danh sach nen theo vi tri
	RectTransform[,] listAnim = new RectTransform[100,100]; //danh sach cac o duoc hien animation
	List<RectTransform> listBorderBonus = new List<RectTransform>();
	List<RectTransform> listAnimBonus = new List<RectTransform>();
	List<RectTransform> listBorderScatter = new List<RectTransform>();
	List<RectTransform> listAnimScatter = new List<RectTransform>();
	List<GameObject> listButtonNumber = new List<GameObject>();
	Button[] lButton;
	public Text gold;
	bool mousedown = false;
	float timeMousedown=0;
	float timeDelayAuto = 0;
	IEnumerator controlAfterSpin;
	IEnumerator IEautospin;
	IEnumerator IEscatter;
	// Use this for initialization

	public void Start () {
		//LeanTween.init (1600);
		//StartCoroutine (testparabol());
//		for(int t=0;t<100;t++){
//			int x = t;
//			int y = -t*t+2*t;
//			LeanTween.moveLocal (test.gameObject, new Vector3 (x, y, 0), 0.1f).setDelay(t*0.1f);
//		}
//		LeanTween.moveLocal (test.gameObject, new Vector3 (50, 90, 0), 0.5f);
		//LeanTween.moveLocal (test.gameObject, new Vector3 (0, -277, 0), 1.7f).setEase (LeanTweenType.easeOutBounce).setDelay(0.5f);

		//doc button number hai ben ban choi
		for(int i =1;i<=9;i++){
			listButtonNumber.Add(RnumberButton.FindChild("left_number").FindChild(i.ToString()).gameObject);
			listButtonNumber.Add(RnumberButton.FindChild("right_number").FindChild(i.ToString()).gameObject);
		}
	
		Linesup.GetComponent<Button>().interactable = false;
		Betdown.GetComponent<Button> ().interactable = false;
		for (int j = 1; j<=5; j++) {
			for (int i = 1; i<=3; i++) {
				int random = (int)Random.Range (0, 9.999f);
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (random));
				a.SetParent (this.getrect (j));
				a.anchoredPosition = new Vector2 (0, 201 *( i-1));
				a.localScale = getRectransform(random).localScale;
				listCreat [i, j] = a;
			}
		}
		//creatItem ();
		creat (itemCreat);
		for (int i = 1; i<=numberLine.Length; i++) {
			hideLine(i);
			hideBorder(i);
			hideAnimation(i);
		}	
	}


	// Update is called once per frame
	void Update () {
		dTime += Time.deltaTime;
	
		//khi bam chon duong thi tat cac hieu ung nhap nhay

		if (checkRun == true) {
			spin (auto);
			checkRun = false;
		}
		
		if(endGameMini == true){
			StartCoroutine(controlAfterSpin);
			//Debug.LogError(stopSpin);
			if(IEautospin!=null&&stopSpin==false){
				StartCoroutine(IEautospin);
			}
			if(IEscatter!=null){
				StartCoroutine(IEscatter);
			}
			Betup.GetComponent<Button> ().interactable = true;
			Betdown.GetComponent<Button> ().interactable = true;
			Linesup.GetComponent<Button> ().interactable = true;
			Linesdown.GetComponent<Button> ().interactable = true;
			Spin.GetComponent<Button> ().interactable = true;
			bnt_setting.GetComponent<Button> ().interactable = true;
			foreach(GameObject o in listButtonNumber){
				o.GetComponent<Button>().interactable = true;
			}
			endGameMini = false;

		}
		if(isClick==true){
			isRun = false;
			StopAllCoroutines ();
			for (int i = 1; i<=numberLine.Length; i++) {
				hideLine(i);
				hideBorder(i);
				hideAnimation(i);
			}
			if(numberRow==1){
				Linesdown.GetComponent<Button>().interactable = false;
			} else Linesdown.GetComponent<Button>().interactable = true;
			if(numberRow==9){
				Linesup.GetComponent<Button>().interactable = false;
			} else Linesup.GetComponent<Button>().interactable = true;

			isClick = false;
		}
	//khi bam spin
		if(mousedown==true){
			timeMousedown+=Time.deltaTime;
			if(timeMousedown-startSpinTime>=1){
				//Debug.LogError ("is click!");
				mousedown=false;
				timeMousedown = 0;
				Spin.GetComponent<Button>().interactable = false;
				Spin.gameObject.SetActive(false);
			}
		}
	}
	public void spinsendSever(){
		sendSpin (numberRow,bet);
	//	Debug.Log (numberRow);
		soduong = 0;
		//StopAllCoroutines ();
		if(controlAfterSpin!=null){
		StopCoroutine (controlAfterSpin);
		}
		for (int i = 1; i<=numberLine.Length; i++) {
			hideLine(i);
			hideBorder(i);
			hideAnimation(i);
		}
		Win.FindChild("Text").GetComponent<Text>().text = "0";
//		foreach (Object obj in Resources.FindObjectsOfTypeAll(typeof(Button))) {
//			Button bnt = (Button)obj;
//			bnt.interactable = false;
//		}
		Betup.GetComponent<Button> ().interactable = false;
		Betdown.GetComponent<Button> ().interactable = false;
		Linesup.GetComponent<Button> ().interactable = false;
		Linesdown.GetComponent<Button> ().interactable = false;
		Spin.GetComponent<Button> ().interactable = false;
		bnt_setting.GetComponent<Button> ().interactable = false;
		foreach(GameObject o in listButtonNumber){
			o.GetComponent<Button>().interactable = false;
		}

	}
	public void spin(bool auto){
//		foreach(RectTransform i in listCreat){
//			if(i != null){
//			Debug.Log(i.name);
//			}
//		}
//		if(firstSpin==false){
//			delete ();
//		
//		}
		delete ();
		arrLineEf = findBonus (resultsMatrix);
		setItemCreat (arrLineEf);
		creat (itemCreat);
		firstSpin = false;

		//arrLineEf = new int[]{1,0,1,1,1};
//		arrLineEf = new int[]{0,0,1,1,1};
//		itemCreat = new int[]{25,29,33,37,77};
//		foreach(int i in arrLineEf){Debug.LogError(i);}
//		foreach(int i in itemCreat){
//			Debug.LogError(i);
//		}
		//creatItem ();

		for (int i = 1; i<=numberLine.Length; i++) {
			hideLine(i);
			hideBorder(i);
			hideAnimation(i);
		}

		dTime = 0;
		startSpinTime = Time.deltaTime;
		downGold (numberRow);//giam tien theo so duong
		isRun = true;
		check = true;
		checkBonus = checkBn (resultsMatrix, numberRow);
		checkScatter = checkScat (resultsMatrix);
		run (auto);
		AudioSlot.audioslot.audioSpin ();
		changeList ();

	}
	public void autoSpin(int numberspin){
		//auto = true;
		stopSpin = false;
		Win.FindChild ("Text").gameObject.SetActive (false);
		Win.FindChild ("Text1").gameObject.SetActive (false);
		Win.FindChild ("Text2").gameObject.SetActive (true);
		IEautospin = autoSend (numberspin);
		StartCoroutine (IEautospin);
	}
	//tao item moi lan spin
	public void creatItem(){
		for (int j = 1; j<=5; j++) {
			for (int i = 1; i<=numberItemCreat+3*(j-2); i++) {
				int random = (int)Random.Range (0, 9.999f);
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (random));
				a.SetParent (this.getrect ( j));
				a.anchoredPosition = new Vector2 (0, 201 * (i+2));
				a.localScale =  getRectransform(random).localScale;
				listCreat [i+3, j] = a;
			}
		}
		for (int j = 1; j<=5; j++) {
			for (int i = numberItemCreat+3*(j-2)+1; i<=numberItemCreat+3*(j-1); i++) {
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (resultsMatrix [i-numberItemCreat-3*(j-2)-1, j - 1]));
				a.SetParent (this.getrect ( j));
				a.anchoredPosition = new Vector2 (0, 201 * (i+2));
				a.localScale =  new Vector3(1,0.8f,0);
				listCreat [i+3, j] = a;
				//Debug.Log (a.name);
			}
		}
		//them cho dep
		for (int j = 1; j<=5; j++) {
			for (int i = numberItemCreat+3*(j-1)+1; i<=numberItemCreat+3*(j-1)+5; i++) {
				int random = (int)Random.Range (0, 9.999f);
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (random));
				a.SetParent (this.getrect ( j));
				a.anchoredPosition = new Vector2 (0, 201 * (i+2));
				a.localScale =  getRectransform(random).localScale;
				listCreat [i+3, j] = a;
			}
		}
		//creat line
		for (int i = 1; i<=numberLine.Length; i++) {
			foreach (RectTransform line in Resources.LoadAll("prefabs", typeof(RectTransform))) {
				if (line.gameObject.name == numberLine [i - 1].ToString ()) {
					RectTransform a = (RectTransform)GameObject.Instantiate (line);
					a.SetParent(Lline);
					a.anchoredPosition = line.anchoredPosition;
					a.localScale = new Vector3 (1, 1, 1);
					listLine [i] = a; 
					//Debug.Log(listLine[i]);
				}
			}
		}


		//create border, nen and animation

		for (int i =1; i<=numberLine.Length; i++) {
			getPosMatrix(numberLine[i-1],soluong[i-1]);
			int[,] matran = transMatrixpos.transPos (numberLine[i-1]);

			for (int j = 1; j<=soluong[i-1]; j++) {
				//creat border
				RectTransform a = (RectTransform)GameObject.Instantiate (border);
				a.SetParent (this.getrectBorder (posMatrix[j-1,1]));
				a.anchoredPosition = new Vector2 (0, 201*(posMatrix[j-1,0]-1));
				a.localScale = border.localScale;
				a.GetComponent<Image>().color =color.getColorLine(numberLine[i-1]);;
				listBorder[i,j] = a;
				//creat animation
				RectTransform animation = (RectTransform)GameObject.Instantiate (getRectransform(resultsMatrix[matran[j-1,0]-1,j-1]));
				animation.SetParent (this.getrectBorder (posMatrix[j-1,1]));
				animation.anchoredPosition = new Vector2 (0, 201*(posMatrix[j-1,0]-1));
				animation.localScale = getRectransform(resultsMatrix[matran[j-1,0]-1,j-1]).localScale;
				animation.GetComponent<Animator>().enabled = true;
				listAnim[i,j] = animation;
				//Debug.Log (animation.name);
			}
		}
	}
	//ham creat moi
	public void creat(int [] itemCreat){
		int line=0;
		for (int j = 1; j<=5; j++) {
			line = itemCreat[j-1];
			for (int i = 1; i<=line-3; i++) {
				int random = (int)Random.Range (0, 9.999f);
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (random));
				a.SetParent (this.getrect ( j));
				a.anchoredPosition = new Vector2 (0, 201 * (i+2));
				a.localScale =  getRectransform(random).localScale;
				listCreat [i+3, j] = a;
			}
			
			for (int i = line-2 ; i<=line; i++) {
				RectTransform a = (RectTransform)GameObject.Instantiate (getRectransform (resultsMatrix [i-line+2, j - 1]));
				a.SetParent (this.getrect ( j));
				a.anchoredPosition = new Vector2 (0, 201 * (i+2));
				a.localScale = getRectransform (resultsMatrix [i-line+2, j - 1]).localScale;
				listCreat [i+3, j] = a;
				//Debug.Log (a.name);
			}
		}
		//creat line
		for (int i = 1; i<=numberLine.Length; i++) {
			foreach (RectTransform l in Resources.LoadAll("prefabs", typeof(RectTransform))) {
				if (l.gameObject.name == numberLine [i - 1].ToString ()) {
					RectTransform a = (RectTransform)GameObject.Instantiate (l);
					a.SetParent(Lline);
					a.anchoredPosition = l.anchoredPosition;
					a.localScale = new Vector3 (1, 1, 1);
					listLine [i] = a; 
					//Debug.Log(listLine[i]);
				}
			}
		}
		
		
		//create border, nen and animation
		
		for (int i =1; i<=numberLine.Length; i++) {
			getPosMatrix(numberLine[i-1],soluong[i-1]);
			int[,] matran = transMatrixpos.transPos (numberLine[i-1]);
			
			for (int j = 1; j<=soluong[i-1]; j++) {
				//creat border
				RectTransform a = (RectTransform)GameObject.Instantiate (border);
				a.SetParent (this.getrectBorder (posMatrix[j-1,1]));
				a.anchoredPosition = new Vector2 (0, 201*(posMatrix[j-1,0]-1));
				a.localScale = border.localScale;
				//a.GetComponent<Image>().color =color.getColorLine(numberLine[i-1]);
				listBorder[i,j] = a;
				//creat animation
				RectTransform animation = (RectTransform)GameObject.Instantiate (getRectransform(resultsMatrix[matran[j-1,0]-1,j-1]));
				animation.SetParent (this.getrectBorder (posMatrix[j-1,1]));
				animation.anchoredPosition = new Vector2 (0, 201*(posMatrix[j-1,0]-1));
				animation.localScale = getRectransform(resultsMatrix[matran[j-1,0]-1,j-1]).localScale;
				animation.GetComponent<Animator>().enabled = true;
				listAnim[i,j] = animation;
				//Debug.Log (animation.name);
			}
		}
	}
	//creat list bonus
	public void creatBorderBonus(){
		int[,] matran;
		for(int i=1;i<=numberRow;i++){
			int countBn = 0;
			matran = transMatrixpos.transPos(i);
			for(int j=1;j<=5;j++){
				if(resultsMatrix[matran[j-1,0]-1,j-1]==0){
					countBn+=1;
				}
			}
			if (countBn >= 3) {
				for(int j=1;j<=5;j++){
					if(resultsMatrix[matran[j-1,0]-1,j-1]==0){
						RectTransform a = (RectTransform)GameObject.Instantiate (border);
						a.SetParent (this.getrectBorder (j));
						a.anchoredPosition = new Vector2 (0, 201*(matran[j-1,0]-1));
						a.localScale = border.localScale;
						listBorderBonus.Add(a);
						a.gameObject.SetActive(false);
						RectTransform anim = (RectTransform)GameObject.Instantiate (bonus);
						anim.SetParent (this.getrectBorder (j));
						anim.anchoredPosition = new Vector2 (0, 201*(matran[j-1,0]-1));
						anim.localScale = bonus.localScale;
						listAnimBonus.Add(anim);
						anim.gameObject.SetActive(false);
						anim.GetComponent<Animator>().enabled = true;
					}
				}
			}
		}

	}
	//creat list Scatter border and animation
	public void creatBorderScatter(){
		for(int j=0;j<5;j++){
			for(int i=0;i<3;i++){
				if(resultsMatrix[i,j]==1){
					RectTransform a = (RectTransform)GameObject.Instantiate (border);
					a.SetParent (this.getrectBorder (j+1));
					a.anchoredPosition = new Vector2 (0, 201*i);
					a.localScale = border.localScale;
					listBorderScatter.Add(a);
					a.gameObject.SetActive(false);
					RectTransform anim = (RectTransform)GameObject.Instantiate (scatter);
					anim.SetParent (this.getrectBorder (j+1));
					anim.anchoredPosition = new Vector2 (0, 201*i);
					anim.localScale = scatter.localScale;
					listAnimScatter.Add(anim);
					anim.gameObject.SetActive(false);
					anim.GetComponent<Animator>().enabled = true;
				}
			}
		}
	}
	//xoa item cu
	public void delete(){
//		for (int j = 1; j<=5; j++) {
//			for (int i = 1; i<=numberItemCreat+3*(j-1)+5; i++) {
//				Destroy (listCreat [i + 3, j].GetComponent<RectTransform> ().gameObject);
//			}
//		}
		for (int j = 1; j<=5; j++) {
			for (int i = 1; i<=3; i++) {
				if(ldem [i , j] != null){
					Destroy (ldem [i , j].GetComponent<RectTransform> ().gameObject);
				}
			}
		}
		for (int j = 1; j<=5; j++) {
			for (int i = 1; i<=itemCreat[j-1]-3; i++) {
				if(listCreat [i+3 , j] != null){
					Destroy (listCreat [i+3 , j].GetComponent<RectTransform> ().gameObject);
				}
			}
		}
		//delete line
		for (int i = 1; i<=listLine.Length-1; i++) {
			if(listLine[i]!=null){
			Destroy(listLine[i].gameObject);
			}
		}
		//delete border and animation and nen
		
		for (int i =1; i<=10; i++) {
			for (int j = 1; j<=10; j++) {
				if(listBorder[i,j] !=null){
					Destroy(listBorder[i,j].gameObject);
				}
				if(listBorder[i,j] !=null){
					Destroy(listAnim[i,j].gameObject);
				}
		}
		}
		//delete listlineshow
		for(int i=1;i<=ListLineshow.Length;i++){
			if(ListLineshow[i-1]!=null){
			Destroy(ListLineshow[i-1].gameObject);
			}
		}		
	}
	//thay doi listitem moi lan spin
	public void changeList(){
	

		for (int j = 1; j<=5; j++) {
			for (int i = 1; i<=3; i++) {
				ldem[i,j]= listCreat[i,j];
				//listCreat[i,j] = listCreat[numberItemCreat+3*(j-1),j];
				listCreat[i,j] = listCreat[itemCreat[j-1]-(3-i)+3,j];
				//listCreat[itemCreat[j-1]-(3-i)+3,j]=l[i,j];
				//listCreat[itemCreat[j-1]-(3-i)+3,j]=listCreat[i,j] ;
	
			}
		}
	}
	//quay
	public void run(bool auto){
		int random = 4; //test
		if(random==4){
			LeanTween.init(1600);
			int count1 = 0;
			int count2 = 0;
			int[] dem = {0,0,0,0,0};
			for(int j=1;j<=5;j++){
				if(arrLineEf[j-1]==1){
					count1 +=1;
				} 
				if(count1>=2){
					count2+=1;
					dem[j-1]=count2 - 1;
				}
			}
			count1 =0;
			count2=0;
			for(int j=1;j<=5;j++){
				if(arrLineEf[j-1]==1){
					count1 +=1;
				} 
				if(count1>=2){
					count2+=1;
				}
				if(dem[j-1]==0){
					for (int i = 1; i<=itemCreat[j-1]+3; i++) {
						
						LeanTween.moveLocalY(listCreat[i,j].gameObject,-203* (itemCreat[0]-i+3+4*(j-1)) + 600,j*0.3f+timeControl-2);
						LeanTween.moveLocalY(listCreat[i,j].gameObject,-203* (itemCreat[0]-i+3+4*(j-1)) + 400,0.7f).setDelay(j*0.3f+timeControl-2).setEase(LeanTweenType.easeOutBack);
					} 
				} else {
					StartCoroutine(AudioSlot.audioslot.audioRunup(j*0.3f+timeControl-2+1.5f*(dem[4]-dem[j-1]),j));

					for (int i = 1; i<=itemCreat[j-1]+3; i++) {
						LeanTween.moveLocalY(listCreat[i,j].gameObject,-203* (itemCreat[0]-i+3+4*(j-1)) + 400,j*0.3f+timeControl-2);
						LeanTween.moveLocalY(listCreat[i,j].gameObject,-203* (itemCreat[j-1]-i+3)+600,1.5f*(dem[j-1])).setDelay(j*0.3f+timeControl-2);
						LeanTween.moveLocalY(listCreat[i,j].gameObject,-203* (itemCreat[j-1]-i+3) + 400,0.5f).setDelay(j*0.3f+timeControl-2+1.5f*(dem[j-1])).setEase(LeanTweenType.easeOutBack);
					}
				}
				

				if(arrLineEf[j-1]==1){
					StartCoroutine (creatHieuungcot2(j,j*0.3f+timeControl-2+1.5f*(dem[j-1]),(5-j)*0.3f+1+1.5f*(dem[4]-dem[j-1])));
				}
			}
			StartCoroutine (on_offAllButton(5*0.3f+timeControl-2+1.5f*(dem[4])));
			StartCoroutine (upGold(totalWin));
			if(auto==false){
				controlAfterSpin = ControlRunAfterSpin(5*0.3f+timeControl-2+1.5f*(dem[4]));
				StartCoroutine(controlAfterSpin);
			}
		//	Debug.LogError(checkBonus);
			if(checkBonus == true){
				//tao listbonus
				creatBorderBonus();
				//tat  coroutine controlafterspin
				StopCoroutine(controlAfterSpin);
				if(IEautospin!= null){
					StopCoroutine(IEautospin);
				}
				if(IEscatter!=null){
					StopCoroutine(IEscatter);
				}
				//chay list bonus
				StartCoroutine(EfBonus(5*0.3f+timeControl-2+1.5f*(dem[4])+1.01f));
				checkBonus = false;
			}
			if(checkScatter == true){
				//isScatter = true;
				creatBorderScatter();
				StopCoroutine(controlAfterSpin);
				if(IEautospin!= null){
					StopCoroutine(IEautospin);
				}
				if(IEscatter!=null){
					StopCoroutine(IEscatter);
					countScatter+=10;
					Debug.LogError(countScatter);
					NumberScatter.GetComponent<Text>().text = countScatter.ToString();
					NumberScatter.gameObject.SetActive(true);
				}
				IEscatter = EfScatter(5*0.3f+timeControl-2+1.5f*(dem[4])+1.01f,countScatter);
				StartCoroutine(IEscatter);
				//IEscatter.Add(ie);
				checkScatter = false;
			}
			timeDelayAuto = 5*0.3f+timeControl-2+1.5f*(dem[4])+2;
		}
	}

	public void showLine(int line){
		if(listLine[line]!=null){
		listLine[line].gameObject.SetActive(true);
		}
	}
	public void hideLine(int line){
		if(listLine[line]!=null){
		listLine[line].gameObject.SetActive(false);
		}
	}
	public void showBorder(int line){
		for (int j = 1; j<=soluong[line-1]; j++) {
			listBorder[line,j].gameObject.SetActive(true);
		}
	}
	public void hideBorder(int line){
		for (int j = 1; j<=soluong[line-1]; j++) {
			listBorder[line,j].gameObject.SetActive(false);
		}
	}
	public void showAnimation(int line){
		for (int j = 1; j<=soluong[line-1]; j++) {
			listAnim[line,j].gameObject.SetActive(true);
		}
	}
	public void hideAnimation(int line){
		for (int j = 1; j<=soluong[line-1]; j++) {
			listAnim[line,j].gameObject.SetActive(false);
		}
	}

	public static void revMatrix(int [,] matrix){
		resultsMatrix = matrix;
	}
	public void getPosMatrix(int line, int sopt){
		posMatrix = new int[sopt,2];
		int[,] matran = transMatrixpos.transPos (line);
		for(int i=1;i<=sopt;i++){
			for(int j=1;j<=2;j++){
				posMatrix[i-1,j-1] = matran[i-1,j-1];
			}
		}
	}
	public int getIntCoin(string coin){
		string save="";
		int i_coin;
		for(int i=0;i<=coin.Length-1;i++){
			if(coin[i].ToString()!="$"&&coin[i].ToString()!=","){
				save = save + coin[i].ToString();
			}
		}
		i_coin = int.Parse (save);
		return i_coin;
	}
	public void backtoGameSence(){
		Application.LoadLevel (GameApplication.HOMESCENE);
		bet = 1;
		numberRow = 9;
		totalGold = getIntCoin (Coin.GetComponent<Text>().text);
		user = GameApplication.user;
		user.ag = totalGold;
	}
	IEnumerator upGold(int totalWin){
		int diem = 0;
		totalGold = getIntCoin (Coin.GetComponent<Text>().text);
		yield return new WaitForSeconds (4);
//		LeanTween.scale (Win, new Vector3(1.5f,1.5f,0),1f).setEase(LeanTweenType.easeOutCirc);
//		LeanTween.scale (Win, new Vector3(1f,1f,0),1f).setEase(LeanTweenType.easeOutCirc).setDelay(1f);
		for(int i=1;i<=totalWin; i++){
			yield return new WaitForSeconds(1f/totalWin);
			diem +=1;
			Win.FindChild("Text").GetComponent<Text>().text = diem.ToString();
			totalGold +=1;
			Coin.GetComponent<Text>().text = "$" + Utils.formatNumber(totalGold);
		}
	}
	public void downGold(int numberLine){
		string coin = Coin.GetComponent<Text> ().text;
		int i_coin = getIntCoin (coin);
		i_coin = i_coin - numberLine*bet;
		Coin.GetComponent<Text> ().text = "$" + Utils.formatNumber(i_coin);
	}
	IEnumerator	on_offAllButton(float delay){
	
//		foreach (Object obj in Resources.FindObjectsOfTypeAll(typeof(Button))) {
//			Button bnt = (Button)obj;
//			bnt.interactable = false;
//		}
		yield return new WaitForSeconds(delay); //thời gian chờ chạy để bật tiếng win
		if(numberLine.Length!=0){
			AudioSlot.audioslot.audioWin();
		}
		yield return new WaitForSeconds(1);//bat cac button
		foreach (Object obj in Resources.FindObjectsOfTypeAll(typeof(Button))) {
			Button bnt = (Button)obj;
			bnt.interactable = true;
		}

		if(numberRow==9){
			Linesup.GetComponent<Button>().interactable = false;
		}
		if(numberRow==1){
			Linesdown.GetComponent<Button>().interactable = false;
		}
		if(bet==1){
			Betdown.GetComponent<Button>().interactable = false;
		}
		if(bet==50){
			Betup.GetComponent<Button>().interactable = false;
		}
	}
	IEnumerator ControlRunAfterSpin(float delay){

		while (true) {
			//chờ thời gian quay
			if(check == true){
				check=false;
				yield return new WaitForSeconds(delay-1);
			}

			yield return new WaitForSeconds(1);
			//hien tat ca cac duong va bat tat ca cac button
			for (int i =1; i<=numberLine.Length; i++) {
				showLine (i);
				hideBorder(i);
				hideAnimation(i);
			}
			yield return new WaitForSeconds (2);
			for (int j =1; j<=numberLine.Length; j++) {
				hideLine(j);
			}

			yield return new WaitForSeconds (0.1f);
			//hien lan luot line, border, animation, nen
			for (int i =1; i<=numberLine.Length; i++) {
				if(i>1){
					hideLine(i-1);
					hideBorder(i-1);
					hideAnimation(i-1);
				}

				showLine(i);
				yield return new WaitForSeconds (1);
				hideLine(i);
				showBorder(i);
				showAnimation(i);
				if(i!=numberLine.Length){
					yield return new WaitForSeconds (1);
				}
			}
		}
	}

	IEnumerator EfBonus(float delay){

		//cho thoi gian chay
		yield return new WaitForSeconds (delay);
		//tat button spin
		Betup.GetComponent<Button> ().interactable = false;
		Betdown.GetComponent<Button> ().interactable = false;
		Linesup.GetComponent<Button> ().interactable = false;
		Linesdown.GetComponent<Button> ().interactable = false;
		Spin.GetComponent<Button> ().interactable = false;
		bnt_setting.GetComponent<Button> ().interactable = false;
		foreach(GameObject o in listButtonNumber){
			o.GetComponent<Button>().interactable = false;
		}

		//hien borred va animation bonus
		foreach(RectTransform a in listBorderBonus){
			a.gameObject.SetActive(true);
		}
		foreach(RectTransform a in listAnimBonus){
			a.gameObject.SetActive(true);
		}
		yield return new WaitForSeconds (3);
		foreach(RectTransform a in listBorderBonus){
			a.gameObject.SetActive(false);
		}
		foreach(RectTransform a in listAnimBonus){
			a.gameObject.SetActive(false);
		}
		listBorderBonus.Clear ();
		listAnimBonus.Clear ();
		showBonusGame ();
	}
	IEnumerator EfScatter(float delay, int numberScatter){
		//cho thoi gian chay
		yield return new WaitForSeconds (delay);
		//tat button spin
		Betup.GetComponent<Button> ().interactable = false;
		Betdown.GetComponent<Button> ().interactable = false;
		Linesup.GetComponent<Button> ().interactable = false;
		Linesdown.GetComponent<Button> ().interactable = false;
		Spin.GetComponent<Button> ().interactable = false;
		bnt_setting.GetComponent<Button> ().interactable = false;
		foreach(GameObject o in listButtonNumber){
			o.GetComponent<Button>().interactable = false;
		}
		
		//hien borred va animation scatter
		foreach(RectTransform a in listBorderScatter){
			a.gameObject.SetActive(true);
		}
		foreach(RectTransform a in listAnimScatter){
			a.gameObject.SetActive(true);
		}
		yield return new WaitForSeconds (3);
		foreach(RectTransform a in listBorderScatter){
			a.gameObject.SetActive(false);
		}
		foreach(RectTransform a in listAnimScatter){
			a.gameObject.SetActive(false);
		}
		listBorderScatter.Clear ();
		listAnimScatter.Clear ();
		//hien so luot spin mien phi
		//goi ham autosend
		for(int i=0;i<=numberScatter;i++){
			countScatter-=1;
			if(i==numberScatter){
				Spin.gameObject.SetActive (true);
				bnt_auto.gameObject.SetActive (true);
				NumberScatter.gameObject.SetActive(false);
			}
			spinsendSever ();
			while (checkAuto==false){
				yield return new WaitForSeconds(0.1f);
				Debug.LogError ("delay");
			}
			checkAuto = false;
			//yield return new WaitForSeconds(0.3f);
			yield return new WaitForSeconds (timeDelayAuto);
		}
	}
	public bool checkBn(int[,] resultMatrix, int numberRow){
		bool resutl = false;
		int[,] matran;
		for(int i=1;i<=numberRow;i++){
			int countBn = 0;
			matran = transMatrixpos.transPos(i);
			for(int j=1;j<=5;j++){
				if(resultsMatrix[matran[j-1,0]-1,j-1]==0){
					countBn+=1;
				}
			}
			if (countBn >= 3) {
				resutl = true;
			}
		}
		return resutl;
	}
	public int[] findBonus(int [,] A){
		int[] arr = {0,0,0,0,0};
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				if(A[i,j]==0){
					arr[j]=1;
				}
			}
		}
		if(arr[0]==0&&arr[1]==0&&arr[2]==0){
			arr = new int[]{0,0,0,0,0};
		}
		return arr;
	}
	public bool checkScat(int[,] A){
		int countScatter = 0;
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				if(A[i,j]==1){
					countScatter+=1;
				}
			}
		}
		if (countScatter >= 3) {
			return true;
		} else
			return false;
	}
	public int[] findScatter(int [,] A){
		int[] arr = {0,0,0,0,0};
		for(int i=0;i<3;i++){
			for(int j=0;j<5;j++){
				if(A[i,j]==1){
					arr[j]=1;
				}
			}
		}
		if(arr[0]==0&&arr[1]==0&&arr[2]==0){
			arr = new int[]{0,0,0,0,0};
		}
		return arr;
	}

	IEnumerator creatHieuungcot2(int cot, float delay, float runtime){
		yield return new WaitForSeconds (delay);
		RectTransform a = (RectTransform)GameObject.Instantiate (effecBonus);
		a.SetParent (this.getrect (cot));
		a.anchoredPosition = effecBonus.anchoredPosition;
		a.localScale = effecBonus.localScale;
		a.SetAsFirstSibling();	
		AudioSlot.audioslot.audioSoundEf();
		yield return new WaitForSeconds (runtime);
		Destroy(a.gameObject);
	}
	public void setItemCreat(int[] arrLineEf){
		itemCreat = new int[]{25,29,33,37,41};
		int count = 0;
		for(int i=0;i<5;i++){
			if(arrLineEf[i]==1){
				count +=1;
			}
			if(count==2){
				for(int j=i+1;j<5;j++){
					itemCreat[j]=itemCreat[j-1] + 40;
				}
			}
		}
	}
	public bool checkBigWin(){
		bool check = false;
		for(int i=0;i<soluong.Length;i++){
			if(soluong[i]==5){
				check = true;
			} 
		}
		return check;
	}
	public void down(){
		mousedown = true;
		startSpinTime = Time.deltaTime;
	}
	public void up(){
		timeMousedown = 0;
		mousedown = false;
		//Spin.GetComponent<Button>().interactable = true;
	}
	IEnumerator autoSend(int numberspin){
		float stime = 0;
		for(int i=0;i<=numberspin;i++){
			if(controlAfterSpin!=null){
			StopCoroutine(controlAfterSpin);
			}
			if(i==numberspin){
				Spin.gameObject.SetActive (true);
				bnt_auto.gameObject.SetActive (true);
				Win.FindChild ("Text").gameObject.SetActive (true);
				Win.FindChild ("Text1").gameObject.SetActive (true);
				Win.FindChild ("Text2").gameObject.SetActive (false);
			}
			//checkAuto = false;
			spinsendSever ();  
			//yield return new WaitForSeconds (0.1f);
			while (checkAuto==false){                         //ngan chan gui lien tuc khi mang lag
				Debug.LogError ("delay");
				yield return new WaitForSeconds(0.1f);
			}
			checkAuto = false;
			Win.FindChild ("Text2").GetComponent<Text>().text = (numberspin-i).ToString();
			//yield return new WaitForSeconds(0.3f);
			yield return new WaitForSeconds (timeDelayAuto+0.4f);

		}
	}
	public void StopSpin(){
		Win.FindChild ("Text").gameObject.SetActive (true);
		Win.FindChild ("Text1").gameObject.SetActive (true);
		Win.FindChild ("Text2").gameObject.SetActive (false);
		StopCoroutine(IEautospin);
		startSpinTime = Time.deltaTime;
		stopSpin = true;
	}
	public void showPay(){
		Pay.gameObject.SetActive (true);
		StopAllCoroutines ();
		for (int i = 1; i<=numberLine.Length; i++) {
			hideLine(i);
			hideBorder(i);
			hideAnimation(i);
		}
	}
	public void hidePay(){
		Pay.gameObject.SetActive (false);
	}
	public void showBonusGame(){
		StopAllCoroutines ();
		//Application.LoadLevel ("BonusScene");
		BonusControl.checkStart = true;
		//bonuscontrol.creatRandom ();
		miniGame.gameObject.SetActive (true);
	}
	IEnumerator waitCheckBonus(){
		yield return new WaitForSeconds (0.1f);
		spin (auto);
	}
	IEnumerator testparabol(){
		Vector3 vt;
		while (true) {
			//move
			vt = test.position;
			vt.x +=1;
			vt.y *=0.5f ;
			test.position = vt;
			//wait
			yield return new WaitForSeconds(0.1f);

		}
	}
}
