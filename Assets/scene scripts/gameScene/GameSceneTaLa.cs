using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using System;

public class GameSceneTaLa : GameScene
{
	public RectTransform bobai;
	public RectTransform selectedCardArrow1, selectedCardArrow2; // tala
	
	public override void Start()
	{
		base.Start();
		Debug.Log("GameSceneTaLa onStart");
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
		if (game.thisPlayer != null)
			game.thisPlayer.initializeTaLaButtons();
	}
	public void showBobai(bool show, int sobai){
		if (show == true) {
			bobai = (RectTransform)GameObject.Instantiate (TransformCardBackWithNumber);
			bobai.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			bobai.GetComponent<Button>().onClick.AddListener(delegate {
				game.thisPlayer.send_bocbaitala();
			});
			if(sobai!=0){
				string txt = bobai.Find ("Text").GetComponent<Text> ().text = sobai.ToString();
				Debug.Log (txt);
			}
			bobai.SetParent (cardLayer.transform, false);
			bobai.anchoredPosition = new Vector2 (0, 0);
		
		} else {
			bobai.gameObject.SetActive(false);
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
				otherPlayer.setCardTransform((RectTransform)Instantiate(TransformCard));
			}
		}
		for (int i = 0; i < length; i++) {
			Card card = game.thisPlayer.cards [i];
			card.rectTransform = (RectTransform)Instantiate(TransformCard);
			card.rectTransform.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
			card.rectTransform.SetParent(cardLayer.transform, false);
			card.rectTransform.anchoredPosition = new Vector2(0, 0);
			card.addEventTriggerTaLa();


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
					
					RectTransform movingCard = (RectTransform)Instantiate(TransformCard);
					movingCard.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					movingCard.SetParent(cardLayer.transform);
					movingCard.anchoredPosition = new Vector2(0, 0);
					movingCard.localScale = new Vector3(1, 1, 1);
					
					Vector3 target = new Vector3(otherPlayer.rectTransform.anchoredPosition.x + otherPlayer.cardTransform.anchoredPosition.x, 
					                             otherPlayer.rectTransform.anchoredPosition.y + otherPlayer.cardTransform.anchoredPosition.y,
					                             0f);
					LeanTween.moveLocal(movingCard.gameObject, target, 0.4f).setEase(LeanTweenType.easeOutQuart).setDelay(0.1f + i * 0.1f).setDestroyOnComplete(true);
					
					int ncards = i + 1;
					otherPlayer.cardsInHand = ncards;
				//	otherPlayer.cardTransform.Find("Text").GetComponent<Text>().text = "" + ncards;
				}
			}

		}

		this.showBobai (true, game.players.Count*4 - 1);

		// show nut xep bai
		controllerControl.talaFuntions.showTaLaFuntionsOnTurn(1);
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
		if (intsobaihientai < game.players.Count) {
			((GameTaLa)game).giaidoanhabai = true;
			return true;
		} else
			return false;
	}

	public void showHabaitudong(){
		SDialog dialog = showDialog (DialogInfo.OKCancelDialog);
		dialog.content.text = "Bạn có muốn hạ tự động không?";
		//dialog.positiveText.text = "Hạ bài tự động";
		//dialog.negativeText.text = "Hạ bài thủ công";
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss();
			//gui lenh ha bai tu dong
			game.thisPlayer.send_habaitudong();
			Debug.Log("da gui ha tu dong");
	});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss();
	});
		this.StartCoroutine (Utils.cr_runDelayed(5f,delegate {
			dialog.dismiss();
	}));
	}


}   