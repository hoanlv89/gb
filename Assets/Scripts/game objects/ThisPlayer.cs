using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;

public class ThisPlayer : Player
{
	public List<Card> cards;
	public Button  fbtn_1, fbtn_2, fbtn_3, fbtn_4;
	public Dictionary<string, string> cloneBet =
		new Dictionary<string, string> ();

	IEnumerator e_sendboluot_delayed;

	public ThisPlayer (string name, int ag, int lq, int vip, bool isReady, int ik, string avatar_url, string sIP) 
		: base(name, ag, lq, vip, isReady, ik, avatar_url, sIP)
	{
		cards = new List<Card> ();
	}

	public override void setTransform (RectTransform rectTransform)
	{
		base.setTransform (rectTransform);
	}

	public override void countDown (int time = 20)
	{
		base.countDown (time);
		becomeAttractive ();
	}

	public void initializeTienlenButtons ()
	{
		fbtn_1 = gameScene.controllerControl.tienlenFunctions.function1;
		fbtn_2 = gameScene.controllerControl.tienlenFunctions.function2;
		fbtn_3 = gameScene.controllerControl.tienlenFunctions.function3;
		fbtn_1.onClick.RemoveAllListeners();
		fbtn_2.onClick.RemoveAllListeners();
		fbtn_3.onClick.RemoveAllListeners();

		fbtn_1.onClick.AddListener (delegate {
			send_boluot ();
		});

		fbtn_2.onClick.AddListener (delegate {
			send_bochon ();
			fbtn_2.GetComponent<Blinking2>().setBlinking(false);
			fbtn_2.GetComponent<Image>().sprite = fbtn_2.GetComponent<Blinking2>().s1;
		});

		fbtn_3.onClick.AddListener (delegate {
			send_danhbai ();
//			if (GameApplication.gameApp==GameApplication.GameApp.DauTruong) {
//				Debug.LogError("Clicked vao day");
//				fbtn_3.GetComponent<Image>().sprite = fbtn_3.GetComponent<Blinking2>().s1_52fun;
//			}if (GameApplication.gameApp==GameApplication.GameApp.G52Fun) {
//				fbtn_3.GetComponent<Image>().sprite = fbtn_3.GetComponent<Blinking2>().s1_52fun;
//			}else{
//				fbtn_3.GetComponent<Image>().sprite = fbtn_3.GetComponent<Blinking2>().s1;
//			}
		});
	}

	public void initializePokerButtons ()
	{
		fbtn_1 = gameScene.controllerControl.btn_f1;
		fbtn_2 = gameScene.controllerControl.btn_f2;
		fbtn_3 = gameScene.controllerControl.btn_f3;
		fbtn_1.onClick.RemoveAllListeners ();
		fbtn_2.onClick.RemoveAllListeners ();
		fbtn_3.onClick.RemoveAllListeners ();
		
		fbtn_1.onClick.AddListener (delegate {
			send_fold ();
		});
		fbtn_2.onClick.AddListener (delegate {
			send_callOrCheck ();
		});
		fbtn_3.onClick.AddListener (delegate {
			// deActive khi co tin hieu tra ve
			if (gameScene.controllerControl.raiseOptionControl.gameObject.activeSelf) {
//				Debug.LogWarning("ACTIVE");
				if (gameScene.controllerControl.raiseOptionControl.isMaxStake ()) {
					// allin
					send_AllIn ();
				} else {
					send_raiseOrBet (gameScene.controllerControl.getPokerStakeValue ());
				}
			} else {
//				Debug.LogWarning("DEACTIVE");
				gameScene.controllerControl.raiseOptionControl.gameObject.SetActive (true);
				gameScene.controllerControl.raiseOptionControl.slider.value=0;
				fbtn_3.image.sprite = gameScene.controllerControl.sprite_btn_confirm;
				int pot = 0;
				if (game is IPokerGameLiked)
					pot = ((IPokerGameLiked)game).maxTotalBetChipOfAPlayer;
				gameScene.controllerControl.updateRaiseOptionPoker (pot, ag);
			}
		});
	}

	public void setOnPlayingPosition ()
	{
		// TODO: chua can thiet lam ngay
		// tuy game
		float y = 1280 * Screen.height/ (float)Screen.width;

		if(game is GameBinh)
			rectTransform.anchoredPosition = new Vector2 (-380, -265*y/720);
		else
			rectTransform.anchoredPosition = new Vector2 (-440, -265*y/720);
	}

	public override void danhbaiTienlen (List<Card> cards, int mc, string nn)
	{
		base.danhbaiTienlen (cards, mc, nn);
		// ngung blinking
		if(this is ThisPlayer) {
			((ThisPlayer)this).fbtn_1.GetComponent<Blinking2>().setBlinking(false);
			((ThisPlayer)this).fbtn_3.GetComponent<Blinking2>().setBlinking(false);
		}

		int length = cards.Count;
		float margin = 0.7f;
		int cw = Card.WIDTH;
		int ch = Card.WIDTH;
		int rnx = ch;
		int rx = (int)((margin * length - margin + 1) * cw / 2 - rnx / 2);
		
		float x = rx + Random.Range (-cw, cw);
		float y = Random.Range (-cw * 2 / 3, cw * 2 / 3);

		for (int i = 0; i < length; i++) {
			Card card = findCardByCode (cards [i].encode ());
			if (card != null) {
				if(card.isSelected)
					card.invertSelected();
				card.rectTransform.SetAsLastSibling ();
				LeanTween.scale (card.rectTransform.gameObject, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
				LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (-x + i * cw * margin, y), 0.4f).setEase (LeanTweenType.easeOutQuart);
				this.cards.Remove (card);
				
				game.lastTurnCards.Add (card);
			}

			Button button = card.rectTransform.GetComponent<Button> ();
			button.onClick.RemoveAllListeners ();
		}

		reArrangeCards ();
	}

	private Card findCardByCode (int code)
	{
		// luu y code dc lay bang card.encode()
		foreach (Card card in this.cards) {
 			if (card.encode ().Equals (code))
				return card;
		}
		return null;
	}

