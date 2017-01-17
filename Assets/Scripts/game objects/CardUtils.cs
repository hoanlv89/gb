using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using SimpleJSON;

public abstract class Mask
{
	public abstract List<List<Card>> getCandidateRoots (Card card, List<Card> listSource);

	public abstract int Count {
		get;
	}

//	public static FourOfAKindRoots FourOfAKindRoots {
//		get {
//			return new FourOfAKindRoots();
//		}
//	}
}
//
//public class FourOfAKindRoots: Mask
//{
//	public override List<List<Card>> getCandidateRoots(Card card, List<int> listSource)
//	{
//		int code = card.encode_tienlen();
//		List<List<Card>> candidateRoots = new List<List<Card>>();
//		// check dieu kien tien quyet, neu ko dat tra ve rong
//		if (code + 39 > 52)
//			return candidateRoots;
//
//		// 1
//		List<Card> columnRoot = new List<Card>();
//		columnRoot.Add(card);
//
//		candidateRoots.Add(columnRoot);
//
//		// 2
//		columnRoot = new List<Card>();
//		columnRoot.Add(Card.decode_tienlen(code + 13));
//
//		candidateRoots.Add(columnRoot);
//
//		// 3
//		columnRoot = new List<Card>();
//		columnRoot.Add(Card.decode_tienlen(code + 26));
//
//		candidateRoots.Add(columnRoot);
//
//		// 4
//		columnRoot = new List<Card>();
//		columnRoot.Add(Card.decode_tienlen(code + 39));
//
//		candidateRoots.Add(columnRoot);
//
//		return candidateRoots;
//	}
//
//	public override int Count {
//		get{ return 4; }
//	}
//}
//
//public class ThreeOfAKindRoots: Mask
//{
//	public override List<List<Card>> getCandidateRoots(Card card)
//	{
//		int code = card.encode_tienlen();
//		List<List<Card>> candidateRoots = new List<List<Card>>();
//		// check dieu kien tien quyet, neu ko dat tra ve rong
//		if (code + 26 > 52)
//			return candidateRoots;
//		
//		// 1
//		List<Card> columnRoot = new List<Card>();
//		columnRoot.Add(card);
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 2
//		columnRoot = new List<Card>();
//		columnRoot.Add(Card.decode_tienlen(code + 13));
//		columnRoot.Add(Card.decode_tienlen(code + 26));
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 3
//		columnRoot = new List<Card>();
//		columnRoot.Add(Card.decode_tienlen(code + 26));
//		if (code + 39 <= 52)
//			columnRoot.Add(Card.decode_tienlen(code + 39));
//		
//		candidateRoots.Add(columnRoot);
//		
//		return candidateRoots;
//	}
//	
//	public override int Count {
//		get{ return 3; }
//	}
//}
//
//public class FiveStraightRoots: Mask
//{
//	public override List<List<Card>> getCandidateRoots(Card card)
//	{
//		int n = card.N;
//		List<List<Card>> candidateRoots = new List<List<Card>>();
//		// check dieu kien tien quyet, neu ko dat tra ve rong
//		if (n + 4 > 15)
//			return candidateRoots;
//		
//		// 1
//		List<Card> columnRoot = new List<Card>();
//		columnRoot.Add(card);
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 2
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n + 1, 1));
//		columnRoot.Add(new Card(n + 1, 2));
//		columnRoot.Add(new Card(n + 1, 3));
//		columnRoot.Add(new Card(n + 1, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 3
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n + 2, 1));
//		columnRoot.Add(new Card(n + 2, 2));
//		columnRoot.Add(new Card(n + 2, 3));
//		columnRoot.Add(new Card(n + 2, 4));
//
//		candidateRoots.Add(columnRoot);
//
//		// 4
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n + 3, 1));
//		columnRoot.Add(new Card(n + 3, 2));
//		columnRoot.Add(new Card(n + 3, 3));
//		columnRoot.Add(new Card(n + 3, 4));
//
//		candidateRoots.Add(columnRoot);
//
//		// 5
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n + 4, 1));
//		columnRoot.Add(new Card(n + 4, 2));
//		columnRoot.Add(new Card(n + 4, 3));
//		columnRoot.Add(new Card(n + 4, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		return candidateRoots;
//	}
//	
//	public override int Count {
//		get{ return 5; }
//	}
//}

