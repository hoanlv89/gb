using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Threading;
using System.Collections.Generic;

public class GameSam : Game
{
	
	public Vector2[]  StaticPos9 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
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
//		float y = 1280 * Screen.height/ (float)Screen.width;
//		glg.spacing = new Vector2(90, (y - 420)/4);
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -265*y/720),
				new Vector2 (540, 20*y/720),
				new Vector2 (0, 265*y/720),
				new Vector2 (-540, 20*y/720)
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -235*y/720),
				new Vector2 (522, -9*y/720),
				new Vector2 (305, 267*y/720),
				new Vector2 (-305, 267*y/720),
				new Vector2 (-522, -9*y/720),
				
			};
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos9;
		}
	}

	public bool sam {
		get;
		set;
	}

	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
		
		thisPlayer.cards.Clear ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_sam (jcards [i].AsInt));
		}
		
		thisPlayer.setOnPlayingPosition ();
		gameScene.disableLeaveGameButton ();
		gameScene.startDealing ();
		gameScene.StartCoroutine (Utils.cr_runDelayed (2f, delegate {
			//Debug.Log("step 1");
			((GameSceneSam)gameScene).showBaoSam ();
			//Debug.Log("step 2");
		}));
		//		new SThread (delegate {
		//			Thread.Sleep (2000);
		//			gameScene.showBaoSam ();
		//		}).Start ();
		
	}

	public void showLastCardsByReconnetion (JSONArray jsonCards)
	{
		List<Card> cards = new List<Card> ();
		for (int i = 0; i < jsonCards.Count; i++)
			cards.Add (Card.decode_tienlen (jsonCards [i].AsInt));
		
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
			card.rectTransform.anchoredPosition = new Vector2 (-x + i * cw * margin, y);
			card.rectTransform.localScale = new Vector3 (1f, 1f, 1f);
			
			lastTurnCards.Add (card);
		}
	}

	public override void onReconnection(){
		base.onReconnection();
		
	}
	
	public override void finishThisGame (JSONArray finishArray)
	{
		base.finishThisGame (finishArray);
		gameScene.enableLeaveGameButton (3);
		gameScene.controllerControl.tienlenFunctions.hideTienLenOnTurnFuntions ();
		Player winner = null;
		ArrayList chips = new ArrayList ();
		
		for (int i = 0; i < finishArray.Count; i++) {
			var jobj = finishArray [i];
			string name = jobj ["N"];
			int winnings = jobj ["M"].AsInt;
			int v = jobj ["V"].AsInt;
			int ag = jobj ["AG"].AsInt;
			int d = jobj ["D"].AsInt;
			JSONArray jcards = jobj ["ArrCard"].AsArray;

			if (v == 0)
				v = 1;
			else if (v == 1)
				v = 7;
			else if (v == 2)
				v = 6;
			else if (v == 3)
				v = 5;
			else if (v == 4)
				v = 4;
			else if (v == 5)
				v = 3;
			else if (v == 6)
				v = 2;
			else if (v == 7)
				v = 8;


			Player player = getPlayer (name);
			player.finishTienLen (v, ag, winnings, d, jcards);
			
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
		
		if (winner == null)
			return;
		
		float targetx = winner.rectTransform.anchoredPosition.x;
		float targety = winner.rectTransform.anchoredPosition.y + winner.viewControl.ag.rectTransform.anchoredPosition.y;
		foreach (RectTransform chip in chips) {
			LeanTween.moveLocal (chip.gameObject, new Vector3 (targetx, targety, 0), 0.8f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}

		// xoa cay bai tren ban
		foreach (Card cardx in lastTurnCards) {
			Card card = cardx;
			LeanTween.delayedCall(2.5f, delegate(object obj) {
				if(card != null){
					lastTurnCards.Remove(card);
					GameObject.Destroy(card.rectTransform.gameObject);
				}
			});
		}
	}
	
	
	
}
