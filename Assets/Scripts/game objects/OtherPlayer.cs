using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using SimpleJSON;

public class OtherPlayer : Player
{
	public RectTransform cardTransform; // dung cho tien len
	public int cardsInHand; // dung cho tien len
	public List<RectTransform> cardsInHandList = new List<RectTransform> ();
	public List<Card> cards= new List<Card>();

	public RectTransform alarmAlert;

	public OtherPlayer (string name, int ag, int lq, int vip, bool isReady, int ik, string avatar_url, string sIP) 
		: base(name, ag, lq, vip, isReady, ik, avatar_url, sIP)
	{
	}

	public void removeAllComponentsView ()
	{
		GameObject.Destroy (text_winning.gameObject);
	}

	public override void danhbaiTienlen (List<Card> cards, int mc, string nn)
	{
		base.danhbaiTienlen (cards, mc, nn);
		// giảm số cây bài đang cầm trên tay
		setCards (cardsInHand - cards.Count);

		// hiện animation đánh bài
		int length = cards.Count;
		float margin = 0.7f;
		int cw = Card.WIDTH;
		int ch = Card.WIDTH;
		int rnx = ch;
		int rx = (int)((margin * length - margin + 1) * cw / 2 - rnx / 2);
		
		float x = rx + Random.Range (-cw, cw);
		float y = Random.Range (-cw * 2 / 3, cw * 2 / 3);
		
		for (int i = 0; i < length; i++) {
			Card card = cards [i];
			card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (gameScene.cardLayer);
			card.rectTransform.anchoredPosition = rectTransform.anchoredPosition + cardTransform.anchoredPosition;
			card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
			
			LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (-x + i * cw * margin, y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			
			game.lastTurnCards.Add (card);
		}

	}

	public override void countDown (int time = 20)
	{
		base.countDown (time);
		becomeNormal ();
	}

	// get chat posittion otherPlayer
	public override Vector2 getChatsPos ()
	{
		Vector2 playerPos = rectTransform.anchoredPosition;
		float height = ((1280f * Screen.height) / Screen.width);
		float h1 = height / 2;
		float dh = (h1 - playerPos.y);
		if (dh > 100) {
			dh = 90;
		} else {
			dh -= 35;
		}
		Vector2 rv = new Vector2 (playerPos.x + 5, playerPos.y + dh);
		return rv;
	}

	public void setCards (int value)
	{
//		cardTransform.Find ("Text").GetComponent<Text> ().text = "" + value;
		cardTransform.Find ("Text").GetComponent<Text> ().text = "";
		cardsInHand = value;
	}

	public void setCardTransform (RectTransform cardRectTransform)
	{
		cardTransform = cardRectTransform;
		cardTransform.SetParent (rectTransform, false);
		cardTransform.anchoredPosition = getCardViewPosition ();
		cardTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);

		cardTransform.localScale = new Vector3 (1, 1, 1);
	}

	public override void updatePostion (Vector2 position, bool withEffect = true)
	{
		base.updatePostion (position, withEffect);
		if (cardTransform != null) {
			cardTransform.anchoredPosition = getCardViewPosition ();
		}
	}

	private Vector2 getCardViewPosition ()
	{
		if (rectTransform.anchoredPosition.x > 400)
			return new Vector2 (-115, 0);
		else
			return new Vector2 (115, 0);
	}

	public override void showCardXiTo (int icard)
	{
		base.showCardXiTo (icard);
		cardsInHandList [1].GetComponent<Image> ().sprite = Card.decode_xito (icard).getSprite ();
	}

	public override void finishTienLen (int v, int ag, int winnings, int d, JSONArray jcards)
	{
		base.finishTienLen (v, ag, winnings, d, jcards);
		// invisible bai up
		GameObject.Destroy (cardTransform.gameObject);
		
		int length = jcards.Count;
		if (length < 1)
			return;
		float margin = 1 / 3f; // (percent)
		int cw = Card.WIDTH;
		float cwidth = (margin * length - margin + 1) * cw;
		float rx = -cwidth * 0.5f;
		
		for (int i = 0; i < length; i++) {
			Card card = Card.decode_tienlen (jcards [i].AsInt);
			card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (rectTransform, false);
			card.rectTransform.tag = "finishCard";
			card.rectTransform.SetSiblingIndex (2 + i);

			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (rx + i * cw * margin, 0f, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.1f);
		}

		gameScene.StartCoroutine (Utils.cr_runDelayed (4f, delegate() {
			removeFinishCards ();
		}));
	}

	public override void finishDummy (int v, int ag, int d, int mark, JSONArray jcards)
	{
		base.finishDummy (v, ag, d, mark, jcards);
	}

	public override void finishTala (int v, int ag, int d, int mark, JSONArray jcards)
	{
		GameObject.Destroy(cardTransform.gameObject);
		base.finishTala (v, ag, d, mark, jcards);

		for(int i = 0; i<jcards.Count; i++){
			Card card = Card.decode_tala(jcards[i].AsInt);
			card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(gameScene.cardLayer, false);
			card.rectTransform.localScale = new Vector3 (1f, 1f, 1f);

			Vector2 target = getVitriHienBaiTrenTayTaLa (i, jcards.Count);
			card.rectTransform.localPosition = new Vector3 (target.x, target.y, 0f);
			card.rectTransform.GetComponent<Image>().color = new Color32(120,120,120, 255);
		}
	}