//public class FiveFlushRoots: Mask
//{
//	public override List<List<Card>> getCandidateRoots(Card card)
//	{
//		int s = card.S;
//		List<List<Card>> candidateRoots = new List<List<Card>>();
//		// check dieu kien tien quyet, neu ko dat tra ve rong
//		if (n + 4 > 15)
//			return candidateRoots;
//		
//		// 1
//		List<Card> columnRoot = new List<Card>();
//		columnRoot.Add(card);
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 2
//		columnRoot = new List<Card>();
////		for(int i = 0; i<
//		columnRoot.Add(new Card(n+1, 1));
//		columnRoot.Add(new Card(n+1, 2));
//		columnRoot.Add(new Card(n+1, 3));
//		columnRoot.Add(new Card(n+1, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 3
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n+2, 1));
//		columnRoot.Add(new Card(n+2, 2));
//		columnRoot.Add(new Card(n+2, 3));
//		columnRoot.Add(new Card(n+2, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 4
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n+3, 1));
//		columnRoot.Add(new Card(n+3, 2));
//		columnRoot.Add(new Card(n+3, 3));
//		columnRoot.Add(new Card(n+3, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		// 5
//		columnRoot = new List<Card>();
//		columnRoot.Add(new Card(n+4, 1));
//		columnRoot.Add(new Card(n+4, 2));
//		columnRoot.Add(new Card(n+4, 3));
//		columnRoot.Add(new Card(n+4, 4));
//		
//		candidateRoots.Add(columnRoot);
//		
//		return candidateRoots;
//	}
//	
//	public override int Count {
//		get{ return 5; }
//	}
//}

public class CardUtils
{
	public enum GroupType
	{
		Single,
		Pair,
		TwoPair,
		ThreeOfAKind,
		FiveStraight,
		FiveFlush,
		FullHouse,
		FourOfAKind,
		FiveFlushStraight,
		// lieng
		BoDoi,
		Lieng,
		Unknown
	}

	public static string getGroupTypeString (GroupType gt)
	{
		switch (gt) {
		case GroupType.Single:
			return Strings.instance.gameplay_group_card_type_single;
		case GroupType.Pair:
			return Strings.instance.gameplay_group_card_type_pair;
		case GroupType.TwoPair:
			return Strings.instance.gameplay_group_card_type_twopair;
		case GroupType.ThreeOfAKind:
			return Strings.instance.gameplay_group_card_type_threeofakind;
		case GroupType.FiveStraight:
			return Strings.instance.gameplay_group_card_type_fivestraight;
		case GroupType.FiveFlush:
			return Strings.instance.gameplay_group_card_type_fiveflush;
		case GroupType.FullHouse:
			return Strings.instance.gameplay_group_card_type_fullhouse;
		case GroupType.FourOfAKind:
			return Strings.instance.gameplay_group_card_type_fourofakind;
		case GroupType.FiveFlushStraight:
			return Strings.instance.gameplay_group_card_type_fiveflushstraight;
		case GroupType.BoDoi:
			return Strings.instance.gameplay_group_card_type_bodoi;
		case GroupType.Lieng:
			return Strings.instance.gameplay_group_card_type_lieng;
		case GroupType.Unknown:
			return Strings.instance.gameplay_group_card_type_unknown;
		default:
			return "";
		}
	}

	// chan
	public static Comparison<CardChan> ComparisionChan = delegate(CardChan x, CardChan y) {

		if (x.N > y.N)
			return 1;
		else if (x.N < y.N)
			return -1;
		else {
			if (x.S > y.S)
				return 1;
			else if (x.S < y.S)
				return -1;
			else
				return 0;
		}
	};

	// ta la
	public static Comparison<Card> ComparisionTala1 = delegate(Card x, Card y) {
		int xN = x.N;
		int yN = y.N;
		if (xN > 13)
			xN -= 13;
		if (yN > 13)
			yN -= 13;
		if (xN > yN || (xN == yN && x.S > y.S))
			return 1;
		else if (x.encode_tala () == y.encode_tala ())
			return 0;
		else
			return -1;
	};
	public static Comparison<Card> ComparisionTala2 = delegate(Card x, Card y) {
		int xN = x.N;
		int yN = y.N;
		if (xN > 13)
			xN -= 13;
		if (yN > 13)
			yN -= 13;
		if (x.S > y.S || (x.S == y.S && xN > yN))
			return 1;
		else if (x.encode_tala () == y.encode_tala ())
			return 0;
		else
			return -1;
	};

