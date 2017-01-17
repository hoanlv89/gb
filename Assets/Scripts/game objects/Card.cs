using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;

public class Card
{
	// view stuff
	private RectTransform _rectTransform;
//	public static int WIDTH = 79;//61
//	public static int HEIGHT = 106;//82
	public static int WIDTH {
		get{
			if(GameApplication.game is GameBinh)
				return 84;
			if(GameApplication.game is GameXiTo)
				return 66;
			return 70;
		}
	}
	public static int HEIGHT  {
		get{
			if(GameApplication.game is GameBinh)
				return 106;
			if(GameApplication.game is GameXiTo)
				return 89;
			return 94;
		}
	}
	public static float thisPlayerScale {
		get {
			if(GameApplication.game is GameDummy)
				return 1.38f;
			return 1.5f;
		}
	}
	public static readonly float thisPlayerScaleBinh = 1.7f;
	
	public Image image { get; set; }

	public RectTransform rectTransform {
		get {
			return _rectTransform;
		}
		set {
			_rectTransform = value;
			image = _rectTransform.GetComponent<Image> ();
			image.sprite = getSprite ();
//			Debug.LogError("Card: " + getResourceName() + " N:"+N+" S:"+S);
			if((N==2 && S==2) || (N==12 && S==1)) {
				if(GameApplication.game != null && GameApplication.game is GameDummy){
					_rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
				}
			}
		}
	}


	// logic stuff
	public int S;
	public int N;
	public bool isSelected;

	public void invertSelected ()
	{
		isSelected = !isSelected;
		float delta = 0f;
		if (isSelected) {
			delta = 15;
		}

		float x = GameApplication.game.thisPlayer.getInHandCardsPos(this);
		float y = GameSceneTaLa.thisPlayerCardInHandPosY + delta;
		LeanTween.moveLocalX(rectTransform.gameObject, x, 0.3f).setEase(LeanTweenType.easeOutQuart);
		LeanTween.moveLocalY (rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);

		// check hien nut bo chon voi game Sam va Tien len
		Game game = GameApplication.game;
		if( game is GameSam || game is GameTienLen){
			bool hasCardsSelected = false;
			foreach(Card card in game.thisPlayer.cards){
				hasCardsSelected |= card.isSelected;
				if(hasCardsSelected)
					break;
			}
			Button btnBochon = game.gameScene.controllerControl.tienlenFunctions.function2;
			// hien tienlenFunctions
			game.gameScene.controllerControl.tienlenFunctions.gameObject.SetActive(true);
			// show nut bo chon
			btnBochon.gameObject.SetActive(hasCardsSelected);
		}
	}

	public Card ()
	{
		
	}
	
	public Card (int s, int n)
	{
		this.S = s;
		this.N = n;
	}
	
	public static Card decode (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 1;
		if (value == 1) {
			value = 14;
		} else if (value == 2) {
			value = 15;
		}
		return new Card (suit, value);
	}
	
	public static Card decode_tienlen (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 3; // >=3 , <=15
		return new Card (suit, value);
	}

	public static Card decode_tala (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 1; // >=1 , <=13
		if (value == 1) {
			value = 14;
		} else if (value == 2) {
			value = 15;
		}
		return new Card (suit, value);
	}

	public static Card decode_sam (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 3; // >=3 , <=15
		return new Card (suit, value);
	}

	public static Card decode_lieng (int code)
	{
		return decode_poker(code);
	}

	// giong binh
	public static Card decode_poker (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		if (GameApplication.cubeia != null && GameType.G9K == GameApplication.cubeia.gameId) {
			if (suit == 1) {
				suit=2;
			}else if (suit == 2) {
				suit=3;
			}else if (suit == 3) {
				suit=4;
			}else if (suit == 4) {
				suit=1;
			}
		}

		int value = (code - 1) % 13 + 2; // >=2 , <=14
		if (value == 2)
			value = 15;
		
		return new Card (suit, value);
	}

	public static Card decode_binh(int code){
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 2; // >=2 , <=14
		return new Card (suit, value);
	}

	public static Card decode_xito (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 8 + 1;
		int value = (code - 1) % 8 + 7; // >=7 , <=14
		if (code < 1)
			value = 0;
		return new Card (suit, value);
	}

	public static Card decode_dummy (int code)
	{
		if (code == 0)
			return new UnknownCard();
		if (code > 100)
			code -= 100;
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 2; // >=2 , <=14
		return new Card (suit, value);
	}
	
	public int encode_tienlen ()
	{
		// code = 13*suit + value -15
		int n = N;
		return 13 * (S - 1) + n - 2;
	}

