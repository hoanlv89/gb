using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using System.Collections.Generic;

public class GameDummy: SwapCardableGame
{	
	public override Vector2[] POS2 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			y = 1280 * 9 / 16;
			return new Vector2[]{
				new Vector2 (-530, -90*y/720),
				new Vector2 (530, -90*y/720)
			};
		}
	}
	
	public override Vector2[] POS4 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			y = 1280 * 9 / 16;
			return new Vector2[]{
				new Vector2 (-530, -90*y/720),
				new Vector2 (530, -90*y/720),
				new Vector2 (530, 220*y/720),
				new Vector2 (-530, 220*y/720)
			};
		}
	}

	public override Vector2[] POS5 {
		get {
			return null;
		}
	}

	public override Vector2[] POS9 {
		get {
			return null;
		}
	}

	public List<List<Card>> potentialPhom = new List<List<Card>>();
	public List<Card> potentialGui = new List<Card>();
	public bool thisPlayerDaBocBai = false;
	public bool cardInAutoSelectModeHa = false;
	public bool cardInAutoSelectModeGui = false;
	public Player firstPlayer;

	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
//		foreach (Player player in players) {
//			player.baidadanh_dummy.Clear ();
//			player.baidaan_dummy.Clear ();
//			player.baidaha_dummy.Clear ();
//		}
		thisPlayerDaBocBai = false;
		thisPlayer.cards.Clear ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_dummy (jcards [i].AsInt));
		}
//		// sort
		cardsort1 = true;
		thisPlayer.cards.Sort(CardUtils.ComparisionDummy1);