	// ta la
	public static Comparison<Card> ComparisionDummy1 = delegate(Card x, Card y) {
		int xN = x.N;
		int yN = y.N;
		int xS = x.S;
		int yS = y.S;
		
		if(xS == 4) xS = 2;
		else if(xS == 2) xS = 3;
		else if(xS == 3) xS = 4;
		
		if(yS == 4) yS = 2;
		else if(yS == 2) yS = 3;
		else if(yS == 3) yS = 4;

		if (xN > 14)
		xN -= 14;
		if (yN > 14)
		yN -= 14;
		if (xN > yN || (xN == yN && xS > yS))
		return 1;
		else if (x.encode_dummy () == y.encode_dummy ())
		return 0;
		else
		return -1;
	};
	public static Comparison<Card> ComparisionDummy2 = delegate(Card x, Card y) {
		int xN = x.N;
		int yN = y.N;
		int xS = x.S;
		int yS = y.S;

		if(xS == 4) xS = 2;
		else if(xS == 2) xS = 3;
		else if(xS == 3) xS = 4;

		if(yS == 4) yS = 2;
		else if(yS == 2) yS = 3;
		else if(yS == 3) yS = 4;

		if (xN > 14)
		xN -= 14;
		if (yN > 14)
		yN -= 14;
		if (xS > yS || (xS == yS && xN > yN))
		return 1;
		else if (x.encode_dummy () == y.encode_dummy ())
		return 0;
		else
		return -1;
	};

	// xi to

	public static Comparison<Card> ComparisionXiTo = delegate(Card x, Card y) {
		if (x.encode_xito () > y.encode_xito ())
			return 1;
		else if (x.encode_xito () == y.encode_xito ())
			return 0;
		else
			return -1;
	};
	public static Comparison<Card> ComparisionLieng = delegate(Card x, Card y) {
		// xep tu 3->4->...->K->A->2
		if (x.N > y.N)
			return 1;
		else if (x.N == y.N)
			return 0;
		else
			return -1;
	};

	public static Comparison<Card> ComparisionTienLen = delegate(Card x, Card y) {
		// xep tu 3->4->...->K->A->2
		//		if (x.N * 4 + x.S > y.N * 4 + y.S)
		if (x.N > y.N)
			return 1;
		if(x.N == y.N) 
			return x.S - y.S;
		else
			return -1;
	};

	public static GroupType getGroupCardType_XiTo (JSONArray list)
	{
		List<Card> clist = new List<Card> ();
		for (int i = 0; i<list.Count; i++) {
			clist.Add (Card.decode_xito (list [i].AsInt));
		}
		return getGroupCardType_XiTo (clist);
	}

	public static GroupType getGroupCardType_XiTo (List<Card> list)
	{
		foreach (Card card in list)
			if (card is UnknownCard)
				return GroupType.Unknown;

		list.Sort (ComparisionXiTo);
		if (hasFiveFlushStraight (list))
			return GroupType.FiveFlushStraight;
		if (hasFourOfAKind (list))
			return GroupType.FourOfAKind;
		if (hasFullHouse (list))
			return GroupType.FullHouse;
		if (hasFiveFlush (list))
			return GroupType.FiveFlush;
		if (hasFiveStraight (list))
			return GroupType.FiveStraight;
		if (hasThreeOfAKind (list))
			return GroupType.ThreeOfAKind;
		if (hasTwoPairs (list))
			return GroupType.TwoPair;
		if (hasPair (list))
			return GroupType.Pair;

		return GroupType.Single;
	}

	public static GroupType getGroupCardType_Lieng (JSONArray list)
	{
		List<Card> clist = new List<Card> ();
		for (int i = 0; i<list.Count; i++) {
			clist.Add (Card.decode_lieng (list [i].AsInt));
		}
		return getGroupCardType_Lieng (clist);
	}

	public static GroupType getGroupCardType_Lieng (List<Card> list)
	{
		foreach (Card card in list)
			if (card is UnknownCard)
				return GroupType.Unknown;

		list.Sort (ComparisionLieng);
		if (hasThreeOfAKind (list))
			return GroupType.ThreeOfAKind;
		if (isLieng (list))
			return GroupType.Lieng;
		if (isBoDoi (list))
			return GroupType.BoDoi;
		
		return GroupType.Single;
	}

	static bool hasFiveFlushStraight (List<Card> list)
	{
		if (hasFiveFlush (list) && hasFiveStraight (list))
			return true;
		return false;
	}