	public void reArrangeCards ()
	{
		for (int i = 0; i< cards.Count; i++) {
			RectTransform rect = cards [i].rectTransform;
			rect.SetAsLastSibling ();
			LeanTween.moveLocalX (rect.gameObject, getInHandCardsPos (i, cards.Count), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}
	}

	public float getInHandCardsPos (int i, int length)
	{
		float THISPLAYER_CARDS_WIDTH_MAX = Game.WIDTH * 0.76f;
		float margin = getMarginCard (length);
		float thisplayer_cards_width = margin * (length - 1) + Card.WIDTH;
		float x = i * margin;
		return x + (Game.WIDTH - THISPLAYER_CARDS_WIDTH_MAX - thisplayer_cards_width) / 2 - 12;// 12 la so pixels de ko bi de vao nut xepbai
	}

	public float getMarginCard ()
	{
		return getMarginCard (cards.Count);
	}

	public float getMarginCard (int length)
	{
		float THISPLAYER_CARDS_WIDTH_MAX = Game.WIDTH * 0.76f;
		float THISPLAYER_CARD_MARGIN_MAX = Card.WIDTH * Card.thisPlayerScale * 0.8f;
		float margin = Card.WIDTH;
		if (length > 1) {
			margin = (THISPLAYER_CARDS_WIDTH_MAX - Card.WIDTH * Card.thisPlayerScale) / (length - 1);
			if (margin > THISPLAYER_CARD_MARGIN_MAX)
				margin = THISPLAYER_CARD_MARGIN_MAX;
		}
		return margin;
	}
	
	public float getInHandCardsPos (Card card)
	{
		int i = cards.IndexOf (card);
		int length = cards.Count;
		return getInHandCardsPos (i, length);
	}

	public override void showCardXiTo (int icard)
	{
		base.showCardXiTo (icard);
		((GameSceneXiTo)gameScene).removeStartGameRequest ();

		float margin = 0.56f;
		for (int i = 0; i<cards.Count; i++) {
			LeanTween.scale (cards [i].rectTransform.gameObject, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			cards [i].rectTransform.GetComponent<Button> ().enabled = false;
			if (cards [i].encode_xito () != icard) {
				// to mau den cho card nay va day vao goc
				cards [i].image.color = new Color32 (160, 160, 160, 255);
				if (i == 1) {
					// doi cho
					int viewIndex = cards [1].rectTransform.GetSiblingIndex ();
					Card c = cards [0];
					c.rectTransform.SetSiblingIndex (viewIndex);
					cards [0] = cards [1];
					cards [1] = c;
				}
			}
		}

		for (int i = 0; i<cards.Count; i++) {
			Vector2 pos = ((GameXiTo)game).getViewPositionOfPlayersCard (this, margin, 1f, i, cards.Count);
			LeanTween.moveLocal (cards [i].rectTransform.gameObject, new Vector3 (pos.x, pos.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		}
	}

	public void countDownReady ()
	{
		// dem nguoc san sang
		countDown ();
	
	}

	public override void onTurnPoker ()
	{
		base.onTurnPoker ();
		gameScene.controllerControl.pokerFuntionsOthersTurn.hide ();
		PokerFuntionsOthersTurn.AutoState autoState = gameScene.controllerControl.getAutoState ();
		Debug.LogWarning ("autoState = " + autoState);
		// 0: check
		// 1: call
		// 2: all in
		int CheckCallOrAllIn = 0;
		int delta = ((IPokerGameLiked)game).maxTotalBetChipOfAPlayer - totalBetChip; 
		// neu tien cuoc cua minh nho hon max tien cuoc thi la call
		// neu tien con lai cua minh 
		if (delta >= ag) {
			CheckCallOrAllIn = 2;
			((IPokerSceneLiked)gameScene).showOnTurnRequest (Strings.instance.gameplay_poker_request_allin);
			fbtn_3.onClick.RemoveAllListeners ();
			fbtn_3.onClick.AddListener (delegate {
				send_AllIn ();
			});
		} else if (delta > 0) {
			CheckCallOrAllIn = 1;
			((IPokerSceneLiked)gameScene).showOnTurnRequest (Strings.instance.gameplay_poker_request_call.Replace ("%value1%", Utils.formatCurrency (delta)));
		} else {
			CheckCallOrAllIn = 0;
			((IPokerSceneLiked)gameScene).showOnTurnRequest (Strings.instance.gameplay_poker_request_checkorbet);
		}

		if (autoState == PokerFuntionsOthersTurn.AutoState.none) {
			gameScene.controllerControl.showPokerFuntionsOnTurn (CheckCallOrAllIn);
		} else if (autoState == PokerFuntionsOthersTurn.AutoState.checkorask) {
			// neu la check thi di tiep
			// khong thi de nguoi choi quyet dinh
			if (CheckCallOrAllIn == 0) {
				send_callOrCheck ();
			} else {
				gameScene.controllerControl.showPokerFuntionsOnTurn (CheckCallOrAllIn);
			}
		} else if (autoState == PokerFuntionsOthersTurn.AutoState.checkorfold) {
			// neu la check thi di tiep
			// khong thi de nguoi choi quyet dinh
			if (CheckCallOrAllIn == 0) {
				send_callOrCheck ();
			} else {
				send_fold ();
			}
		} else if (autoState == PokerFuntionsOthersTurn.AutoState.fold) {
			send_fold ();
		} else if (autoState == PokerFuntionsOthersTurn.AutoState.callany) {
			send_callOrCheck ();
		}
	}

	public override void onTurnTienLen ()
	{
		base.onTurnTienLen ();
		if(e_sendboluot_delayed != null)
			gameScene.StopCoroutine(e_sendboluot_delayed);

		gameScene.controllerControl.tienlenFunctions.showTienLenFuntionsOnTurn (1);
		List<Card> selectCards = new List<Card>();
		if(game is GameSam)
			selectCards = CardUtils.getRecommendCardsSam(game.lastCards, cards);
		if(game is GameTienLen)
			selectCards = CardUtils.getRecommendCardsTienLen(game.lastCards, cards);

		if (selectCards.Count > 1 || 
		    (selectCards.Count == 1 && selectCards[0].N == 15) || 
		    (selectCards.Count == 1 && cards.Count <= 2)) {
			// Hieu ung nhay nut danh bai
			if(fbtn_3!= null)
				fbtn_3.GetComponent<Blinking2>().setBlinking(true);

			foreach (Card card in cards) {
				if (card.isSelected)
					card.invertSelected ();
			}

			foreach (Card card in selectCards) {
				card.invertSelected ();
			}
		}

		if(selectCards.Count == 0) {
			// nhay nut bo luot
			if(fbtn_1!= null)
				fbtn_1.GetComponent<Blinking2>().setBlinking(true);
		}

		if(cards.Count< game.lastCards.Count)
		{
			// an nut danh bai
			fbtn_3.gameObject.SetActive(false);
			
			e_sendboluot_delayed = Utils.cr_runDelayed(3f, delegate {
				send_boluot();
			});
			
			gameScene.StartCoroutine(e_sendboluot_delayed);
		}
		if(game.lastCards.Count<1){
			// minh la nguoi bat dau turn moi, an nut bo luot
			fbtn_1.gameObject.SetActive(false);
		}
	}

	public void send_boluot ()
	{
		var data = new JSONClass ();
		data ["evt"] = "cc";
		GameApplication.cubeia.sendDataGame (data);

		// bo chon tat ca cac cay bai
		foreach (Card card in cards) {
			if (card.isSelected)
				card.invertSelected ();
		}

		if(e_sendboluot_delayed != null)
			gameScene.StopCoroutine(e_sendboluot_delayed);
	}

	public void send_bochon ()
	{
		// bo chon tat ca cac cay bai
		foreach (Card card in cards) {
			if (card.isSelected)
				card.invertSelected ();
		}
		automaticSelectCards ();
	}
	
	public void send_xepbai ()
	{
	}
	
	public void send_danhbai ()
	{
		JSONArray jarr = new JSONArray ();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				jarr [-1].AsInt = card.encode_tienlen ();
			}
		}

		var data = new JSONClass ();
		data ["evt"] = "dc";
		data ["Arr"] = jarr;
		GameApplication.cubeia.sendDataGame (data);

		fbtn_1.GetComponent<Blinking2>().setBlinking(false);
		fbtn_3.GetComponent<Blinking2>().setBlinking(false);
	}

	void send_fold ()
	{
		var data = new JSONClass ();
		data ["evt"] = "bd";
		GameApplication.cubeia.sendDataGame (data);
	}

	void send_callOrCheck ()
	{
		var data = new JSONClass ();
		data ["evt"] = "bt";
		GameApplication.cubeia.sendDataGame (data);
	}

	void send_raiseOrBet (int plusValue)
	{
		var data = new JSONClass ();
		data ["evt"] = "bm";
		data ["M"].AsInt = plusValue;
		GameApplication.cubeia.sendDataGame (data);
	}

	void send_AllIn ()
	{
		var data = new JSONClass ();
		data ["evt"] = "ba";
		GameApplication.cubeia.sendDataGame (data);
	}

	void send_autoExit ()
	{
		var data = new JSONClass ();
		data ["evt"] = "autoExit";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void automaticSelectCards ()
	{
		
	}

	public override Vector2 getChatsPos ()
	{
		Vector2 playerPos = rectTransform.anchoredPosition;
		return new Vector2 (playerPos.x + 15, playerPos.y + 100);
	}

	public override void finishTienLen (int v, int ag, int winnings, int d, JSONArray jcards)
	{
		base.finishTienLen (v, ag, winnings, d, jcards);

		// stop blinking
		fbtn_1.GetComponent<Blinking2>().setBlinking(false);
		fbtn_3.GetComponent<Blinking2>().setBlinking(false);

		// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
		if (game.stake != 5)
			GameApplication.user.ag = ag;
	}

	public override void finishDummy (int v, int ag, int d, int mark, JSONArray jcards)
	{
		base.finishDummy (v, ag, d, mark, jcards);
	}

	public override void finishTala (int v, int ag, int d, int mark, JSONArray jcards)
	{

		// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
		if (game.stake != 5){
			GameApplication.user.ag = ag;
		}

		base.finishTala (v, ag, d, mark, jcards);
		for (int i = cards.Count - 1; i >= 0; i--) {
			Card card = cards [i];
			card.rectTransform.GetComponent<Image> ().color = new Color32 (120, 120, 120, 255);
			card.rectTransform.SetAsFirstSibling ();
		}
	}

	public override void finishXocDia (int result, int agwin, int ag)
	{
		base.finishXocDia (result, agwin, ag);
		if (game.stake != 5)
			GameApplication.user.ag = ag;
	}

	public override void finishPoker (int s, int ag, int winnings, JSONArray jcards, JSONArray jcardsWin)
	{
		base.finishPoker (s, ag, winnings, jcards, jcardsWin);
		// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
		if (game.stake != 5)
			GameApplication.user.ag = ag;

		gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
			if (game != null && game.state == Game.State.WAITING) {
				foreach (Card card in cards) {
					GameObject.Destroy (card.rectTransform.gameObject);
				}
				cards.Clear ();
			}
		}));
	}

