using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;

public class GameTaLa: SwapCardableGame
{
	public Vector2[]  StaticPos9 {
		get {
			return new Vector2[]{
				new Vector2 (0, -235),
				new Vector2 (280, -210),
				new Vector2 (500, -110),
				new Vector2 (500, 120),
				new Vector2 (300, 265),
				new Vector2 (-300, 265),
				new Vector2 (-500, 120),
				new Vector2 (-500, -110),
				new Vector2 (-280, -210)
			};
		}
	}
	
	public override Vector2[] POS2 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -265*y/720),
				new Vector2 (0, 265*y/720)
			};
		}
	}
	
	public override Vector2[] POS4 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -265*y/720),
				new Vector2 (540, 30*y/720),
				new Vector2 (0, 265*y/720),
				new Vector2 (-540, 30*y/720)
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -265*y/720),
				new Vector2 (540, 30*y/720),
				new Vector2 (0, 265*y/720),
				new Vector2 (-540, 30*y/720)
			};
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos9;
		}
	}

	public bool giaidoanhabai;

	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
		giaidoanhabai = false;
		foreach (Player player in players) {
			player.baidadanh_tala.Clear ();
			player.baidaan_tala.Clear ();
			player.listphomha.Clear ();
		}
		thisPlayer.cards.Clear ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_tala (jcards [i].AsInt));
		}
		// sort
		cardsort1 = true;
		thisPlayer.cards.Sort(CardUtils.ComparisionTala1);
		
		thisPlayer.setOnPlayingPosition ();
		gameScene.disableLeaveGameButton ();
		gameScene.startDealing ();
	}

	public override void onReconnection(){
		base.onReconnection();
	}
	
	public override void finishThisGame (JSONArray finishArray)
	{
		base.finishThisGame (finishArray);
		gameScene.enableLeaveGameButton ();
		gameScene.controllerControl.talaFuntions.hideTaLaOnTurnFuntions (onFinish:true);
		Player winner = null;
		ArrayList chips = new ArrayList ();

		if(((GameSceneTaLa)gameScene).selectedCardArrow1 != null)
			((GameSceneTaLa)gameScene).selectedCardArrow1.gameObject.SetActive(false);
		if(((GameSceneTaLa)gameScene).selectedCardArrow2 != null)
			((GameSceneTaLa)gameScene).selectedCardArrow2.gameObject.SetActive(false);
		
		for (int i = 0; i < finishArray.Count; i++) {
			var jobj = finishArray [i];
			string name = jobj ["N"];
			int winnings = jobj ["M"].AsInt;
			int v = jobj ["V"].AsInt;
			int ag = jobj ["AG"].AsInt;
			int d = jobj ["D"].AsInt;
			JSONArray jcards = jobj ["ArrCard"].AsArray;
			
			Player player = getPlayer (name);
			player.hideStatus();
			player.finishTala (v, ag, d, winnings, jcards);
			// TODO: can dat cho khac de bao u`. Thang trang.
//			if(player is ThisPlayer && winnings > 0){
//				SoundManager.instance.playNhatAudio();
//			} else {
//				SoundManager.instance.playBetAudio();
//			}
			
			// hiệu ứng bay coin từ người thua cuộc
			if (winnings < 0) {
				RectTransform chip = (RectTransform)GameObject.Instantiate (gameScene.Chip);
				chip.SetParent (gameScene.playerLayer, false);
				
				Vector2 position = new Vector2 ();
				position.x = player.rectTransform.anchoredPosition.x;
				position.y = player.rectTransform.anchoredPosition.y + player.viewControl.ag.rectTransform.anchoredPosition.y;
				chip.anchoredPosition = position;
				
				chips.Add (chip);
			} else if (winnings > 0) {
				winner = player;
				//				wcoin.setVisibility(View.INVISIBLE);
			}
		}
		effect_color_baidadanh (true);

		if (winner == null)
			return;
		
		float targetx = winner.rectTransform.anchoredPosition.x;
		float targety = winner.rectTransform.anchoredPosition.y + winner.viewControl.ag.rectTransform.anchoredPosition.y;
		foreach (RectTransform chip in chips) {
			LeanTween.moveLocal (chip.gameObject, new Vector3 (targetx, targety, 0), 0.8f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}
	}

	public void chuyenbaiTaLa (string name, string nname, int code)
	{
		Player playerNhanBai = getPlayer (nname);
		Player playerbichuyen = getPlayer (name);
		int vitribai = playerNhanBai.baidadanh_tala.Count;
		Vector2 target = playerNhanBai.getVitriBaiDanhTaLa (vitribai, playerNhanBai.baidadanh_tala.Count + 1);

		Card cardc = null;
		foreach (Card card in playerbichuyen.baidadanh_tala) {
			if (card.encode_tala ().Equals (code)) {
				cardc = card;
			}
		}
		if (cardc != null) {
			playerbichuyen.baidadanh_tala.Remove (cardc);
		} else {
			cardc = Card.decode_tala (code);
			cardc.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
			cardc.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		}
		playerNhanBai.baidadanh_tala.Add (cardc);

		LeanTween.moveLocal (cardc.rectTransform.gameObject, new Vector3 (target.x, target.y), 0.4f).setEase (LeanTweenType.easeOutQuart);

		playerNhanBai.xepbaidadanh_tala ();
		playerbichuyen.xepbaidadanh_tala (all:true);
	}

	public void effect_color_baidadanh (bool forced = false)
	{
		foreach (Player player in players) {
			Color color = new Color32 (255, 255, 255, 255);
			if (player.baidadanh_tala.Count >= 4 || forced)
				color = new Color32 (120, 120, 120, 255);
			foreach (Card card in player.baidadanh_tala) {
				card.rectTransform.GetComponent<Image> ().color = color;
			}
		}
	}

	public override Vector2 getCardPosRange (Card card)
	{
		float posx = thisPlayer.getInHandCardsPos (card);
		float margin = thisPlayer.getMarginCard ();

		if(thisPlayer.cards.IndexOf(card) == 0)
			return new Vector2 (0, posx + margin * 2 / 3);

		if(thisPlayer.cards.IndexOf(card) == thisPlayer.cards.Count - 1)
			return new Vector2 (posx - margin * 2 / 3, 0);

		return new Vector2 (posx - margin * 2 / 3, posx + margin * 2 / 3);
	}

	public override Card getLeftSideCard(Card card)
	{
		int index = thisPlayer.cards.IndexOf(card);
		if(index > 0)
			return thisPlayer.cards[index-1];

		return null;
	}

	public override Card getRightSideCard(Card card)
	{
		int index = thisPlayer.cards.IndexOf(card);
		if(index < thisPlayer.cards.Count - 1)
			return thisPlayer.cards[index+1];
		
		return null;
	}

	public override void swapThisPlayerCardOnHand (Card card, Card leftSidecard)
	{
		int index1 = thisPlayer.cards.IndexOf(card);
		int index2 = thisPlayer.cards.IndexOf(leftSidecard);

		Card tmp = thisPlayer.cards[index1];
		thisPlayer.cards[index1] = thisPlayer.cards[index2];
		thisPlayer.cards[index2] = tmp;
	}

	public void printAllCards ()
	{
		string ss = "";
		foreach(Card card in thisPlayer.cards)
			ss += card.getResourceName()+"; ";
		Debug.Log(ss);
	}
}