	static bool hasFourOfAKind (List<Card> list)
	{
		list.Sort (delegate(Card x, Card y) {
			if (x.N > y.N || x.N == y.N && x.S > y.S)
				return 1;
			if (x.N == y.N && x.S == y.S)
				return 0;
			return -1;
		});
		// vi list da sort
		if (list.Count < 4)
			return false;
		if (list [0].N == list [1].N &&
			list [1].N == list [2].N &&
			list [2].N == list [3].N)
			return true;

		if (list.Count < 5)
			return false;
		if (list [1].N == list [2].N &&
			list [2].N == list [3].N &&
			list [3].N == list [4].N)
			return true;
		return false;
	}

	static bool hasFullHouse (List<Card> list)
	{
		if (hasThreeOfAKind (list) && hasTwoPairs (list))
			return true;
		return false;
	}

	static bool hasFiveFlush (List<Card> list)
	{
		if (list.Count < 5)
			return false;
		for (int i = 0; i<list.Count-1; i++) {
			if (list [i].S != list [i + 1].S)
				return false;
		}
		return true;
	}

	static bool hasFiveStraight (List<Card> list)
	{
		if (list.Count < 5)
			return false;
		for (int i = 0; i<list.Count-1; i++) {
			if (list [i].N + 1 != list [i + 1].N)
				return false;
		}
		return true;
	}

	static bool hasThreeOfAKind (List<Card> list)
	{
		list.Sort (delegate(Card x, Card y) {
			if (x.N > y.N || x.N == y.N && x.S > y.S)
				return 1;
			if (x.N == y.N && x.S == y.S)
				return 0;
			return -1;
		});
		// vi list da sort
		if (list.Count < 3)
			return false;
		if (list [0].N == list [1].N &&
			list [1].N == list [2].N)
			return true;

		if (list.Count < 4)
			return false;
		if (list [1].N == list [2].N &&
			list [2].N == list [3].N)
			return true;

		if (list.Count < 5)
			return false;
		if (list [2].N == list [3].N &&
			list [3].N == list [4].N)
			return true;
		return false;
	}

	public static bool hasTwoPairs (List<Card> list)
	{
		list.Sort (delegate(Card x, Card y) {
			if (x.N > y.N || x.N == y.N && x.S > y.S)
				return 1;
			if (x.N == y.N && x.S == y.S)
				return 0;
			return -1;
		});
		List<Card> list1 = new List<Card> (list);
		List<Card> list2 = new List<Card> (list);

		if (list.Count == 5) {
			list1.Clear ();
			list2.Clear ();
			list1.Add (list [0]);
			list1.Add (list [1]);
			list1.Add (list [2]);
			list2.Add (list [3]);
			list2.Add (list [4]);
			if (hasPair (list1) && hasPair (list2))
				return true;
			list1.Clear ();
			list2.Clear ();
			list1.Add (list [0]);
			list1.Add (list [1]);
			list2.Add (list [2]);
			list2.Add (list [3]);
			list2.Add (list [4]);
			if (hasPair (list1) && hasPair (list2))
				return true;
		} else if (list.Count == 4) {
			list1.RemoveRange (2, 2);
			list2.RemoveRange (0, 2);
			if (hasPair (list1) && hasPair (list2))
				return true;
		}
		return false;
	}

	static bool hasPair (List<Card> list)
	{
		list.Sort (delegate(Card x, Card y) {
			if (x.N > y.N || x.N == y.N && x.S > y.S)
				return 1;
			if (x.N == y.N && x.S == y.S)
				return 0;
			return -1;
		});
		// vi list da sort
		if (list.Count < 2)
			return false;
		if (list [0].N == list [1].N)
			return true;

		if (list.Count < 3)
			return false;
		if (list [1].N == list [2].N)
			return true;

		if (list.Count < 4)
			return false;
		if (list [2].N == list [3].N)
			return true;

		if (list.Count < 5)
			return false;
		if (list [3].N == list [4].N)
			return true;
		return false;
	}

	static bool isLieng (List<Card> list)
	{
		for (int i = 0; i < list.Count; i++) {
			Debug.Log("_item: " + list[i].getResourceName() + " " +list[i].N);
		}

		bool isLieng = true;
		if (list.Count != 3)
			return false;

		int n1 = list [0].N;
		int n2 = list [1].N;
		int n3 = list [2].N;

		if(n1 == 13 && n2 == 14 && n3 == 15)
			return false;

		if(n1 == 3 && n2 == 14 && n3 == 15)
			return true;

		if(n1 == 3 && n2 == 4 && n3 == 15)
			return true;

		return (n1 + 1 == n2 && n2 + 1 == n3);
	}

