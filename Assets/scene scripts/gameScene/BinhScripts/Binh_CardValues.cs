using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class Binh_CardValues
{	
	public static List<int> getValueListCard(JSONArray jcards)
	{
		List<int> listV = new List<int>();
		for (int i=0; i<jcards.Count; i++) {
			listV.Add(jcards [i].AsInt);
		}
		return listV;
	}

	public static string debugListCard(List<int> listV)
	{
		string s = "Value : ";
		for (int i=0; i<listV.Count; i++)
			s += listV [i] + " ";
		return s;
	}

	public static List<Card> getValueListChild(List<Card> listCard, int row)
	{ //Gia tri tung la bai trong chi
		List<Card> listChild = new List<Card>();
		if (listCard.Count == 13) {
			if (row == 3) {
				for (int i=0; i<3; i++) {
					listChild.Add(listCard [i]);
				}
			} else if (row == 2) {							
				for (int i=3; i<8; i++) {
					listChild.Add(listCard [i]);
				}
			} else if (row == 1) {
				for (int i=8; i<13; i++) {
					listChild.Add(listCard [i]);
				}
			}
		}
		return listChild;
	}

	public static List<int> getIndexRow(int row)//Thu tu cac cay bai trong chi
	{
		List<int> listValue = new List<int>();
		for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
			Card c = GameApplication.game.thisPlayer.cards [i];
			if (c.indexChi_Binh == row)
				listValue.Add(i);
		}
		return listValue;
	} 

	public static List<int> getValuesRow(int row) //Gia tri chi
	{
		List<int> listValue = new List<int>();
		for (int i=0; i<GameApplication.game.thisPlayer.cards.Count; i++) {
			Card c = GameApplication.game.thisPlayer.cards [i];
			if (c.indexChi_Binh == row)
				listValue.Add(c.encode_binh());
		}
		listValue.Sort(
			delegate(int p1, int p2) {
			if (p1 > p2)
				return 1;
			else if (p1 < p2)
				return -1;
			else
				return 0;
		});
		return listValue;
	}

	//*******************************************Cac truong hop dac biet*********************************************
	static int checkSanhRongDongHoa(List<int> listValue)
	{
		if (listValue.Count < 13)
			return -1;
		else {
			listSort(listValue);
			int a1 = (listValue [0] - 1) / 13;
			int a2 = (listValue [12] - 1) / 13;
			if (a1 == a2)
				return 15;
			else
				return -1;
		}
	}

	static int checkMauBinhSanhRong(List<int> listValue)
	{
		if (listValue.Count < 13)
			return -1;
		else {
			List<int> sodu = listSodu(listValue);
			for (int i=0; i<sodu.Count; i++) {
				if (sodu [i] != (i + 1))
					return -1;
			}
			return 14;
		}
	}

	static int checkMauBinhDongHoa(List<int> listValue)
	{
		if (listValue.Count < 13)
			return -1;
		else {
			listSort(listValue);
			int a1 = listValue [0];
			int a2 = listValue [12];
			if (a2 <= 26)
				return 13; //Mau den
			else { //Mau do
				if (a1 >= 27)
					return 13;
				else
					return -1;
			}
		}
	}

	static int checkMauBinh6Doi(List<int> listValue)//12
	{
		if (listValue.Count < 13)
			return -1;
		else {
			List<int> lSodu = listSodu(listValue);
			int length = lSodu.Count;
			//Debug.Log("List 6 Doi : " + debugListCard(lSodu));
			for (int i=1; i<length-1; i++) {
				bool b1 = (lSodu [i] == lSodu [i - 1]);
				bool b2 = (lSodu [i] == lSodu [i + 1]);
				if (b1 && b2)
					return -1; //Ton tai bo 3 
			}

			int mark = 0;
			int count = 0;
			for (int i=0; i<length; i++) {
				if (lSodu [i] > mark) {
					mark = lSodu [i];
					count++;
				}
			}

			if (count == 7)
				return 12;
			else
				return -1;
		}
	}

	static int checkMauBinh3Thung()
	{
		if (GameApplication.game.thisPlayer.cards.Count < 13)
			return -1;
		else {
			List<Card> chi1 = new List<Card>();
			List<Card> chi2 = new List<Card>();
			List<Card> chi3 = new List<Card>();
			for(int i=0;i<3;i++){
				chi1.Add(GameApplication.game.thisPlayer.cards[i]);
			}
			for(int i=3;i<8;i++){
				chi2.Add(GameApplication.game.thisPlayer.cards[i]);
			}
			for(int i=8;i<13;i++){
				chi3.Add(GameApplication.game.thisPlayer.cards[i]);
			}
			if(checkThung(chi2)==0||checkThung(chi3)==0){
				return -1;
			}else{
				if(chi1[0].S==chi1[1].S&&chi1[0].S==chi1[2].S){
					return 11;
				}else{
					return -1;
				}
			}
		}

	}

	static int checkMauBinh3Sanh(List<int> listValue)
	{
		if (listValue.Count < 13)
			return -1;
		else {
			List<Card> listCard = new List<Card> ();
			for (int i=0; i<listValue.Count; i++) {
				listCard.Add (Card.decode_binh (listValue [i]));
			}
			List<Card> chi1 = new List<Card> ();
			List<Card> chi2 = new List<Card> ();
			List<Card> chi3 = new List<Card> ();
			chi1 = Binh_CardValues.getValueListChild (listCard, 3);
			chi2 = Binh_CardValues.getValueListChild (listCard, 2);
			chi3 = Binh_CardValues.getValueListChild (listCard, 1);
			if (checkSanh (chi2) == 0 || checkSanh (chi3) == 0) {
				return -1;
			} else {
				chi1.Sort(delegate(Card x,Card y) {
					return x.N-y.N;
				});
				if(chi1[0].N==12&&chi1[1].N==13&&chi1[2].N==14){
					return 10;
				}else if(chi1[0].N==2&&chi1[1].N==3&&chi1[2].N==14){
					return 10;
				}else if(chi1[0].N+1==chi1[1].N&&chi1[1].N+1==chi1[2].N){
					return 10;
				}else{
					return -1;
				}
			}
		}
			//return -1;
		}
		
	public static int getMarkMauBinh(List<int> listValue){
		int mark = 0;
		if (checkMauBinh3Sanh (listValue) == 10) {
			mark=10;
		}
		if (checkMauBinh3Thung () == 11) {
			mark=11;
		}
		if (checkMauBinh6Doi (listValue) == 12) {
			mark=12;
		}
		if (checkMauBinhDongHoa (listValue) == 13) {
			mark=13;
		}
		if (checkMauBinhSanhRong (listValue) == 14) {
			mark=14;
		}
		if (checkSanhRongDongHoa (listValue) == 15) {
			mark=15;
		}
		return mark;
	}
	//***************************************************************************************************************
	
	static int checkThungPhaSanh(List<int> listValue)
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			if ((listValue [0] - 1) / 13 != (listValue [length - 1] - 1) / 13) {
				//Debug.Log ("AAA : " + ((listValue [0] - 1) / 13) + " / " + (listValue [length - 1] / 13));
				return -2;
			}//Khac chat
								
						else { //Dong chat							
				if (listValue [length - 1] % 13 == 0) { //Co quan A
					//Thùng phá sảnh thượng
					bool cond1 = (listValue [length - 2] % 13 == 12);
					bool cond2 = (listValue [length - 3] % 13 == 11);
					bool cond3 = (listValue [length - 4] % 13 == 10);
					bool cond4 = (listValue [length - 5] % 13 == 9);
					bool cond_up = cond1 && cond2 && cond3 && cond4;
					
					//Thùng phá sảnh hạ
					bool cond5 = (listValue [length - 2] % 13 == 4);
					bool cond6 = (listValue [length - 3] % 13 == 3);
					bool cond7 = (listValue [length - 4] % 13 == 2);
					bool cond8 = (listValue [length - 5] % 13 == 1);
					bool cond_down = cond5 && cond6 && cond7 && cond8;
					
					if (cond_up)
						return 14;
					else if (cond_down)
						return 13;
					else
						return -3;
				} else { //Khong co quan A
					int d1 = listValue [length - 5] % 13;
					int d2 = listValue [length - 4] % 13;
					int d3 = listValue [length - 3] % 13;
					int d4 = listValue [length - 2] % 13;
					int d5 = listValue [length - 1] % 13;
					
					if (d2 - d1 == 1 && d3 - d2 == 1 && d4 - d3 == 1 && d5 - d4 == 1)
						return d5;
					else
						return -4;
				}
			}
		}
	}
	
	static int checkTuQuy(List<int> listValue)
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			List<int> listSodu = new List<int>();
			for (int i=0; i<length; i++) {
				if (listValue [i] % 13 != 0)
					listSodu.Add(listValue [i] % 13);
				else
					listSodu.Add(13);
			}
								
			listSodu.Sort(
				delegate(int p1, int p2) {
				if (p1 > p2)
					return 1;
				else if (p1 < p2)
					return -1;
				else
					return 0;
			});
			
			bool cond1 = (listSodu [length - 1] == listSodu [length - 2]);
			bool cond2 = (listSodu [length - 2] == listSodu [length - 3]);
			bool cond3 = (listSodu [length - 3] == listSodu [length - 4]);
			bool cond4 = (listSodu [length - 4] == listSodu [length - 5]);
			
			bool cond11 = cond1 && cond2 && cond3;
			bool cond12 = cond2 && cond3 && cond4;
			if (cond11)
				return listSodu [length - 1];
			else if (cond12)
				return listSodu [length - 5];
			else
				return -1;
		}
	}

	static int checkCuLu(List<int> listValue) //1 bo ba + 1 doi
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			List<int> listSodu = new List<int>();
			for (int i=0; i<length; i++) {
				if (listValue [i] % 13 != 0)
					listSodu.Add(listValue [i] % 13);
				else
					listSodu.Add(13);
			}
			listSodu.Sort(
				delegate(int p1, int p2) {
				if (p1 > p2)
					return 1;
				else if (p1 < p2)
					return -1;
				else
					return 0;
			});

			/*string tmp = "cu lu : ";
						for (int i=0; i<listSodu.Count; i++)
								tmp += listSodu [i] + " ";
						Debug.Log (tmp);*/

			bool cond1 = (listSodu [length - 1] == listSodu [length - 2]);
			bool cond2 = (listSodu [length - 2] == listSodu [length - 3]);
			bool cond3 = (listSodu [length - 3] == listSodu [length - 4]);
			bool cond4 = (listSodu [length - 4] == listSodu [length - 5]);
			
			bool cond11 = cond1 && cond2 && cond4;
			bool cond12 = cond1 && cond3 && cond4;
			//return cond11 || cond12;
			if (cond11) {
				//Debug.Log ("Cond 11");
				return listSodu [length - 1];
			} else if (cond12) {
				//Debug.Log ("Cond 12");
				return listSodu [length - 5];
			} else
				return -1;
		}
	}

	static int checkThung(List<int> listValue)
	{ //dong chat
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			if ((listValue [0] - 1) / 13 != (listValue [length - 1] - 1) / 13) //Khac chat
				return -1;
			else {
				int value = listValue [length - 1] % 13;
				if (value == 0)
					return 13;
				else
					return value;
			}
						
		}
	}

	static int checkSanh(List<int> listValue)
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			List<int> listSodu = new List<int>();
			for (int i=0; i<length; i++) {
				if (listValue [i] % 13 != 0)
					listSodu.Add(listValue [i] % 13);
				else
					listSodu.Add(13);
			}
			listSodu.Sort(
				           delegate(int p1, int p2) {
				if (p1 > p2)
					return 1;
				else if (p1 < p2)
					return -1;
				else
					return 0;
			});

			bool cond1 = (listSodu [length - 2] == (listSodu [length - 3] + 1));
			bool cond2 = (listSodu [length - 3] == (listSodu [length - 4] + 1));
			bool cond3 = (listSodu [length - 4] == (listSodu [length - 5] + 1));

			if (listSodu [length - 1] == 13) { //Co A								
				if ((listSodu [length - 5] == 9)) { //quan dau tien la 10
					if (cond1 && cond2 && cond3) {
						return 14;
					} else
						return -1;
				} else if ((listSodu [length - 5] == 1)) { //quan dau tien la 2
					if (cond1 && cond2 && cond3) {
						return 13;
					} else
						return -1;
				} else
					return -1;
			} else {
				bool cond5 = (listSodu [length - 1] == (listSodu [length - 2] + 1));
				if (cond1 && cond2 && cond3 && cond5) {
					return listSodu [length - 1];
				} else
					return -1;
			}
		}
	}

	static int checkSamCo(List<int> listValue) //Bo 3
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
				
		if (length >= 3) {
			List<int> listSodu = new List<int>();
			for (int i=0; i<length; i++) {
				if (listValue [i] % 13 != 0)
					listSodu.Add(listValue [i] % 13);
				else
					listSodu.Add(13);
			}
			listSodu.Sort(
				delegate(int p1, int p2) {
				if (p1 > p2)
					return 1;
				else if (p1 < p2)
					return -1;
				else
					return 0;
			});
			
			bool cond1 = (listSodu [length - 1] == listSodu [length - 2]);
			bool cond2 = (listSodu [length - 2] == listSodu [length - 3]);
			
			if (length < 5) {//Chi 3
				if (cond1 && cond2)
					return listSodu [length - 1];
				else
					return -1;
			} else { //Chi 5
				bool cond3 = (listSodu [length - 3] == listSodu [length - 4]);
				bool cond4 = (listSodu [length - 4] == listSodu [length - 5]);
				
				bool cond11 = cond3 && cond4;
				bool cond12 = cond2 && cond3;
				bool cond13 = cond1 && cond2;
				//return cond11 || cond12 || cond13;
				if (cond11) {
					return listSodu [length - 5];
				} else if (cond12) {
					return listSodu [length - 3];
				} else if (cond13) {
					return listSodu [length - 1];
				} else
					return -1;
			}
		} else {
			return -1;
		}
	}

	static int checkThu(List<int> listValue) //2 doi
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		if (length < 5)
			return -1;
		else {
			List<int> listSodu = new List<int>();
			for (int i=0; i<length; i++) {
				if (listValue [i] % 13 != 0)
					listSodu.Add(listValue [i] % 13);
				else
					listSodu.Add(13);
			}
			listSodu.Sort(
				           delegate(int p1, int p2) {
				if (p1 > p2)
					return 1;
				else if (p1 < p2)
					return -1;
				else
					return 0;
			});

			bool cond1 = (listSodu [length - 1] == listSodu [length - 2]);
			bool cond2 = (listSodu [length - 2] == listSodu [length - 3]);
			bool cond3 = (listSodu [length - 3] == listSodu [length - 4]);
			bool cond4 = (listSodu [length - 4] == listSodu [length - 5]);

			//return ((cond1 && cond3) || (cond1 && cond4) || (cond2 && cond4));
			if (cond1 && cond3) {
				return Mathf.Max(listSodu [length - 1], listSodu [length - 3]);
			} else if (cond1 && cond4) {
				return Mathf.Max(listSodu [length - 1], listSodu [length - 4]);
			} else if (cond2 && cond4) {
				return Mathf.Max(listSodu [length - 2], listSodu [length - 4]);
			} else
				return -1;
		}
	}

	static int checkDoi(List<int> listValue)
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		List<int> listSodu = new List<int>();
		for (int i=0; i<length; i++) {
			if (listValue [i] % 13 != 0)
				listSodu.Add(listValue [i] % 13);
			else
				listSodu.Add(13);
		}
		listSodu.Sort(
			        delegate(int p1, int p2) {
			if (p1 > p2)
				return 1;
			else if (p1 < p2)
				return -1;
			else
				return 0;
		});
		for (int i=0; i<length-1; i++) {
			if (listSodu [i] == listSodu [i + 1])
				return listSodu [i];
		}
		return -1;
	}

	static int getMauValue(List<int> listValue)
	{
		//List<int> listValue = getValuesRow (row);
		int length = listValue.Count;
		List<int> listSodu = new List<int>();
		for (int i=0; i<length; i++) {
			if (listValue [i] % 13 != 0)
				listSodu.Add(listValue [i] % 13);
			else
				listSodu.Add(13);
		}
		listSodu.Sort(
			       delegate(int p1, int p2) {
			if (p1 > p2)
				return 1;
			else if (p1 < p2)
				return -1;
			else
				return 0;
		});
		return listSodu [length - 1];
	}

	public static ChiValue chiValue(List<int> listValue) //Gia tri cua chi
	{
		//= getValuesRow (row);
		listSort(listValue);
		
		int thungphasanh = checkThungPhaSanh(listValue);
		if (thungphasanh >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_thungphasanh, 9, thungphasanh);
		
		int tuquy = checkTuQuy(listValue);
		if (tuquy >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_tuquy, 8, tuquy);
		
		int culu = checkCuLu(listValue);
		if (culu >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_culu, 7, culu);
		
		int thung = checkThung(listValue);
		if (thung >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_thung, 6, thung);
		
		int sanh = checkSanh(listValue);
		if (sanh >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_sanh, 5, sanh);
		
		int xam = checkSamCo(listValue);
		if (xam >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_xam, 4, xam);
		
		int thu = checkThu(listValue);
		if (thu >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_thu, 3, thu);
		
		int doi = checkDoi(listValue);
		if (doi >= 0)
			return new ChiValue(Strings.instance.gameplay_binh_doi, 2, doi);
		
		return new ChiValue(Strings.instance.gameplay_binh_mau, 1, getMauValue(listValue));
	}

	public static ChiValue chiValue(int row) //Gia tri cua chi
	{
		List<int> listValue = getValuesRow(row);

		return chiValue(listValue);
	}

	public static bool checkBinhLung()
	{
		ChiValue cv3 = chiValue(3);
		ChiValue cv2 = chiValue(2);
		ChiValue cv1 = chiValue(1);
		if (cv3.compare(cv2) <= 0 && cv2.compare(cv1) <= 0) {
			return false;
		} else {
			return true;
		}
	}

	//*************************************************So Chi**************************************************
	static void listSort(List<int> list)
	{
		list.Sort(
			delegate(int p1, int p2) {
			if (p1 > p2)
				return 1;
			else if (p1 < p2)
				return -1;
			else
				return 0;
		});
	}

	static List<int> listSodu(List<int> listValue)
	{
		List<int> lSodu = new List<int>();
		for (int i=0; i<listValue.Count; i++) {
			int c = listValue [i] % 13;
			if (c == 0)
				c = 13;
			lSodu.Add(c);
		}
		listSort(lSodu);
		return lSodu;
	}

	static int compareList(List<int> listValue1, List<int> listValue2)
	{ //So sanh 2 list da sap xep
		int length1 = listValue1.Count;
		int length2 = listValue2.Count;
		int length = Mathf.Min(length1, length2);
		for (int i=length-1; i>=0; i--) {
			int c1 = listValue1 [i];
			int c2 = listValue2 [i];
			if (c1 > c2)
				return 1;
			else if (c1 < c2)
				return -1;
		}
		return 0;
	}

	public static int compareChi1(List<Card> chi1, List<Card> chi2)
	{
//		ChiValue cv1 = chiValue(chi1);
//		ChiValue cv2 = chiValue(chi2);
//		int c = cv1.compare(cv2);
//		if (c != 0)
//			return c;
//		else {
//			List<int> listSodu1 = listSodu(chi1);
//			List<int> listSodu2 = listSodu(chi2);
//			return compareList(listSodu1, listSodu2);
//		}
		Debug.Log ("cuoc ====> " + GameApplication.game.stake);
		int mark = sosanhChi1 (chi1, chi2);
		if (mark < 0) {
			return sosanhChi1 (chi1, chi2) * getSpecialCard (chi2, 3)*GameApplication.game.stake;
		} 
		if (mark > 0) {
			return sosanhChi1 (chi1, chi2) * getSpecialCard (chi1, 3)*GameApplication.game.stake;
		}
		if (mark == 0) {
			return 0;
		}
		return 0;
	}
	public static int compareChi2(List<Card> chi1, List<Card> chi2)
	{
		//		ChiValue cv1 = chiValue(chi1);
		//		ChiValue cv2 = chiValue(chi2);
		//		int c = cv1.compare(cv2);
		//		if (c != 0)
		//			return c;
		//		else {
		//			List<int> listSodu1 = listSodu(chi1);
		//			List<int> listSodu2 = listSodu(chi2);
		//			return compareList(listSodu1, listSodu2);
		//		}
		int mark = sosanhChi3vsChi2 (chi1, chi2);
		if (mark > 0) {
			return sosanhChi3vsChi2 (chi1, chi2) * getSpecialCard (chi1, 2)*GameApplication.game.stake;
		} 
		if (mark < 0) {
			return sosanhChi3vsChi2 (chi1, chi2) * getSpecialCard (chi2, 2)*GameApplication.game.stake;
		}
		if (mark == 0) {
			return 0;
		}
		return 0;
	}

	public static int compareChi3(List<Card> chi1, List<Card> chi2)
	{
		//		ChiValue cv1 = chiValue(chi1);
		//		ChiValue cv2 = chiValue(chi2);
		//		int c = cv1.compare(cv2);
		//		if (c != 0)
		//			return c;
		//		else {
		//			List<int> listSodu1 = listSodu(chi1);
		//			List<int> listSodu2 = listSodu(chi2);
		//			return compareList(listSodu1, listSodu2);
		//		}
		int mark = sosanhChi3vsChi2 (chi1, chi2);
		if (mark > 0) {
			return sosanhChi3vsChi2 (chi1, chi2) * getSpecialCard (chi1, 1)*GameApplication.game.stake;
		} 
		if (mark < 0) {
			return sosanhChi3vsChi2 (chi1, chi2) * getSpecialCard (chi2, 1)*GameApplication.game.stake;
		}
		if (mark == 0) {
			return 0;
		}
		return 0;
	}

	//********************************************************************************
	public static string resultCard(List<int> listValue) //Thong bao hien tren man hinh
	{
		//int k = checkMauBinh3Thung(listValue);
		//Debug.Log("MB 3 thung : " + k);

		if (checkSanhRongDongHoa(listValue) > 0)
			return Strings.instance.gameplay_binh_mb_sanhrongdonghoa;
		if (checkMauBinhSanhRong(listValue) > 0)
			return Strings.instance.gameplay_binh_mb_sanhrong;
		if (checkMauBinhDongHoa(listValue) > 0)
			return Strings.instance.gameplay_binh_mb_donghoa;
		if (checkMauBinh6Doi(listValue) > 0)
			return Strings.instance.gameplay_binh_mb_saudoi;

		int mb3thung = checkMauBinh3Thung();
		if (mb3thung > 0)
			return Strings.instance.gameplay_binh_mb_bathung;
		else if (mb3thung == -4)
			return Strings.instance.gameplay_binh_binhlung;

		int mb3sanh = checkMauBinh3Sanh(listValue);
		if (mb3sanh > 0)
			return Strings.instance.gameplay_binh_mb_basanh;
		else if (mb3sanh == -1)
			return Strings.instance.gameplay_binh_binhlung;

		ChiValue cv3 = Binh_CardValues.chiValue(3);
		ChiValue cv2 = Binh_CardValues.chiValue(2);
		ChiValue cv1 = Binh_CardValues.chiValue(1);
		
		if (cv3.compare(cv2) <= 0 && cv2.compare(cv1) <= 0) {
			string text = "1." + cv3.name + "\n2." + cv2.name + "\n3." + cv1.name;
			return text;
		} else {
			return Strings.instance.gameplay_binh_binhlung;
		}

	}

	public static List<Card> getTuQuy(List<Card> baitrentay1){
		List<int> listValue = new List<int> ();
		List<Card> baitrentay=new List<Card>( baitrentay1);
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		if (checkTuQuy (baitrentay)==0) {
			return null;
		}
		List<Card> tuquy = new List<Card> ();
		int check = 0;
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if((baitrentay[i].N-baitrentay[j].N)%13==0){
					check++;
				}else{
					break;
				}
			}
			if(check!=3){
				check=0;
			}
			if(check==3){
				tuquy.Add(baitrentay[i]);
				tuquy.Add(baitrentay[i+1]);
				tuquy.Add(baitrentay[i+2]);
				tuquy.Add(baitrentay[i+3]);
				break;
			}
		}
		foreach (Card card in tuquy) {
			baitrentay.Remove(card);
		}
		tuquy.Add (baitrentay [Random.Range (0, 7)]);
		baitrentay.Remove (tuquy [4]);
		foreach(Card card in tuquy){
			baitrentay1.Remove(card);
		}
		if (tuquy.Count == 5) {
			return tuquy;
		}
		return null;
	}

	public static List<Card> getCuLu(List<Card> baitrentay){
//		List<Card> baitrentay=new List<Card>( baitrentay1);
		List<int> listValue = new List<int> ();
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		if (checkCuLu(baitrentay)==0) {
			return null;
		}

		List<Card> culu = new List<Card> ();
		int check = 0;
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if((baitrentay[i].N-baitrentay[j].N)%13==0){
					check++;
				}else{
					break;
				}
			}
			if(check!=2){
				check=0;
			}
			if(check==2){
				culu.Add(baitrentay[i]);
				culu.Add(baitrentay[i+1]);
				culu.Add(baitrentay[i+2]);
				check=0;
				break;
			}
		}
		foreach (Card card in culu) {
			baitrentay.Remove(card);
		}
		for (int i=0; i<baitrentay.Count; i++) {
			if(baitrentay[i].N==baitrentay[i+1].N){
				culu.Add(baitrentay[i]);
				culu.Add(baitrentay[i+1]);
				baitrentay.RemoveAt (i);
				baitrentay.RemoveAt (i);
				break;
			}
		}
		if (culu.Count == 5) {
			return culu;
		}
		return null;
	}

	public static List<Card> getThung(List<Card> baitrentay1){
		if(baitrentay1.Count==5){
			List<Card> baitrentay=new List<Card>( baitrentay1);
			List<int> listValue = new List<int> ();
			for (int i=0; i<baitrentay.Count; i++) {
				Card c = baitrentay[i];
				listValue.Add (c.encode_binh ());
			}
			if(checkThung(baitrentay)==0){
				return null;
			}
			List<Card> thung = new List<Card> ();
			int check = 0;
			baitrentay.Sort (delegate(Card x, Card y) {
				if(x.S==y.S){
					return x.N-y.N;
				}
				return x.S-y.S;
			});
			
			for(int i=0;i<baitrentay.Count-1;i++){
				for(int j=i+1;j<baitrentay.Count;j++){
					if((baitrentay[i].S-baitrentay[j].S)==0){
						check++;
					}else{
						break;
					}
				}
				if(check!=4){
					check=0;
				}
				if(check==4){
					thung.Add(baitrentay[i]);
					thung.Add(baitrentay[i+1]);
					thung.Add(baitrentay[i+2]);
					thung.Add(baitrentay[i+3]);
					thung.Add(baitrentay[i+4]);
					break;
				}
			}
			foreach (Card card in thung) {
				baitrentay.Remove(card);
			}
			if (thung.Count == 5) {
				return thung;
			}
		}else{
//			List<Card> baitrentay=new List<Card>( baitrentay1);
			List<int> listValue = new List<int> ();
			for (int i=0; i<baitrentay1.Count; i++) {
				Card c = baitrentay1[i];
				listValue.Add (c.encode_binh ());
			}
			if(checkThung(baitrentay1)==0){
				return null;
			}
			List<Card> thung = new List<Card> ();
			int check = 0;
			baitrentay1.Sort (delegate(Card x, Card y) {
				if(x.S==y.S){
					return x.N-y.N;
				}
				return x.S-y.S;
			});
			
			for(int i=0;i<baitrentay1.Count-1;i++){
				for(int j=i+1;j<baitrentay1.Count;j++){
					if((baitrentay1[i].S-baitrentay1[j].S)==0){
						check++;
					}else{
						break;
					}
				}
				if(check!=4){
					check=0;
				}
				if(check==4){
					thung.Add(baitrentay1[i]);
					thung.Add(baitrentay1[i+1]);
					thung.Add(baitrentay1[i+2]);
					thung.Add(baitrentay1[i+3]);
					thung.Add(baitrentay1[i+4]);
					break;
				}
			}
			foreach (Card card in thung) {
				baitrentay1.Remove(card);
			}
			if (thung.Count == 5) {
				return thung;
			}
		}

		return null;
	}

	public static List<Card> getSanh(List<Card> baitrentay){
//		List<Card> baitrentay=new List<Card>( baitrentay1);
		List<int> listValue = new List<int> ();
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		List<Card> sanh = new List<Card> ();
		int check = 0;
		if(checkSanh(baitrentay)==0){
			return null;
		}
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		
		for(int i=0;i<baitrentay.Count-1;i++){
			if(baitrentay[i+1].N-baitrentay[i].N>1){
				check=0;
				sanh.Clear();
			}else{
				check=check+baitrentay[i+1].N-baitrentay[i].N;
				if(baitrentay[i+1].N-baitrentay[i].N==1){
					sanh.Add(baitrentay[i]);
					if(i==baitrentay.Count-2){
						check++;
					}
				}
			}
			if(check==3){
				if(sanh[2].N==4 && indexA(baitrentay)>0){
					sanh.Add(baitrentay[i+1]);
					sanh.Add(baitrentay[indexA(baitrentay)]);
					break;
				}
			}
			if(check==4){
				if(sanh[0].N==10 && indexA(baitrentay)>0){
					sanh.Add(baitrentay[indexA(baitrentay)]);
					check++;
					break;
				}else{
					sanh.Add(baitrentay[i+1]);
					check++;
					break;
				}
			}
			if(check==5){
				sanh.Add(baitrentay[i+1]);
				break;
			}
		}
		if (sanh.Count == 5) {
			foreach (Card card in sanh) {
				baitrentay.Remove(card);
			}
			return sanh;
		}
		return null;
	}

	public static List<Card> getSam(List<Card> baitrentay){
//		List<Card> baitrentay=new List<Card>( baitrentay1);
		List<int> listValue = new List<int> ();
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		if (checkSam(baitrentay)==0) {
			return null;
		}
		List<Card> sam = new List<Card> ();
		int check = 0;
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if(baitrentay[i].N==baitrentay[j].N){
					check++;
				}else{
					break;
				}
			}
			if(check!=2){
				check=0;
			}
			if(check==2){
				sam.Add(baitrentay[i]);
				sam.Add(baitrentay[i+1]);
				sam.Add(baitrentay[i+2]);
				break;
			}
		}
		foreach (Card card in sam) {
			baitrentay.Remove(card);
		}
		if(sam.Count==0){
			return null;
		}
		for(int i=0;i<baitrentay.Count;i++){
			if(baitrentay[i].N!=sam[0].N){
				sam.Add(baitrentay[i]);
				baitrentay.RemoveAt(i);
				break;
			}
		}
		for(int i=0;i<baitrentay.Count;i++){
			if(baitrentay[i].N!=sam[0].N&& baitrentay[i].N!=sam[3].N){
				sam.Add(baitrentay[i]);
				baitrentay.RemoveAt(i);
				break;
			}
		}
		if (sam.Count == 5) {
			return sam;
		}
		return null;
	}

	public static List<Card> getThu(List<Card> baitrentay){
		if (baitrentay.Count == 5) {
			List<Card> baitrentay1= new List<Card>(baitrentay);
			List<Card> thu = new List<Card> ();
			int check = 0;
			baitrentay1.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			if(checkThu (baitrentay1)==0){
				return null;
			}
			for(int i=baitrentay1.Count-1;i>=1;i--){
				for(int j=i-1;j>=0;j--){
					if(baitrentay1[i].N==baitrentay1[j].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					thu.Add(baitrentay1[i]);
					thu.Add(baitrentay1[i-1]);
					check=0;
					break;
				}
			}
			foreach (Card card in thu) {
				baitrentay1.Remove(card);
			}
			for(int i=0;i<baitrentay1.Count-1;i++){
				for(int j=i+1;j<baitrentay1.Count;j++){
					if(baitrentay1[i].N==baitrentay1[j].N&&baitrentay1[i].N!=thu[0].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					thu.Add(baitrentay1[i]);
					thu.Add(baitrentay1[i+1]);
					baitrentay1.RemoveAt(i);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			for(int i=0;i<baitrentay1.Count;i++){
				if(baitrentay1[i].N!=thu[0].N&& baitrentay1[i].N!=thu[2].N){
					thu.Add(baitrentay1[i]);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			if(thu.Count==5){
				return thu;
			}
		} else {
			List<Card> thu = new List<Card> ();
			int check = 0;
			if(checkThu (baitrentay)==0){
				return null;
			}
			baitrentay.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			
			for(int i=baitrentay.Count-1;i>=1;i--){
				for(int j=i-1;j>=0;j--){
					if(baitrentay[i].N==baitrentay[j].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					thu.Add(baitrentay[i]);
					thu.Add(baitrentay[i-1]);
					check=0;
					break;
				}
			}
			foreach (Card card in thu) {
				baitrentay.Remove(card);
			}
			for(int i=0;i<baitrentay.Count-1;i++){
				for(int j=i+1;j<baitrentay.Count;j++){
					if(baitrentay[i].N==baitrentay[j].N&&baitrentay[i].N!=thu[0].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					thu.Add(baitrentay[i]);
					thu.Add(baitrentay[i+1]);
					break;
				}
			}
			baitrentay.Remove(thu[2]);
			baitrentay.Remove(thu[3]);
			for(int i=0;i<baitrentay.Count;i++){
				if(baitrentay[i].N!=thu[0].N&& baitrentay[i].N!=thu[2].N){
					thu.Add(baitrentay[i]);
					baitrentay.RemoveAt(i);
					break;
				}
			}
			if(thu.Count==5){
				return thu;
			}
		}

		return null;
	}

	public static List<Card> getDoi(List<Card> baitrentay){
		if (baitrentay.Count == 5) {
			List<Card> baitrentay1= new List<Card>(baitrentay);
			List<int> listValue = new List<int> ();
			for (int i=0; i<baitrentay1.Count; i++) {
				Card c = baitrentay1[i];
				listValue.Add (c.encode_binh ());
			}
			if (checkDoi (baitrentay1)==0) {
				return null;
			}
			List<Card> doi = new List<Card> ();
			int check = 0;
			baitrentay1.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			
			for(int i=0;i<baitrentay1.Count-1;i++){
				for(int j=i+1;j<baitrentay1.Count;j++){
					if(baitrentay1[i].N==baitrentay1[j].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					doi.Add(baitrentay1[i]);
					doi.Add(baitrentay1[i+1]);
					break;
				}
			}
			foreach (Card card in doi) {
				baitrentay1.Remove(card);
			}
			for(int i=0;i<baitrentay1.Count;i++){
				if(baitrentay1[i].N!=doi[0].N){
					doi.Add(baitrentay1[i]);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			for(int i=0;i<baitrentay1.Count;i++){
				if(baitrentay1[i].N!=doi[0].N&& baitrentay1[i].N!=doi[2].N){
					doi.Add(baitrentay1[i]);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			for(int i=0;i<baitrentay1.Count;i++){
				if(baitrentay1[i].N!=doi[0].N&& baitrentay1[i].N!=doi[3].N&& baitrentay1[i].N!=doi[2].N){
					doi.Add(baitrentay1[i]);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			if(doi.Count==5){
				return doi;
			}
			return null;
		}else if (baitrentay.Count == 3) {
			List<Card> baitrentay1= new List<Card>(baitrentay);
			if (checkDoi (baitrentay1)==0) {
				return null;
			}
			List<Card> doi = new List<Card> ();
			int check = 0;
			baitrentay1.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			
			for(int i=0;i<baitrentay1.Count-1;i++){
				for(int j=i+1;j<baitrentay1.Count;j++){
					if(baitrentay1[i].N==baitrentay1[j].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					doi.Add(baitrentay1[i]);
					doi.Add(baitrentay1[i+1]);
					break;
				}
			}
			foreach (Card card in doi) {
				baitrentay1.Remove(card);
			}
			for(int i=0;i<baitrentay1.Count;i++){
				if(baitrentay1[i].N!=doi[0].N){
					doi.Add(baitrentay1[i]);
					baitrentay1.RemoveAt(i);
					break;
				}
			}
			if(doi.Count==3){
				return doi;
			}
			return null;
		} else {
			if (checkDoi (baitrentay)==0) {
				return null;
			}
			List<Card> doi = new List<Card> ();
			int check = 0;
			baitrentay.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			
			for(int i=0;i<baitrentay.Count-1;i++){
				for(int j=i+1;j<baitrentay.Count;j++){
					if(baitrentay[i].N==baitrentay[j].N){
						check++;
					}else{
						break;
					}
				}
				if(check!=1){
					check=0;
				}
				if(check==1){
					doi.Add(baitrentay[i]);
					doi.Add(baitrentay[i+1]);
					break;
				}
			}
			foreach (Card card in doi) {
				baitrentay.Remove(card);
			}
			for(int i=0;i<baitrentay.Count;i++){
				if(baitrentay[i].N!=doi[0].N){
					doi.Add(baitrentay[i]);
					baitrentay.RemoveAt(i);
					break;
				}
			}
			for(int i=0;i<baitrentay.Count;i++){
				if(baitrentay[i].N!=doi[0].N&& baitrentay[i].N!=doi[2].N){
					doi.Add(baitrentay[i]);
					baitrentay.RemoveAt(i);
					break;
				}
			}
			for(int i=0;i<baitrentay.Count;i++){
				if(baitrentay[i].N!=doi[0].N&& baitrentay[i].N!=doi[3].N&& baitrentay[i].N!=doi[2].N){
					doi.Add(baitrentay[i]);
					baitrentay.RemoveAt(i);
					break;
				}
			}
			
			if(doi.Count==5){
				return doi;
			}
			return null;
		}
	}

	public static List<Card> getMau(List<Card> baitrentay){

		List<Card> mau = new List<Card> ();
		int check = 0;
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		
		mau.Add(baitrentay[0]);
		for(int i=1;i<baitrentay.Count;i++){
			if(baitrentay[i].N!=mau[0].N){
				mau.Add(baitrentay[i]);
				break;
			}
		}
		for(int i=2;i<baitrentay.Count;i++){
			if(baitrentay[i].N!=mau[1].N&& baitrentay[i].N!=mau[0].N){
				mau.Add(baitrentay[i]);
				break;
			}
		}
		foreach (Card card in mau) {
			baitrentay.Remove(card);
		}
		return mau;
	}

	public static int indexA(List<Card> baitrentay){
		int index = 0;
		for (int i=0; i<baitrentay.Count; i++) {
			if(baitrentay[i].N==14){
				index=i;
				break;
			}	
		}
		return index;
	}

	public static int checkDoi(List<Card> baitrentay){
		List<int> listValue = new List<int> ();
		int sum = 0;
		List<Card> baitrentay1 = new List<Card> (baitrentay);
		baitrentay1.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		for (int i=0; i<baitrentay1.Count-1; i++) {
			if(baitrentay1[i].N==baitrentay1[i+1].N){
				sum=1*68+baitrentay1[i].N;
				baitrentay1.RemoveAt(i);
				baitrentay1.RemoveAt(i);
				break;
			}
		}
//		sum = sum + baitrentay1 [baitrentay1.Count - 1].N;
		return sum;
	}

	public static int checkThu(List<Card> baitrentay){
		List<int> listValue = new List<int> ();
		int sum = 0;
		List<Card> baiThu= new List<Card>();
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		
		List<Card> baitrentay1 = new List<Card> (baitrentay);
		if (baitrentay1.Count == 3) {
			return 0;
		}
		baitrentay1.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});

		int check = 0;
		for(int i=0;i<baitrentay1.Count-1;i++){
			for(int j=i+1;j<baitrentay1.Count;j++){
				if(baitrentay1[i].N==baitrentay1[j].N){
					check++;
				}else{
					break;
				}
			}
			if(check!=1){
				check=0;
			}
			if(check==1){
				baiThu.Add(baitrentay1[i]);
				baiThu.Add(baitrentay1[i+1]);
				check=0;
				break;
			}
		}
		foreach (Card card in baiThu) {
			baitrentay1.Remove(card);		
		}

		for(int i=0;i<baitrentay1.Count-1;i++){
			for(int j=i+1;j<baitrentay1.Count;j++){
				if(baitrentay1[i].N==baitrentay1[j].N&&baitrentay1[i].N!=baiThu[0].N){
					check++;
				}else{
					break;
				}
			}
			if(check!=1){
				check=0;
			}
			if(check==1){
				baiThu.Add(baitrentay1[i]);
				baiThu.Add(baitrentay1[i+1]);
				break;
			}
		}
		if (baiThu.Count == 4) {
			sum=2*68 + baiThu[3].N;
		}
		return sum;
	}

	public static int checkSam(List<Card> baitrentay){
		List<int> listValue = new List<int> ();
		int check = 0;
		int sum = 0;
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
//		if (checkSamCo(listValue)<0) {
//			return sum;
//		}
		List<Card> baitrentay1 = new List<Card> (baitrentay);
		baitrentay1.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});

		for (int i=0; i<baitrentay1.Count-1; i++) {
			for (int j=i+1; j<baitrentay1.Count; j++) {
				if(baitrentay1[i].N==baitrentay1[j].N){
					check++;
				}else{
					break;
				}
			}
			if(check!=2){
				check=0;
			}
			if(check==2){
				sum=3*68 + baitrentay1[i].N;
				break;
			}
		}
		if (check == 2) {
			return sum;
		}
		return sum;
	}

	public static int checkSanh(List<Card> baitrentay1){
		List<int> listValue = new List<int> ();
		int check = 0;
		int sum = 0;
		List<Card> baitrentay = new List<Card> (baitrentay1);

		if (baitrentay1.Count == 3) {
			return 0;
		}
		List<Card> sanh = new List<Card> ();
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		if (baitrentay.Count == 5) {
			for(int i=0;i<baitrentay.Count-1;i++){
				if(baitrentay[i+1].N-baitrentay[i].N>1){
					check=0;
					sanh.Clear();
				}else{
					check=check+baitrentay[i+1].N-baitrentay[i].N;
					if(baitrentay[i+1].N-baitrentay[i].N==1){
						sanh.Add(baitrentay[i]);
						if(i==baitrentay.Count-2){
							sanh.Add(baitrentay[i+1]);
							check++;
						}
					}
				}
				if(check==3){
					if(sanh[2].N==4 && indexA(baitrentay)>0){
						sanh.Add(baitrentay[i+1]);
						sanh.Add(baitrentay[indexA(baitrentay)]);
						check=5;
						break;
					}
				}
				if(check==4){
					if(sanh[3].N==5 && indexA(baitrentay)>0){
						sanh.Add(baitrentay[indexA(baitrentay)]);
						check++;
						break;
					}
				}
				if(check==5){
					break;
				}
			}
			
			if (check == 5) {
				if (indexA (baitrentay) > 0) {
					if (sanh [0].N == 10) {
						sum = 4 * 68 + 14;
					}else if (sanh [0].N == 2) {
						sum = 4 * 68 + 5;
					}else{
						sum = 4 * 68 + sanh[4].N;
					}
				} else {
					sum = 4 * 68 + sanh[4].N;
				}
			}
		} else {
			for(int i=0;i<baitrentay.Count-1;i++){
				if(baitrentay[i+1].N-baitrentay[i].N>1){
					check=0;
					sanh.Clear();
				}else{
					check=check+baitrentay[i+1].N-baitrentay[i].N;
					if(baitrentay[i+1].N-baitrentay[i].N==1){
						sanh.Add(baitrentay[i]);
						if(i==baitrentay.Count-2){
							sanh.Add(baitrentay[i+1]);
							check++;
						}
					}
				}
				if(check==3){
					if(sanh[2].N==4 && indexA(baitrentay)>0){
						sanh.Add(baitrentay[i+1]);
						sanh.Add(baitrentay[indexA(baitrentay)]);
						check=5;
						break;
					}
				}
				if(check==4){
					if(sanh[3].N==5 && indexA(baitrentay)>0){
						sanh.Add(baitrentay[indexA(baitrentay)]);
						check++;
						break;
					}else{
						sanh.Add(baitrentay[i+1]);
						check++;
						break;
					}
				}
				if(check==5){
					break;
				}
			}
			
			if (check == 5) {
				if (indexA (baitrentay) > 0) {
					if (sanh [0].N == 10) {
						sum = 4 * 68 + 14;
					}else if (sanh [0].N == 2) {
						sum = 4 * 68 + 5;
					}else{
						sum = 4 * 68 + sanh[4].N;
					}
				} else {
					sum = 4 * 68 + sanh[4].N;
				}
			}
		}


		return sum;
	}

	public static int checkThung(List<Card> baitrentay1){
		List<int> listValue = new List<int> ();
		int check = 0;
		int sum = 0;
		List<Card> baitrentay = new List<Card> (baitrentay1);
		if (baitrentay1.Count == 3) {
			return 0;
		}
		List<Card> thung = new List<Card> ();
		baitrentay.Sort (delegate(Card x, Card y) {
			if(x.S==y.S){
				return x.N-y.N;
			}
			return x.S-y.S;
		});
		
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if((baitrentay[i].S-baitrentay[j].S)==0){
					check++;
				}else{
					break;
				}
			}
			if(check!=4){
				check=0;
			}
			if(check==4){
				thung.Add(baitrentay[i]);
				thung.Add(baitrentay[i+1]);
				thung.Add(baitrentay[i+2]);
				thung.Add(baitrentay[i+3]);
				thung.Add(baitrentay[i+4]);
				break;
			}
		}
		if (thung.Count == 5) {
			return sum = 5 * 68 + baitrentay[4].N;;
		}
		return sum;
	}

	public static int checkCuLu(List<Card> baitrentay1){
		List<int> listValue = new List<int> ();
		List<Card> baitrentay = new List<Card> (baitrentay1);
		int check = 0;
		int sum = 0;
		if (baitrentay1.Count == 3) {
			return 0;
		}

		List<Card> culu = new List<Card> ();
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if((baitrentay[i].N==baitrentay[j].N)){
					check++;
				}else{
					break;
				}
			}
			if(check!=2){
				check=0;
			}
			if(check==2){
				culu.Add(baitrentay[i]);
				culu.Add(baitrentay[i+1]);
				culu.Add(baitrentay[i+2]);
				check=0;
				break;
			}
		}
		foreach (Card card in culu) {
			baitrentay.Remove(card);
		}
		for (int i=0; i<baitrentay.Count-1; i++) {
			if(baitrentay[i].N==baitrentay[i+1].N){
				culu.Add(baitrentay[i]);
				culu.Add(baitrentay[i+1]);
				baitrentay.RemoveAt (i);
				baitrentay.RemoveAt (i);
				break;
			}
		}
		
		if (culu.Count == 5) {
			return sum = 6 * 68 + culu[0].N;
		}
		return sum;
	}

	public static int checkTuQuy(List<Card> baitrentay1){
		List<Card> baitrentay = new List<Card> (baitrentay1);
		List<int> listValue = new List<int> ();
		int check = 0;
		int sum = 0;
		if (baitrentay1.Count == 3) {
			return 0;
		}
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}
		List<Card> tuquy = new List<Card> ();
		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		for(int i=0;i<baitrentay.Count-1;i++){
			for(int j=i+1;j<baitrentay.Count;j++){
				if((baitrentay[i].N-baitrentay[j].N)%13==0){
					check++;
				}else{
					break;
				}
			}
			if(check!=3){
				check=0;
			}
			if(check==3){
				tuquy.Add(baitrentay[i]);
				tuquy.Add(baitrentay[i+1]);
				tuquy.Add(baitrentay[i+2]);
				tuquy.Add(baitrentay[i+3]);
				break;
			}
		}
		foreach (Card card in tuquy) {
			baitrentay.Remove(card);
		}
		if (tuquy.Count == 4) {
			tuquy.Add (baitrentay [Random.Range (0, baitrentay.Count-1)]);
		}
		if (tuquy.Count == 5) {
			return sum = 7 * 68 + baitrentay [0].N;
		}
		return sum;
	}

	public static int checkTPS(List<Card> baitrentay1){
		List<Card> baitrentay = new List<Card> (baitrentay1);
		List<int> listValue = new List<int> ();
		int check = 0;
		int sum = 0;
		if (baitrentay1.Count == 3) {
			return 0;
		}
		for (int i=0; i<baitrentay.Count; i++) {
			Card c = baitrentay[i];
			listValue.Add (c.encode_binh ());
		}

		baitrentay.Sort (delegate(Card x, Card y) {
			return x.N-y.N;
		});
		if (checkThung (baitrentay) > 0 && checkSanh (baitrentay) > 0) {
			sum = 8 * 68 + baitrentay [4].N;
		}

		return sum;
	}

	public static int getMark(List<Card> baitrentay){
		int sum = 0;
		if (checkTPS (baitrentay) > 0) {
			sum = checkTPS (baitrentay);
			return sum;
		} else if (checkTuQuy (baitrentay) > 0) {
			sum = checkTuQuy(baitrentay);
			return sum;
		}else if (checkCuLu (baitrentay) > 0) {
			sum = checkCuLu(baitrentay);
			return sum;
		}else if (checkThung (baitrentay) > 0) {
			sum = checkThung(baitrentay);
			return sum;
		}else if (checkSanh (baitrentay) > 0) {
			sum = checkSanh(baitrentay);
			return sum;
		}else if (checkSam (baitrentay) > 0) {
			sum = checkSam(baitrentay);
			return sum;
		}else if (checkThu (baitrentay) > 0) {
			sum = checkThu(baitrentay);
			return sum;
		}else if (checkDoi (baitrentay) > 0) {
			sum = checkDoi(baitrentay);
			return sum;
		}
		return sum;
	}


	public static int sosanhChi1(List<Card> chi2,List<Card> chi1){
		int result = 0; // 1 : thang , 0 : hoa , -1 : thua
		int mark1 = getMark (chi1);
		int mark2 = getMark (chi2);
		if (mark1 > mark2) {
			return -1;
		}
		if (mark1 < mark2) {
			return 1;
		}
		if (mark1 == mark2 && mark1 == 0) {
			List<Card> temp1= new List<Card>(chi1);
			temp1.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			List<Card> temp2= new List<Card>(chi2);
			temp2.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			if(temp1[2].N>temp2[2].N){
				return -1;
			}
			if(temp1[2].N<temp2[2].N){
				return 1;
			}
			if(temp1[2].N==temp2[2].N){
				if(temp1[1].N>temp2[1].N){
					return -1;
				}
				if(temp1[1].N<temp2[1].N){
					return 1;
				}
				if(temp1[1].N==temp2[1].N){
					if(temp1[0].N>temp2[0].N){
						return -1;
					}
					if(temp1[0].N<temp2[0].N){
						return 1;
					}
					if(temp1[0].N==temp2[0].N){
						return 0;
					}
				}
			}
		}

		if (mark1 == mark2 && mark1 > 0) {
			List<Card> temp1 = new List<Card>();
			List<Card> temp2 = new List<Card>();
			temp1=getDoi(chi1);
			temp2=getDoi(chi2);
			if(temp1[2].N<temp2[2].N){
				return 1;
			}
			if(temp1[2].N==temp2[2].N){
				return 0;
			}
			if(temp1[2].N>temp2[2].N){
				return -1;
			}
		}
		return result;
	}

	public static int sosanhChi2vsChi1(List<Card> chi2,List<Card> chi1){
		int result = 0; // 1 : thang , 0 : hoa , -1 : thua
		int mark1 = getMark (chi2);
		int mark2 = getMark (chi1);
		if (mark1 > mark2) {
			return 1;
		}
		if (mark1 < mark2) {
			return -1;
		}
		if (mark1 == mark2 && mark1 == 0) {
			List<Card> temp1 = new List<Card>(chi1);
			List<Card> temp2 = new List<Card>(chi2);
			temp2.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			temp1.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			if(temp2[4].N>temp1[2].N){
				return 1;
			}
			if(temp2[4].N<temp1[2].N){
				return -1;
			}
			if(temp2[4].N==temp1[2].N){
				if(temp2[3].N>temp1[1].N){
					return 1;
				}
				if(temp2[3].N<temp1[1].N){
					return -1;
				}
				if(temp2[3].N==temp1[1].N){
					if(temp2[2].N>temp1[0].N){
						return 1;
					}
					if(temp2[2].N<temp1[0].N){
						return -1;
					}
					if(temp2[2].N==temp1[0].N){
						return 1;
					}
				}
			}
		}

		if (mark1 == mark2 && mark1 > 3*68) {
			return 1;
		}
		if (mark1 == mark2 && mark1 > 1*68) {
			List<Card> temp1 = new List<Card>(chi1);
			List<Card> temp2 = new List<Card>(chi2);
			temp1=getDoi(temp1);
			temp2=getDoi(temp2);
			if(temp2[4].N>temp1[2].N){
				return 1;
			}
			if(temp2[4].N<temp1[2].N){
				return -1;
			}
			if(temp2[4].N==temp1[2].N){
				if(temp2[3].N>temp1[1].N){
					return 1;
				}
				if(temp2[3].N<temp1[1].N){
					return -1;
				}
				if(temp2[3].N==temp1[1].N){
					if(temp2[2].N>temp1[0].N){
						return 1;
					}
					if(temp2[2].N<temp1[0].N){
						return -1;
					}
					if(temp2[2].N==temp1[0].N){
						return 0;
					}
				}
			}
		}
		return result;
	}

	public static int sosanhChi3vsChi2(List<Card> chi3,List<Card> chi2){
		int result = 0; // 1 : thang , 0 : hoa , -1 : thua
		int mark1 = getMark (chi3);
		int mark2 = getMark (chi2);
		if (mark1 > mark2) {
			return 1;
		}
		if (mark1 < mark2) {
			return -1;
		}

		if (mark1 == mark2 && mark1>2*68&&mark1<3*68) {
			List<Card> temp3= getThu(chi3);
			List<Card> temp2= getThu(chi2);
			temp3.RemoveAt(0);
			temp3.RemoveAt(0);
			temp2.RemoveAt(0);
			temp2.RemoveAt(0);
			return sosanhChi1(temp3,temp2);
		}

		if (mark1 == mark2 && mark1>1*68&&mark1<2*68) {
			List<Card> temp3= getDoi(chi3);
			List<Card> temp2= getDoi(chi2);
			temp3.RemoveAt(0);
			temp3.RemoveAt(0);
			temp2.RemoveAt(0);
			temp2.RemoveAt(0);
			temp2.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			temp3.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			return sosanhChi1(temp3,temp2);
		}

		if (mark1 == mark2 && mark1 == 0) {
			List<Card> temp3= new List<Card>(chi3);
			List<Card> temp2= new List<Card>(chi2);
			temp2.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			temp3.Sort (delegate(Card x, Card y) {
				return x.N-y.N;
			});
			if(temp3[4].N>temp2[4].N){
				return 1;
			}
			if(temp3[4].N<temp2[4].N){
				return -1;
			}
			if(temp3[4].N==temp2[4].N){
				if(temp3[3].N>temp2[3].N){
					return 1;
				}
				if(temp3[3].N<temp2[3].N){
					return -1;
				}
				if(temp3[2].N==temp2[2].N){
					if(temp3[2].N>temp2[2].N){
						return 1;
					}
					if(temp3[2].N<temp2[2].N){
						return -1;
					}
					if(temp3[1].N==temp2[1].N){
						if(temp3[1].N>temp2[1].N){
							return 1;
						}
						if(temp3[1].N<temp2[1].N){
							return -1;
						}
						if(temp3[1].N==temp2[1].N){
							if(temp3[0].N>temp2[0].N){
								return 1;
							}
							if(temp3[0].N<temp2[0].N){
								return -1;
							}
							if(temp3[0].N==temp2[0].N){
								return 0;
							}
						}
					}
				}
			}
		}

		if (mark1 == mark2 && mark1 > 5*68 && mark1 < 6*68) {
			List<Card> temp3= new List<Card>();
			List<Card> temp2= new List<Card>();
			temp3=getThung(chi3);
			temp2=getThung(chi2);
			if(temp3[3].N>temp2[3].N){
				return 1;
			}
			if(temp3[3].N<temp2[3].N){
				return -1;
			}
			if(temp3[3].N==temp2[3].N){
				if(temp3[2].N>temp2[2].N){
					return 1;
				}
				if(temp3[2].N<temp2[2].N){
					return -1;
				}
				if(temp3[2].N==temp2[2].N){
					if(chi3[1].N>temp2[1].N){
						return 1;
					}
					if(temp3[1].N<temp2[1].N){
						return -1;
					}
					if(temp3[1].N==temp2[1].N){
						if(temp3[0].N>temp2[0].N){
							return 1;
						}
						if(temp3[0].N<temp2[0].N){
							return -1;
						}
						if(temp3[0].N==temp2[0].N){
							return 0;
						}
					}
				}
			}
		}
		return result;
	}

	public static int getSpecialCard(List<Card> listCard,int row){
		int mark2 = Binh_CardValues.getMark (listCard);
		int index = 1;
		string txtChi2 = "";
		if (row == 3) {
			if(mark2>3*68){
				index= 3;
			}
		}
		if (row == 2) {
			if(mark2>6*68){
				index= 2;
			}
			if(mark2>7*68){
				index= 7;
			}
			if(mark2>8*68){
				index= 9;
			}
		}
		if (row == 1) {
			if(mark2>7*68){
				index= 4;
			}
			if(mark2>8*68){
				index= 5;
			}
		}
		return index;
	}
}

public class DataCard
{
	public string name; //Tennguoi choi
	public List<Card> chi1, chi2, chi3;

	public DataCard(string name, JSONArray jcards)
	{
		this.name = name;
		List<Card> listCard = new List<Card>();
		for (int i=0; i<jcards.Count; i++) {
			listCard.Add(Card.decode_binh(jcards [i].AsInt));
		}
		chi3 = Binh_CardValues.getValueListChild(listCard, 3);
		chi2 = Binh_CardValues.getValueListChild(listCard, 2);
		chi1 = Binh_CardValues.getValueListChild(listCard, 1);
	}

	public static int compare(DataCard d1, DataCard d2, int cIndex)
	{
		int point = 0;
		if (cIndex == 3) {
			point= Binh_CardValues.compareChi1(d1.chi3, d2.chi3);
		} else if (cIndex == 2)
			point= Binh_CardValues.compareChi2(d1.chi2, d2.chi2);
		else if (cIndex == 1)
			point= Binh_CardValues.compareChi3(d1.chi1, d2.chi1);

		return point;
	}


}

public class ChiValue
{
	public string name;
	public int value1, value2; 

	public ChiValue(string name, int value1, int value2)
	{
		this.name = name;
		this.value1 = value1;
		this.value2 = value2;
	}

	public int compare(ChiValue cv)
	{
		if (value1 > cv.value1)
			return 1;
		else if (value1 < cv.value1)
			return -1;
		else {
			if (value2 > cv.value2)
				return 1;
			else if (value2 < cv.value2)
				return -1;
			else
				return 0;
		}
	}

}
