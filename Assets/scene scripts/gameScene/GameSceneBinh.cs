using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;
using System.Collections.Generic;
using UnityEngine.EventSystems;

public class GameSceneBinh : GameScene
{
	//1-13 : 2 bich - A bich
	//14-26 : 2 tep - A tep
	//27-39 : 2 ro - A ro
	//40-52 : 2 co - A co
	public bool isMovable = true;
	public GameObject binhFunc;
	public BinhFunctionComponent binhComp;

	public void showBinhFunction ()
	{
		if (binhFunc == null) {
			binhFunc = GameObject.Instantiate (Resources.Load ("prefabs/Binh/BinhFunction", typeof(GameObject))) as GameObject;
			RectTransform rt = binhFunc.GetComponent<RectTransform> ();				
			rt.SetParent (controllerControl.transform, false);
			rt.SetSiblingIndex(controllerControl.chatPanel.transform.GetSiblingIndex());
			binhComp = new BinhFunctionComponent ();
			if(binhComp == null)
				Debug.LogError("binhComp Null");
			binhComp.hideBinhFunc ();
		}
	}
	
	public override void Start ()
	{
		base.Start ();
		showBinhFunction ();
		/*GameObject binhFunc = GameObject.Instantiate (Resources.Load ("prefabs/Binh/BinhFunction", typeof(GameObject))) as GameObject;
				RectTransform rt = binhFunc.GetComponent<RectTransform> ();				
				rt.SetParent (controllerControl.transform, false);
				BinhFunction.hideBinhFunc ();*/
	}
	
	protected override void initializeView ()
	{
		base.initializeView ();
		buttonLeaveTable.GetComponent<Button> ().onClick.AddListener (delegate {
			LeaveRequestPacket packet = new LeaveRequestPacket ();
			packet.tableid = game.id;
			cubeia.sendPacket (packet);
		});
	}
	
	public override void initializeViewOfPlayers ()
	{
		base.initializeViewOfPlayers ();
		/*if (game.thisPlayer != null)
						game.thisPlayer.initializeTienlenButtons ();*/
	}
	
	/*bool isMovingCard = false;
		int indexMovingCard = -1, indexSwap = -1;
		float dPos = 1000000;*/
	
	public void Update ()
	{
		if(((GameSceneBinh)GameApplication.gameScene).binhComp != null)
			((GameSceneBinh)GameApplication.gameScene).binhComp.showBinhTime ();

	}

