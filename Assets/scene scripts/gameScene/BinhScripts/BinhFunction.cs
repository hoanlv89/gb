using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;
using UnityEngine.UI;

class BinhFunction : MonoBehaviour
{
	List<Card> listC = new List<Card> ();

	public RectTransform sobai;
	public RectTransform doichi;
	public RectTransform sepbai;

	public Sprite s1_dautruong;
	public Sprite s2_dautruong;
	public Sprite s3_dautruong;
	public Sprite s_52fun;

	void Start(){
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			sobai.GetComponent<Image> ().sprite = s1_dautruong;
			doichi.GetComponent<Image> ().sprite = s2_dautruong;
			sepbai.GetComponent<Image> ().sprite = s3_dautruong;
		}
		if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			sobai.GetComponent<Image> ().sprite = s_52fun;
			doichi.GetComponent<Image> ().sprite = s_52fun;
			sepbai.GetComponent<Image> ().sprite = s_52fun;
		}
	}

	public void Shuffle(List<int> list)  
	{  
		int n = list.Count;  
		while (n > 1) {  
			n--;  
			int k = Random.Range(0,n);  
			int value = list[k];  
			list[k] = list[n];  
			list[n] = value;  
		}  
	}

	public void funcSoBai ()
	{
		if (((GameSceneBinh)GameApplication.gameScene).binhComp.getText (((GameSceneBinh)GameApplication.gameScene).binhComp.btnSoBai).Equals (Strings.instance.gameplay_binh_sobai)) { //So bai
			if (Card.checkCards_Binh ()) {
				//Card.sortCards_Binh ();
				int length = GameApplication.game.thisPlayer.cards.Count;
				listC.Clear ();
				for (int i=0; i<length; i++) {
					listC.Add (GameApplication.game.thisPlayer.cards [i]);
				}
//				Card.sortCards_Binh (listC);
				
				JSONArray result = new JSONArray ();
								
				for (int i=0; i<length; i++) {
					//Card c = GameApplication.game.thisPlayer.cards [i];
					Card c = listC [i];
					result [-1].AsInt = c.encode_binh ();									
				}
				
				var json = new JSONClass ();
				json ["evt"] = "fsc";
				json ["Arr"] = result;
				GameApplication.cubeia.sendDataGame (json);
			}
		} else { //So lai
			var json = new JSONClass ();
			json ["evt"] = "ufsc";
			GameApplication.cubeia.sendDataGame (json);
		}
				
	}
	
	public void funcXepBai ()
	{
		if (Card.checkCards_Binh ()) {
			int length = GameApplication.game.thisPlayer.cards.Count;
			//while (Binh_CardValues.checkBinhLung()) {
			int index1 = Random.Range (0, length);
			int index2 = Random.Range (0, length);
			int index3 = Random.Range (0, length);
			int index4 = Random.Range (0, length);
			if (index1 != index2) {
				if (Binh_CardValues.checkBinhLung()) {
					Card.swapCardPos_Binh (index1, index2);
					//Debug.LogError ("Xep Bai");
				}
			}
		
			//}
			((GameSceneBinh)GameApplication.gameScene).updateTextBinh ();
		}
				
	}

	public void funcDoiChi ()
	{
		if (Card.checkCards_Binh ()) {
			List<int> list1 = Binh_CardValues.getIndexRow (1);
			List<int> list2 = Binh_CardValues.getIndexRow (2);
			for (int i=3; i<8; i++) {
				Card.swapCardPos_Binh (i, i+5);
			}
			foreach(Card card in GameApplication.game.thisPlayer.cards){
				card.addEventTriggerBinh();
				card.rectTransform.SetAsLastSibling();
			}
			((GameSceneBinh)GameApplication.gameScene).updateTextBinh ();
		}
	}

	public void xepbai(){
		List<Card> baitrentay = new List<Card> (GameApplication.game.thisPlayer.cards);
		int count = 0;
		List<Card> chi1 = new List<Card> ();
		List<Card> chi2 = new List<Card> ();
		List<Card> chi3 = new List<Card> ();
		List<Card> chi = new List<Card> ();
		List<int> listRandom = new List<int> ();
		listRandom.Add (0);
		listRandom.Add (1);
		listRandom.Add (2);
		listRandom.Add (3);
		listRandom.Add (4);
		listRandom.Add (5);
		listRandom.Add (6);
		Shuffle (listRandom);

		while (true) {
			chi.Clear();
			if(chi3!=null){
				chi3.Clear();
			}
			int x= listRandom[count];
			count++;
//			x= 1;
			Debug.Log(" count ===> " + count+ "   =====> xx ===> " + x);
			if(x==6){
				chi3=Binh_CardValues.getTuQuy(baitrentay);
			}
			if(x==5){
				chi3=Binh_CardValues.getCuLu(baitrentay);
			}
			if(x==4){
				chi3=Binh_CardValues.getThung(baitrentay);
			}
			if(x==3){
				chi3=Binh_CardValues.getSanh(baitrentay);
			}
			if(x==2){
				chi3=Binh_CardValues.getSam(baitrentay);
			}
			if(x==1){
				chi3=Binh_CardValues.getThu(baitrentay);
			}
			if(x==0){
				chi3=Binh_CardValues.getDoi(baitrentay);
			}
			if(chi3!=null){
				chi1.Clear();
				chi1=Binh_CardValues.getMau(baitrentay);
				chi2.Clear();
				chi2=baitrentay;
//				foreach(Card card in chi3){
//					Debug.Log(" chi3 ==> " + card.N+ "  ===>  " + card.getSuitInVietnamese());
//				}
//				foreach(Card card in chi2){
//					Debug.Log(" chi2 ==> " + card.N+ "  ===>  " + card.getSuitInVietnamese());
//				}
//				foreach(Card card in chi1){
//					Debug.Log(" chi1 ==> " + card.N+ "  ===>  " + card.getSuitInVietnamese());
//				}
				if(Binh_CardValues.sosanhChi2vsChi1(chi2,chi1)>=0 && Binh_CardValues.sosanhChi3vsChi2(chi3,chi2)>=0){
					break;
				}else{
					baitrentay.Clear();
					baitrentay = new List<Card> (GameApplication.game.thisPlayer.cards);
				}
			}
			if(count==7){
				chi1.Clear();
				chi2.Clear();
				if(chi3!=null){
					chi3.Clear();
				}
				break;
			}
		}
		if (chi3 != null) {
			if(chi1.Count>0 && chi2.Count>0 && chi3.Count>0){
				foreach(Card card in chi1){
					chi.Add(card);
				}
				foreach(Card card in chi2){
					chi.Add(card);
				}
				foreach(Card card in chi3){
					chi.Add(card);
				}
				((GameSceneBinh)GameApplication.gameScene).xepbai(chi);
			}
		}
	}
}
