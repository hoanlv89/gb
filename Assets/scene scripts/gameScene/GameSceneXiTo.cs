using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;

public class GameSceneXiTo : GameScene, IPokerSceneLiked
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
			LeaveRequestPacket packet = new LeaveRequestPacket ();
			packet.tableid = game.id;
			cubeia.sendPacket (packet);
		});
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
		int length = game.thisPlayer.cards.Count;
		foreach (Player player in game.players) {
			if (player is OtherPlayer)
				((OtherPlayer)player).cardsInHandList.Clear ();
		}
		StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			showStartGameRequest (Strings.instance.gameplay_xito_request_pick_one_card);
		}));

		for (int i = 0; i < length; i++) {
			for (int j = 0; j< game.players.Count; j++) {
				Player player = game.players [j];
				RectTransform rect = (RectTransform)Instantiate (TransformCard);
				rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				Vector2 target;
				if (player is ThisPlayer) {
					Card card = game.thisPlayer.cards [i];
					card.rectTransform = rect;
					rect.localScale = new Vector3 (1f, 1f, 1f);
					float margin = 1.0f;
					rect.anchoredPosition = new Vector2 (0f, 200f);
					float scaleFactor = 2.1f;
					target = ((GameXiTo)game).getViewPositionOfPlayersCard (0f, 0f, margin, scaleFactor, i, length);
					rect.GetComponent<Button> ().onClick.AddListener (delegate {
						var obj = new JSONClass ();
						obj ["evt"] = "fc";
						obj ["C"].AsInt = card.encode_xito ();
						cubeia.sendDataGame (obj);
					});

					LeanTween.scale (rect.gameObject, new Vector3 (scaleFactor, scaleFactor, 1f), 0.8f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.2f);
				} else if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					otherPlayer.cardsInHandList.Add (rect);
					float margin = 0.66f;
					rect.GetComponent<Image> ().sprite = GameApplication.resource.getCardBackSprite ();
					rect.anchoredPosition = new Vector2 (0f, 200f);
					target = ((GameXiTo)game).getViewPositionOfPlayersCard (player, margin, 1f, i, length);
				}
				rect.SetParent (cardLayer, false);

				LeanTween.moveLocal (rect.gameObject, new Vector3 (target.x, target.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * game.players.Count + j) * 0.2f);
			}
		}
	}

	public void dealXitoCards (JSONArray data)
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
		float margin = 0.56f;
		for (int i = 0; i < data.Count; i++) {
			var obj = data [i].AsObject;
			Player player = game.getPlayer (obj ["N"]);
			if (player.isfold == false) {
				Card card = Card.decode_xito (obj ["C"].AsInt);
				RectTransform rect = (RectTransform)Instantiate (TransformCard);
				rect.sizeDelta = new Vector2(Card.WIDTH, Card.HEIGHT);
				if (player is ThisPlayer) {
					card.rectTransform = rect;
					game.thisPlayer.cards.Add (card);
				} else if (player is OtherPlayer) {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					otherPlayer.cardsInHandList.Add (rect);
					rect.GetComponent<Image> ().sprite = card.getSprite ();
				}
				rect.anchoredPosition = new Vector2 (0f, 200f);
				Vector2 target = ((GameXiTo)game).getViewPositionOfPlayersCard (player, margin, 1f, length - 1, length);
				rect.SetParent (cardLayer, false);
				LeanTween.moveLocal (rect.gameObject, new Vector3 (target.x, target.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart);
			}
		}
		// sap xep cac quan bai truoc do
		for (int j =  0; j < game.players.Count; j++) {
			Player player = game.players [j];
			// loai bo truong hop thisPlayer view chu ko tham gia choi
			// bang cach set thisPlayer.isFold = true
			if (player.isfold == false) {
				for (int i = 0; i < length-1; i++) {
					RectTransform rect;
					if (player is ThisPlayer) {
						rect = ((ThisPlayer)player).cards [i].rectTransform;
					} else {
						OtherPlayer otherPlayer = (OtherPlayer)player;
						rect = otherPlayer.cardsInHandList [i];
					}
					Vector2 vec = ((GameXiTo)game).getViewPositionOfPlayersCard (player, margin, 1f, i, length);
					LeanTween.moveLocal (rect.gameObject, new Vector3 (vec.x, vec.y, 0f), 0.6f).setEase (LeanTweenType.easeOutQuart);
				}
			}
		}
	}

	public void showStartGameRequest (string str)
	{
		if (str != null & str.Length > 0) {
			bestHandTransform = Instantiate (BestPokerHand);
			bestHandTransform.SetParent (controllerControl.transform, false);
			bestHandTransform.SetSiblingIndex (0);
			bestHandTransform.anchoredPosition = new Vector2 (0, 150);
			bestHandTransform.GetComponent<Image> ().color = new Color32 (158, 42, 0, 224);
			Transform text = bestHandTransform.Find ("Text");
			text.GetComponent<Text> ().text = str;
			text.GetComponent<Gradient> ().enabled = false;
			text.GetComponent<Shadow> ().enabled = false;
		}
	}

	public void removeStartGameRequest ()
	{
		removeBestHand ();
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
}

