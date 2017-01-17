using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using UnityEngine.UI;
using com.cubeia.firebase.io.protocol;

public class GameSceneLieng : GameScene, IPokerSceneLiked
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
					target = ((GameLieng)game).getViewPositionOfPlayersCard (player, margin, scale, i, length);
					target = target - player.rectTransform.anchoredPosition;
				} else {
					OtherPlayer otherPlayer = (OtherPlayer)player;
					otherPlayer.cardsInHandList.Add (rect);
					rect.GetComponent<Image> ().sprite = GameApplication.resource.getCardBackSprite ();
					rect.anchoredPosition = new Vector2 (0f, 200f);

					rect.SetParent (cardLayer, false);
					float scale = 0.66f;
					target = ((GameLieng)game).getViewPositionOfPlayersCard (player, margin, scale, i, length);
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
}

