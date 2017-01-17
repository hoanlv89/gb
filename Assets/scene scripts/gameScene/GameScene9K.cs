using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;

public class GameScene9K : GameScene, IPokerSceneLiked
{
	public RectTransform BestPokerHand;
	RectTransform bestHandTransform;
	
	public override void Start ()
	{
		base.Start ();
		Debug.Log ("GameScenePoker onStart");
	}
	
	protected override void initializeView ()
	{
		base.initializeView ();
		BestPokerHand = Resources.Load ("prefabs/BestPokerHand", typeof(RectTransform)) as RectTransform;
		buttonLeaveTable.GetComponent<Button> ().onClick.AddListener (delegate {
			var jsonData = new JSONClass ();
			jsonData ["evt"] = "autoExit";
			cubeia.sendDataGame (jsonData);
		});
		controllerControl.bgControl.bg_xocdia.gameObject.SetActive (false);
//		controllerControl.bgControl.bg_tienlen.gameObject.SetActive (false);
		controllerControl.bgControl.bg_thailand.gameObject.SetActive (true);
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfleft").GetComponent<Image> ().sprite = controllerControl.bgControl.table_9k;
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfright").GetComponent<Image> ().sprite = controllerControl.bgControl.table_9k;
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfleft").transform.localPosition = new Vector2 (0, 0);
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfright").transform.localPosition = new Vector2 (0, 0);
		controllerControl.bgControl.bg_thailand.FindChild ("gameName").transform.localPosition = new Vector2 (0, 15);
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfleft").GetComponent<RectTransform> ().sizeDelta = new Vector2 (529, 560);
		controllerControl.bgControl.bg_thailand.FindChild ("tablehalfright").GetComponent<RectTransform> ().sizeDelta = new Vector2 (529, 560);
		controllerControl.topControler.bt_chat.FindChild ("bg").gameObject.SetActive (false);
	}
	
	public override void initializeViewOfPlayers ()
	{
		base.initializeViewOfPlayers ();
		// initialize  khi start game
		//		if (game.thisPlayer != null)
		//			game.thisPlayer.initializePokerButtons();
	}
	
	public override void startDealing ()
	{
		base.startDealing ();
		removeBestHand ();
		playerLayer.FindChild("Dealer").GetComponent<Animator>().enabled=true;
		int length = game.thisPlayer.cards.Count;
		foreach (Player player in game.players) {
			if (player is OtherPlayer)
				((OtherPlayer)player).cardsInHandList.Clear ();
		}

		int siblingIndex = game.thisPlayer.image_curtain.rectTransform.GetSiblingIndex() + 1;

			for (int i = 0; i < length; i++) {
				for (int j = 0; j< game.players.Count; j++) {
					Player player = game.players [j];
					RectTransform rect = (RectTransform)Instantiate (TransformCard);
					rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
					Vector2 target;
					float margin = 0.42f;

					if (player is ThisPlayer) {
						Card card = game.thisPlayer.cards [i];
						card.rectTransform = rect;
						// giu nguyen vi tri cua cay bai trong he quy chieu goc
						rect.anchoredPosition = new Vector2 (0f, 200f) - player.rectTransform.anchoredPosition;

						rect.SetParent (player.rectTransform, false);
						// set lai index
						rect.SetSiblingIndex(siblingIndex + i);
						float scale = 1.66f;
						target = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, scale, i, length);
						target = target - player.rectTransform.anchoredPosition;
					} else {
						OtherPlayer otherPlayer = (OtherPlayer)player;
						otherPlayer.cardsInHandList.Add (rect);
						rect.GetComponent<Image> ().sprite = GameApplication.resource.getCardBackSprite ();
						rect.anchoredPosition = new Vector2 (0f, 200f);

						rect.SetParent (cardLayer, false);
						float scale = 0.66f;
						target = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, scale, i, length);
						LeanTween.scale (rect.gameObject, new Vector3 (scale, scale, 1f), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.1f);
					}

					LeanTween.moveLocal (rect.gameObject, new Vector3 (target.x, target.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.1f);
				}
			}