	public int encode_tala ()
	{
		int n = N == 15 ? 2 : N == 14 ? 1 : N; // >=1 <=13
		return (S - 1) * 13 + n;
	}

	public int encode_lieng ()
	{
		return encode_poker();
	}
	
	public int encode_poker ()
	{
		int n = N == 15 ? 2 : N; // >=2 , <=14
		return 13 * (S - 1) + n - 1;
	}

	public int encode_binh ()
	{
		int n = N; // >=2 , <=14
		return 13 * (S - 1) + n-1;
	}

	public int encode_dummy ()
	{
		int n = N; // >=2 , <=14
		return 13 * (S - 1) + n-1;
	}

	public int encode_xito ()
	{
		int n = N; // >=7 , <=14
		return 8 * (S - 1) + n - 6;
	}
	
	public static Card decode_luckycards (int code)
	{
		if (code == 0)
			return new UnknownCard();
		int suit = (code - 1) / 13 + 1;
		int value = (code - 1) % 13 + 1;
		value++;
		if (value == 2) {
			value = 15;
		}
		return new Card (suit, value);
	}
	
	public int encode ()
	{
		int value = 0;
		if (N == 15) {
			value = 2;
		} else if (N == 14) {
			value = 1;
		} else {
			value = N;
		}
		return (S - 1) * 13 + value;
	}
	
	public int getS ()
	{
		return S;
	}
	
	public void setS (int s)
	{
		S = s;
	}
	
	public void setN (int n)
	{
		N = n;
	}

	public Sprite getSprite ()
	{
		return GameApplication.resource.getCardSprite (encode ());
	}
	
	public string getResourceName ()
	{
		int value = 0;
		if (N == 15) {
			value = 2;
		} else if (N == 14) {
			value = 1;
		} else {
			value = N;
		}
		if (value > 0)
			return "a_" + value + getSuitInVietnamese ();
		else
			return "card_back";
	}
	
	public string getSuitInVietnamese ()
	{
		if (S == 1) {
			return "bich";
		}
		if (S == 2) {
			return "tep";
		}
		if (S == 3) {
			return "ro";
		}
		if (S == 4) {
			return "co";
		}
		return "-1";
	}

	// *********************************** Ta la *********************************** 
	public void addEventTriggerTaLa(){
		Button button = rectTransform.GetComponent<Button>();
		button.onClick.AddListener(delegate {
			CardAction_Swapable ca_tala = rectTransform.GetComponent<CardAction_Swapable>();
			if(ca_tala!= null && ca_tala.clickAction){
				GameTaLa game =  (GameTaLa)GameApplication.game;
				if(!game.giaidoanhabai){
					// unselected all other cards
					foreach(Card card in game.thisPlayer.cards){
						if (card != this && card.isSelected)
							card.invertSelected();
					}
				}

				invertSelected();
			}
			Debug.Log(getResourceName() + " is " + (isSelected ? "isSelected" : "isUnSelected"));
		});

		// Xoa CardAction cu 
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);
		
		// them CardAction moi
		CardAction_Swapable cardaction_tala = rectTransform.gameObject.AddComponent<CardAction_Swapable>() as CardAction_Swapable;
		cardaction_tala.card = this;
		