	static bool isBoDoi (List<Card> list)
	{
		bool isBoDoi = true;
		for (int i = 0; i<list.Count; i++) {
			isBoDoi &= (list [i].N > 10 && list [i].N < 14);
		}
		return isBoDoi;
	}

	public static bool isStraight (List<Card> cards)
	{
		bool isStraight = true;
		if (cards.Count < 3)
			return false;
		for (int i = 0; i<cards.Count-1; i++) {
			int n1 = cards [i].N;
			int n2 = cards [i + 1].N;
			if (n1 == 15 || n2 == 15)
				return false;
			isStraight &= (n1 + 1 == n2);
		}
		return isStraight;
	}

	public static bool isStraight_Sam (List<Card> cards)
	{
		// sanh 2,3,4 Q,K,A
		List<int> valueList1 = new List<int>();
		// sanh 1,2,3,4
		List<int> valueList2 = new List<int>();
		foreach (Card card in cards) {
			valueList1.Add(card.N == 15 ? 2 : card.N);
			valueList2.Add(card.N == 15 ? 2 : (card.N == 14 ? 1 : card.N));
		}
		if (checkSanh_sam(valueList1)) {
			// // Log.i(TAG, "return: sảnh");
			return true;
		}
		
		if (checkSanh_sam(valueList2)) {
			// // Log.i(TAG, "return: sảnh");
			return true;
		}

		return false;
	}

	private static bool checkSanh_sam(List<int> cards) {
		if(cards.Count<3)
			return false;
		cards.Sort();
		bool isSanh = true;
		int n_start = cards[0];
		for (int i = 1; i < cards.Count; i++) {
			isSanh &= (cards[i] == (n_start + i));
		}
		return isSanh;
	}

	static bool isPairs (List<Card> list)
	{
		if (list.Count != 2)
			return false;
		return list[0].N == list[1].N;
	}

	static bool isThreeOfAKind (List<Card> list)
	{
		if (list.Count != 3)
			return false;
		return (list[0].N == list[1].N) && (list[1].N == list[2].N);
	}
	
	static bool isFourOfAKind (List<Card> list)
	{
		if (list.Count != 4)
			return false;
		return (list[0].N == list[1].N) && (list[1].N == list[2].N) && (list[2].N == list[3].N);
	}
	
	static bool isThreePairsStraight (List<Card> list)
	{
		if (list.Count != 6)
			return false;
		return (list[0].N == list[1].N) && (list[1].N == list[2].N - 1) && (list[1].N == list[3].N - 1) && (list[1].N == list[4].N - 2) && (list[1].N == list[5].N - 2);
	}

	static List<Card> getHigherStraight (List<Card> list, List<Card> myCardsIn, bool sam = false)
	{
		List<Card> myCards = loaiboxamdoivatuquy(myCardsIn);
		myCards.Sort(ComparisionTienLen);
		List<Card> straight = new List<Card>();
		if (myCards.Count < list.Count)
			return straight;
		for (int i = 0; i<myCards.Count-1; i++) 
		{
			if (myCards[i].N < list[0].N)
				continue;
			if (myCards[i].N == list[0].N && sam)
				continue;
			if (myCards.Count - i < list.Count)
				break;
			for (int j = 0; j < list.Count; j++) 
			{
				int k = j;
				if (j>0)
				{
					while ((i+k < myCards.Count - 1)&&(straight[j - 1].N == myCards[i+k].N))
						k++;
					// avoid to add same N into straight
				}
				if (j < list.Count - 1){
					straight.Add(myCards[i+k]);
				} else if ((myCards[i + k].N == list[j].N) && (myCards[i + k].S < list[j].S)) {
					int s = k;
					while ((i+s < myCards.Count - 1)&&(list[j].N == myCards[i+s].N)&&(myCards[i + s].S < list[j].S))
						s++;
					if (s > k) s--;
					straight.Add(myCards[i+s]);
					// find the bigger S for last card if have the same N
				} else {
					straight.Add(myCards[i+k]);
				}
			}
//			for (int st = 0; st < straight.Count; st ++)
//			{
//				Debug.Log("Straight "+st+" " + straight[st].N);
//			}
			if ((straight.Count == list.Count) && (sam ? isStraight_Sam(straight) : isStraight(straight))) 
			{
				if (straight[0].N == list[0].N) 
				{
					if (straight[list.Count - 1].S > list[list.Count - 1].S){
						return straight;
					} else {
						straight.Clear();
					}
				} else {
					return straight;
				}
			} else {
				straight.Clear();
			}
		}
		return straight;
	}

