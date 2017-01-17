using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class BinhFunctionComponent
{
	
	//Binh_CardValues bc;
	public GameObject
		btnSoBai, btnXepBai, btnDoiChi;
	public GameObject textBinh, binhTime,pnlBinhTime;
	public float TIME_MAX = 90;
	public float TIME_CURRENT = 90;
	public bool IS_COUNT_DOWN = false;
	
	// Use this for initialization
	public void showBinhFunc ()
	{
		if (btnSoBai != null) {
			btnSoBai.SetActive (true);
			setText (btnSoBai, Strings.instance.gameplay_binh_sobai);
		}
		if (btnXepBai != null)
			btnXepBai.SetActive (true);
		if (btnDoiChi != null)
			btnDoiChi.SetActive (true);

		if (textBinh != null) {
			textBinh.SetActive (true);
			setTextBinh ("");
		}
		if (binhTime != null)
			binhTime.SetActive (true);
		if (pnlBinhTime != null)
			pnlBinhTime.SetActive (true);
		IS_COUNT_DOWN = true;
	}
	
	public void showBinhTime (int t)
	{
		binhTime.SetActive (true);
		pnlBinhTime.SetActive (true);
		IS_COUNT_DOWN = true;
		TIME_CURRENT = t;
	}
	
	public void hideBinhFunc ()
	{
		if (btnSoBai != null)
			btnSoBai.SetActive (false);
		if (btnXepBai != null)
			btnXepBai.SetActive (false);
		if (btnDoiChi != null)
			btnDoiChi.SetActive (false);
		/*if (textBinh != null)
						textBinh.SetActive (false);*/
		if (binhTime != null)
			binhTime.SetActive (false);
		if (pnlBinhTime != null)
			pnlBinhTime.SetActive (false);
		TIME_CURRENT = TIME_MAX;
		IS_COUNT_DOWN = false;
		
		setTextBinh ("");
	}
	
	public BinhFunctionComponent ()
	{
		if (btnSoBai == null) {
			btnSoBai = GameObject.Find ("btnSoBai");
			setText (btnSoBai, Strings.instance.gameplay_binh_sobai);
		}
		if (btnXepBai == null) {
			btnXepBai = GameObject.Find ("btnXepBai");
			setText (btnXepBai, Strings.instance.gameplay_binh_xepbai);
		}
		if (btnDoiChi == null) {
			btnDoiChi = GameObject.Find ("btnDoiChi");
			setText (btnDoiChi, Strings.instance.gameplay_binh_doichi);
		}
		if (textBinh == null) {
			textBinh = GameObject.Find ("textBinh");
			textBinh.GetComponent<Text> ().text = "";
		}
		if (binhTime == null) {
			binhTime = GameObject.Find ("binhTime");
			binhTime.GetComponent<Text> ().text = "";
		}
		if (pnlBinhTime == null) {
			pnlBinhTime = GameObject.Find ("pnl_binhTime");
			//pnl.GetComponent<Text> ().text = "";
		}
		//this.gameObject.SetActive (false);
	}
	
	public void setTextBinh (string s)
	{
		if (textBinh != null) {
			textBinh.GetComponent<Text> ().text = s;
		}
	}
	
	public string getTextBinh ()
	{
		if (textBinh != null) {
			return textBinh.GetComponent<Text> ().text;
		} else
			return "";
	}
	
	public void showBinhTime ()
	{
//		Image img = pnlBinhTime.GetComponent<Image>();
//		img.fillAmount = TIME_CURRENT/90;

		//Debug.Log (TIME_CURRENT);
		if (binhTime != null) {
			Text t = binhTime.GetComponent<Text> ();
			if (t != null) {
				if (IS_COUNT_DOWN && TIME_CURRENT >= 0) {

					TIME_CURRENT -= Time.deltaTime;
//					img.fillAmount = TIME_CURRENT/90;
					t.text = "" + ((int)TIME_CURRENT);
				} else
					t.text = "";
				
			}								
		}
	}
	
	public void setText (GameObject go, string s)
	{
		if (go != null) {
			Text text = go.GetComponentInChildren <Text> ();
			if (text != null)
				text.text = s;
		}
	}
	
	public string getText (GameObject go)
	{
		if (go != null) {
			Text text = go.GetComponentInChildren <Text> ();
			if (text != null)
				return text.text;
			else
				return "";
		} else
			return "";
	}
	
	public bool checkSoBaiBtn ()
	{//Kiem tra nut so bai con hieu luc hay khong
		if (btnSoBai != null) {
			if (getText (btnSoBai).Equals (Strings.instance.gameplay_binh_sobai))
				return true;
			else
				return false;
		} else
			return false;
	}

	public void sortListCards (List<Card> cards)
	{//Sắp xếp các quân bài từng chi
		Card[] chi1 = new Card[5];
		Card[] chi2 = new Card[5];
		Card[] chi3 = new Card[5];
		List<int> numbersValue = getNumValue(cards);
		List<int> valueTuqui = new List<int> ();
		List<int> valueXam = new List<int> ();
		List<int> valueDoi = new List<int> ();
		int tuqui=0, xamco=0, doi=0;
		for(int i=0; i<numbersValue.Count; i++){
			if(numbersValue[i]==4){
				tuqui++;
				valueTuqui.Add(i);
			}
			if(numbersValue[i]==3){
				xamco++;
				valueXam.Add(i);
			}
			if(numbersValue[i]==2){
				doi++;
				valueDoi.Add(i);
			}
		}
//		Debug.LogError (" Co "+ tuqui + " tu qui "+ xamco+" xam co " + doi + " doi" );
	}
	public List<int> getNumSuit (List<Card> cards)
	{//Đếm số lượng mỗi chất trong danh sách cây bài
		List<int> numbersSuit = new List<int> ();
		int co=0, ro=0, bich=0, tep=0;
		for(int i =0; i<cards.Count; i++){
			switch(cards[i].S){
			case 1:
				bich+=1;
				break;
			case 2:
				tep+=1;
				break;
			case 3:
				ro+=1;
				break;
			case 4:
				co+=1;
				break;
				
			}
		}
		numbersSuit.Add (bich);
		numbersSuit.Add (tep);
		numbersSuit.Add (ro);
		numbersSuit.Add (co);
		return numbersSuit;
	}
	public List<int> getNumValue (List<Card> cards){
		List<int> numbersValue = new List<int> ();
		for (int i=0; i<13; i++) {
			numbersValue.Add(0);
		}
		for(int i=0; i<cards.Count; i++){
			switch(cards[i].N){
			case 3:
				numbersValue[1]+=1;
				break;
			case 4:
				numbersValue[2]+=1;
				break;
			case 5:
				numbersValue[3]+=1;
				break;
			case 6:
				numbersValue[4]+=1;
				break;
			case 7:
				numbersValue[5]+=1;
				break;
			case 8:
				numbersValue[6]+=1;
				break;
			case 9:
				numbersValue[7]+=1;
				break;
			case 10:
				numbersValue[8]+=1;
				break;
			case 11:
				numbersValue[9]+=1;
				break;
			case 12:
				numbersValue[10]+=1;
				break;
			case 13:
				numbersValue[11]+=1;
				break;
			case 14:
				numbersValue[12]+=1;
				break;
			case 15:
				numbersValue[0]+=1;
				break;
			}
		}
		return numbersValue;
	}
	public List<int> getCardInList(List<Card> cards){
		List<int> cardValue = new List<int> ();
		cardValue.Add (cards[0].N);
		bool check =false;
		for(int i=1; i<cards.Count; i++){
			for(int j=0; j<cardValue.Count; j++){
				if(cardValue[j]!=cards[i].N){
					check=true;
				}else{
					check=false;
				}
			}
			if(check==true){
				cardValue.Add(cards[i].N);
			}
		}
		return cardValue;
	}


	// Update is called once per frame
	void Update ()
	{
		
	}
	
		
}