//		
//		thisPlayer.setOnPlayingPosition ();
		gameScene.disableLeaveGameButton ();
		gameScene.startDealing ();
	}

	public override void onReconnection(){
		base.onReconnection();
	}
	
	public override void finishThisGame (JSONArray finishArray)
	{
		base.finishThisGame (finishArray);

		Player winner = null; // o day la ng u
		ArrayList chips = new ArrayList ();
		int kieuu_effect = 0;

		// 1. Show bang view len.
		DummyFunction function = gameScene.controllerControl.dummyFuntions;
		DummyFinishViewControl finishViewControl = function.finishViewControl;
		DummyFullFinishViewControl fullFinishViewControl = function.fullFinishViewControl;

		gameScene.StartCoroutine (Utils.cr_runDelayed (3.3f, delegate {
			gameScene.enableLeaveGameButton ();
			gameScene.controllerControl.dummyFuntions.hideDummyOnTurnFuntions (onFinish:true);
			finishViewControl.gameObject.SetActive (true);
			function.GetComponent<Image> ().enabled = true;

			finishViewControl.text_ready.text = Strings.instance.gameplay_siam_btn_sansang;
			finishViewControl.text_detail.text = Strings.instance.gameplay_siam_btn_chitiet;
			LeanTween.value(gameScene.gameObject, 0f, 186f, 0.5f).setOnUpdate(delegate(float value) {
				function.GetComponent<Image> ().color = new Color32(0,0,0,(byte)value);
			});
			RectTransform fVCr = (RectTransform)finishViewControl.transform;
			LeanTween.value(gameScene.gameObject, 1.2f, 1, 0.3f).setOnUpdate(delegate(float value) {
				fVCr.localScale = new Vector3(value, value, 1f);
			});
		}));
		finishViewControl.startCountDown ();
		finishViewControl.Ready.onClick.RemoveAllListeners ();
		finishViewControl.Ready.onClick.AddListener (delegate() {
			finishViewControl.curtain.enabled = false;
			finishViewControl.gameObject.SetActive(false);
			GameApplication.cubeia.sendReadyGame ();
		});

		LeanTween.delayedCall (20f, delegate(object obj) {
			if(finishViewControl.gameObject.activeSelf){
				function.GetComponent<Image> ().enabled = false;
				finishViewControl.gameObject.SetActive (false);
				fullFinishViewControl.gameObject.SetActive (false);
			}
		});

		finishViewControl.view0.resetView ();
		finishViewControl.view1.resetView ();
		finishViewControl.view2.resetView ();
		finishViewControl.view3.resetView ();

		fullFinishViewControl.view0.resetView ();
		fullFinishViewControl.view1.resetView ();
		fullFinishViewControl.view2.resetView ();
		fullFinishViewControl.view3.resetView ();

		List<Card> allcardInPhom = new List<Card>();
		foreach (Player player in players) {
			for (int j = 0; j < player.listphomha.Count; j++) {
				var phom = player.listphomha [j];
				for (int k = 0; k < phom.Count; k++) {
					allcardInPhom.Add(phom[k]);
				}
			}
			player.listphomha.Clear();
		}


		for (int i = 0; i < finishArray.Count; i++) {
			var jobj = finishArray [i];
			string name = jobj ["N"];
			int winnings = jobj ["M"].AsInt;
			int v = jobj ["V"].AsInt;
			int ag = jobj ["AG"].AsInt;
			int d = 0;
			int md = jobj ["MD"].AsInt; // subscore 1
			int mf = jobj ["MF"].AsInt; // subscore 2
			int mb = jobj ["MB"].AsInt; // subscore 3
			JSONArray jcards = jobj ["ArrC"].AsArray;
			JSONArray jcardDs = jobj ["ArrD"].AsArray;
			JSONArray arrBT = jobj ["ArrBT"].AsArray;
			JSONArray arrBM = jobj ["ArrBM"].AsArray;
			
			Player player = getPlayer (name);
			player.hideStatus();
			player.finishDummy (v, ag, d, winnings, jcards);

			string order = "1st";
			if(i == 1)
				order = "2nd";
			if(i == 2)
				order = "3rd";
			if(i == 3)
				order = "4th";

			// view ra finishview
			if(player is ThisPlayer) {
				finishViewControl.order.text = order;
			}

			int view_pos = getViewIndexOfPlayer(player);
			PlayerDumyFInishViewControl view = finishViewControl.view0;
			PlayerDumyFullFinishViewControl detailedView = fullFinishViewControl.view0;
			if(view_pos == 0) {
				view = finishViewControl.view0;
				detailedView = fullFinishViewControl.view0;
			}
			if(view_pos == 1) {
				view = finishViewControl.view1;
				detailedView = fullFinishViewControl.view1;
			}
			if(view_pos == 2) {
				view = finishViewControl.view2;
				detailedView = fullFinishViewControl.view2;
			}
			if(view_pos == 3) {
				view = finishViewControl.view3;
				detailedView = fullFinishViewControl.view3;
			}

			view.name.text = player.name;
			view.score.text = (md + mf + mb) + "";
			view.wingold.text = Utils.formatCurrency(winnings);
//			Debug.LogError(player.name + " win "+ Utils.formatCurrency(winnings)+" text "+ view.wingold.text);
			view.setOrderImg(i);
			view.ava.sprite = player.image_avatar.sprite;
			view.ava.color = new Color32 (255, 255, 255, 255);

			detailedView.gameObject.SetActive(true);
			detailedView.name.text = player.name;
			detailedView.score.text = (md + mf + mb) + "";
			detailedView.subScore1.text = (md) + "";
			detailedView.subScore2.text = (mf) + "";
			detailedView.subScore3.text = (mb) + "";
			detailedView.setOrderImg(i);
			detailedView.title.text = Strings.instance.gameplay_dummy_finish_detail_str2;
			detailedView.title1.text = Strings.instance.gameplay_dummy_finish_detail_str1;
			detailedView.title2.text = Strings.instance.gameplay_dummy_finish_detail_str3;
			detailedView.result.text = Utils.formatNumber(jobj["AG"].AsInt)+ " ("+ Utils.formatNumberWithSign(jobj["M"].AsInt) +")";

			// dua cay bai tu phom len day
			// delay vi phom cuoi dang thuc hien anim.
			LeanTween.delayedCall (2.5f, delegate(object obj) {
				for(int j = 0; j < jcardDs.Count; j++){
					// tim cay bai tren allCardsPhom
					Card card = Player.findCardInList(Card.decode_dummy(jcardDs[j].AsInt), allcardInPhom);
					card.rectTransform.SetParent(detailedView.GetComponent<RectTransform>(), false);
					card.rectTransform.localScale = Vector3.one;
					card.rectTransform.sizeDelta = new Vector2(42, 56);
					card.rectTransform.anchoredPosition = new Vector2(-210 + j * 16, 60);
					detailedView.gos.Add(card.rectTransform.gameObject);
				}
			});

			// sinh cay bai tren tay arrC
			for(int j = 0; j < jcards.Count; j++){
				Card card = Card.decode_dummy(jcards[j].AsInt);
				card.rectTransform = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
				card.rectTransform.SetParent(detailedView.GetComponent<RectTransform>(), false);
				card.rectTransform.sizeDelta = new Vector2(42, 56);
				card.rectTransform.anchoredPosition = new Vector2(-210 + j * 16, -23);
				detailedView.gos.Add(card.rectTransform.gameObject);
			}

			//sinh finish imgetype
			List<int> lBT = new List<int>();
			List<int> lBM = new List<int>();
			for(int j = 0; j < arrBT.Count; j++){
				int index = lBT.IndexOf(arrBT[j].AsInt);
				if(index > -1){
					// contains
					lBM[index] += arrBM[j].AsInt;
				} else {
					lBT.Add(arrBT[j].AsInt);
					lBM.Add(arrBM[j].AsInt);
				}
			}

			for(int j = 0; j < lBT.Count; j++){
				// kieu moi
				Sprite sprite = fullFinishViewControl.finishimgs[lBT[j] - 1];
				RectTransform rect = (RectTransform)GameObject.Instantiate (fullFinishViewControl.PF_FinishTypeImage);
				rect.SetParent(detailedView.GetComponent<RectTransform>(), false);
				rect.sizeDelta = new Vector2(60, 72);
				rect.anchoredPosition = new Vector2(-201 + 62 * j, -112);
				rect.FindChild("Image").GetComponent<Image>().sprite = sprite;
				rect.FindChild("Text").GetComponent<Text>().text = lBM[j] + "";
				detailedView.gos.Add(rect.gameObject);
				if(lBT[j] >=5 && lBT[j] <= 7){
					winner = player;
					kieuu_effect = lBT[j];
				}
			}

			// delete all cards of other players
			if(player is OtherPlayer){
				OtherPlayer otherPlayer = (OtherPlayer)player;
				foreach (Card card in otherPlayer.cards) {
					GameObject.Destroy(card.rectTransform.gameObject);
				}
				otherPlayer.cards.Clear();
				if(otherPlayer.alarmAlert != null)
					otherPlayer.alarmAlert.gameObject.SetActive(false);
			}
			if(player is ThisPlayer){
				ThisPlayer thisPlayer = (ThisPlayer)player;
				foreach (Card card in thisPlayer.cards) {
					GameObject.Destroy(card.rectTransform.gameObject);
				}
				thisPlayer.cards.Clear();

				if(winnings > 0){
					SoundManager.instance.playNhatAudio();
				} else {
					SoundManager.instance.playBetAudio();
				}
			}
		}
		// delete all cards on table
		GameSceneDummy gsDummy = (GameSceneDummy)gameScene;
		foreach (Card card in gsDummy.baitrenban) {
			GameObject.Destroy(card.rectTransform.gameObject);
		}
		gsDummy.baitrenban.Clear ();

		// de phong truong hop bo bai da bi destroy khi het bai
		if(gsDummy.bobai != null && gsDummy.bobai.gameObject != null)
			GameObject.Destroy (gsDummy.bobai.gameObject);

		effect_color_baidadanh (true);

		if (winner == null)
			return;
		Animator pf = null;
//		Debug.LogError ("kieuu_effect: " + kieuu_effect);
		if (kieuu_effect == 5) {
			pf = DummyRes.Instance.pf_anim_finish1;
		}
		if (kieuu_effect == 6) {
			pf = DummyRes.Instance.pf_anim_finish2;
		}
		if (kieuu_effect == 7) {
			pf = DummyRes.Instance.pf_anim_finish3;
		}

		Animator anim = (Animator)GameObject.Instantiate (pf);
		RectTransform rectx = anim.GetComponent<RectTransform>();
		rectx.SetParent(gameScene.cardLayer, false);
		rectx.anchoredPosition = winner.getDummyTextFinishPos();
		if (winner is ThisPlayer) {
			rectx.localScale = new Vector3 (1.6f, 1.6f, 1f);
		} 

		RectTransform go = (RectTransform)rectx.FindChild ("Banner");
		if (go != null) {
			Mask mask = go.GetComponent<Mask>();
//			mask.enabled = false;
		}
		
		LeanTween.delayedCall(4f, delegate (object obj) {
			GameObject.Destroy(rectx.gameObject);
		});
		
		float targetx = winner.rectTransform.anchoredPosition.x;
		float targety = winner.rectTransform.anchoredPosition.y + winner.viewControl.ag.rectTransform.anchoredPosition.y;
		foreach (RectTransform chip in chips) {
			LeanTween.moveLocal (chip.gameObject, new Vector3 (targetx, targety, 0), 0.8f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}
	}

	public void effect_color_baidadanh (bool forced = false)
	{
//		foreach (Player player in players) {
//			Color color = new Color32 (255, 255, 255, 255);
//			if (player.baidadanh_dummy.Count >= 4 || forced)
//				color = new Color32 (120, 120, 120, 255);
//			foreach (Card card in player.baidadanh_dummy) {
//				card.rectTransform.GetComponent<Image> ().color = color;
//			}
//		}
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