	public static List<Card> getHigherPairs (List<Card> list, List<Card> myCards, bool sam = false)
	{
		List<Card> pairs = new List<Card>();
		if (myCards.Count < 2)
			return pairs;
		myCards.Sort(ComparisionTienLen);
//		Debug.LogError("N :"+ list[0].N);
		for (int i = 0; i<myCards.Count-1; i++) 
		{

			if (myCards[i].N < list[0].N)
				continue;
			if(myCards[i].N == list[0].N && sam)
				continue;
			if (myCards [i].N == myCards [i + 1].N)
			{
				if (myCards[i].N == list[0].N) 
				{
					if (myCards[i+1].S > list[1].S)
					{
						pairs.Add(myCards[i]);
						pairs.Add(myCards[i + 1]);
						return pairs;
					}
				}
				else
				{
					pairs.Add(myCards[i]);
					pairs.Add(myCards[i + 1]);
					return pairs;
				}
			}
		}
		return pairs;
	}

	static List<Card> getHigherThrees (List<Card> list, List<Card> myCards, bool sam = false)
	{
		List<Card> threes = new List<Card>();
		if (myCards.Count < 3)
			return threes;
		myCards.Sort(ComparisionTienLen);
		for (int i = 0; i<myCards.Count-2; i++) 
		{
			if (myCards[i].N < list[0].N)
				continue;
			if (myCards[i].N == list[0].N && sam)
				continue;
			if ((myCards [i].N == myCards [i + 1].N) && (myCards [i + 1].N == myCards [i + 2].N))
			{
				if (myCards[i].N == list[0].N) 
				{
					if (myCards[i+2].S > list[2].S)
					{
						threes.Add(myCards[i]);
						threes.Add(myCards[i + 1]);
						threes.Add(myCards[i + 2]);
						return threes;
					}
				} 
				else 
				{
					threes.Add(myCards[i]);
					threes.Add(myCards[i + 1]);
					threes.Add(myCards[i + 2]);
					return threes;
				}
			}
		}
		return threes;
	}

	static List<Card> getHigherFours (List<Card> list, List<Card> myCards)
	{
		return getHigherFours (list[0].N, myCards);
	}

	public static List<Card> getHigherFours (int n, List<Card> myCards)
	{
		List<Card> fours = new List<Card>();
		if (myCards.Count < 4)
			return fours;
		myCards.Sort(ComparisionTienLen);
		for (int i = 0; i<myCards.Count-3; i++) 
		{
			if (myCards[i].N < n)
				continue;
			if ((myCards [i].N == myCards [i + 1].N) && (myCards [i + 1].N == myCards [i + 2].N) && (myCards [i + 2].N == myCards [i + 3].N))
			{
				fours.Add(myCards[i]);
				fours.Add(myCards[i + 1]);
				fours.Add(myCards[i + 2]);
				fours.Add(myCards[i + 3]);
				return fours;
			}
		}
		return fours;
	}

	static List<Card> getHigherThreePairs (Card cmax, List<Card> myCardsIn, bool sam = false)
	{
		// bo tat ca cac xam va tu quy trong list cua minh
		myCardsIn.Sort(ComparisionTienLen);
		List<Card> myCards = loaiboxamvatuquy(myCardsIn);
//		Debug.LogError("cmax: "+ cmax.N +" S: "+ cmax.S);
		List<Card> sixs = new List<Card>();
		if (myCards.Count < 6)
			return sixs;
		for (int i = 0; i<myCards.Count-5; i++) 
		{
			if (myCards[i].N < (cmax.N  - 2))
				continue;
			if (myCards[i].N == (cmax.N  - 2) && sam)
				continue;
			if ((myCards [i].N == myCards [i + 1].N) 
			    && (myCards [i].N == myCards [i + 2].N - 1) 
			    && (myCards [i].N == myCards [i + 3].N - 1)
			    && (myCards [i].N == myCards [i + 4].N - 2) 
			    && (myCards [i].N == myCards [i + 5].N - 2))
			{
				if (myCards[i].N == (cmax.N  - 2)) 
				{
					if (myCards[i+5].S > cmax.S)
					{
						sixs.Add(myCards[i]);
						sixs.Add(myCards[i + 1]);
						sixs.Add(myCards[i + 2]);
						sixs.Add(myCards[i + 3]);
						sixs.Add(myCards[i + 4]);
						sixs.Add(myCards[i + 5]);
						return sixs;
					}
				}
				else 
				{
					sixs.Add(myCards[i]);
					sixs.Add(myCards[i + 1]);
					sixs.Add(myCards[i + 2]);
					sixs.Add(myCards[i + 3]);
					sixs.Add(myCards[i + 4]);
					sixs.Add(myCards[i + 5]);
					return sixs;
				}
			}
		}
		return sixs;
	}