		// doi trigger cu
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et == null)
			et = rectTransform.gameObject.AddComponent<EventTrigger>() as EventTrigger;
		et.triggers.Clear();
		
		EventTrigger.Entry onDrag = new EventTrigger.Entry();
		onDrag.eventID = EventTriggerType.Drag;
		onDrag.callback.AddListener( (eventData) => { cardaction_tala.moving(); } );
		et.triggers.Add(onDrag);
		
		EventTrigger.Entry endDrag = new EventTrigger.Entry();
		endDrag.eventID = EventTriggerType.EndDrag;
		endDrag.callback.AddListener( (eventData) => { cardaction_tala.endMoving(); } );
		et.triggers.Add(endDrag);
	}

	public void removeEventTriggerTaLa(){
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);

		CardAction_Swapable ca_tala = rectTransform.GetComponent<CardAction_Swapable>();
		if(ca_tala != null)
			GameObject.Destroy(ca_tala);
		
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et != null)
			GameObject.Destroy(et);

		Button button = rectTransform.GetComponent<Button>();
		if(button != null)
			GameObject.Destroy(button);
	}

	public void addEventTriggerDummy(){
		Button button = rectTransform.GetComponent<Button>();
		button.onClick.RemoveAllListeners ();
		button.onClick.AddListener(delegate {
			CardAction_Swapable ca_dummy = rectTransform.GetComponent<CardAction_Swapable>();
			if(ca_dummy!= null && ca_dummy.clickAction){
				GameDummy game =  (GameDummy)GameApplication.game;
				if(game.cardInAutoSelectModeHa) {
					game.thisPlayer.autoselectphom_dummy(this);
				} else if(game.cardInAutoSelectModeGui) {
					game.thisPlayer.autoselectgui_dummy(this);
				} else {
					invertSelected();
				}
			}
			Debug.Log(getResourceName() + " is " + (isSelected ? "isSelected" : "isUnSelected"));
		});
		
		// Xoa CardAction cu 
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);
		
		// them CardAction moi
		CardAction_Swapable cardaction_dummy = rectTransform.gameObject.AddComponent<CardAction_Swapable>() as CardAction_Swapable;
		cardaction_dummy.card = this;
		
		// doi trigger cu
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et == null)
			et = rectTransform.gameObject.AddComponent<EventTrigger>() as EventTrigger;
		et.triggers.Clear();
		
		EventTrigger.Entry onDrag = new EventTrigger.Entry();
		onDrag.eventID = EventTriggerType.Drag;
		onDrag.callback.AddListener( (eventData) => { cardaction_dummy.moving(); } );
		et.triggers.Add(onDrag);
		
		EventTrigger.Entry endDrag = new EventTrigger.Entry();
		endDrag.eventID = EventTriggerType.EndDrag;
		endDrag.callback.AddListener( (eventData) => { cardaction_dummy.endMoving(); } );
		et.triggers.Add(endDrag);
	}
	
	public void removeEventTriggerDummy(){
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);
		
		CardAction_Swapable ca_dummy = rectTransform.GetComponent<CardAction_Swapable>();
		if(ca_dummy != null)
			GameObject.Destroy(ca_dummy);
		
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et != null)
			GameObject.Destroy(et);
		