		game.thisPlayer.becomeAttractive();
	}

	public void showOnTurnRequest (string str)
	{
		if (str != null & str.Length > 0) {
			bestHandTransform = Instantiate (BestPokerHand);
			bestHandTransform.SetParent (controllerControl.transform, false);
			bestHandTransform.SetSiblingIndex (0);
			bestHandTransform.anchoredPosition = new Vector2 (0, 60);
			Transform text = bestHandTransform.Find ("Text");
			text.GetComponent<Text> ().text = str;
			text.GetComponent<Gradient> ().enabled = false;
			text.GetComponent<Shadow> ().enabled = false;
		}
	}

	public void removeOnTurnRequest ()
	{
		removeBestHand ();
		controllerControl.raiseOptionControl.gameObject.SetActive (false);
	}
	
	public void showBestHand (string str)
	{
		if (str != null & str.Length > 0) {
			bestHandTransform = Instantiate (BestPokerHand);
			bestHandTransform.SetParent (cardLayer, false);
			bestHandTransform.anchoredPosition = new Vector2 (0, 30);
			Transform text = bestHandTransform.Find ("Text");
			text.GetComponent<Text> ().text = str;
			text.GetComponent<Gradient> ().enabled = true;
			text.GetComponent<Shadow> ().enabled = true;
		}
	}
	
	public void removeBestHand ()
	{	
		if (bestHandTransform != null) {
			Destroy (bestHandTransform.gameObject);
			bestHandTransform = null;
		}
	}

	public void deal9KCards (int code)
	{
		// voi cach xac dinh nay, neu vtable thi length ko dung
		int length = game.thisPlayer.cards.Count + 1;
		foreach (Player player in game.players) {
			if (player.isfold == false) {
				if (player is ThisPlayer) {
					length = ((ThisPlayer)player).cards.Count + 1;
				} else {
					length = ((OtherPlayer)player).cardsInHandList.Count + 1;
				}
				break;
			}
		}
		float margin = 0.42f;
		int siblingIndex = game.thisPlayer.cards[1].rectTransform.GetSiblingIndex() + 1;
		for (int i = 0; i < game.players.Count; i++) {
//			var obj = data [i].AsObject;
			Player player = game.players[i];
			if (player.isfold == false) {
				Card card;
				RectTransform rect = (RectTransform)Instantiate (TransformCard);
				rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				if (player is ThisPlayer) {
					card = Card.decode_lieng (code);
					card.rectTransform = rect;
					rect.SetParent (player.rectTransform, false);
					rect.SetSiblingIndex(siblingIndex);
					game.thisPlayer.cards.Add (card);
					rect.anchoredPosition = new Vector2 (0f, 200f)-player.rectTransform.anchoredPosition;
					Vector2 target = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, 1.66f, 2, 3);
					target = target - player.rectTransform.anchoredPosition;
//					rect.SetParent (cardLayer, false);
					LeanTween.moveLocal (rect.gameObject, new Vector3 (target.x, target.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart);
				} else if (player is OtherPlayer) {
					card = Card.decode_lieng (0);
					OtherPlayer otherPlayer = (OtherPlayer)player;
					rect.anchoredPosition = new Vector2 (0f, 200f);
					otherPlayer.cardsInHandList.Add (rect);
					rect.GetComponent<Image> ().sprite = card.getSprite ();
					rect.SetParent (cardLayer, false);
					float scale = 0.66f;
					Vector2 target = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, scale, 2, 3);
					LeanTween.scale (rect.gameObject, new Vector3 (scale, scale, 1f), 0.6f).setEase (LeanTweenType.easeOutQuart);
					LeanTween.moveLocal (rect.gameObject, new Vector3 (target.x, target.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart);
				}

			}
		}
		// sap xep cac quan bai truoc do
		for (int j =  0; j < game.players.Count; j++) {
			Player player = game.players [j];
			// loai bo truong hop thisPlayer view chu ko tham gia choi
			// bang cach set thisPlayer.isFold = true
			if (player.isfold == false) {
				for (int i = 0; i < length; i++) {
					RectTransform rect;
					if (player is ThisPlayer) {
						rect = ((ThisPlayer)player).cards [i].rectTransform;
						rect.SetParent (player.rectTransform, false);
						Vector2 vec = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, 1.66f, i, length);
						LeanTween.moveLocal (rect.gameObject, new Vector3 (vec.x, -3, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.1f);;
//						LeanTween.moveLocalY (rect.gameObject, -3, 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.3f);;
					} else {
						OtherPlayer otherPlayer = (OtherPlayer)player;
						rect = otherPlayer.cardsInHandList [i];
						rect.SetParent (cardLayer, false);
						Vector2 vec = ((Game9K)game).getViewPositionOfPlayersCard (player, margin, 0.66f, i, length);
						LeanTween.moveLocal (rect.gameObject, new Vector3 (vec.x, vec.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.1f);;
					}

				}
			}
		}
	}
}