	public override void finishXiTo (int ag, int winnings, JSONArray jcards)
	{
		base.finishXiTo (ag, winnings, jcards);
		// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
		if (game.stake != 5)
			GameApplication.user.ag = ag;

		gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
			if (game != null && game.state == Game.State.WAITING) {
				foreach (Card card in cards) {
					GameObject.Destroy (card.rectTransform.gameObject);
				}
				cards.Clear ();
			}
		}));
	}

	public override void finishLieng (int ag, int winnings, JSONArray jcards)
	{
		base.finishLieng (ag, winnings, jcards);
		// neu muc cuoc la 5, ko ghi nhan ket qua thi dau
		if (game.stake != 5)
			GameApplication.user.ag = ag;

		gameScene.StartCoroutine (Utils.cr_runDelayed (5f, delegate {
			if (game != null && game.state == Game.State.WAITING) {
				foreach (Card card in cards) {
					GameObject.Destroy (card.rectTransform.gameObject);
				}
				cards.Clear ();
			}
		}));
	}

	//*******************************Binh*******************************
	public Vector3 getInHandCardsPosBinh (int i)
	{
		float margin_X = 0.2f;
		float margin_Y = 0.15f;
		float x = -(4 * (1f - margin_X) + 1) * Card.WIDTH * Card.thisPlayerScaleBinh * 0.5f + Card.WIDTH * Card.thisPlayerScaleBinh;
		float y = 0;
		float left;
		float k_margin = 4f;
		if (i < 3) {
			left = (i) * Card.WIDTH * Card.thisPlayerScaleBinh * (1f - margin_X);
			y = Game.HEIGHT * 0.04f; //Toa do y so voi tam man hinh (0,0) 
		} else if (i >= 3 && i < 8) {
			left = (i-3) * Card.WIDTH * Card.thisPlayerScaleBinh * (1f - margin_X);
			y = Game.HEIGHT * 0.04f - (Card.HEIGHT * Card.thisPlayerScaleBinh * (1f - margin_Y) );
		} else {
			left = (i-8) * Card.WIDTH * Card.thisPlayerScaleBinh * (1f - margin_X);
			y = Game.HEIGHT * 0.04f - (2 * Card.HEIGHT * Card.thisPlayerScaleBinh * (1f - margin_Y) );
		}
		return new Vector3 (x + left, y, i);
	}
	
	public Vector3 getInHandCardsPosBinh (Card card)
	{
		int i = cards.IndexOf (card);
		int length = cards.Count;
		if (i < 3)
			card.indexChi_Binh = 3;
		else if (i >= 3 && i < 8)
			card.indexChi_Binh = 2;
		else
			card.indexChi_Binh = 1;
		return getInHandCardsPosBinh (i);
	}

	public override void finishBinh (int v, int ag, int winnings, JSONArray jcards)
	{
		base.finishBinh (v, ag, winnings, jcards);
		if (game.stake != 5)
			GameApplication.user.ag = ag;
	}

	public void betXocDia (string money, string cua)
	{
		var data = new JSONClass ();
		data ["evt"] = "bet";
		data ["M"] = money;
		data ["N"] = cua;
		GameApplication.cubeia.sendDataGame (data);
	}

	public void sendLamCai ()
	{
		var data = new JSONClass ();
		data ["evt"] = "dealer";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void bancua ()
	{
		var data = new JSONClass ();
		data ["evt"] = "sellbet";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void muacua ()
	{
		var data = new JSONClass ();
		data ["evt"] = "buybet";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void unbetXocDia ()
	{
		var data = new JSONClass ();
		int unbet = 0;
		data ["evt"] = "unbet";
		data ["N"].AsInt = unbet;
		GameApplication.cubeia.sendDataGame (data);
	}

	public void huybancua ()
	{
		var data = new JSONClass ();
		data ["evt"] = "cancelsell";
		GameApplication.cubeia.sendDataGame (data);
	}

	public override void showCardsInHandByReconnectionTienLen (JSONArray jcards)
	{
		base.showCardsInHandByReconnectionTienLen(jcards);
		cards.Clear ();
		for (int i = 0; i < jcards.Count; i++) {
			cards.Add (Card.decode_tienlen (jcards [i].AsInt));
		}
		
		setOnPlayingPosition (); // co le hoi thua, vi da lam o updateAllPlayersPosition

		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			float x = getInHandCardsPos (card);
			float y = GameScene.thisPlayerCardInHandPosY;
			card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent (gameScene.cardLayer.transform, false);
			card.rectTransform.localScale = new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f);
			card.rectTransform.anchoredPosition = new Vector2 (x, y);
			
			Button button = card.rectTransform.GetComponent<Button> ();
			button.onClick.RemoveAllListeners ();
			button.onClick.AddListener (delegate {
				card.invertSelected ();
				// bo nhay nut danh bai
				fbtn_3.GetComponent<Blinking2>().setBlinking(false);
			});
		}
	}


	/******************** Ta La **********************/
	public override void danhTaLa (Card card, string nn, int jsonA)
	{
		int vitricaybai = baidadanh_tala.Count;
		Vector2 target = getVitriBaiDanhTaLa (vitricaybai, baidadanh_tala.Count + 1);
		
		Card card2 = findCardByCode (card.encode ());
		if (card2 != null) {
			card2.rectTransform.SetAsLastSibling ();
			//card.rectTransform.localScale = new Vector3 (1.65f, 1.65f, 1f);
			LeanTween.scale (card2.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card2.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			this.cards.Remove (card2);
			//cards[2].rectTransform.SetSiblingIndex();

			card2.removeEventTriggerTaLa ();
			card2.rectTransform.GetComponent<Button> ().onClick.RemoveAllListeners ();
		} else {
			Debug.LogError ("Khong tim thay bai tren tay this Player");
			return;
		}
		
		reArrangeCards ();
		base.danhTaLa (card2, nn, jsonA);

		xepbaidadanh_tala ();
	}
	
	public override void bocbaiTaLa (Card card)
	{
		base.bocbaiTaLa (card);

		card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
		card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		card.rectTransform.SetParent (gameScene.cardLayer.transform, false);
		card.rectTransform.anchoredPosition = new Vector2 (0, 0);
		card.addEventTriggerTaLa ();

		GameSceneTaLa gstala = (GameSceneTaLa)gameScene;

		cards.Add (card);
		float x = getInHandCardsPos (card);
		float y = GameScene.thisPlayerCardInHandPosY;
		LeanTween.scale (card.rectTransform.gameObject, new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (x, y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		reArrangeCards ();
		//Kiem tra va ha bai tu dong

		if (gstala.checkHaBai ()) {
			countDown(50);
			Debug.Log ("ha bai di");
//			gstala.showHabaitudong ();
			int type = 2;
			if(listphomha.Count>0)
				type = 4;
			gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (type);
//			gameScene.StartCoroutine (Utils.cr_runDelayed (6f, delegate {
//				send_habaitudong ();
//				int xtype = 1;
//				if(baidaha_tala.Count>0)
//					xtype = 3;
//				gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (xtype);	
//			}));
		} else {
			int time = 20;
			if(((GameTaLa)game).giaidoanhabai)
				time = 40;
			countDown(time);
		}

		gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (1);
	}
	
	public override Card anbaiTaLa (int code)
	{
		Card card = base.anbaiTaLa (code);
		card.rectTransform.FindChild ("Image").GetComponent<Image> ().enabled = true;
		card.addEventTriggerTaLa ();
		cards.Add (card);

		GameSceneTaLa gstala = (GameSceneTaLa)gameScene;

		float x = getInHandCardsPos (card);
		float y = GameScene.thisPlayerCardInHandPosY;
		//Debug.Log (game.getViewIndexOfPlayer (nguoichoitruoc).ToString());
		
		LeanTween.scale (card.rectTransform.gameObject, new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (x, y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		reArrangeCards ();
		//kiem tra va ha bai tu dong

		if (gstala.checkHaBai ()) {
			countDown(50);
			Debug.Log ("ha bai di");
			int type = 2;
			if(listphomha.Count>0)
				type = 4;
			gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (type);
//			gameScene.StartCoroutine (Utils.cr_runDelayed (6f, delegate {
//				send_habaitudong ();
//				int xtype = 1;
//				if(baidaha_tala.Count>0)
//					xtype = 3;
//				gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (xtype);	
//			}));
		} else {
			int time = 20;
			if(((GameTaLa)game).giaidoanhabai)
				time = 40;
			countDown(time);
		}

		gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (1);

		return card;
	}

	public override void guibaiTaLa(string player_nhan, List<Card> cards_gui)
	{
		List<Card> my_cards_gui = new List<Card>();
		for(int i = 0; i< cards_gui.Count; i++){
			my_cards_gui.Add(findCardByCode(cards_gui[i].encode()));
		}
		base.guibaiTaLa (player_nhan, my_cards_gui);

		reArrangeCards();
	}


	public override void guibaiDummy(string player_nhan, Card card, List<Card> cards_gui, int CM, int NNCM)
	{
		card = findCardByCode(card.encode());
		base.guibaiDummy (player_nhan, card, cards_gui, CM, NNCM);
		
		reArrangeCards();

		GameDummy game_dummy = (GameDummy)game;
		game_dummy.thisPlayerDaBocBai = true; // khong the boc sau khi gui
		game_dummy.cardInAutoSelectModeGui = false;
		game_dummy.cardInAutoSelectModeHa = false;

		kiemtrahaguiDummy ();
	}


	public override void habaiTaLa (List<Card> cards)
	{
		base.habaiTaLa (cards);
		Vector2 target = new Vector2 ();
		target = getVitriHaPhom (phomIndex);

		List<Card> phom = new List<Card> ();
		for (int i=0; i < cards.Count; i++) {
			Card card = cards [i];
			card = findCardByCode (card.encode ());
			phom.Add (card);
			LeanTween.scale (card.rectTransform, new Vector3 (1f, 1f, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x + i * 30f, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			card.rectTransform.SetAsLastSibling ();
			card.removeEventTriggerTaLa ();
			this.cards.Remove (card);
		}
		listphomha.Add (phom);
		reArrangeCards ();

		// show nut
		gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (4);
	}

	public void hienbaitrentay_tala (JSONArray jcards)
	{
		cards.Clear();
		for(int i = 0; i<jcards.Count; i++){
			int code = jcards[i].AsInt;
			Card card = Card.decode_tala(code > 100 ? (code - 100) : code);
			card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(gameScene.cardLayer.transform, false);
			card.rectTransform.localScale = new Vector3(Card.thisPlayerScale, Card.thisPlayerScale, 1f);
			cards.Add(card);
			if(code > 100){
				baidaan_tala.Add(card);
				card.rectTransform.FindChild ("Image").GetComponent<Image> ().enabled = true;
			}

			
			float x = getInHandCardsPos(i, jcards.Count);
			float y = GameSceneTaLa.thisPlayerCardInHandPosY;
			card.rectTransform.anchoredPosition = new Vector2(x, y);

			card.addEventTriggerTaLa();
		}
	}
	
	public void initializeTaLaButtons ()
	{
		fbtn_1 = gameScene.controllerControl.talaFuntions.btnHabai;
		fbtn_2 = gameScene.controllerControl.talaFuntions.btnDanhbai;
		fbtn_3 = gameScene.controllerControl.talaFuntions.btnXepbai;
		fbtn_4 = gameScene.controllerControl.talaFuntions.btnGuibai;
		fbtn_1.onClick.RemoveAllListeners ();
		fbtn_2.onClick.RemoveAllListeners ();
		fbtn_3.onClick.RemoveAllListeners ();
		fbtn_4.onClick.RemoveAllListeners ();

		fbtn_1.onClick.AddListener (delegate {
			send_habaitala ();
		});
		fbtn_2.onClick.AddListener (delegate {
			send_danhtala ();
		});
		fbtn_3.onClick.AddListener (delegate {
			((GameTaLa)game).cardsort1 = !((GameTaLa)game).cardsort1;
			if (((GameTaLa)game).cardsort1) {
				cards.Sort (CardUtils.ComparisionTala1);
			} else {
				cards.Sort (CardUtils.ComparisionTala2);
			}
			reArrangeCards ();
		});
		fbtn_4.onClick.AddListener (delegate {
			send_guibaiTala();
		});
		
	}

	public override void onTurnTaLa (int time = 11)
	{
		base.onTurnTaLa (time);
		gameScene.controllerControl.talaFuntions.showTaLaFuntionsOnTurn (1);
	}

	public void send_danhtala ()
	{
		if(listphomha.Count<1 && baidadanh_tala.Count >= 3)
			send_habaitudong();

		JSONArray jarr = new JSONArray ();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				jarr [-1].AsInt = card.encode_tala ();
			}
		}
		var data = new JSONClass ();
		data ["evt"] = "dc";
		data ["C"] = jarr;
		GameApplication.cubeia.sendDataGame (data);
	}
	
	public void send_anbaitala (int code)
	{
		JSONArray jarr = new JSONArray ();
		jarr [0].AsInt = code;
		var data = new JSONClass ();
		data ["evt"] = "ac";
		data ["C"] = jarr;
		GameApplication.cubeia.sendDataGame (data);
	}
	
	public void send_habaitala ()
	{
		List<int> list = new List<int>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				list.Add(card.encode_tala ());
			}
		}
		list.Sort();

		JSONArray jarr = new JSONArray ();
		foreach(int i in list){
			Debug.Log(i + "");
			jarr[-1].AsInt = i;
		}

		if(jarr.Count > 0){
			var data = new JSONClass ();
			data ["evt"] = "hc";
			JSONArray inner = new JSONArray();
			inner.Add(jarr);
			data ["Arr"] = inner;
			GameApplication.cubeia.sendDataGame (data);
		} else {
			send_habaitudong();
		}
	}

	public void send_bocbaitala ()
	{
		Debug.Log ("gui boc bai");
		var data = new JSONClass ();
		data ["evt"] = "bc";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void send_bocbaidummy ()
	{
		send_bocbaitala ();
	}

	public void send_ungayDummy(){
		var data = new JSONClass ();
		data ["evt"] = "finishU";
		GameApplication.cubeia.sendDataGame (data);
	}

	public void send_habaitudong ()
	{
		var data = new JSONClass ();
		data ["evt"] = "autod";
		GameApplication.cubeia.sendDataGame (data);
	}

	void send_guibaiTala ()
	{
		List<int> list = new List<int>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				list.Add(card.encode_tala ());
			}
		}
		list.Sort();
		
		JSONArray jarr = new JSONArray ();
		foreach(int i in list)
			jarr [-1].AsInt = i;
		
		if(jarr.Count > 0){
			var data = new JSONClass ();
			data ["evt"] = "gc1";
			data ["Arr"] = jarr;
			GameApplication.cubeia.sendDataGame (data);
		} else {
			var data = new JSONClass ();
			data ["evt"] = "autoa";
			GameApplication.cubeia.sendDataGame (data);
		}
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
		Debug.Log("code :"+ code);
		CardChan card = findCardInList(code, chan_cards);
//		Debug.LogError("card "+ card.getResourceName() + " "+ card.code);
		if(card != null)
			Debug.Log("card null");
		else 
			Debug.Log("card not null");

		if(card != null)
			Debug.Log("card null");
		else 
			Debug.Log("card not null");
		card.rectTransform.GetComponent<Button>().enabled = false;
//		lastCard = card;
		Player pl = game.getPlayer(nd);
		List<CardChan> cards_2 = pl.chan_cards2;
		
		cards_2.Add(card);
		chan_cards.Remove(card);
//		card.setOnClickListener(null);

		CardChan selectedCard = gameScene.controllerControl.chanFuntions.selectedCard;
		if (selectedCard != null) {
			selectedCard.isSelected = false;
			selectedCard = null;
		}

		// view part
		if (cards_2.Count > 1) {
//			ObjectAnimator.ofFloat(cards_2.get(cards_2.size() - 2), "scaleX", 1).start();
//			ObjectAnimator.ofFloat(cards_2.get(cards_2.size() - 2), "scaleY", 1).start();
		}

		Vector2 target = ((GameChan)game).getCard2Pos(pl, cards_2.Count - 1);
		card.rectTransform.pivot = new Vector2(0.5f, 0.5f);
		LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(target.x, target.y, 0), 0.3f).setEase(LeanTweenType.easeInBack);
		LeanTween.scale(card.rectTransform.gameObject, Vector3.one, 0.3f);
		LeanTween.scale(card.rectTransform.gameObject, CardChan.lastCardScale, 0.3f);
		LeanTween.rotateZ(card.rectTransform.gameObject, 0f, 0.3f);

		card.isSelected = false;

		((GameChan)game).lastCardChan = card;

		// xep lai bai tren tay
		((GameSceneChan)gameScene).reOrderThisPlayerCard();

		gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(0);


	}

	public override void anbaiChan (int cc1, int cc2, string fname = "")
	{
		// luu y co 2 truong hop:
		// 1. an bai trong card2 cua lplayer
		// 2. an bai trong card1 cua minh
		base.anbaiChan (cc1, cc2, fname);
		gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn (2);

		CardChan selectedCard = gameScene.controllerControl.chanFuntions.selectedCard;
		if (selectedCard != null) {
			selectedCard.isSelected = false;
			selectedCard = null;
		}

		// logic part
		CardChan card1, card2;

		Player fplayer = getPreviousPlayer();
		if(!string.IsNullOrEmpty(fname))
			fplayer = game.getPlayer(fname);
		
		List<CardChan> lp_cards2 = fplayer.chan_cards2;
		// co truong hop 2 cay deu trong tay cua minh, lp_card2 thi ko co cay nao.
		if(lp_cards2.Count > 0)
			card1 = lp_cards2[lp_cards2.Count - 1];
		else
			card1 = null;

		if (card1 != null && card1.code == cc1) {
			card2 = findCardInList(cc2, chan_cards);
			lp_cards2.Remove(card1);
		} else if (card1 != null && card1.code == cc2) {
			card2 = findCardInList(cc1, chan_cards);
			lp_cards2.Remove(card1);
		} else {
			card1 = findCardInList(cc1, chan_cards2);
			if(card1 != null){
				card2 = findCardInList(cc2, chan_cards);
			} else {
				card1 = findCardInList(cc2, chan_cards2);
				card2 = findCardInList(cc1, chan_cards);
			}

			if(card1 != null) {
				chan_cards2.Remove(card1);
			} else {
				// truong hop chiu bai, co khi ca cc1 va cc2 deu nam trong chan_cards
				card1 = findCardInList(cc1, chan_cards);
				card2 = findCardInList(cc2, chan_cards);

				chan_cards.Remove(card1);
			}
		}

		chan_cards.Remove(card2);

		card1.rectTransform.GetComponent<Button>().enabled = false;
		card2.rectTransform.GetComponent<Button>().enabled = false;

		chan_cards1.Add(card1);
		chan_cards1.Add(card2);

		// view part
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

		LeanTween.rotateZ(card1.rectTransform.gameObject, 0, 0.3f);
		LeanTween.rotateZ(card2.rectTransform.gameObject, 0, 0.3f);

		((GameSceneChan)gameScene).reOrderThisPlayerCard();
	}

	public override void duoibaiChan (string nn, int acode)
	{
//		selectedCard = null;
		base.duoibaiChan (nn, acode);

		CardChan selectedCard = gameScene.controllerControl.chanFuntions.selectedCard;
		if (selectedCard != null) {
			selectedCard.isSelected = false;
			selectedCard = null;
		}

		gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(0);
	}

	public override void habaiuChan (JSONArray jarr, int cc1, int cc2, int chiuu)
	{
		base.habaiuChan (jarr, cc1, cc2, chiuu);

//		synchronized (monitor) {
//			monitor.notifyAll();
//		}
		float waitTime = 0f;
		if (chan_cards.Count < 1) {
			// trường hợp chia cái ù luôn
//			startGameChan(jarr);
			gameScene.showToast("Chia phat u luon, xem log di");
			// đợi 2s cho hiệu ứng chia xong
			waitTime = 2.2f;
		}

		gameScene.showToast ("Bạn chờ ù con bài " + CardChan.getName(cc2));
		LeanTween.delayedCall(1.2f, delegate(object obj) {
			showXuongU(cc1, cc2, chiuu);
		});
		gameScene.controllerControl.chanFuntions.showChanFuntionsOnTurn(0);

	}

	// tcode: cay bai vua boc duoc lam cho u
	// int xcode: cay bai tren tay ghep doi voi cay bai tren
	// xcode==0 -> tu tim
	public void showXuongU(int xcode, int tcode, int chiuu) {
		GameSceneChan gs = (GameSceneChan)gameScene;
		ChanFunction chanFuntions = gameScene.controllerControl.chanFuntions;
		// view part
		//		deckImg.setVisibility(View.INVISIBLE);
		List<int> listCuocUDaChon = new List<int>();
		chanFuntions.xuongu_panel.SetActive(true);
		chanFuntions.xuongu_dialog.SetActive(true);
		chanFuntions.btntdxuong.gameObject.SetActive(true);
		chanFuntions.btnxuong.gameObject.SetActive(true);
		
		foreach(RectTransform rect in chanFuntions.cuoc_content){
			GameObject.Destroy(rect.gameObject);
		}
		
		for(int i = 0; i < gs.danhSachCuocU_showup.Length; i++){
			RectTransform cuocUItem;

			cuocUItem = GameObject.Instantiate<RectTransform>(chanFuntions.pfCuocUItem);
			cuocUItem.SetParent(chanFuntions.cuoc_content, false);
			cuocUItem.FindChild("Name").GetComponent<Text>().text = gs.danhSachCuocU_showup[i];
			
			int position = i;
			cuocUItem.GetComponent<Button>().onClick.AddListener(delegate {
				// do something
				int pos = position; // dat bien rieng de ko lam anh huong den bien chung
				if ((pos + 1) == 17 || (pos + 1) == 18) {
					// 17 lèo, 19 tôm
					if ((pos + 1) > 17)
						++pos;
					if (listCuocUDaChon.Contains(pos)) {
						listCuocUDaChon.Remove(pos);
						listCuocUDaChon.Add(pos + 1);
					} else if (listCuocUDaChon.Contains(pos + 1)) {
						listCuocUDaChon.Remove(pos + 1);
						if (listCuocUDaChon.Count < 1) {
							listCuocUDaChon.Add(0);
						}
					} else {
						listCuocUDaChon.Add(pos);
						if (listCuocUDaChon.Contains(0)) {
							listCuocUDaChon.Remove(0);
						}
					}
				} else if ((pos + 1) == 1) {
					// 1 là xuông
					listCuocUDaChon.Clear();
					listCuocUDaChon.Add(pos);
				} else {
					if ((pos + 1) > 18)
						pos += 2;
					if (listCuocUDaChon.Contains(pos)) {
						listCuocUDaChon.Remove(pos);
						if (listCuocUDaChon.Count < 1) {
							listCuocUDaChon.Add(0);
						}
					} else {
						listCuocUDaChon.Add(pos);
						if (listCuocUDaChon.Contains(0)) {
							listCuocUDaChon.Remove(0);
						}
					}
				}
				// update cước ù
				chanFuntions.tvcuoc.text = "";
				foreach (int item in listCuocUDaChon)
					chanFuntions.tvcuoc.text += (gs.danhSachCuocU[item] + " ");
			});
		}
		if (((GameChan)game).denlang == 0 || GameApplication.DEBUG_ON){
			chanFuntions.btntdxuong.gameObject.SetActive(true);
			chanFuntions.btntdxuong.onClick.RemoveAllListeners();
			chanFuntions.btntdxuong.onClick.AddListener(delegate {
				JSONClass obj = new JSONClass();
				obj["evt"] = "autoX";
				gameScene.cubeia.sendDataGame(obj);
			});
		} else {
			chanFuntions.btntdxuong.gameObject.SetActive(false);
		}

		chanFuntions.btnxuong.onClick.RemoveAllListeners();
		chanFuntions.btnxuong.onClick.AddListener(delegate {
			JSONArray jarr = new JSONArray();
			foreach (int p in listCuocUDaChon) {
				jarr[-1].AsInt = p + 1;
			}
			
			if(jarr.Count < 1){
				gameScene.showInfoDialog("Bạn chưa chọn Cước Ù");
				return;
			}
			
			JSONClass obj = new JSONClass();
			obj["evt"] = "fg";
			obj["S"] = jarr;
			gameScene.cubeia.sendDataGame(obj);
		});
		
		//		// update cước ù mặc định
		listCuocUDaChon.Add(0);
		chanFuntions.tvcuoc.text = "";
		
		foreach (int i in listCuocUDaChon)
			chanFuntions.tvcuoc.text += (gs.danhSachCuocU[i] + " ");
		
		//		// back to logical part
		
		// trường hợp chia bài ù luôn thì tìm được tcard
		CardChan tcard = findCardInList(tcode, chan_cards);
		if (tcard == null) {
			tcard = CardChan.decode(tcode);
			tcard.rectTransform = GameObject.Instantiate<RectTransform>(gs.TransformCardChan);
			tcard.rectTransform.SetParent(gs.cardLayer, false);
			//			lastCard = tcard;
		}
		
		foreach (CardChan ccard in chan_cards) {
			ccard.rectTransform.GetComponent<Button>().onClick.RemoveAllListeners();
			ccard.rectTransform.localScale = Vector3.one;
			ccard.image.color = new Color32(255,255,255,255);
		}
		foreach (CardChan ccard in chan_cards1) {
			ccard.rectTransform.localScale = Vector3.one;
			ccard.image.color = new Color32(255,255,255,255);
		}
		
		// xep ve 3 dong
		// lấy đôi làm ù, nên nhớ cây cuối cùng trong cards là cây lẻ + ba
		// đầu
		List<CardChan> l_cards = new List<CardChan>();
		CardChan xcard = null;
		if (xcode > 0) {
			Debug.Log("CH step 1 xcode: "+ xcode+ " name: "+CardChan.getName(xcode));

			xcard = findCardInList(xcode, chan_cards, sameisok: true);
			Debug.Log("CH step xcard: "+ xcard.code);
		} else {
			Debug.Log("CH step 2");
			List<CardChan> s3cards = chan_cards.GetRange(chan_cards.Count - 3, 3);
			foreach (CardChan ccard in s3cards) {
				if (ccard.code == tcard.code) {
					xcard = ccard;
					break;
				}
			}
			if (xcard == null) {
				Debug.Log("CH step 3");
				xcard = chan_cards[chan_cards.Count - 1];
			}
		}
		
		l_cards.Add(xcard);
		l_cards.Add(tcard);
		
		chan_cards.Remove(xcard);

		// xếp hai cây cuối
		// kiem tra chiu u
		if (chiuu == 1) {
			int count  = 0;
			int ucode = ((tcode - 1) / 4) * 4;
			CardChan c1 = findCardInList(ucode + 1, chan_cards);
			if (c1 != null)
				l_cards.Add(c1);
			CardChan c2 = findCardInList(ucode + 2, chan_cards);
			if (c2 != null)
				l_cards.Add(c2);
			CardChan c3 = findCardInList(ucode + 3, chan_cards);
			if (c3 != null)
				l_cards.Add(c3);
			CardChan c4 = findCardInList(ucode + 4, chan_cards);
			if (c4 != null)
				l_cards.Add(c4);
			
			if (c1 != null){
				chan_cards.Remove(c1);
				count ++;
			}
			if (c2 != null){
				chan_cards.Remove(c2);
				count ++;
			}
			if (c3 != null){
				chan_cards.Remove(c3);
				count ++;
			}
			if (c4 != null){
				chan_cards.Remove(c4);
				count ++;
			}

			Debug.Log("Added: "+ count);
		}
		xepbaiu(l_cards, 3);
		
		chan_cards.AddRange(chan_cards1);
		chan_cards1.Clear();
		chan_cards.Sort(CardUtils.ComparisionChan);
		List<CardChan> bo_chan = new List<CardChan>();
		List<CardChan> bo_ca = new List<CardChan>();
		CardChan curCard;
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
		if (chan_cards.Count > 1) {
			candidateCard = chan_cards[0];
			for (int i = 1; i < chan_cards.Count; i++) {
				curCard = chan_cards[i];
				if (curCard.N == candidateCard.N) {
					bo_ca.Add(candidateCard);
					bo_ca.Add(curCard);
					i += 1;
					if (i < chan_cards.Count)
						candidateCard = chan_cards[i];
				} else {
					candidateCard = curCard;
				}
			}
			xepbaiu(bo_ca, 2);
		}
		// xướng ù
//		startTurnCounting(4);
		countDown(35);
		
		// tổng hợp tất cả các cây trên vào thisPlayer.cards
		chan_cards.AddRange(chan_cards); // bo_chan moi dung, co' le ko can dung den chan_cards de remove card after finish
		chan_cards.AddRange(bo_ca);
		chan_cards.AddRange(l_cards);

		// dua lcards len dau
		foreach(CardChan cc in l_cards)
			cc.rectTransform.SetAsLastSibling();

		// xóa các cây bài không liên quan
		foreach (Player pl in game.players) {
			foreach (CardChan ccard in pl.chan_cards1) {
				GameObject.Destroy(ccard.rectTransform.gameObject);
			}
			foreach (CardChan ccard in pl.chan_cards2) {
				GameObject.Destroy(ccard.rectTransform.gameObject);
			}
			pl.chan_cards1.Clear();
			pl.chan_cards2.Clear();
		}
	}

	public override void kg(int m, JSONArray arrMark, string C, string CC, int G) {
		base.kg(m, arrMark, C, CC, G);

		gameScene.controllerControl.chanFuntions.xuongu_panel.SetActive(false);
		gameScene.controllerControl.chanFuntions.btnxuong.gameObject.SetActive(false);
		gameScene.controllerControl.chanFuntions.btntdxuong.gameObject.SetActive(false);

		LeanTween.delayedCall(4f, delegate(object obj) {
			GameObject g = gameScene.controllerControl.chanFuntions.xuongu_dialog;
			if(g != null && g.activeSelf)
				g.SetActive(false);
		});
	}

	/*********************** GAME DUMMY ************************/

	public void initializeDummyButtons ()
	{
		DummyFunction function = gameScene.controllerControl.dummyFuntions;

		fbtn_1 = function.btnHabai;
		fbtn_2 = function.btnDanhbai;
		fbtn_3 = function.btnXepbai;
		fbtn_4 = function.btnGuibai;
		fbtn_1.onClick.RemoveAllListeners ();
		fbtn_2.onClick.RemoveAllListeners ();
		fbtn_3.onClick.RemoveAllListeners ();
		fbtn_4.onClick.RemoveAllListeners ();
		
	}

 	public void send_danhdummy()
	{
//		if(baidaha_tala.Count<1 && baidadanh_tala.Count >= 3)
//			send_habaitudong();
		Debug.Log ("send_danhdummy");
		
		JSONArray jarr = new JSONArray ();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				jarr [-1].AsInt = card.encode_dummy ();
			}
		}

		var data = new JSONClass ();
		data ["evt"] = "dc";
		data ["C"] = jarr;
		GameApplication.cubeia.sendDataGame (data);
	}

	public void send_guibaidummy ()
	{
		List<int> list = new List<int>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				list.Add(card.encode_dummy ());
			}
		}
		list.Sort();
		
		JSONArray jarr = new JSONArray ();
		foreach(int i in list)
			jarr [-1].AsInt = i;
		
		if(jarr.Count == 1){
			var data = new JSONClass ();
			data ["evt"] = "gc";
			data ["C"].AsInt = jarr[0].AsInt;
			data ["T"].AsInt = 1;
			GameApplication.cubeia.sendDataGame (data);
		}

		if(jarr.Count == 1){
			var data = new JSONClass ();
			data ["evt"] = "gc";
			data ["C"].AsInt = jarr[0].AsInt;
			data ["T"].AsInt = 0;
			GameApplication.cubeia.sendDataGame (data);
		}
	}

	public void send_habaidummy ()
	{
		Debug.Log ("send_habaidummy");
		List<int> list = new List<int>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) {
				Debug.Log ("Add "+ card.encode_dummy () );
				list.Add(card.encode_dummy ());
			}
		}
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		for (int i = 0; i < gdm.baitrenban.Count; i++) {
			Card card = gdm.baitrenban [i];
			if (card.isSelected) {
				Debug.Log ("Add "+ card.encode_dummy () );
				list.Add(card.encode_dummy ());
			}
		}
		list.Sort();
		// neu chua co cay nao chon thi chon tu dong.
		// update: dam bao luon co mot phom o vi tri nay