	static List<Card> getHigherFourPairs (Card cmax, List<Card> myCardsIn, bool sam = false)
	{
		// bo tat ca cac xam va tu quy trong list cua minh
		myCardsIn.Sort(ComparisionTienLen);
		List<Card> myCards = loaiboxamvatuquy(myCardsIn);
//		Debug.LogError("cmax: "+ cmax.N +" S: "+ cmax.S);

		List<Card> eights = new List<Card>();
		if (myCards.Count < 8)
			return eights;
		for (int i = 0; i<myCards.Count-7; i++) 
		{
			if (myCards[i].N < (cmax.N  - 3))
				continue;
			if (myCards[i].N == (cmax.N  - 3) && sam)
				continue;
			if ((myCards [i].N == myCards [i + 1].N) 
			    && (myCards [i].N == myCards [i + 2].N - 1) 
			    && (myCards [i].N == myCards [i + 3].N - 1)
			    && (myCards [i].N == myCards [i + 4].N - 2) 
			    && (myCards [i].N == myCards [i + 5].N - 2)
			    && (myCards [i].N == myCards [i + 6].N - 3)
			    && (myCards [i].N == myCards [i + 7].N - 3))
			{
				if (myCards[i].N == (cmax.N  - 3)) 
				{
					if (myCards[i+7].S > cmax.S)
					{
						eights.Add(myCards[i]);
						eights.Add(myCards[i + 1]);
						eights.Add(myCards[i + 2]);
						eights.Add(myCards[i + 3]);
						eights.Add(myCards[i + 4]);
						eights.Add(myCards[i + 5]);
						eights.Add(myCards[i + 6]);
						eights.Add(myCards[i + 7]);
						return eights;
					}
				}
				else 
				{
					eights.Add(myCards[i]);
					eights.Add(myCards[i + 1]);
					eights.Add(myCards[i + 2]);
					eights.Add(myCards[i + 3]);
					eights.Add(myCards[i + 4]);
					eights.Add(myCards[i + 5]);
					eights.Add(myCards[i + 6]);
					eights.Add(myCards[i + 7]);
					return eights;
				}
			}
		}
		return eights;
	}

	static List<Card> getHigherThreePairs (List<Card> list, List<Card> myCards, bool sam = false)
	{
		return getHigherThreePairs(list[list.Count - 1], myCards, sam);
	}

	static List<Card> getHigherFourPairs (List<Card> list, List<Card> myCards, bool sam = false)
	{
		return getHigherFourPairs(list[list.Count - 1], myCards, sam);
	}

	public static List<Card> loaiboxamvatuquy (List<Card> myCardsIn)
	{
		// luu y myCardsIn da sort
		myCardsIn.Sort(delegate(Card x, Card y) {
			if(x.N> y.N)
				return 1;
			if(x.N == y.N)
				return y.S- x.S;
			return -1;
		});
		List<Card> list = new List<Card>();
		int n = 0;
		int c = 0; // so lan gap cay n
		// danh sach nhung cay bai bi bo
		for(int i = 0; i < myCardsIn.Count; i++){
			if(n == myCardsIn[i].N){
				c++;
				if(c<3)
					list.Add(myCardsIn[i]);
			} else {
				c = 1;
				n = myCardsIn[i].N;
				list.Add(myCardsIn[i]);
			}
		}
		// sort lai input list
		myCardsIn.Sort(ComparisionTienLen);
		return list;
	}

	static List<Card> loaiboxamdoivatuquy (List<Card> myCardsIn)
	{
		// luu y myCardsIn da sort
		myCardsIn.Sort(delegate(Card x, Card y) {
			if(x.N> y.N)
				return 1;
			if(x.N == y.N)
				return y.S- x.S; // intent xep nguoc 
			return -1;
		});
		List<Card> list = new List<Card>();
		int n = 0;
		int c = 0; // so lan gap cay n
		// danh sach nhung cay bai bi bo
		for(int i = 0; i < myCardsIn.Count; i++){
			if(n == myCardsIn[i].N){
				c++;
				if(c<2)
					list.Add(myCardsIn[i]);
			} else {
				c = 1;
				n = myCardsIn[i].N;
				list.Add(myCardsIn[i]);
			}
		}
		// sort lai input list
		myCardsIn.Sort(ComparisionTienLen);
		return list;
	}
	
