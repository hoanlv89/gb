using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;

public class GameChan: Game
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
				new Vector2 (0, -235*y/720),
				new Vector2 (0, 265*y/720)
			};
		}
	}
	
	public override Vector2[] POS4 {
		get {
			float y = 1280 * Screen.height/ (float)Screen.width;
			return new Vector2[]{
				new Vector2 (0, -235*y/720),
				new Vector2 (540, 0*y/720),
				new Vector2 (0, 265*y/720),
				new Vector2 (-540, 0*y/720)
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			return new Vector2[]{
				new Vector2 (0, -235),
				new Vector2 (540, 0),
				new Vector2 (0, 265),
				new Vector2 (-540, 0)
			};
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos9;
		}
	}

	public CardChan lastCardChan;
	public int huongdan;
	public int denlang;

	public override void startGame (JSONArray jcards)
	{
		base.startGame (jcards);
		gameScene.disableLeaveGameButton ();
//		thisPlayer.setOnPlayingPosition ();
		thisPlayer.cards.Clear ();

		foreach (Player player in players) {
			player.chan_cards.Clear();
			player.chan_cards1.Clear ();
			player.chan_cards2.Clear ();
		}
//		for (int i = 0; i < jcards.Count; i++) {
//			thisPlayer.cards.Add (Card.decode_tala (jcards [i].AsInt));
//		}
//		// sort
//		
//		gameScene.startDealing ();
	}

	public override void onReconnection(){
		base.onReconnection();
	}

	public void setGameConfigChan (int g, int f)
	{
		this.huongdan = g;
		this.denlang = f;

		// TODO view ra man hinh
		gameScene.updateGameConfig ();
	}

	public override string gameInfoToString ()
	{
		string adinfo = "";
		if(type > 0)
			adinfo += "[gà]";
		if(huongdan > 0)
			adinfo += "[gợi ý]";
		if(denlang > 0)
			adinfo += "[đền]";

		return id + " : " + Utils.formatCurrency (stake, false)+ "\n" 
				+ adinfo;
	}

	public int[] getDealingLocation(int pos) {
		int[] point = new int[2];
		if (pos == 0) {
			point[0] = 0;
			point[1] = - CardChan.HEIGHT * 5 / 4;
		} else if (pos == 1) {
			point[0] = CardChan.HEIGHT * 5 / 4;
			point[1] = 0;
		} else if (pos == 2) {
			point[0] = 0;
			point[1] = CardChan.HEIGHT * 5 / 4;
		} else if (pos == 3) {
			point[0] = - CardChan.HEIGHT * 5 / 4;
			point[1] = 0;
		} else if (pos == 4) {
			point[0] = 0;
			point[1] = 0;
		}
		
		return point;
	}

	public Vector2 getCard2Pos (Player pl, int i)
	{
		float height = 1280 * Screen.height/ (float)Screen.width;
		int plIndex = getViewIndexOfPlayer(pl);
		Vector2 pos = new Vector2();
		if(plIndex == 0){
			pos.x = 350f + CardChan.WIDTH * (i % 6);
			pos.y = -220f*height/720;
		} else if(plIndex == 1){
			pos.x = 430f - CardChan.WIDTH * (i % 6);
			pos.y = 40f*height/720;
		} else if(plIndex == 2){
			pos.x = -107f - CardChan.WIDTH * (i % 6);
			pos.y = 274f*height/720;
		} else if(plIndex == 3){
			pos.x = -430f + CardChan.WIDTH * (i % 6);
			pos.y = 40f*height/720;
		}
		if(i > 5)
			pos.y -= 54f;

		return pos;
	}

	public Vector2 getCard1Pos (Player pl, int i)
	{
		float height = 1280 * Screen.height/ (float)Screen.width;
		int plIndex = getViewIndexOfPlayer(pl);
		Vector2 pos = new Vector2();
		if(plIndex == 0){
			pos.x = -600 + CardChan.WIDTH * (i/2 % 6);
			pos.y = -190f*height/720 - (i % 2) * 54;
		} else if(plIndex == 1){
			pos.x = 600f - CardChan.WIDTH * (i/2 % 6);
			pos.y = 168f*height/720 - (i % 2) * 54;
		} else if(plIndex == 2){
			pos.x = 113f + CardChan.WIDTH * (i/2 % 6);
			pos.y = 274f*height/720 - (i % 2) * 54;
		} else if(plIndex == 3){
			pos.x = -600f + CardChan.WIDTH * (i/2 % 6);
			pos.y = 168f*height/720 - (i % 2) * 54;
		}
		
		return pos;
	}

	// row: 1 - chan
	// row: 2 - ca
	// row: 3 - moi an
	// i: 0 --> (size-1)
	public int getCard3PosX(int i, int size) {
		int width = (int) (size * CardChan.WIDTH);
		return (int) (- width * 0.5f + (i + 0.5f) * CardChan.WIDTH);
	}
	
	public int getCard3PosY(int row) {
		float height = 1280 * Screen.height/ (float)Screen.width;
		if (row == 1)
			return (int)(80*height/720);
		if (row == 2)
			return (int)(0*height/720);
		else
			return (int)(-80*height/720);
	}

}