//		if (list.Count < 3) {
//			autoselectphom_dummy();
//		} else {
			JSONArray jarr = new JSONArray ();
			foreach (int i in list) {
				Debug.Log (i + "");
				jarr [-1].AsInt = i;
			}
		
			if (jarr.Count > 0) {
				var data = new JSONClass ();
				data ["evt"] = "hc";
				data ["Arr"] = jarr;
				GameApplication.cubeia.sendDataGame (data);
			} else {
				send_habaitudong ();
			}
//		}
	}
	
	public void chonguitudong_dummy(bool notvalid = false) {
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		GameDummy _game = (GameDummy)game;
		_game.potentialGui.Clear ();
		if (listphomha.Count < 1)
			return;

		if (notvalid)
			return;

		// ghep thu voi cac phom tren ban
		foreach(Card icard in cards){
			foreach(Player player in game.players) {
				foreach(List<Card> phom in player.listphomha){
					// ghep
					List<Card> phommoi = new List<Card>();
					phommoi.AddRange(phom);
					phommoi.Add(icard);

					// check xem phom moi co phai tu quy ko
					if(phommoi.Count == 4 
					   && phommoi[0].N == phommoi[1].N
					   && phommoi[0].N == phommoi[2].N
					   && phommoi[0].N == phommoi[3].N ) {
						_game.potentialGui.Add(icard);
						continue;
					}

					// check xem co phai la day khong
					if(phommoi.Count >= 4) {
						phommoi.Sort((Card x, Card y) => {
							int xN = (x.N == 15) ? 2 : x.N;
							int yN = (y.N == 15) ? 2 : y.N;
							if(x.S == y.S) {
								return xN - yN;
							} else {
								return x.S - y.S;
							}
						});

						int maxN = phommoi[phommoi.Count - 1].N;
						maxN = (maxN == 15 )? 2: maxN;
						int minN = phommoi[0].N;
						minN = (minN == 15 )? 2: minN;

						if(phommoi[phommoi.Count - 1].S == phommoi[0].S
						   && (maxN - minN + 1 == phommoi.Count)){
							// la sanh
							_game.potentialGui.Add(icard);
						}
					}
				}
			}
		}
	}

	public void autoselectgui_dummy(Card xcard = null) {
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		GameDummy _game = (GameDummy)game;
		
		List<Card> preselecteds = new List<Card>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) preselecteds.Add(card);
		}
		for (int i = 0; i < gdm.baitrenban.Count; i++) {
			Card card = gdm.baitrenban [i];
			if (card.isSelected) boChonBaiDummy(card);
		}

		if (xcard == null) {
			// tu dong chon nhung cay gui duoc
			if(preselecteds.Count > 0) {
				foreach(var icard in preselecteds){
					if(_game.potentialGui.Contains(icard)){
						boChonBaiDummy(preselecteds);
						nhacChonBaiDummy(icard);
						return;
					}
				}
				// neu khong tim dc cay nao phu hop
				boChonBaiDummy(preselecteds);
				nhacChonBaiDummy(_game.potentialGui [0]);
			} else {
				nhacChonBaiDummy(_game.potentialGui [0]);
			}
		} else {
			if(_game.potentialGui.Contains(xcard) && !xcard.isSelected){
				boChonBaiDummy(preselecteds);
				nhacChonBaiDummy(xcard);
			}
		}

		// lam toi nhung cay tren tay va tren ban
		foreach (Card card in gdm.baitrenban) {
			card.setColor(new Color32(0,0,0,98));
		}
		
		foreach (Card card in cards) {
			card.setColor(new Color32(0,0,0,98));
		}
		
		// lam sang nhung cay trong potential gui
		foreach(var card in _game.potentialGui) {
			card.clearColor();
		}
	}

	public void chonphomtudong_dummy(bool khongchonphomtrenban = false) {
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		GameDummy _game = (GameDummy)game;
		Debug.Log("chon tu dong");

		// 1. ha cac cay bai dang chon xuong truoc.
		foreach(Card card in cards){
			if(card.isSelected) {
				card.isSelected = false;
				card.rectTransform.anchoredPosition = new Vector2(card.rectTransform.anchoredPosition.x, GameSceneDummy.thisPlayerCardInHandPosY);
			}
			card.clearColor();
		}
		foreach(Card card in gdm.baitrenban){
			if(card.isSelected) {
				card.isSelected = false;
				// 72 la vi tri "y" bai tren ban
				card.rectTransform.anchoredPosition = new Vector2(card.rectTransform.anchoredPosition.x, 72);
			}
			card.clearColor();
		}
		// Tron list bai
		List<Card> allcards = new List<Card>();
		allcards.AddRange(gdm.baitrenban);
		allcards.AddRange(cards);

		// tim tat ca cac phom
		_game.potentialPhom.Clear ();
		_game.potentialPhom.AddRange (getlistPhomDummy(allcards));

		// loai bo nhung phom khong kha di - khi ma chua ha phom nao.
		if (listphomha.Count < 1) {
			for (int i = 0; i < _game.potentialPhom.Count; i++){
				List<Card> phom = _game.potentialPhom[i];
				bool co_card_tren_ban = false;
				foreach(Card card in phom){
					if(gdm.baitrenban.Contains(card)){
						co_card_tren_ban = true;
						break;
					}
				}
				if(!co_card_tren_ban){
					_game.potentialPhom.Remove(phom);
					i--;
				}
			}
		}
		// loai bo nhung phom co card tren ban
		if (khongchonphomtrenban) {
			for (int i = 0; i < _game.potentialPhom.Count; i++) {
				List<Card> phom = _game.potentialPhom[i];
				bool co_card_tren_ban = false;
				foreach(Card card in phom){
					if(gdm.baitrenban.Contains(card)){
						co_card_tren_ban = true;
						break;
					}
				}
				if(co_card_tren_ban){
					_game.potentialPhom.Remove(phom);
					i--;
				}
			}
		}

		// loai nhung phom ma sau khi ha se lam cho tren tay ko con bai
		for (int i = 0; i < _game.potentialPhom.Count; i++) {
			List<Card> phom = _game.potentialPhom[i];
			bool condition1 = true; // khi moi cay tren tay deu nam trong phom, ten bien nay hoi sai ti
			foreach(Card card in cards){
				if(!phom.Contains(card)){
					condition1 = false;
					break;
				}
			}
			int so_cay_tren_ban = 0;
			foreach(Card card in gdm.baitrenban){
				if(phom.Contains(card)){
					so_cay_tren_ban++;
				}
			}
			// -> maxindex
			int maxindex = gdm.baitrenban.Count - so_cay_tren_ban - 1;

			// kiem tra truong hop nhung cay tren ban la nhung cay cuoi cung trong list bai tren ban.
			bool condition2 = true;
			foreach(Card card in phom){
				if(gdm.baitrenban.Contains(card)){
					int index = gdm.baitrenban.IndexOf(card);
					condition2 &= (index > maxindex);
				}
			}
			Debug.Log("condition1 "+ condition1 + "condition2 "+ condition2);
			if(condition1 && condition2){ // va khi phom khong chua cay cuoi cung
				_game.potentialPhom.Remove(phom);
				i--;
			}
//			if(ContainsAllItems(phom, cards) && ContainsAllItems(cards, phom)){
//				_game.potentialPhom.Remove(phom);
//				i--;
//			}
		}

		// in thu danh sach phom
		for(int i = 0; i < _game.potentialPhom.Count; i++){
			var phom = _game.potentialPhom[i];
			string str = "";
			bool valid = false; // valid khi co mot card nam trong bai tren tay cards
			foreach (Card card in phom){
				str += card.getResourceName()+"; ";
				if(cards.Contains(card))
					valid = true;
			}
			if(!valid){
				_game.potentialPhom.Remove(phom);
				i--;
			} else {
				Debug.LogError("Phom: "+ str);
			}
		}
	}

	public List<List<Card>> getlistPhomDummy(List<Card> allcards) {
		List<List<Card>> listPhomDummy = new List<List<Card>> ();
		// 2 xep bai tim phom ngang
		Dictionary<int, List<Card>> listPhomNgang = new Dictionary<int, List<Card>>();
		allcards.Sort(delegate(Card x, Card y) {
			return (x.N - y.N);
		});
		{
			string str = "";
			foreach (Card card in allcards){
				str += card.getResourceName()+"; ";
			}
//			Debug.LogError("AllCards: " + str);
		}
		for(int i = 0; i < allcards.Count; i++){
			Card card = allcards[i];
			int N = card.N;
			if(!listPhomNgang.ContainsKey(N)) listPhomNgang.Add(N, new List<Card>());
			listPhomNgang[N].Add(card);
		}
		// tim cac phom ngang
		foreach(var entry in listPhomNgang){
			if(entry.Value.Count >= 3) listPhomDummy.Add(entry.Value);
		}
		
		// 3. xep bai tim phom doc
		List<List<Card>> listPhomDoc = new List<List<Card>>();
		allcards.Sort(delegate(Card x, Card y) {
			if(x.S - y.S != 0)
				return x.S - y.S;
			
			if(x.N == 15) x.N = 2;
			if(y.N == 15) y.N = 2;
			return (x.N - y.N);
		});
		{
			string str = "";
			foreach (Card card in allcards){
				str += card.getResourceName()+"; ";
			}
//			Debug.LogError("AllCards: " + str);
		}
		List<Card> phomdoc = new List<Card>();
		for(int i = 0; i < allcards.Count; i++){
			Card card = allcards[i];
			int N = (card.N == 15) ? 2 : card.N;
			if(phomdoc.Count == 0) {
				phomdoc.Add(card);
			} else {
				Card lastCard = phomdoc[phomdoc.Count - 1];
				if(lastCard.S != card.S){
					listPhomDoc.Add(phomdoc);
					phomdoc = new List<Card>();
					phomdoc.Add(card);
				} else {
					int lN = (lastCard.N == 15) ? 2 : lastCard.N;
					if(lN + 1 == N) {
						phomdoc.Add(card);
					} else {
						listPhomDoc.Add(phomdoc);
						phomdoc = new List<Card>();
						phomdoc.Add(card);
					}
				}
			}
			
			// neu day la cay bai cuoi cung
			if(i == allcards.Count - 1)	listPhomDoc.Add(phomdoc);
		}
		// tim cac phom doc
		foreach(var entry in listPhomDoc){
			if(entry.Count >= 3)
				listPhomDummy.Add(entry);
		}

		return listPhomDummy;
	}

	public void autoselectphom_dummy(Card onActionCard) {
		// preselecteds != null: lam nhiem vu chon dc phom phu hop nhat voi cac cay bai hien dang duoc chon san.
		// onActionCard != null: nguoi choi kick vao cay bai de sua phom dang chon hoac chon phom moi.

		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		GameDummy _game = (GameDummy)game;

		List<Card> preselecteds = new List<Card>();
		for (int i = 0; i < cards.Count; i++) {
			Card card = cards [i];
			if (card.isSelected) preselecteds.Add(card);
		}
		for (int i = 0; i < gdm.baitrenban.Count; i++) {
			Card card = gdm.baitrenban [i];
			if (card.isSelected) preselecteds.Add(card);
		}

		if (onActionCard == null) {
			if(preselecteds.Count == 0) {
				// chua chon cay nao 
				//....
				bool found = false;
				foreach (Card card in gdm.baitrenban) {
					foreach (var phom in _game.potentialPhom) {
						if (phom.Contains (card)) {
							found = true;
							// uu tien nhac phom nay len
							nhacChonBaiDummy(phom);	break;
						}
					}
					if (found) break;
				}
				// tim phom tren tay
				if (!found && listphomha.Count > 0) {// khong can dk listphomha.Count > 0 vi potentialPhom da loc dung t.h. nay
					List<Card> phomdainhat = _game.potentialPhom[0];
					foreach (var phom in _game.potentialPhom) {
						if (phomdainhat.Count < phom.Count)
							phomdainhat = phom;
					}
					// uu tien nhac phom nay len
					nhacChonBaiDummy(phomdainhat);
				}
			} else {
				// TODO: luu y, nen tim phom co bai tren ban
				// tim phom phu hop voi preselected list.
				var selectedPhom = _game.potentialPhom[0]; // de chac chan tim dc phom
				foreach (var phom in _game.potentialPhom) {
					int s1 = socaychungnhau(phom, preselecteds) - socaychungnhau(selectedPhom, preselecteds);
					int s2 = socaykhacnhau(phom, preselecteds) - socaykhacnhau(selectedPhom, preselecteds);
					if(s1 > 0 || (s1 == 0 && s2 < 0)) {
						selectedPhom = phom;
					}
				}
				boChonBaiDummy(preselecteds);
				nhacChonBaiDummy(selectedPhom);
			}
		} else {
			string s = "";
			foreach(var xcard in preselecteds){
				s += xcard.getResourceName() + "; ";
			}
			if(onActionCard.isSelected) {
				// kiem tra loi bat thuong: cay onActionCard phai luon la cay trong preselecteds, va preselecteds la mot phom
				if(!preselecteds.Contains(onActionCard)) {
					Debug.LogError("!preselecteds.Contains(onActionCard)");
					return;
				}
				// ha cay bai xuong
				// neu cay bai nay ha xuong van tao phom thi cho ha.
				preselecteds.Remove(onActionCard);
				if(getlistPhomDummy(preselecteds).Count > 0) {
					var list = new List<Card>();
					list.Add(onActionCard);
					boChonBaiDummy(list);
				}
			} else {
				// neu cay bai chua dc chon -> xem xet thanh lap phom moi.
				List<Card> phomdainhat = new List<Card>();
				foreach (var phom in _game.potentialPhom) {
					if (phomdainhat.Count < phom.Count && phom.Contains(onActionCard))
						phomdainhat = phom;
				}
				// uu tien nhac phom nay len
				if(phomdainhat.Count> 0) {
					boChonBaiDummy(preselecteds);
					nhacChonBaiDummy(phomdainhat);
				}
			}
		}

		// lam toi nhung cay tren tay va tren ban
		foreach (Card card in gdm.baitrenban) {
			card.setColor(new Color32(0,0,0,98));
		}

		foreach (Card card in cards) {
			card.setColor(new Color32(0,0,0,98));
		}

		// lam sang nhung cay trong potential phom
		foreach (var phom in _game.potentialPhom) {
			foreach(var card in phom) {
				card.clearColor();
			}
		}
	}

	int socaychungnhau(List<Card> l1, List<Card> l2){
		int c = 0;
		foreach (Card card in l1) {
			if(l2.Contains(card))
			   c++;
		}
		return c;
	}

	int socaykhacnhau(List<Card> l1, List<Card> l2){
		return l1.Count + l2.Count - socaychungnhau(l1, l2);
	}

	void nhacChonBaiDummy(Card xcard) {
		List<Card> phom = new List<Card>();
		phom.Add (xcard);
		nhacChonBaiDummy (phom);
	}

	void nhacChonBaiDummy(List<Card> phom) {
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		foreach (var c in phom) {
			if(c.isSelected)
				continue;
			c.isSelected = true;
			if (gdm.baitrenban.Contains (c)) {
				LeanTween.moveLocalY (c.rectTransform.gameObject, 72 + 12, 0.3f).setEase (LeanTweenType.easeOutQuart);
			}
			
			if (cards.Contains (c)) {
				LeanTween.moveLocalY (c.rectTransform.gameObject, GameSceneDummy.thisPlayerCardInHandPosY + 15, 0.3f).setEase (LeanTweenType.easeOutQuart);
			}
		}
	}


	void boChonBaiDummy(Card card) {
		var list = new List<Card>();
		list.Add(card);

		boChonBaiDummy (list);
	}

	void boChonBaiDummy(List<Card> phom) {
		GameSceneDummy gdm = (GameSceneDummy)gameScene;
		foreach (var c in phom) {
			if(c.isSelected == false)
				continue;
			c.isSelected = false;
			if (gdm.baitrenban.Contains (c)) {
				LeanTween.moveLocalY (c.rectTransform.gameObject, 72, 0.3f).setEase (LeanTweenType.easeOutQuart);
			}
			
			if (cards.Contains (c)) {
				LeanTween.moveLocalY (c.rectTransform.gameObject, GameSceneDummy.thisPlayerCardInHandPosY, 0.3f).setEase (LeanTweenType.easeOutQuart);
			}
		}
	}

	public override void danhbaiDummy (Card card, string nn, int jsonA, int M, bool goiyan)
	{
		GameSceneDummy gsDummy = (GameSceneDummy)gameScene;
		GameDummy gameDummy = (GameDummy)game;
		gameDummy.thisPlayerDaBocBai = false;
		gameDummy.cardInAutoSelectModeGui = false;
		gameDummy.cardInAutoSelectModeHa = false;

		int vitricaybai = gsDummy.baitrenban.Count;
		Vector2 target = getVitriBaiDanhDummy (vitricaybai, gsDummy.baitrenban.Count + 1);
		
		Card card2 = findCardByCode (card.encode ());
		if (card2 != null) {
			card2.rectTransform.SetAsLastSibling ();
			LeanTween.scale (card2.rectTransform, new Vector3 (GameSceneDummy.K_SCALE_CARD_ONTABLE, GameSceneDummy.K_SCALE_CARD_ONTABLE, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card2.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			this.cards.Remove (card2);
			card2.isSelected = false;
			
			card2.removeEventTriggerDummy ();
			card2.rectTransform.GetComponent<Button> ().onClick.RemoveAllListeners ();
		} else {
			Debug.LogError ("Khong tim thay bai tren tay this Player");
			return;
		}
		
		reArrangeCards ();
		base.danhbaiDummy (card2, nn, jsonA, M, goiyan);

		gameScene.controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh: false, gui: false, boc: false, ha: false, xep: true);
	}

	public override void bocbaiDummy (Card card, bool goiyU)
	{
		base.bocbaiDummy (card, goiyU);

		GameSceneDummy gsdummy = (GameSceneDummy)gameScene;
		GameDummy game_dummy = (GameDummy)game;
		game_dummy.thisPlayerDaBocBai = true;
		game_dummy.cardInAutoSelectModeGui = false;
		game_dummy.cardInAutoSelectModeHa = false;

		card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
		card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		card.rectTransform.SetParent (gameScene.cardLayer.transform, false);
		card.rectTransform.anchoredPosition = gsdummy.bobai.anchoredPosition;
		card.addEventTriggerDummy();
		
		cards.Add (card);
		float x = getInHandCardsPos (card);
		float y = GameScene.thisPlayerCardInHandPosY;
		LeanTween.scale (card.rectTransform.gameObject, new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (x, y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
		reArrangeCards ();

		//Kiem tra va ha bai tu dong
		kiemtrahaguiDummy (ungay:goiyU);
	}

	public override void habaiDummy (List<Card> xcards, int CM, int M, int AT, int DT, string NN, int NNCM, bool goiyan)
	{
		base.habaiDummy (xcards, CM, M, AT, DT, NN, NNCM, goiyan);

		GameSceneDummy gsdummy = (GameSceneDummy)gameScene;
		GameDummy game_dummy = (GameDummy)game;
		game_dummy.thisPlayerDaBocBai = true; // ko the boc sau khi ha
		game_dummy.cardInAutoSelectModeGui = false;
		game_dummy.cardInAutoSelectModeHa = false;

		List<Card> phom = new List<Card> ();
		int minIndex = 100;
		for (int i=0; i < xcards.Count; i++) {
			Card card = xcards [i];
			card = findCardByCode (card.encode ());
			if(card == null)
			{
				card = findCardInList(xcards [i], gsdummy.baitrenban);
				if(minIndex > gsdummy.baitrenban.IndexOf(card)){
					minIndex = gsdummy.baitrenban.IndexOf(card);
//					Debug.LogError("minIndex: "+ minIndex);
				}
//				Debug.LogError("Tim thay "+ card.getResourceName() + " tren ban`.");
				gsdummy.baitrenban.Remove(card);
			} else {
//				Debug.LogError("Tim thay "+ card.getResourceName() + " tren tay.");
			}
			phom.Add (card);
			LeanTween.scale (card.rectTransform, new Vector3 (GameSceneDummy.K_SCALE, GameSceneDummy.K_SCALE, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			Vector2 target = getVitriHaPhom_Dummy (phomIndex, i, xcards.Count);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			card.rectTransform.SetAsLastSibling ();
			card.removeEventTriggerDummy ();
			card.rectTransform.GetComponent<Button>().enabled = false;
			this.cards.Remove (card);
		}
		listphomha.Add (phom);

		// chuyen tat ca cac cay bai co index > minIndex ve tay This Player
		int tongsocaybaitrentay = cards.Count + gsdummy.baitrenban.Count - 1 - minIndex + 1;
		for (int i = gsdummy.baitrenban.Count - 1; i >= minIndex; i--) {
			Card card = gsdummy.baitrenban[i];
//			Debug.Log("gsdummy.baitrenban remove: " + card.getResourceName());
			gsdummy.baitrenban.Remove(card);
			cards.Add (card);
			card.isSelected = false;
			card.addEventTriggerDummy();
			float x = getInHandCardsPos (cards.Count - 1, tongsocaybaitrentay);
			float y = GameScene.thisPlayerCardInHandPosY;
			LeanTween.scale (card.rectTransform.gameObject, new Vector3 (Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (x, y, 0f), 0.4f ).setEase (LeanTweenType.easeOutQuart);
		}

		// xep lai bai tren ban
		gsdummy.xeplaibaitrenban();

		// xep lai bai tren tay
		reArrangeCards ();

		kiemtrahaguiDummy ();
	}

	public void kiemtrahaguiDummy(bool danh = true, bool ungay = false){
		GameDummy game_dummy = (GameDummy)game;
		// show nut
		game.thisPlayer.chonphomtudong_dummy(game_dummy.thisPlayerDaBocBai);
		game.thisPlayer.chonguitudong_dummy(notvalid:!game_dummy.thisPlayerDaBocBai);
		if(game_dummy.potentialPhom.Count > 0 && game_dummy.potentialGui.Count > 0) {
			// gui, ha, boc
			gameScene.controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh:danh, gui:true, boc:!game_dummy.thisPlayerDaBocBai, ha:true, xep:true, ungay:ungay);
		} else if(game_dummy.potentialPhom.Count > 0) {
			// ha, boc
			gameScene.controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh:danh, gui:false, boc:!game_dummy.thisPlayerDaBocBai, ha:true, xep:true, ungay:ungay);
		} else if(game_dummy.potentialGui.Count > 0) {
			// gui, boc
			gameScene.controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh:danh, gui:true, boc:!game_dummy.thisPlayerDaBocBai, ha:false, xep:true, ungay:ungay);
		} else {
			// boc
			gameScene.controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh:danh, gui:false, boc:!game_dummy.thisPlayerDaBocBai, ha:false, xep:true, ungay:ungay);
		}
	}

	public void hienbaitrentay_Dummy (JSONArray jcards)
	{
		cards.Clear();
		for(int i = 0; i<jcards.Count; i++){
			int code = jcards[i].AsInt;
			Card card = Card.decode_dummy(code);

			card.rectTransform = (RectTransform)GameObject.Instantiate(gameScene.TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(gameScene.cardLayer.transform, false);
			card.rectTransform.localScale = new Vector3(Card.thisPlayerScale, Card.thisPlayerScale, 1f);
			cards.Add(card);
			if(code > 100){
				card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
			}
			
			float x = getInHandCardsPos(i, jcards.Count);
			float y = GameSceneTaLa.thisPlayerCardInHandPosY;
//			float x = getInHandCardsPos (card);
//			float y = GameScene.thisPlayerCardInHandPosY;
			card.rectTransform.anchoredPosition = new Vector2(x, y);
			
			card.addEventTriggerDummy();
		}
	}
}