	public static List<Card> getRecommendCardsTienLen (List<Card> list, List<Card> myCards)
	{
		// luon nho phai sort list
		list.Sort(ComparisionTienLen);

		List<Card> cards = new List<Card>();
		if (list.Count == 1){
			Card card = list[0];
			if(card.N == 15){ // neu la 2
				// tim cay 2 lon hon
				foreach(Card icard in myCards){
					if(icard.N == 15 && icard.S> card.S){
						cards.Add(icard);
						return cards;
					}
				}
				// tim tu quy 
				cards = getHigherFours(0, myCards);
				if(cards.Count > 0)
					return cards;
				// tim 3 doi thong
				// vi tim 3 doi thong bat ky nen cho card_max = 3 bich

				Card cmax = new Card();
				cmax.N = 3;
				cmax.S = 1;
				return getHigherThreePairs(cmax, myCards);
			} else{
				foreach(Card c in myCards){
					if(c.N > card.N){
						cards.Add (c);
						break;
					}
					if(c.N == card.N && c.S> card.S){
						cards.Add (c);
						break;
					}
				}
			} 
			return cards;
		} else if (isPairs(list)){
			// tim doi 2 lon hon 
			cards = getHigherPairs(list, myCards);
			if(cards.Count > 0){
				return cards;
			} else if(list[0].N == 15){
				// neu la doi 2
				// tim tu quy 
				cards = getHigherFours(0, myCards);
				if(cards.Count > 0){
					return cards;
				}
			}
		} else if  (isThreeOfAKind(list)){
			return getHigherThrees(list, myCards);
		} else if  (isFourOfAKind(list)){
			return getHigherFours(list, myCards);
		} else if (isThreePairsStraight(list)) {
			cards = getHigherThreePairs(list, myCards);
			if(cards.Count < 1){
				Card cmax = new Card();
				cmax.N = 3;
				cmax.S = 1;
				cards = getHigherFourPairs(cmax, myCards);
			}
			if(cards.Count < 1)
				return getHigherFours(0, myCards);
		} else if (isStraight(list)){
			return getHigherStraight(list, myCards);
		}
		return cards;
	}

	public static List<Card> getRecommendCardsSam (List<Card> list, List<Card> myCards)
	{
		// luon nho phai sort list
		list.Sort(ComparisionTienLen);
		
		List<Card> cards = new List<Card>();
		if (list.Count == 1){
			Card card = list[0];
			if(card.N == 15){ // neu la 2
				// tim tu quy 
				cards = getHigherFours(0, myCards);
			} else{
				foreach(Card c in myCards){
					if(c.N > card.N){
						cards.Add (c);
						break;
					}
				}
			} 

			return cards;
		}
		if (isPairs(list)){
			// tim doi 2 lon hon 
			cards = getHigherPairs(list, myCards, sam: true);
			if(cards.Count > 0){
				return cards;
			} else if(list[0].N == 15){
				// neu la doi 2
				// tim tu quy 
				cards = getHigherFours(0, myCards);
				if(cards.Count > 0){
					return cards;
				}
			}
		}
		if (isThreeOfAKind(list))
			return getHigherThrees(list, myCards, sam: true);
		if (isFourOfAKind(list))
			return getHigherFours(list, myCards);
		if (isStraight_Sam(list))
			return getHigherStraight(list, myCards, sam: true);
		return cards;
	}


	public static int getLiengScore (JSONArray list)
	{
		int result = 0;
		for (int i = 0; i<list.Count; i++) {
			int n = Card.decode_lieng (list [i].AsInt).N;
			if (n > 13)
				n -= 13;
			result += (n >= 10 ? 0 : n);
		}
		
		return result % 10;
	}


	/// <summary>
	///  Cac ham danh cho Ta la
	/// </summary>
	/// <returns>The tu quy.</returns>
	/// <param name="phom_moi">Phom_moi.</param>
	public static bool checkTuQuy (List<Card> phom)
	{
		if (phom.Count != 4)
			return false;

		phom.Sort (ComparisionTala1);
		return (phom [0].N == phom [3].N);
	}

	public static bool checkSanhTala (List<Card> phom)
	{
		phom.Sort (ComparisionTala2);
		int count = phom.Count;
		int minN = phom [0].N;
		if (minN > 13)
			minN -= 13;
		int maxN = phom [count - 1].N;
		if (maxN > 13)
			maxN -= 13;
		return (maxN - minN == (count - 1) && phom [count - 1].S == phom [0].S);
	}
}