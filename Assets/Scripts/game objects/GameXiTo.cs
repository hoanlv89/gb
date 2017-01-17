using UnityEngine;
using System.Collections;
using SimpleJSON;

public class GameXiTo : Game, IPokerGameLiked
{
	public Vector2[]  StaticPos5 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -235*y/720),
				new Vector2 (520, -152*y/720),
				new Vector2 (500, 150*y/720),
				new Vector2 (-500, 150*y/720),
				new Vector2 (-520, -152*y/720)
			};
		}
	}
	
	public override Vector2[] POS2 {
		get {
			return new Vector2[]{
				StaticPos5 [0],
				StaticPos5 [2]
			};
		}
	}
	
	public override Vector2[] POS4 {
		get {
			return new Vector2[]{
				StaticPos5 [0],
				StaticPos5 [1],
				StaticPos5 [2],
				StaticPos5 [3] 
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			return StaticPos5;
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos5;
		}
	}
	
	public static Vector2[] StaticPosBet5 = {
		new Vector2 (0, -40),
		new Vector2 (330, -35),
		new Vector2 (322, 78),
		new Vector2 (-322, 78),
		new Vector2 (-330, -35)			
	};
	public Vector2[] POSBet2 = {
		StaticPosBet5 [0],
		StaticPosBet5 [2]
	};
	public Vector2[] POSBet4 = {
		StaticPosBet5 [0],
		StaticPosBet5 [1],
		StaticPosBet5 [2],
		StaticPosBet5 [3] 
	};
	public Vector2[] POSBet5 = StaticPosBet5;
	public static Vector2[] StaticPosCard5 = {
		new Vector2 (0, -110),
		new Vector2 (328, -100),
		new Vector2 (300, 140),
		new Vector2 (-300, 140),
		new Vector2 (-328, -100)
	};
	public Vector2[] POSOtherCard2 = {
		StaticPosCard5 [0],
		StaticPosCard5 [2]
	};
	public Vector2[] POSOtherCard4 = {
		StaticPosCard5 [0],
		StaticPosCard5 [1],
		StaticPosCard5 [2],
		StaticPosCard5 [3] 
	};
	public Vector2[] POSOtherCard5 = StaticPosCard5;
	//**************************************
	private int _maxTotalBetChipOfAPlayer;
	public int maxTotalBetChipOfAPlayer{
		get{
			return _maxTotalBetChipOfAPlayer;
		}
		set{
			_maxTotalBetChipOfAPlayer = value;
		}
	}
	public int totalBetInPot;
	public ChipBetControl chipPotControl;
	
	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
		gameScene.disableLeaveGameButton ();
		foreach (Card card in thisPlayer.cards) {
			GameObject.Destroy (card.rectTransform.gameObject);
		}
		thisPlayer.cards.Clear ();
		thisPlayer.initializePokerButtons ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_xito (jcards [i].AsInt));
		}
		totalBetInPot = 0;
		maxTotalBetChipOfAPlayer = stake;
		gameScene.startDealing ();
		// phai de delay 0.8s vi ham betStartXiTo moi chay dc binh thuong.
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			foreach (Player player in players) {
				player.totalBetChip = stake;
				player.betOnStart (stake);
			}
		}));
	}
	
	public override void updateReadyStatus ()
	{
		base.updateReadyStatus ();
	}

	public override string gameInfoToString ()
	{
		string adinfo = "";
		if(type == 3)
			adinfo = "[cây bài tẩy]";
		else 
			adinfo = "[truyền thống]";
		
		return id + " : " + Utils.formatCurrency (stake, false)+ "\n" 
			+ adinfo;
	}
	
	public void updateMaxTotalBetChipOfAPlayer (int totalBetChip)
	{
		if (maxTotalBetChipOfAPlayer < totalBetChip)
			maxTotalBetChipOfAPlayer = totalBetChip;	
	}
	
	public override void onReconnection(){
		base.onReconnection();
		
	}
	
	public override void finishThisGame (JSONArray finishArray)
	{
		gameScene.enableLeaveGameButton (3);
		gatherChipBetsIntoPot ();
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.8f, delegate {
			base.finishThisGame (finishArray);
			gameScene.controllerControl.hidePokerFunctionsOnFinish ();
			
			for (int i = 0; i < finishArray.Count; i++) {
				var jobj = finishArray [i];
				string name = jobj ["N"];
				int winnings = jobj ["M"].AsInt;
				int ag = jobj ["AG"].AsInt;
				JSONArray jcards = jobj ["ArrCard"].AsArray;
				JSONArray jcardsWin = jobj ["ArrWin"].AsArray;
				
				Player player = getPlayer (name);
				player.finishXiTo (ag, winnings, jcards);
				
				if (winnings > 0) {
					// chuyen tien tu pot cho winner animation 0.6s
					transferChipToWinner (player);
				}
			}
		}));
	}
	
	public Vector2 getViewPositionOfChipBetPlayer (Player player)
	{
		int maxsize = 5;
		////

		int size = players.Count;
		Vector2[] POSBet = POSBet2;
		if (size > 4 || (size == 4 && maxsize > 4))
			POSBet = POSBet5;
		else if (size > 2)
			POSBet = POSBet4;
		int viewSize = POSBet.Length;
		
		int i = players.IndexOf (player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf (thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}
		
		return POSBet [i];
	}
	
	public Vector2 getViewPositionOfPlayersCard (float x0, float y0, float margin, float scale, int index, int count)
	{
		// x0 la toa do x cua trong tam
		// fix margin = 0.66
		float totalWidth = (margin * (count - 1) + 1) * Card.WIDTH;
		float startx = x0 + (-totalWidth * 0.5f + (0.5f + index * margin) * Card.WIDTH) * scale;
		
		return new Vector2 (startx, y0);
	}
	
	public Vector2 getViewPositionOfPlayersCard (Player player, float margin, float scale, int index, int count)
	{
		int maxsize = 5;
		////

		int size = players.Count;
		Vector2[] POSBet = POSOtherCard2;
		if (size > 4 || (size == 4 && maxsize > 4))
			POSBet = POSOtherCard5;
		else if (size > 2)
			POSBet = POSOtherCard4;
		int viewSize = POSBet.Length;
		
		int i = players.IndexOf (player);
		if (thisPlayer != null) {
			int thisPlayerPos = players.IndexOf (thisPlayer);
			i = (i + viewSize - thisPlayerPos) % viewSize;
		}
		
		//		POSBet [i];
		// fix margin = 0.66
		float totalWidth = (margin * (count - 1) + 1) * Card.WIDTH;
		float startx = POSBet [i].x + (-totalWidth * 0.5f + (0.5f + index * margin) * Card.WIDTH) * scale;
		
		return new Vector2 (startx, POSBet [i].y);
	}
	
	public ChipBetControl getPotControl ()
	{
		if (chipPotControl == null) {
			RectTransform rectTransform = (RectTransform)GameObject.Instantiate (gameScene.ChipBet);
			rectTransform.SetParent (gameScene.cardLayer, false);
			chipPotControl = rectTransform.GetComponent<ChipBetControl> ();
			chipPotControl.totalValue = 0;
			chipPotControl.text.text = "";
			chipPotControl.setPosition (new Vector2 (0, Card.HEIGHT));
		}
		return chipPotControl;
	}
	
	public void gatherChipBetsIntoPot ()
	{
		Vector2 pos = ((RectTransform)getPotControl ().transform).anchoredPosition;
		
		for (int i = 0; i < players.Count; i++) {
			ChipBetControl chipBetControl = players [i].chipBetControl;
			if (chipBetControl == null)
				return;
			if (chipBetControl.totalValue == 0) {
				chipBetControl.destroy ();
				chipBetControl = null;
			} else {
				LeanTween.moveLocal (chipBetControl.transform.gameObject, new Vector3 (pos.x, pos.y, 0), 0.6f).setEase (LeanTweenType.easeOutQuart);
				gameScene.StartCoroutine (Utils.cr_runDelayed (0.4f, delegate() {
					getPotControl ().totalValue += chipBetControl.totalValue;
					chipBetControl.destroy ();
					chipBetControl = null;
					getPotControl ().updateValue ("Call", 0);
				}));
			}
		}
	}
	
	void transferChipToWinner (Player winner)
	{
		Vector2 pos = winner.getChipsPos ();	
		LeanTween.moveLocal (getPotControl ().transform.gameObject, new Vector3 (pos.x, pos.y, 0), 0.6f).setEase (LeanTweenType.easeOutQuart);
		gameScene.StartCoroutine (Utils.cr_runDelayed (0.6f, delegate() {
			if (chipPotControl != null) {
				chipPotControl.destroy ();
				chipPotControl = null;
			}
		}));
		
	}
	
}