	public override void finishPoker (int s, int ag, int winnings, JSONArray jcards, JSONArray jcardsWin)
	{
		base.finishPoker (s, ag, winnings, jcards, jcardsWin);
		// xoa bai tren ban
		foreach (RectTransform card in cardsInHandList) {
			GameObject.Destroy (card.gameObject);
		}
		// show bai
		// TODO: check bai up thi khong show bai
		if (cardsInHandList.Count > 0) {
			viewControl.showPokerCards (jcards [0].AsInt, jcards [1].AsInt);
			gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
				if (viewControl != null) {
					viewControl.hidePokerCards ();
				}
			}));
		}

	}

	public override void finishXiTo (int ag, int winnings, JSONArray jcards)
	{
		base.finishXiTo (ag, winnings, jcards);
	}

	public override void finishLieng (int ag, int winnings, JSONArray jcards)
	{
		base.finishLieng (ag, winnings, jcards);
		// lat bai len

		if (!isfold) {
			float margin = 0.44f;
			float scale = 1f;
			for (int i = 0; i<jcards.Count; i++) {
				int code = jcards [i].AsInt;
				Sprite sprite;
				if (code > 0)
					sprite = Card.decode_lieng (code).getSprite ();
				else
					sprite = GameApplication.resource.getCardBackSprite ();

				cardsInHandList [i].GetComponent<Image> ().sprite = sprite;
				LeanTween.scale (cardsInHandList [i].gameObject, new Vector3 (scale, scale, 1f), 0.3f);
				Vector2 target = ((GameLieng)game).getViewPositionOfPlayersCard (this, margin, scale, i, jcards.Count);
				LeanTween.moveLocal (cardsInHandList [i].gameObject, new Vector3 (target.x, target.y, 0f), 0.3f);
			}
		}
	}

	public void removeFinishCards ()
	{
		GameObject[] gameObjects = GameObject.FindGameObjectsWithTag ("finishCard");
		
		for (var i = 0; i < gameObjects.Length; i ++)
			GameObject.Destroy (gameObjects [i]);
	}

	public override void fold ()
	{
		base.fold ();
		foreach (RectTransform rect in cardsInHandList) {
//			rect.SetParent (gameScene.cardLayer, true);
			LeanTween.moveLocal (rect.gameObject, new Vector3 (0f, 180f, 0f), 0.5f).setEase (LeanTweenType.easeOutQuart);
		}
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.6f, delegate {
			foreach (RectTransform rect in cardsInHandList) {
				GameObject.Destroy (rect.gameObject);
			}
			cardsInHandList.Clear ();
		}));
	}

	public override void onTurnPoker ()
	{
		base.onTurnPoker ();

		int CheckCallOrAllIn = 0;
		int delta = ((IPokerGameLiked)game).maxTotalBetChipOfAPlayer - game.thisPlayer.totalBetChip; 
		// neu tien cuoc cua minh nho hon max tien cuoc thi la call
		// neu tien con lai cua minh 
		if (delta >= game.thisPlayer.ag) {
			CheckCallOrAllIn = 2;
			// ALL IN
		} else if (delta > 0) {
			CheckCallOrAllIn = 1;
			// CALL for
		} else {
			CheckCallOrAllIn = 0;
			// CHECK or BET
		}

		if (game.state == Game.State.VIEWING) {
			gameScene.controllerControl.PokerFuntionsOnTurn.gameObject.SetActive (false);
		} else {
			gameScene.controllerControl.showPokerFuntionsOthersTurn (CheckCallOrAllIn);
		}
	}

	public override void onTurnTienLen ()
	{
		base.onTurnTienLen ();
		gameScene.controllerControl.tienlenFunctions.hideTienLenOnTurnFuntions ();
	}

	public override void showCardsInHandByReconnectionTienLen (JSONArray jcards)
	{
		base.showCardsInHandByReconnectionTienLen(jcards);
//		setCardTransform ((RectTransform)GameObject.Instantiate (gameScene.TransformCardBackWithNumber));
//
//		cardsInHand = jcards.Count;
//		cardTransform.Find ("Text").GetComponent<Text> ().text = "" + cardsInHand;
	}

	//*********************************Binh**************************************

	public void clearCardInHand_Binh ()
	{
		if (cardsInHandList != null) {
			for (int j=0; j<cardsInHandList.Count; j++) {
				GameObject.Destroy (cardsInHandList [j].gameObject);
			}
			cardsInHandList = new List<RectTransform> ();
		}
	}
	
	void fixSiblingIndex ()
	{ //Dung cho truong hop bai nam o tay trai nguoi choi
		if (cardsInHandList != null && cardsInHandList.Count == 13) {
			
			for (int i=0; i<3; i++) {
				cardsInHandList [i].SetSiblingIndex (2 - i);
			}
			for (int i=3; i<8; i++) {
				cardsInHandList [i].SetSiblingIndex (10 - i);
			}
			for (int i=8; i<13; i++) {
				cardsInHandList [i].SetSiblingIndex (20 - i);
			}
		}
	}
	
	public void fscBinh ()
	{
		Debug.Log ("Cards In Hand list:" + cardsInHandList.Count);
		if (cardsInHandList != null && cardsInHandList.Count > 0) {
			bool condPos = this.rectTransform.position.x < cardsInHandList [0].position.x; //Avatar ben trai quan bai
			if (!condPos)
				fixSiblingIndex ();
			for (int i=1; i<cardsInHandList.Count; i++) {
				Vector3 vOrg = cardsInHandList [i].position;
//				cardsInHandList [i].GetComponent<Card>().removeEventTriggerBinh();
				//Vector3 vOrg = cardsInHandList [i].anchoredPosition3D;
				if (vOrg == cardsInHandList [0].position) {
					
					float scale = 0.5f;
					int a = 0; //hang
					int b = 0; //cot
					
					if (i < 3) {
						a = 0;
						b = i;
					} else if (i >= 3 && i < 8) {
						a = 1;
						b = i - 3;
					} else {
						a = 2;
						b = i - 8;
					}
					Vector3 vPlus;
					if (condPos) {
						vPlus = new Vector3 (b * (scale / 2) * Card.WIDTH / Card.thisPlayerScaleBinh, -a * (scale / 2) * Card.HEIGHT / Card.thisPlayerScaleBinh, 0);							
					} else {
						vPlus = new Vector3 (-b * (scale / 2) * Card.WIDTH / Card.thisPlayerScaleBinh, -a * (scale / 2) * Card.HEIGHT / Card.thisPlayerScaleBinh, 0);
					}
					// TODO: can kiem tra lai
//					LeanTween.moveLocal (cardsInHandList [i].gameObject, new Vector3 (vOrg.x + vPlus.x, vOrg.y + vPlus.y, 0), 0.75f).setEase (LeanTweenType.easeOutQuart).setDelay (0.25f);
					LeanTween.move (cardsInHandList [i].gameObject, new Vector3 (vOrg.x + vPlus.x, vOrg.y + vPlus.y, 0), 0.75f).setEase (LeanTweenType.easeOutQuart).setDelay (0.25f);
				}
				
			}
		}
	}
	
	public void ufscBinh ()
	{
		if (cardsInHandList != null && cardsInHandList.Count > 0) {

			Vector3 vTo = cardsInHandList [0].position;
			for (int i=0; i<cardsInHandList.Count; i++) {
//				LeanTween.moveLocal (cardsInHandList [i].gameObject, new Vector3 (vTo.x, vTo.y, 0), 0.75f).setEase (LeanTweenType.easeOutQuart).setDelay (0.25f);
				LeanTween.move (cardsInHandList [i].gameObject, new Vector3 (vTo.x, vTo.y, 0), 0.75f).setEase (LeanTweenType.easeOutQuart).setDelay (0.25f);
			}
		}
	}

	/*public void effectCardInHand()
	{ //Hieu ung khi nguoi choi chua so bai
		if (cardsInHandList != null && cardsInHandList.Count > 1) {
			if (cardsInHandList [0].position.x == cardsInHandList [1].position.x) {
				int length = cardsInHandList.Count;
				cardsInHandList [length - 1].Rotate(7, 0, 0);
				//Debug.Log("ROTATEEEEEEEEEEE in " + name);
			}
		}
	}*/




	/**************** TA la *******************/
	public override void danhTaLa (Card card, string nn, int jsonA)
	{
		base.danhTaLa (card, nn, jsonA);
		// hiện animation đánh bài
		int vitricaybai = baidadanh_tala.Count - 1;
		Vector2 target = getVitriBaiDanhTaLa (vitricaybai, baidadanh_tala.Count);
		
		card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
		card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		card.rectTransform.SetParent (gameScene.cardLayer);
		card.rectTransform.anchoredPosition = rectTransform.anchoredPosition + cardTransform.anchoredPosition;
		card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);

		if(vitricaybai>1){
			int sindex = baidadanh_tala[vitricaybai-1].rectTransform.GetSiblingIndex();
			card.rectTransform.SetSiblingIndex(sindex + 1);
		}

		LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);

		xepbaidadanh_tala();
		if (game.getPlayer (nn) is ThisPlayer) {
			GameSceneTaLa gameSceneTaLa = (GameSceneTaLa)gameScene;
			gameSceneTaLa.selectedCardArrow1 = (RectTransform)GameObject.Instantiate (gameScene.selectCard);
			gameSceneTaLa.selectedCardArrow1.SetParent (gameScene.cardLayer);
			gameSceneTaLa.selectedCardArrow1.localScale = new Vector3 (1.5f, 1.5f, 1f);
			LeanTween.scale (gameSceneTaLa.selectedCardArrow1.gameObject, new Vector3 (1, 1, 1), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.4f);
			gameSceneTaLa.selectedCardArrow1.anchoredPosition = new Vector2 (0f, 50f);
			
//			if (jsonA == 1) {
				Button button = card.rectTransform.GetComponent<Button> ();
				//hien thi SelectCard
				gameSceneTaLa.selectedCardArrow2 = (RectTransform)GameObject.Instantiate (gameScene.selectCard);
				gameSceneTaLa.selectedCardArrow2.SetParent (gameScene.cardLayer);
				gameSceneTaLa.selectedCardArrow2.localScale = new Vector3 (1.5f, 1.5f, 1f);
				LeanTween.scale (gameSceneTaLa.selectedCardArrow1.gameObject, new Vector3 (1, 1, 1), 0.4f).setEase (LeanTweenType.easeOutQuart).setDelay (0.4f);
				gameSceneTaLa.selectedCardArrow2.anchoredPosition = new Vector2 (target.x, target.y + 50f);
				//cho su kien
				int card_code = card.encode_tala();
				button.onClick.AddListener (delegate {
					//xu ly gui len sau
					game.thisPlayer.send_anbaitala (card_code);
					//GameObject.Destroy(gameScene.cardLayer.FindChild("selectCard").GetComponent<RectTransform>());
					
				});
//			} 
		}	
	}

	public override void bocbaiTaLa (Card card)
	{
		base.bocbaiTaLa (card);
		// hien animation boc bai
		bocbaiTaLa_animation (card);
	}
	
	public override Card anbaiTaLa (int code)
	{
		Card card = base.anbaiTaLa (code);
		//animation an bai
		int vitricaybai = baidaan_tala.Count - 1;
		Vector2 target = getVitriBaiAnTaLa (vitricaybai);
		//card = game.lastCard; luu y phai gan last card, trong truong hop vtable khong xac dinh duoc lastcard
		Debug.Log ("an" + card.encode_tala ());
		card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
		LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		// xep lai view index
		foreach (Card c in baidaan_tala)
			c.rectTransform.SetAsLastSibling();

		return card;
	}
	
	public override void guibaiTaLa(string player_nhan, List<Card> cards_gui)
	{
		for(int i = 0; i< cards_gui.Count; i++){
			Card card = cards_gui[i];
			card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(gameScene.cardLayer, false);
			card.rectTransform.localScale = Vector3.one;
			card.rectTransform.anchoredPosition = rectTransform.anchoredPosition + getCardViewPosition();
		}
		base.guibaiTaLa (player_nhan, cards_gui);

		// dua bai tren tay cua thisPlayer len dau
		foreach(Card card in game.thisPlayer.cards){
			card.rectTransform.SetAsLastSibling();
		}
	}

	public override void guibaiDummy(string player_nhan, Card card, List<Card> cards_gui, int CM, int NNCM)
	{
		Card _card = cards [cards.Count - 1];
		_card.N = card.N;
		_card.S = card.S;
		_card.image.sprite = card.getSprite ();
	
		base.guibaiDummy (player_nhan, _card, cards_gui, CM, NNCM);
		
		// dua bai tren tay cua thisPlayer len dau
//		foreach(Card card in game.thisPlayer.cards){
//			card.rectTransform.SetAsLastSibling();
//		}
	}

	public override void habaiTaLa (List<Card> cards)
	{
		base.habaiTaLa (cards);
		Vector2 target = getVitriHaPhom (phomIndex);
		List<Card> phom = new List<Card>();
		for (int i=0; i < cards.Count; i++) {
			Card card = cards [i];
			Card card_an_duoc = findCardInList(card, baidaan_tala);
			if(card_an_duoc != null){
				card = card_an_duoc;
				baidaan_tala.Remove(card_an_duoc);
				card.rectTransform.FindChild("Image").GetComponent<Image>().enabled = true;
			} else {
				card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.SetParent (gameScene.cardLayer);
				card.rectTransform.anchoredPosition = rectTransform.anchoredPosition + cardTransform.anchoredPosition;
				card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
			}
			card.rectTransform.SetAsLastSibling();
			phom.Add(card);
			LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x + i * 30f, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}
		listphomha.Add(phom);

		// dua bai tren tay cua thisPlayer len dau
		foreach(Card card in game.thisPlayer.cards){
			card.rectTransform.SetAsLastSibling();
		}
	}

	private void bocbaiTaLa_animation (Card card)
	{
		
		Vector2 vitribai = rectTransform.anchoredPosition + cardTransform.anchoredPosition;
		card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
		card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		card.rectTransform.SetParent (gameScene.cardLayer);
		card.rectTransform.anchoredPosition = new Vector2 (0f, 0f);
		//Debug.Log (rectTransform.anchoredPosition.Tostring());
		card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
		
		LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (vitribai.x, vitribai.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		//card.rectTransform.gameObject.SetActive (false);
		
	}

	public override void onTurnTaLa (int time = 25)
	{
		if(((GameTaLa)game).giaidoanhabai)
			time = 60;
		base.onTurnTaLa (time);
		gameScene.controllerControl.talaFuntions.hideTaLaOnTurnFuntions ();
	}

	public override void onTurnDummy (int time = 25)
	{
//		if(((GameDummy)game).giaidoanhabai)
//			time = 60;
		base.onTurnDummy (time);
	}
	
	public void send_bocbaitala ()
	{
		Debug.Log ("gui boc bai");
		var data = new JSONClass ();
		data ["evt"] = "bc";
		GameApplication.cubeia.sendDataGame (data);
		Debug.Log ("gui thanh cong");
	}

	public void hienbaidadanh_tala (JSONArray cardArray)
	{
		baidadanh_tala.Clear ();
		for (int i= 0; i<cardArray.Count; i++) {
			Card card = Card.decode_tala (cardArray [i].AsInt);
			baidadanh_tala.Add (card);
			
			int vitricaybai = baidadanh_tala.Count - 1;
			Vector2 target = getVitriBaiDanhTaLa (vitricaybai, cardArray.Count);
			
			card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (gameScene.cardLayer);
			card.rectTransform.anchoredPosition = target;
			card.rectTransform.localScale = new Vector3 (1f, 1f, 1f);
		}
	}
	
	public int hienbaidaha_tala (JSONArray cardArrays)
	{
		int socay = 0;
		for (int j = 0; j < cardArrays.Count; j++) {
			JSONArray cardArray = cardArrays [j].AsArray;
			// ham getVitriHaPhom can tham so >= 1
			Vector2 target = getVitriHaPhom (++phomIndex);
			
			for (int i=0; i < cardArray.Count; i++) {
				Card card = Card.decode_tala (cardArray [i].AsInt);
				card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.SetParent (gameScene.cardLayer);
				card.rectTransform.anchoredPosition = target + new Vector2 (i * 30f, 0f);
				card.rectTransform.localScale = Vector3.one;
				//				game.lastTurnCards.Add (card);
			}
			socay += cardArray.Count;
		}
		
		return socay;
	}

	/******************************** Game Chan **************************************/
	public override void startGameChan (JSONArray jcards)
	{
		base.startGameChan(jcards);
	}

	public override void danhBaiChan (int t, int code, int mcode, string nname, string nd)
	{
		base.danhBaiChan (t, code, mcode, nname, nd);

		// logic part
		CardChan card = CardChan.decode(code);
//		lastCard = card;
		Player pl = game.getPlayer(nd);
		List<CardChan> cards_2 = pl.chan_cards2;
		
		cards_2.Add(card);
		// view part
		if (cards_2.Count > 1) {
//			ObjectAnimator.ofFloat(cards_2.get(cards_2.Count - 2), "scaleX", 1).start();
//			ObjectAnimator.ofFloat(cards_2.get(cards_2.Count - 2), "scaleY", 1).start();
		}
		card.rectTransform = GameObject.Instantiate<RectTransform>(((GameSceneChan)gameScene).TransformCardChan);
		card.rectTransform.SetParent(gameScene.cardLayer, false);
		card.rectTransform.anchoredPosition = game.getViewPositionOfPlayer(this);

		Vector2 target = ((GameChan)game).getCard2Pos(pl, cards_2.Count - 1);

		LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(target.x, target.y, 0), 0.3f).setEase(LeanTweenType.easeInBack);
		LeanTween.scale(card.rectTransform.gameObject, CardChan.lastCardScale, 0.3f);

		((GameChan)game).lastCardChan = card;
	}

	public override void anbaiChan (int cc1, int cc2, string fname = "")
	{
		base.anbaiChan (cc1, cc2, fname);
		// logic part
		CardChan card2, card1 = null;

		Player fplayer = getPreviousPlayer();
		if(!string.IsNullOrEmpty(fname))
			fplayer = game.getPlayer(fname);

		List<CardChan> lp_cards2 = fplayer.chan_cards2;
		if(lp_cards2.Count > 0)
			card1 = lp_cards2[lp_cards2.Count - 1];

		if (card1 != null && card1.code == cc1) {
			card2 = CardChan.decode(cc2);
			lp_cards2.Remove(card1);
		} else if (card1 != null && card1.code == cc2) {
			card2 = CardChan.decode(cc1);
			lp_cards2.Remove(card1);
		} else {
			card1 = findCardInList(cc1, chan_cards2);
			if(card1 != null){
				card2 = CardChan.decode(cc2);
			} else {
				card1 = findCardInList(cc2, chan_cards2);
				card2 = CardChan.decode(cc1);

			}
			if(card1 != null) {
				chan_cards2.Remove(card1);
			} else {
				// truong hop chiu bai, co khi ca cc1 va cc2 deu nam trong chan_cards
				card1 = CardChan.decode(cc1);
				card1.rectTransform = GameObject.Instantiate<RectTransform>(((GameSceneChan)gameScene).TransformCardChan);
				card1.rectTransform.SetParent(gameScene.cardLayer, false);
				card1.rectTransform.anchoredPosition = game.getViewPositionOfPlayer(this);

				card2 = CardChan.decode(cc2);
			}
		}

		chan_cards1.Add(card1);
		chan_cards1.Add(card2);

		// view part
		card2.rectTransform = GameObject.Instantiate<RectTransform>(((GameSceneChan)gameScene).TransformCardChan);
		card2.rectTransform.SetParent(gameScene.cardLayer, false);
		card2.rectTransform.anchoredPosition = game.getViewPositionOfPlayer(this);
		
		card1.rectTransform.pivot = new Vector2(0.5f, 0.5f);
		card2.rectTransform.pivot = new Vector2(0.5f, 0.5f);
		
		card1.rectTransform.SetAsLastSibling();
		card2.rectTransform.SetAsLastSibling();
		
		LeanTween.scale (card1.rectTransform.gameObject, Vector3.one, 0.3f);
		LeanTween.scale (card2.rectTransform.gameObject, Vector3.one, 0.3f);
		
		Vector2 target1 = ((GameChan)game).getCard1Pos(this, chan_cards1.Count - 2);
		LeanTween.moveLocal(card1.rectTransform.gameObject, new Vector3(target1.x, target1.y, 0), 0.3f);
		Vector2 target2 = ((GameChan)game).getCard1Pos(this, chan_cards1.Count - 1);
		LeanTween.moveLocal(card2.rectTransform.gameObject, new Vector3(target2.x, target2.y, 0), 0.3f);
	}

	public override void duoibaiChan (string nn, int acode)
	{
		base.duoibaiChan (nn, acode);

		Player nextPlayer = game.getPlayer(nn);
		// bốc hoặc ăn
		//		nextPlayer.startTurnCounting(1);
		nextPlayer.countDown(15);

		if(nextPlayer is ThisPlayer)
			gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(1);
		
		// gợi ý
		if (acode != 0 && nextPlayer is ThisPlayer && (((GameChan)game).huongdan == 1 || GameApplication.DEBUG_ON)) {
			CardChan hcard = findCardInList(acode, nextPlayer.chan_cards);
			hcard.isSelected = true;
		}
	}

	public override void habaiuChan (JSONArray jarr, int cc1, int cc2, int chiuu)
	{
		base.habaiuChan (jarr, cc1, cc2, chiuu);
		
//		SDialog sdialog =  gameScene.showInfoDialog(name + " đang chờ ù con bài " + CardChan.getName(cc2));
//		sdialog.autoDismiss = true;
//		sdialog.autoDismissTime = 4f;
//		sdialog.onDismiss = delegate {
//		};
		gameScene.showToast (name + " chờ ù con bài " + CardChan.getName(cc2));
		LeanTween.delayedCall(1.2f, delegate(object obj) {
			showXuongU(jarr, chiuu);
		});
		gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(0);
	}

	private void showXuongU(JSONArray jarr, int chiuu) {
//		deckImg.setVisibility(View.INVISIBLE);
		GameSceneChan gs = (GameSceneChan)gameScene;
		ChanFunction chanFuntions = gameScene.controllerControl.chanFuntions;
		chanFuntions.xuongu_panel.SetActive(false);
		chanFuntions.xuongu_dialog.SetActive(true);
		chanFuntions.tvcuoc.text = name + " đã ù, hãy đợi nhà này xướng!";
		chanFuntions.btntdxuong.gameObject.SetActive(false);
		chanFuntions.btnxuong.gameObject.SetActive(false);

		// xóa các cây bài không liên quan
		foreach (Player pl in game.players) {
			foreach (CardChan ccard in pl.chan_cards) {
				GameObject.Destroy (ccard.rectTransform.gameObject);
			}
			foreach (CardChan ccard in pl.chan_cards1) {
				GameObject.Destroy (ccard.rectTransform.gameObject);
			}
			foreach (CardChan ccard in pl.chan_cards2) {
				GameObject.Destroy (ccard.rectTransform.gameObject);
			}
			pl.chan_cards.Clear();
			pl.chan_cards1.Clear();
			pl.chan_cards2.Clear();
		}
		
		for (int i = 0; i < jarr.Count; i++) {
			CardChan ccard = CardChan.decode(jarr[i].AsInt);
			ccard.rectTransform = GameObject.Instantiate<RectTransform>(gs.TransformCardChan);
			ccard.rectTransform.SetParent(gs.cardLayer, false);
			ccard.rectTransform.localScale = new Vector3(0.3f, 0.3f, 1f);
			ccard.rectTransform.anchoredPosition = rectTransform.anchoredPosition;
			chan_cards.Add(ccard);
		}
		
		List<CardChan> bo_chan = new List<CardChan>();
		// List<CardChan> ca_cards = new ArrayList<CardChan>();
		List<CardChan> l_cards = new List<CardChan>();
		CardChan curCard;
		
		// xếp hai cây cuối
		// kiem tra chiu u
		int ucode = chan_cards[chan_cards.Count - 1].code;
		ucode = ((ucode - 1) / 4) * 4;
		CardChan c1 = findCardInList(ucode + 1, chan_cards);
		CardChan c2 = findCardInList(ucode + 2, chan_cards);
		CardChan c3 = findCardInList(ucode + 3, chan_cards);
		CardChan c4 = findCardInList(ucode + 4, chan_cards);
		if (c1 != null && c2 != null && c3 != null && c4 != null && chiuu == 1) {
			// chiu u
			l_cards.Add(c1);
			l_cards.Add(c2);
			l_cards.Add(c3);
			l_cards.Add(c4);
			xepbaiu(l_cards, 3);
			chan_cards.Remove(c1);
			chan_cards.Remove(c2);
			chan_cards.Remove(c3);
			chan_cards.Remove(c4);
		} else {
			l_cards.Add(chan_cards[chan_cards.Count - 2]);
			l_cards.Add(chan_cards[chan_cards.Count - 1]);
			xepbaiu(l_cards, 3);
			chan_cards.RemoveAt(chan_cards.Count - 1);
			chan_cards.RemoveAt(chan_cards.Count - 1);
		}
		
		// lấy chắn
		CardChan candidateCard = chan_cards[0];
		for (int i = 1; i < chan_cards.Count; i++) {
			curCard = chan_cards[i];
			if (candidateCard.N == curCard.N && candidateCard.S == curCard.S) {
				bo_chan.Add(candidateCard);
				bo_chan.Add(curCard);
				i += 1;
				if (i < chan_cards.Count)
					candidateCard = chan_cards[i];
			} else {
				candidateCard = curCard;
			}
		}
		xepbaiu(bo_chan, 1);
		foreach (CardChan ccard in bo_chan) {
			chan_cards.Remove(ccard);
		}
		// lấy cạ, có thể không có cạ
		// ca_cards = cards.subList(0, cards.Count);
		if (chan_cards.Count > 1)
			xepbaiu(chan_cards, 2);


		// reorder view index
		foreach (CardChan ccard in l_cards) {
			ccard.rectTransform.SetAsLastSibling();
		}
		
		// tổng hợp tất cả các cây trên vào thisPlayer.cards
		game.thisPlayer.chan_cards.AddRange(bo_chan);
		game.thisPlayer.chan_cards.AddRange(chan_cards);
		game.thisPlayer.chan_cards.AddRange(l_cards);
		
//		startTurnCounting(4);
		countDown(60);
	}

	public override void kg(int m, JSONArray arrMark, string C, string CC, int G) {
		// vì đã đặt lock, nên cho rằng habaiuDialog->dismiss đã đc gọi
		base.kg(m, arrMark, C, CC, G);

			LeanTween.delayedCall(4f, delegate(object obj) {
				GameObject g = gameScene.controllerControl.chanFuntions.xuongu_dialog;
				if(g != null && g.activeSelf)
					g.SetActive(false);
			});


		// finish thì sẽ gọi habaiuDialog
		// đợi 100ms để chắc chắn habaiuDialog đã được dissmiss -> gọi
		// showXuongU(jarr);
	}

	/*********************** GAME DUMMY ************************/
	public override void danhbaiDummy (Card card, string nn, int jsonA, int M, bool goiyan)
	{
		GameSceneDummy gsDummy = (GameSceneDummy)gameScene;
		GameDummy game_dummy = (GameDummy)game;
		// hiện animation đánh bài
		int vitricaybai = gsDummy.baitrenban.Count;
		Debug.Log ("vitricaybai: " + vitricaybai);
		Vector2 target = Player.getVitriBaiDanhDummy (vitricaybai, gsDummy.baitrenban.Count + 1);

		// thay anh cho cay bai cuoi trong
		cards[cards.Count - 1].N = card.N;
		cards[cards.Count - 1].S = card.S;
		cards [cards.Count - 1].rectTransform = cards [cards.Count - 1].rectTransform;// hoi ky cuc, nhung de set lai image va *
		card = cards[cards.Count - 1];

		cards.Remove (card);

		
		LeanTween.scale (card.rectTransform, new Vector3 (GameSceneDummy.K_SCALE_CARD_ONTABLE, GameSceneDummy.K_SCALE_CARD_ONTABLE, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);

		base.danhbaiDummy (card, nn, jsonA, M, goiyan);

		if (game.getPlayer (nn) is ThisPlayer) {// chay goi y
			game.thisPlayer.kiemtrahaguiDummy (danh: false);
		}

		xeplaicaybaitrentaydummy (cards.Count);
	}

	public override void bocbaiDummy (Card card, bool goiyU)
	{
		base.bocbaiDummy (card, goiyU);
		GameSceneDummy gsdummy = (GameSceneDummy)gameScene;
		addCardToCardsDummy (card, 1.65f, gsdummy.bobai.anchoredPosition);

		xeplaicaybaitrentaydummy (cards.Count - 1);

		LeanTween.scale (card.rectTransform, new Vector3 (GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, 1f), 0.5f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, getOtherPlayerCardInHandPos(cards.Count - 1, cards.Count), 0.5f).setEase (LeanTweenType.easeOutQuart);
		card.rectTransform.SetAsLastSibling ();
	}

	public Card addCardToCardsDummy(Card card, float scale, Vector2 pos){
		GameSceneDummy gsdummy = (GameSceneDummy)gameScene;
		// hien animation boc bai
		card.rectTransform = (RectTransform)Object.Instantiate (gameScene.TransformCard);
		card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		card.rectTransform.SetParent (gsdummy.cardLayer);
		card.rectTransform.anchoredPosition = pos;
		//Debug.Log (rectTransform.anchoredPosition.Tostring());
		card.rectTransform.localScale = new Vector3 (scale, scale, 1f);
		cards.Add (card);
		card.rectTransform.SetAsLastSibling ();

		return card;
	}

	public Vector3 getOtherPlayerCardInHandPos (int index, int size)
	{
		float cardwidth = Card.WIDTH * 0.6f;
		float maxmargin = 0.8f * cardwidth;
		
		float maxwidth = 4 * cardwidth;
		float margin = (maxwidth - cardwidth) /(size - 1);
		
		margin = (margin < maxmargin) ? margin : maxmargin;
		
		float x = index * margin - maxwidth * 0.5f + cardwidth * 0.5f;
		float y = GameSceneDummy.KC_CARD;
		int viewpos = game.getViewIndexOfPlayer (this);
		if (viewpos == 1) {
			y = 100;
		}

		return new Vector3 (rectTransform.anchoredPosition.x + x, rectTransform.anchoredPosition.y + y, 0f);
	}

	public void xeplaicaybaitrentaydummy (int socay) {
		for (int i= 0; i < socay; i++) {
			cards[i].rectTransform.SetAsLastSibling();
			LeanTween.moveLocal (cards[i].rectTransform.gameObject, getOtherPlayerCardInHandPos(i, cards.Count), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}	
	   
		// xem xet viec them cai alarm vao
		if (alarmAlert == null) {
			alarmAlert = GameObject.Instantiate<RectTransform>(DummyRes.Instance.pf_alert);
			alarmAlert.SetParent(rectTransform, false);
			float x = 64f;
			float y = -122f;
			int viewpos = game.getViewIndexOfPlayer (this);
			if (viewpos == 1) {
				y = 117;
			}
			alarmAlert.anchoredPosition = new Vector2(x,y);
		}
	
		alarmAlert.gameObject.SetActive(cards.Count <= 3);
	}

	public override void habaiDummy (List<Card> xcards, int CM, int M, int AT, int DT, string NN, int NNCM, bool goiyan)
	{
		base.habaiDummy (xcards, CM, M, AT, DT, NN, NNCM, goiyan);
		GameSceneDummy gsDummy = (GameSceneDummy)gameScene;

		List<Card> phom = new List<Card>();
		int minIndex = 100;
		for (int i=0; i < xcards.Count; i++) {
			Card card = xcards [i];
			Card card_an_duoc = findCardInList(card, gsDummy.baitrenban);
			if(card_an_duoc != null){
				card = card_an_duoc;
				if(minIndex > gsDummy.baitrenban.IndexOf(card_an_duoc))
					minIndex = gsDummy.baitrenban.IndexOf(card_an_duoc);
				gsDummy.baitrenban.Remove(card_an_duoc);
			} else {
				// thay anh cho cay bai cuoi trong
				cards[cards.Count - 1].N = card.N;
				cards[cards.Count - 1].S = card.S;
				cards[cards.Count - 1].rectTransform = cards[cards.Count - 1].rectTransform; // de lay *, hoi di, phai chu y.
				card = cards[cards.Count - 1];
				cards.Remove(card);
//				card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
			}
			card.rectTransform.SetAsLastSibling();
			phom.Add(card);
			LeanTween.scale (card.rectTransform, new Vector3 (GameSceneDummy.K_SCALE, GameSceneDummy.K_SCALE, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			// TODO: tinh lai vi tri X cho hop ly hon.
			Vector2 target = getVitriHaPhom_Dummy (phomIndex, i, xcards.Count);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}
		listphomha.Add(phom);
		
		// dua bai tren tay cua thisPlayer len dau
		foreach(Card card in game.thisPlayer.cards){
			card.rectTransform.SetAsLastSibling();
		}

		// chuyen tat ca cac cay bai co index > minIndex ve tay Other Player
		for (int i = gsDummy.baitrenban.Count - 1; i >= minIndex; i--) {
			Card card = gsDummy.baitrenban [i];
			card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = false;
			card.rectTransform.GetComponent<Image> ().sprite = gameScene.TransformCard.GetComponent<Image> ().sprite; 
			LeanTween.scale (card.rectTransform, new Vector3 (GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, 0.7f), 0.5f).setEase (LeanTweenType.easeOutQuart);
			gsDummy.baitrenban.Remove (card);
			cards.Add (card);
		}

		// xep lai bai tren ban
		gsDummy.xeplaibaitrenban();

//		for(int i = socayxeplai; i < cards.Count; i++) {
//			Vector3 target = new Vector3(rectTransform.anchoredPosition.x + GameDummy.getOtherPlayerCardInHandPos(i, xcards.Count), 
//			                             rectTransform.anchoredPosition.y ,
//			                             0f);
////			LeanTween.scale (card.rectTransform, new Vector3 (0.6f, 0.6f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
//			LeanTween.moveLocal (cards[i].rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f)
//				.setEase (LeanTweenType.easeOutQuart);
//		}

		//2. xep lai sau khi da add them cay moi
		xeplaicaybaitrentaydummy (cards.Count);
	}
}