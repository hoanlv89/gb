using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class SlotomaniaScene : MonoBehaviour {

	public RectTransform rect;
	public RectTransform cot1;
	public RectTransform cot2;
	public RectTransform cot3;
	public RectTransform cot4;
	public RectTransform cot5;
	public RectTransform c1;
	public RectTransform c2;
	public RectTransform c3;
	public RectTransform c4;
	public RectTransform c5;
	public  RectTransform bonus;
	public  RectTransform wild;
	public  RectTransform scatter;
	public  RectTransform crocodile;
	public  RectTransform frog;
	public  RectTransform koala;
	public  RectTransform ostrick;
	public  RectTransform parrots;
	public  RectTransform pelican;
	public  RectTransform platypus;
	public  RectTransform effecBonus;
	public RectTransform Lline;
	public RectTransform Bet;
	public Button Betup;
	public Button Betdown;
	public Button Linesup;
	public Button Linesdown;
	public RectTransform Lines;
	public RectTransform Win;
	public RectTransform Coin;
	public RectTransform Shop;
	public RectTransform Pay;
	public RectTransform bnt_setting;
	public RectTransform Setting;
	public Button Spin;
	public RectTransform numberAuto;
	public RectTransform bnt_auto;
	public RectTransform miniGame;
	public RectTransform RnumberButton; //vung chua button so
	public RectTransform NumberScatter;
	public static bool isClick = false;   //khi click chon button so duong
	public static RectTransform[] ListLineshow = new RectTransform[100];
	public static int numberRow=9;//dung de gui so duong chon len server
	public static int bet = 1;
	public bool setting_on = false;

	void Start(){

	}
	//public MyRes myRes;
	public RectTransform getrect(int cot){
		if(cot==1){
			rect = cot1;
		} 
		if(cot==2){
			rect = cot2;
		} 
		if(cot==3){
			rect = cot3;
		} 
		if(cot==4){
			rect = cot4;
		} 
		if(cot==5){
			rect = cot5;
		} 
		return rect;
	}
	public RectTransform getrectBorder(int cot){
		if(cot==1){
			rect = c1;
		} 
		if(cot==2){
			rect = c2;
		} 
		if(cot==3){
			rect = c3;
		} 
		if(cot==4){
			rect = c4;
		} 
		if(cot==5){
			rect = c5;
		} 
		return rect;
	}
	public RectTransform getRectransform(int id){
		
		if(id ==0){
			return bonus;
		}
		else if(id==2){
			return wild;
		}
		else if(id==1){
			return scatter;
			//			rectTransform =  Resources.Load ("prefabs/scatter", typeof(RectTransform))as RectTransform ;
		}
		else if(id==3){
			return crocodile;
			//			rectTransform =  Resources.Load ("prefabs/crocodile", typeof(RectTransform))as RectTransform ;
		}
		else if(id==4){
			return frog;
			//			rectTransform =  Resources.Load ("prefabs/frog", typeof(RectTransform))as RectTransform ;
		}
		else if(id==5){
			return koala;
			//			rectTransform =  Resources.Load ("prefabs/koala", typeof(RectTransform))as RectTransform ;
		}
		else if(id==6){
			return ostrick;
			//			rectTransform =  Resources.Load ("prefabs/ostrick", typeof(RectTransform))as RectTransform ;
		}
		else if(id==7){
			return parrots;
			//			rectTransform =  Resources.Load ("prefabs/parrots", typeof(RectTransform))as RectTransform ;
		}
		else if(id==8){
			return pelican;
			//			rectTransform =  Resources.Load ("prefabs/pelican", typeof(RectTransform))as RectTransform ;
		}
		else if(id==9){
			return platypus;
			//			rectTransform =  Resources.Load ("prefabs/platypus", typeof(RectTransform))as RectTransform ;
		}
		
		return null;
	}
	public void sendSpin(int numberRow, int bet  ){
		var data = new JSONClass();
		data ["evt"] = "slotstart";
		data ["R"].AsInt = numberRow;
		data ["U"].AsInt = bet;
		GameApplication.cubeia.sendService(data);
	}
	public void sendSpin2(){
		for(int i=1;i<20;i++){
		var data = new JSONClass();
		data ["evt"] = "slotstart";
		data ["R"].AsInt = 9;
		data ["U"].AsInt = 1;
		GameApplication.cubeia.sendService(data);
		}
	}
	public void up_lines(){
		Linesdown.GetComponent<Button>().interactable = true;
		if(numberRow>=1&&numberRow<9){
			numberRow = int.Parse (Lines.GetComponent<Text>().text);
			numberRow += 1;
			Lines.GetComponent<Text> ().text = numberRow.ToString ();
			showChooseLine(numberRow);
		}
		if(numberRow==9){
			Linesup.GetComponent<Button>().interactable = false;
		}
	}
	public void down_lines(){
		Linesup.GetComponent<Button>().interactable = true;
		if (numberRow > 1 && numberRow <= 9) {
			numberRow = int.Parse (Lines.GetComponent<Text> ().text);
			numberRow -= 1;
			Lines.GetComponent<Text> ().text = numberRow.ToString ();
			showChooseLine(numberRow);
		}
		if(numberRow == 1){
			Linesdown.GetComponent<Button>().interactable = false;
		}
	}
	public void upBet(){
		Betdown.GetComponent<Button> ().interactable = true;
		bet = int.Parse (Bet.GetComponent<Text> ().text);
		if (bet < 10) {
			bet += 1;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		} else 
		if(bet>=10 && bet<30){
			bet +=5;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		} else
		if(bet>=30 && bet<50){
			bet +=10;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		}
		if(bet==50){
			Betup.GetComponent<Button>().interactable = false;
		} 
		
	}
	public void downBet(){
		Betup.GetComponent<Button>().interactable = true;
		bet = int.Parse (Bet.GetComponent<Text> ().text);
		if(bet==1){
			Betdown.GetComponent<Button>().interactable = false;
		} 

		if (bet <= 10&&bet>1) {
			bet -= 1;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		} else 
		if(bet>10 && bet<=30){
			bet -=5;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		} else
		if(bet>30 && bet<=50){
			bet -=10;
			Bet.GetComponent<Text> ().text = bet.ToString ();
		}
	}
	public void showChooseLine(int numLine){
		isClick = true;
		foreach (RectTransform b in ListLineshow) {
			if (b != null) {
				Destroy (b.gameObject);
			}
		}
		foreach (RectTransform line in Resources.LoadAll("prefabs/gameslot/line/" ,typeof(RectTransform))) {
			for (int i=1; i<=numLine; i++) {
				if (line.name == i.ToString ()) {
					RectTransform a = Instantiate (line);
					a.SetParent (Lline);
					a.anchoredPosition = line.anchoredPosition;
					a.localScale = line.localScale;
					a.GetComponent<Image> ().enabled = true;
					a.GetComponent<Blinking> ().enabled = false;
					ListLineshow [i] = a;
				}
			}
		}
	}
	public void showSetting(){
		LeanTween.init(1600);
		if (setting_on == false) {
			Setting.gameObject.SetActive (true);
			LeanTween.moveLocalX (Setting.gameObject, 622, 0.7f);
			setting_on = true;
		} else {
			LeanTween.moveLocalX (Setting.gameObject, 1289, 0.7f);
			setting_on = false;
		}
	}
	public void showbntSpin(){
		Spin.gameObject.SetActive (true);
		bnt_auto.gameObject.SetActive (true);
	}
	public void onbntAuto(){
		numberAuto.gameObject.SetActive (true);
	}
	public void offbntAuto(){
		numberAuto.gameObject.SetActive (false);
	}
	public void showbntStop(){
		bnt_auto.gameObject.SetActive (false);
	}
	public void sendFinishMiniGame(){
		var data = new JSONClass();
		data ["evt"] = "slotminifinish";
		GameApplication.cubeia.sendService(data);
	}
}