	public override void startDealing ()
	{
		base.startDealing ();
		List<Card> thisPlayerCards = game.thisPlayer.cards;
		int length = game.thisPlayer.cards.Count;
	
		/*if (orgPos1 == null)
						orgPos1 = new Vector3[13];*/
		
		//Chia bai den tay nguoi choi khac
		foreach (Player player in game.players) {
			if (player is OtherPlayer) {
				OtherPlayer otherPlayer = (OtherPlayer)player;
				otherPlayer.clearCardInHand_Binh ();
				otherPlayer.cards.Clear();
				for (int i=0; i<13; i++) {
					RectTransform newCard = (RectTransform)Instantiate (TransformCard);
					newCard.sizeDelta = new Vector2(Card.WIDTH * Card.thisPlayerScaleBinh, Card.HEIGHT * Card.thisPlayerScaleBinh);
					newCard.SetSiblingIndex (i);
					otherPlayer.setCardTransform (newCard);
					otherPlayer.cardsInHandList.Add (newCard);
				}
			}
		}
		
		for (int i = 0; i <length; i++) {
			Card card = thisPlayerCards [i];
			card.rectTransform = (RectTransform)Instantiate (TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (cardLayer.transform, false);
			card.rectTransform.anchoredPosition = new Vector2 (0, 0);
			card.orgPos = game.thisPlayer.getInHandCardsPosBinh (card); //Xac dinh vi tri quan bai tren tay nguoi choi
			card.addEventTriggerBinh();
			
			LeanTween.scale(card.rectTransform.gameObject, new Vector3(Card.thisPlayerScaleBinh, Card.thisPlayerScaleBinh, 1f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +i * 0.1f);
			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(card.orgPos.x, card.orgPos.y, 0f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay( 0.1f +i * 0.1f);
			// other players dealing
			foreach (Player player in game.players) {
				if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					RectTransform movingCard = (RectTransform)Instantiate (TransformCard);
					movingCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					movingCard.parent = cardLayer.transform;
					movingCard.anchoredPosition = new Vector2 (0, 0);
					movingCard.localScale = new Vector3 (1, 1, 1);

					Vector3 target = new Vector3(otherPlayer.rectTransform.anchoredPosition.x + otherPlayer.cardTransform.anchoredPosition.x, otherPlayer.rectTransform.anchoredPosition.y + otherPlayer.cardTransform.anchoredPosition.y, 0f);
					LeanTween.moveLocal(movingCard.gameObject, target, 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +i * 0.1f).setDestroyOnComplete(true);
//					movingCard.GetComponent<EventTrigger>().enabled=false;
					int ncards = i + 1;
					otherPlayer.cardsInHand = ncards;
				}
			}
		}
	}
	
	//************************************Xac dinh gia tri bai********************************************
	//Text textBinh;
	//Binh_CardValues bc;
	public void updateTextBinh ()
	{
			List<Card> chi1= new List<Card>();
			for(int i=0;i<3;i++){
				chi1.Add(GameApplication.game.thisPlayer.cards[i]);
			}
			List<Card> chi2= new List<Card>();
			for(int i=3;i<8;i++){
				chi2.Add(GameApplication.game.thisPlayer.cards[i]);
			}
			List<Card> chi3= new List<Card>();
			for(int i=8;i<13;i++){
				chi3.Add(GameApplication.game.thisPlayer.cards[i]);
			}
		List<int> listValue= new List<int>();
		foreach (Card card in GameApplication.game.thisPlayer.cards) {
			listValue.Add(card.encode_binh());
		}
		int mb = Binh_CardValues.getMarkMauBinh(listValue);
		if (Binh_CardValues.sosanhChi2vsChi1 (chi2, chi1) >= 0 && Binh_CardValues.sosanhChi3vsChi2 (chi3, chi2) >= 0 && mb == 0) {
			string txtChi1 = "";
			string txtChi2 = "";
			string txtChi3 = "";
			int mark1 = Binh_CardValues.getMark (chi1);
			int mark2 = Binh_CardValues.getMark (chi2);
			int mark3 = Binh_CardValues.getMark (chi3);
			if (mark1 == 0) {
				txtChi1 = "Mậu";
			}
			if (mark1 > 1 * 68) {
				txtChi1 = "Đôi";
			}
			if (mark1 > 3 * 68) {
				txtChi1 = "<color=#fff000>"+"Xám(+2)"+"</color>";
			}
			if (mark2 == 0) {
				txtChi2 = "Mậu";
			} 
			if (mark2 > 1 * 68) {
				txtChi2 = "Đôi";
			}
			if (mark2 > 2 * 68) {
				txtChi2 = "Thú";
			}
			if (mark2 > 3 * 68) {
				txtChi2 = "Xám";
			}
			if (mark2 > 4 * 68) {
				txtChi2 = "Sảnh";
			}
			if (mark2 > 5 * 68) {
				txtChi2 = "Thùng";
			}
			if (mark2 > 6 * 68) {
				txtChi2 = "<color=#fff000>"+"Cù Lũ(+1)"+"</color>";
			}
			if (mark2 > 7 * 68) {
				txtChi2 = "<color=#fff000>"+"Tứ Quý(+6)"+"</color>";
			}
			if (mark2 > 8 * 68) {
				txtChi2 = "<color=#fff000>"+"TPSảnh(+8)"+"</color>";
			}
			if (mark3 == 0) {
				txtChi3 = "Mậu";
			}
			if (mark3 > 1 * 68) {
				txtChi3 = "Đôi";
			}
			if (mark3 > 2 * 68) {
				txtChi3 = "Thú";
			}
			if (mark3 > 3 * 68) {
				txtChi3 = "Xám";
			}
			if (mark3 > 4 * 68) {
				txtChi3 = "Sảnh";
			}
			if (mark3 > 5 * 68) {
				txtChi3 = "Thùng";
			}
			if (mark3 > 6 * 68) {
				txtChi3 = "Cù Lũ";
			}
			if (mark3 > 7 * 68) {
				txtChi3 ="<color=#fff000>"+ "Tứ Quý(+3)"+"</color>";
			}
			if (Binh_CardValues.getMark (chi3) > 8 * 68) {
				txtChi3 = "<color=#fff000>"+"TPSảnh(+4)"+"</color>";
			}
			string text = "1." + txtChi1 + "\n2." + txtChi2 + "\n3." + txtChi3;
			((GameSceneBinh)GameApplication.gameScene).binhComp.setTextBinh (text);
		} else if (mb > 0) {
			string text ="";
			if (mb == 10) {
				text="<color=#fff000>"+"3 Sảnh"+"</color>";
			}
			if (mb == 11) {
				text="<color=#fff000>"+"3 Thùng"+"</color>";
			}
			if (mb == 12) {
				text="<color=#fff000>"+"6 Đôi"+"</color>";
			}
			if (mb == 13) {
				text="<color=#fff000>"+"Đồng hoa"+"</color>";
			}
			if (mb == 14) {
				text="<color=#fff000>"+"Sảnh rồng"+"</color>";
			}
			if (mb == 15) {
				text = "<color=#fff000>"+"Sảnh rồng" +  "\n " + "Đồng hoa"+"</color>";
			}
			((GameSceneBinh)GameApplication.gameScene).binhComp.setTextBinh (text);
		}else{
			((GameSceneBinh)GameApplication.gameScene).binhComp.setTextBinh ("<color=#f90101>"+"Binh Lủng"+"</color>");
		}
			
	}
	
	public void xepbai(List<Card> temp){
//		foreach (Card card in game.thisPlayer.cards) {
//			int i = getIndexSwap(temp,card);
//			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3(game.thisPlayer.getInHandCardsPosBinh(i).x, game.thisPlayer.getInHandCardsPosBinh(i).y, 0), 0.1f);
//		}

		for(int j=0;j<temp.Count;j++){
			swapThisPlayerCardOnHand(getIndex(temp[j]),j);
		}
		foreach (Card card in game.thisPlayer.cards) {
			card.orgPos=game.thisPlayer.getInHandCardsPosBinh (card);
			card.addEventTriggerBinh();
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3(card.orgPos.x, card.orgPos.y, 0), 0.1f);
			card.rectTransform.SetAsLastSibling();
		}
	
		updateTextBinh ();
	}

	public int getIndexSwap(List<Card> temp,Card card){

		return temp.IndexOf(card);
	}

	public int getIndex(Card card){
		return game.thisPlayer.cards.IndexOf(card);
	}

	public void swapThisPlayerCardOnHand (int  index1, int index2)
	{
		Card tmp = game.thisPlayer.cards[index1];
		game.thisPlayer.cards[index1] = game.thisPlayer.cards[index2];
		game.thisPlayer.cards[index2] = tmp;

		Card card1 = GameApplication.game.thisPlayer.cards [index1];
		Card card2 = GameApplication.game.thisPlayer.cards [index2];
		
		Vector3 vtmp = card1.orgPos;
		card1.orgPos = card2.orgPos;
		card2.orgPos = vtmp;

	}

	public void rjtable(bool sobai){
		if (!sobai) {
			isMovable=false;
			binhComp.setText (binhComp.btnSoBai, Strings.instance.gameplay_binh_solai);
			binhComp.btnDoiChi.SetActive (false);
			binhComp.btnXepBai.SetActive (false);
		} else {
			binhComp.setText (binhComp.btnSoBai, Strings.instance.gameplay_binh_sobai);
			binhComp.btnDoiChi.SetActive (true);
			binhComp.btnXepBai.SetActive (true);
			isMovable=true;
		}

		List<Card> thisPlayerCards = game.thisPlayer.cards;
		int length = game.thisPlayer.cards.Count;
		for (int i = 0; i <length; i++) {
			Card card = thisPlayerCards [i];
			card.rectTransform = (RectTransform)Instantiate (TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (cardLayer.transform, false);
			card.orgPos = game.thisPlayer.getInHandCardsPosBinh (card); //Xac dinh vi tri quan bai tren tay nguoi choi
			card.rectTransform.anchoredPosition = card.orgPos;
			card.addEventTriggerBinh();
			card.rectTransform.localScale=new Vector3(Card.thisPlayerScaleBinh, Card.thisPlayerScaleBinh, 1f);
			
//			LeanTween.scale(card.rectTransform.gameObject, new Vector3(Card.thisPlayerScaleBinh, Card.thisPlayerScaleBinh, 1f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f +i * 0.1f);
//			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(card.orgPos.x, card.orgPos.y, 0f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay( 0.1f +i * 0.1f);
		}
		updateTextBinh ();
	}

	public void fsc(){
		// luu y margin_X giong voi ThisPlayer.getInHandCardsPosBinh
		float margin_X = 0.2f;
		for (int i=0; i<3; i++) {
			Card card = game.thisPlayer.cards[i];
			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(card.orgPos.x+Card.WIDTH * Card.thisPlayerScaleBinh * (1f - margin_X), card.orgPos.y, 0f), 0.4f);
//			card.removeEventTriggerBinh();
		}
		for (int i=0; i<13; i++) {
			Card card = game.thisPlayer.cards[i];
			card.removeEventTriggerBinh();
		}
	}

	public void ufsc(){
		for (int i=0; i<3; i++) {
			Card card = game.thisPlayer.cards[i];
//			card.addEventTriggerBinh();
			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(card.orgPos.x, card.orgPos.y, 0f), 0.4f);
		}
		for (int i=0; i<13; i++) {
			Card card = game.thisPlayer.cards[i];
			card.addEventTriggerBinh();
		}
	}

}