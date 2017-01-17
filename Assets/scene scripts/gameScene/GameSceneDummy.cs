using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using System;

public class GameSceneDummy : GameScene
{
	public RectTransform bobai;
	public List<Card> baitrenban;
	public RectTransform selectedCardArrow1, selectedCardArrow2; // dummy

	public static int KC_CARD = -110;
	public static float K_SCALE = 0.7f;
	public static float K_SCALE_CARD_OTHERPLAYER = 0.5f;
	public static float K_SCALE_CARD_ONTABLE = 0.86f;
	
	public override void Start()
	{
		base.Start();
		Debug.Log("GameSceneDummy onStart");
	}
	
	protected override void initializeView()
	{
		base.initializeView();
		buttonLeaveTable.GetComponent<Button>().onClick.AddListener(delegate {
			LeaveRequestPacket packet = new LeaveRequestPacket();
			packet.tableid = game.id;
			cubeia.sendPacket(packet);
		});
	}
	
	public override void initializeViewOfPlayers()
	{
		base.initializeViewOfPlayers();
//		Debug.LogError ("TODO: initializeDummyButtons");
		if (game.thisPlayer != null)
			game.thisPlayer.initializeDummyButtons();
		controllerControl.bgControl.bg_xocdia.gameObject.SetActive (false);
//		controllerControl.bgControl.bg_tienlen.gameObject.SetActive (false);
		controllerControl.topControler.bt_chat.FindChild ("bg").gameObject.SetActive (false);
	}

	public void showBobai(bool show, int sobai, int fc){
		if (show == true && sobai > 0) {
			bobai = (RectTransform)GameObject.Instantiate (DummyRes.Instance.pf_bobai);
			bobai.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			bobai.GetComponent<Button>().onClick.AddListener(delegate {
				game.thisPlayer.send_bocbaidummy();
			});
			string txt = bobai.Find ("Text").GetComponent<Text> ().text = sobai.ToString();
			Debug.Log (txt);

			bobai.SetParent (cardLayer.transform, false);
			bobai.anchoredPosition = new Vector2 (-340, 72);
			bobai.localScale = new Vector3(K_SCALE_CARD_ONTABLE, K_SCALE_CARD_ONTABLE, 1f);

			if(fc > 0) {
				// sinh cay bai dau tien
				Card card = Card.decode_dummy(fc);
				card.rectTransform = (RectTransform)GameObject.Instantiate (TransformCard);
				card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				card.rectTransform.GetComponent<Image>().color = new Color32(255,255,255,0);
				card.rectTransform.localScale = new Vector3(K_SCALE_CARD_ONTABLE, K_SCALE_CARD_ONTABLE, 1f);
				card.rectTransform.anchoredPosition = new Vector2(0, 72);
				card.rectTransform.SetParent(cardLayer, false);
				card.rectTransform.GetComponent<Button> ().onClick.AddListener (delegate() {
					if(((GameDummy)game).cardInAutoSelectModeHa){
						game.thisPlayer.autoselectphom_dummy(card);
					} else {
						card.isSelected = !card.isSelected;
						float delta = 0f;
						if (card.isSelected) {
							delta = 12f;
						}
						
						//			float x = GameApplication.game.thisPlayer.getInHandCardsPos(this);
						float y = 72 + delta;
						//			LeanTween.moveLocalX(rectTransform.gameObject, x, 0.3f).setEase(LeanTweenType.easeOutQuart);
						LeanTween.moveLocalY (card.rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);
					}
				});

				// add vao list
				baitrenban.Add(card);

				// anim hien bai.
				float delay = game.players.Count * 9 * 0.038f;
				LeanTween.moveLocalX(card.rectTransform.gameObject, -260, 0.2f).setDelay(delay);
				LeanTween.value(gameObject, new Color32(255,255,255,0), new Color32(255,255,255,255), 0.2f)
					.setDelay(delay).setOnUpdateColor(delegate(Color color) {
						card.rectTransform.Find("ImgStarDummy").GetComponent<Image>().enabled = true;
						card.rectTransform.GetComponent<Image>().color = color;
				});
			}
			// xep lai dam bai tren tay
		} else {
			bobai.gameObject.SetActive(false);
		}


		// Neu nguoi dau tien la minh thi phai check kha nang ha bai
		GameDummy game_dummy = (GameDummy)game;
		if (game_dummy.firstPlayer is ThisPlayer) {
			game_dummy.thisPlayer.kiemtrahaguiDummy (danh:false);
		}
	}