//		Button button = rectTransform.GetComponent<Button>();
//		if(button != null)
//			GameObject.Destroy(button);
	}

	public void setColor(Color color) {
		Image cover = rectTransform.FindChild ("DarkCover").GetComponent<Image> ();
		cover.enabled = true;
		cover.color = color;
	}

	public void clearColor() {
		Image cover = rectTransform.FindChild ("DarkCover").GetComponent<Image> ();
		cover.enabled = false;
		cover.color = new Color32 (0,0,0,0);
	}

	//********************************************binh************************************************
	/*public Rect getRect ()
		{
				float x = rectTransform.position.x - (Card.WIDTH * Card.thisPlayerScaleBinh / 2);
				float y = rectTransform.position.y + (Card.HEIGHT * Card.thisPlayerScaleBinh / 2);
				return new Rect (x, y, Card.WIDTH * Card.thisPlayerScaleBinh, Card.HEIGHT * Card.thisPlayerScaleBinh);
		}*/
	
	public bool isContain_Binh (Vector3 mousePosition) //Xet va cham giua diem va hinh chu nhat
	{       //Dung cho game Binh
		float xMouse = mousePosition.x;
		float yMouse = mousePosition.y;
		float xCard = rectTransform.position.x;
		float yCard = rectTransform.position.y;
		
		bool conditionX1 = (xMouse >= xCard - (Card.WIDTH / 2));
		bool conditionX2 = (xMouse <= xCard + (Card.WIDTH / 2));
		
		bool conditionY1 = (yMouse >= yCard - (Card.HEIGHT / 2));
		bool conditionY2 = (yMouse <= yCard + (Card.HEIGHT / 2));
		
		return (conditionX1 && conditionX2 && conditionY1 && conditionY2);
	}
	
	public void setPosition_Binh (float x, float y)
	{
		Vector3 vpos = rectTransform.position;
		rectTransform.position = new Vector3 (x, y, vpos.z);
	}
	
	public bool isOverlapse_Binh (Card card) //Xet va cham giua 2 hinh chu nhat
	{
		Vector3 v1 = rectTransform.position;
		Vector3 v2 = card.rectTransform.position;
		
		Vector3 d1 = v1 + new Vector3 (Card.WIDTH / 2, Card.HEIGHT / 2, 0);
		Vector3 d2 = v1 + new Vector3 (-Card.WIDTH / 2, Card.HEIGHT / 2, 0);
		Vector3 d3 = v1 + new Vector3 (Card.WIDTH / 2, -Card.HEIGHT / 2, 0);
		Vector3 d4 = v1 + new Vector3 (-Card.WIDTH / 2, -Card.HEIGHT / 2, 0);
		
		return (card.isContain_Binh (d1) || card.isContain_Binh (d2) || card.isContain_Binh (d3) || card.isContain_Binh (d4));
	}

	/*public bool isOverlapse_Binh2 (Card card) //Xet va cham giua 2 hinh chu nhat
		{
				RectTransform rt2 = card.rectTransform;
				if (rectTransform.rect.Overlaps (rt2.rect))
						return true;
				else
						return false;
		}*/
	
	public static void swapCardPos_Binh (int index1, int index2)
	{
		Card card1 = GameApplication.game.thisPlayer.cards [index1];
		Card card2 = GameApplication.game.thisPlayer.cards [index2];
		
		Card tmp = GameApplication.game.thisPlayer.cards[index1];
		GameApplication.game.thisPlayer.cards[index1] = GameApplication.game.thisPlayer.cards[index2];
		GameApplication.game.thisPlayer.cards[index2] = tmp;
		Vector3 vtmp = card1.orgPos;
		card1.orgPos = card2.orgPos;
		card2.orgPos = vtmp;
		
		LeanTween.moveLocal (card1.rectTransform.gameObject, new Vector3(card1.orgPos.x, card1.orgPos.y, 0), 0.1f);
		LeanTween.moveLocal (card2.rectTransform.gameObject, new Vector3(card2.orgPos.x, card2.orgPos.y, 0), 0.1f);
	}
	
	public static float getSpaceOf2Cards_Binh (int index1, int index2)
	{
		Card card1 = GameApplication.game.thisPlayer.cards [index1];
		Card card2 = GameApplication.game.thisPlayer.cards [index2];
		Vector3 v1 = card1.rectTransform.position;
		Vector3 v2 = card2.rectTransform.position;

		float dx = Mathf.Abs (v1.x - v2.x);
		float dy = Mathf.Abs (v1.y - v2.y);
		return Mathf.Sqrt ((dx * dx) + (dy * dy));
	}
	
	public static void sortCards_Binh (List<Card> listC)
	{
		//List<Card> listC = GameApplication.game.thisPlayer.cards;
		listC.Sort (
			delegate(Card p1, Card p2) {
			if (p1.orgPos.z > p2.orgPos.z)
				return 1;
			else if (p1.orgPos.z < p2.orgPos.z)
				return -1;
			else
				return 0;
		});
	}
	
	public int indexChi_Binh; //quan bai nam o chi nao ?
	public Vector3 orgPos;
	
	public static bool checkCards_Binh ()
	{
		return (GameApplication.game != null && GameApplication.game.thisPlayer != null && GameApplication.game.thisPlayer.cards != null && GameApplication.game.thisPlayer.cards.Count > 0);
	}

	public void addEventTriggerBinh(){
		// Xoa CardAction cu 
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);
		CardAction2 cardaction = rectTransform.GetComponent<CardAction2> (); 
		if (cardaction != null) {
			GameObject.Destroy(cardaction);
		}
		CardAction2 cardaction_tala = rectTransform.gameObject.AddComponent<CardAction2>() as CardAction2;
		cardaction_tala.card = this;
		
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et == null)
			et = rectTransform.gameObject.AddComponent<EventTrigger>() as EventTrigger;
		et.triggers.Clear();
		
		EventTrigger.Entry onDrag = new EventTrigger.Entry();
		onDrag.eventID = EventTriggerType.Drag;
		onDrag.callback.AddListener( (eventData) => { cardaction_tala.onMoving(); } );
		et.triggers.Add(onDrag);
		
		EventTrigger.Entry endDrag = new EventTrigger.Entry();
		endDrag.eventID = EventTriggerType.EndDrag;
		endDrag.callback.AddListener( (eventData) => { cardaction_tala.endMoving(); } );
		et.triggers.Add(endDrag);
	}

	public void removeEventTriggerBinh(){
		CardAction ca = rectTransform.GetComponent<CardAction>();
		if(ca != null)
			GameObject.Destroy(ca);
		
		CardAction2 ca_tala = rectTransform.GetComponent<CardAction2>();
		if (ca_tala != null)
			GameObject.Destroy(ca_tala);
		
		EventTrigger et = rectTransform.GetComponent<EventTrigger>();
		if(et != null)
			GameObject.Destroy(et);
		
		Button button = rectTransform.GetComponent<Button>();
		if(button != null)
			GameObject.Destroy(button);
	}

	//*********************************************************************************************************
}

public class UnknownCard: Card {
	public UnknownCard(){
		this.S = 0;
		this.N = 0;
		this.isSelected = false;
	}
}