	public void showBocbai(){
		bobai = (RectTransform)GameObject.Instantiate (TransformCardBackWithNumber);
		bobai.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
		string txt = bobai.Find ("Text").GetComponent<Text> ().text = "24";
		Debug.Log (txt);
		bobai.SetParent (cardLayer.transform, false);
		bobai.anchoredPosition = new Vector2 (0, 0);
		Button button = bobai.GetComponent<Button> ();
				button.onClick.AddListener (delegate {
					
			});
	}

	public override void startDealing()
	{
		base.startDealing();
		int length = game.thisPlayer.cards.Count;
		foreach (Player player in game.players) {
			if (player is OtherPlayer) {
				OtherPlayer otherPlayer = (OtherPlayer)player;
				otherPlayer.cards.Clear();
			}
		}

		for (int i = 0; i < length; i++) {
			Card card = game.thisPlayer.cards [i];
			card.rectTransform = (RectTransform)Instantiate(TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(cardLayer.transform, false);
			card.rectTransform.anchoredPosition = new Vector2(0, 0);
			card.addEventTriggerDummy();

			// this player dealing effect
			//			float x = -Game.WIDTH * 0.5f * 0.60f + i * Card.WIDTH * Card.thisPlayerScale * 0.65f;
			float screenheight = 1280 * Screen.height/ (float)Screen.width;
			float x = game.thisPlayer.getInHandCardsPos(card);
			float y = thisPlayerCardInHandPosY;

			LeanTween.scale(card.rectTransform.gameObject, new Vector3(Card.thisPlayerScale, Card.thisPlayerScale, 1f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);
			LeanTween.moveLocal(card.rectTransform.gameObject, new Vector3(x, y, 0f), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);
			
			// other players dealing
			foreach (Player player in game.players) {
				if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;

					Card _card = new Card();

					_card.rectTransform = (RectTransform)Instantiate(TransformCard);
					_card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					_card.rectTransform.SetParent(cardLayer.transform);
					_card.rectTransform.anchoredPosition = new Vector2(0, 0);
					_card.rectTransform.localScale = new Vector3(1, 1, 1);

					otherPlayer.cards.Add(_card);
//					Debug.LogError("sinh cay bai_____ otherPlayer.cards.Count: " + otherPlayer.cards.Count);
					LeanTween.scale(_card.rectTransform.gameObject, new Vector3(GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, GameSceneDummy.K_SCALE_CARD_OTHERPLAYER, 1), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);
					LeanTween.moveLocal(_card.rectTransform.gameObject, otherPlayer.getOtherPlayerCardInHandPos(i,length), 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f);

				//	otherPlayer.cardTransform.Find("Text").GetComponent<Text>().text = "" + ncards;
				}
			}
		}

		SoundManager.instance.playShuffle ();

		// show nut xep bai
		controllerControl.dummyFuntions.showDummyFuntionsOnTurn (danh: false, gui: false, boc: false, ha: false, xep: true);
	}

	public void xeplaibaitrenban() {
		Debug.Log ("xeplaibaitrenban");
		for (int i = 0; i < baitrenban.Count; i++) {
			int vitricaybai = i;
			Vector2 target = Player.getVitriBaiDanhDummy (vitricaybai, baitrenban.Count);
//			if(vitricaybai>1){
//				int sindex = gsDummy.baitrenban[vitricaybai-1].rectTransform.GetSiblingIndex();
//				card.rectTransform.SetSiblingIndex(sindex + 1);
//			}
			Card card = baitrenban[i];
			LeanTween.scale (card.rectTransform, new Vector3 (K_SCALE_CARD_ONTABLE, K_SCALE_CARD_ONTABLE, 1f), 0.5f).setEase (LeanTweenType.easeOutQuart);
			LeanTween.moveLocal (card.rectTransform.gameObject, new Vector3 (target.x, target.y, 0f), 0.5f).setEase (LeanTweenType.easeOutQuart);
		}
	}

	public int giamsolabai(){
		try{
			string sobaihientai = bobai.Find("Text").GetComponent<Text>().text;
			return int.Parse (sobaihientai) -1;
		} catch(Exception e){
			Debug.LogException(e);
			return 1;
		}
	}

	public bool checkHaBai(){
		int intsobaihientai = 1;
		try {
			string sobaihientai = bobai.Find ("Text").GetComponent<Text> ().text;
			intsobaihientai = int.Parse (sobaihientai);
		} catch(Exception e){
			Debug.LogException(e);
		}
		return false;
//		if (intsobaihientai < game.players.Count) {
//			((GameDummy)game).giaidoanhabai = true;
//			return true;
//		} else
//			return false;
	}


}   