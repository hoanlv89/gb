using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using SimpleJSON;

public class GameBinh: Game
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
				new Vector2 (540, 20*y/720),
				new Vector2 (0, 265*y/720),
				new Vector2 (-540, 20*y/720)
			};
		}
	}
	
	public override Vector2[] POS5 {
		get {
			return new Vector2[]{
				new Vector2 (0, -265),
				new Vector2 (540, 30),
				new Vector2 (0, 265),
				new Vector2 (-540, 30)
			};
		}
	}
	
	public override Vector2[] POS9 {
		get {
			return StaticPos9;
		}
	}

	IEnumerator e;

	public override void startGame (JSONArray jcards) //Binh
	{
		base.startGame (jcards);
		
		thisPlayer.cards.Clear ();
		for (int i = 0; i < jcards.Count; i++) {
			thisPlayer.cards.Add (Card.decode_binh (jcards [i].AsInt));
		}
		
		thisPlayer.setOnPlayingPosition ();
		gameScene.disableLeaveGameButton ();
		gameScene.startDealing ();
		SoundManager.instance.playShuffle ();
		
		Debug.Log ("Game.cs - START GAME BINH");
		((GameSceneBinh)GameApplication.gameScene).binhComp.IS_COUNT_DOWN = false;
		Utils.Executor[] exe = new Utils.Executor[1];
		float[] time = {91.0f};
		exe [0] = delegate {
			if (((GameSceneBinh)gameScene).isMovable) {
				JSONArray result = new JSONArray ();
				
				for (int i=0; i<thisPlayer.cards.Count; i++) {
					//Card c = GameApplication.game.thisPlayer.cards [i];
					Card c = thisPlayer.cards [i];
					result [-1].AsInt = c.encode_binh ();									
				}
				var json = new JSONClass ();
				json ["evt"] = "fsc";
				json ["Arr"] = result;
				GameApplication.cubeia.sendDataGame (json);
//				Debug.LogError("tu dong gui bai");
			}
		};
//		((GameSceneBinh)GameApplication.gameScene).binhComp.showBinhFunc ();
		e = Utils.cr_runDelayed (time, exe);
		gameScene.StartCoroutine (e);
	}
	
	void sochi (List<Card> listV, Player player, int chi)
	{
		List<Card> chi1 = Binh_CardValues.getValueListChild (listV, chi);
//		Debug.Log (player.name + " - Chi " + chi + " : " + Binh_CardValues.debugListCard (chi1));

		Vector2 effPos = Vector2.zero; //Vi tri hien gia tri chi

		if (player != null && player.rectTransform != null) {
			if (player is OtherPlayer) {//Other Player
				float scale = 1.2f;
				//Vector2 vMargin;
				Vector2 posPlayer = getViewPositionOfPlayer (player);
				Debug.Log ("Player " + player.name + " : " + posPlayer.x);
				Vector2 vMargin = Vector2.zero;

				if (posPlayer.x == 0) { //Ben tren
					float dy = (player.rectTransform.sizeDelta.x / 2);
					//float dy = (player.rectTransform.sizeDelta.x * 3 / 4);
					vMargin = posPlayer + new Vector2 (0, -dy);
					vMargin -= new Vector2 ((Card.WIDTH) * (chi1.Count / 2) * scale, 0);
				} else if (posPlayer.x < 0) { //Trai
					float dx = (player.rectTransform.sizeDelta.x / 2);
					//float dx = (player.rectTransform.sizeDelta.x * 3 / 4);
					vMargin = posPlayer + new Vector2 (dx, 0);
				} else { //Phai
					float dx = (player.rectTransform.sizeDelta.x / 2);
					//float dx = (player.rectTransform.sizeDelta.x * 3 / 4);
					vMargin = posPlayer - new Vector2 (dx, 0);
				}

				vMargin += new Vector2(Card.WIDTH * 0.5f, 0f);
			
				for (int i=0; i<chi1.Count; i++) {
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2 (Card.WIDTH, Card.HEIGHT);
					rect.GetComponent<Image> ().sprite = chi1 [i].getSprite ();
					rect.SetParent (gameScene.cardLayer, false);
					rect.localScale = new Vector3 (scale, scale, scale);
					if (posPlayer.x > 0) //Phai
						rect.anchoredPosition = vMargin + new Vector2 (Card.WIDTH * (i - chi1.Count) * scale * 0.85f, 0);
					else
						rect.anchoredPosition = vMargin + new Vector2 (Card.WIDTH * i * scale * 0.85f, 0);
				}

				// **: he so 0.85f lam cho 2 cay bai sat lai voi nhau.
				if (posPlayer.x > 0)
					effPos = vMargin + new Vector2 (-Card.WIDTH * ((chi1.Count / 2)) * scale, 0);
				else
					effPos = vMargin + new Vector2 (Card.WIDTH * ((chi1.Count / 2)) * scale * 0.85f, 0);
			} else { //This Player
				float scale = Card.thisPlayerScaleBinh;	
				float d = (player.rectTransform.sizeDelta.x / 2) + ((float)Card.HEIGHT * scale / 2);
			
				Vector2 vMargin = getViewPositionOfPlayer (player) + new Vector2 (0f, Card.HEIGHT* 0.5f);
				vMargin.x = vMargin.x - 200;
				for (int i=0; i < chi1.Count; i++) {
					RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
					rect.sizeDelta = new Vector2 (Card.WIDTH, Card.HEIGHT);
					rect.GetComponent<Image> ().sprite = chi1 [i].getSprite ();
					rect.SetParent (gameScene.cardLayer, false);
					rect.localScale = new Vector3 (scale, scale, scale);
					rect.anchoredPosition = vMargin + new Vector2 (Card.WIDTH * i * scale * 0.85f, 0);
				}
				effPos = vMargin + new Vector2 (Card.WIDTH * ((chi1.Count / 2)) * scale * 0.85f, 50) - new Vector2 (0f, Card.HEIGHT* 0.5f);
				player.stopCountDown ();
			}
		}


		//Hieu ung hien ten chi
//		ChiValue cv = Binh_CardValues.chiValue (chi1);
		int mark2 = Binh_CardValues.getMark (chi1);
		string txtChi2 = "";
		if (mark2 == 0) {
			txtChi2 = "Mậu";
		} 
		if (mark2 > 1 * 68) {
			txtChi2 = "Đôi";
		}
		if (mark2 > 2 * 68) {
			txtChi2 = "Thú";
		}
		if (mark2 > 3 * 68) {
			if (chi == 3) {
				player.itemResult.note.Append ("Xám chi 1(+2)");
			}
			txtChi2 = "Xám";
		}
		if (mark2 > 4 * 68) {
			txtChi2 = "Sảnh";
		}
		if (mark2 > 5 * 68) {
			txtChi2 = "Thùng";
		}
		if (mark2 > 6 * 68 && mark2 < 7 * 68) {
			if (chi == 2) {
				if (player.itemResult.note.Length == 0) {
					player.itemResult.note.Append ("Cù lũ chi 2(+1)");
				} else {
					player.itemResult.note.Append (", Cù lũ chi 2(+1)");
				}
			}
			txtChi2 = "Cù Lũ";
		}
		if (mark2 > 7 * 68 && mark2 < 8 * 68) {
			if (chi == 2) {
				if (player.itemResult.note.Length == 0) {
					player.itemResult.note.Append ("Tứ quý chi 2(+6)");
				} else {
					player.itemResult.note.Append (", Tứ quý chi 2(+6)");
				}
			}
			if (chi == 1) {
				if (player.itemResult.note.Length == 0) {
					player.itemResult.note.Append ("Tứ quý chi 3(+3)");
				} else {
					player.itemResult.note.Append (", Tứ quý chi 3(+3)");
				}
			}
			txtChi2 = "Tứ Quý";
		}
		if (mark2 > 8 * 68) {
			if (chi == 2) {
				if (player.itemResult.note.Length == 0) {
					player.itemResult.note.Append ("TPSảnh chi 2(+8)");
				} else {
					player.itemResult.note.Append (", TPSảnh chi 2(+8)");
				}
			}
			if (chi == 1) {
				if (player.itemResult.note.Length == 0) {
					player.itemResult.note.Append ("TPSảnh chi 3(+4)");
				} else {
					player.itemResult.note.Append (", TPSảnh chi 3(+4)");
				}
			}
			txtChi2 = "TPSảnh";
		}
		//player.viewControl.showOtherImage(cv.name);
		
		player.viewControl.showBinhValue (effPos, txtChi2, new Color32 ());
		Utils.Executor[] exe = new Utils.Executor[1];
		float[] time = {1.5f};
		exe [0] = delegate {
			effectAG (player, chi, effPos);
			//effectAG (player, 2);
		};
		gameScene.StartCoroutine (Utils.cr_runDelayed (time, exe));

		
	}
	
	void effectAG (Player player, int chi, Vector2 effPos)
	{ //Hieu ung cong tien khi so chi, index la so thu tu nguoi choi
		if (player is ThisPlayer) {
			int count = 0;
			int length = dataCards.Count;
			int index = 0;
			for (int i=0; i<players.Count; i++) {
				if (players [i] is ThisPlayer) {
					index = i;
					break;
				}
			}

			if (index < dataCards.Count) {
				DataCard d = dataCards [index];
				for (int i=0; i<length; i++) {
					if (i != index && players [i].maubinh == 0 && !players [i].binhlung) {
						count = count + DataCard.compare (d, dataCards [i], chi);
					}
				}
			
				if (count != 0) {
					player.viewControl.showAgPlus_Binh (count, effPos);
				} else {
					if (player.text_winning != null) {
						player.text_winning.enabled = false;
						player.text_winning.GetComponentInParent<Gradient> ().enabled = false;
					}
				}
			}
		} else {
			int length = dataCards.Count;
			int indexThisPlayer = 0;
			int indexPlayer = 0;
			for (int i=0; i<players.Count; i++) {
				if (players [i] is ThisPlayer) {
					indexThisPlayer = i;
					break;
				}
			}
			indexPlayer = players.IndexOf (player);
			if (indexPlayer < dataCards.Count && indexThisPlayer < dataCards.Count && GameApplication.game.thisPlayer.cards.Count > 0
				&& players [indexPlayer].mb == 0 && players [indexThisPlayer].mb == 0) {
				DataCard d1 = dataCards [indexPlayer];
				DataCard d2 = dataCards [indexThisPlayer];
				int count = DataCard.compare (d1, d2, chi);
				if (count > 0) {
					player.itemResult.max--;
					if (player.itemResult.max == -3) {
						player.viewControl.showBinhValue (effPos, "Thua sập hầm", new Color32 (0, 0, 0, 255));
						if (GameApplication.game.thisPlayer.itemResult.note.Length == 0) {
							GameApplication.game.thisPlayer.itemResult.note.Append ("Thua sập hầm " + player.name + "(-3)");
							if (player.itemResult.note.Length == 0) {
								player.itemResult.note.Append ("Thắng sập hầm " + GameApplication.game.thisPlayer.name + "(+3)");
							} else {
								player.itemResult.note.Append (",Thắng sập hầm " + GameApplication.game.thisPlayer.name + "(+3)");
							}

						} else {
							GameApplication.game.thisPlayer.itemResult.note.Append (",Thua sập hầm " + player.name + "(-3)");
							if (player.itemResult.note.Length == 0) {
								player.itemResult.note.Append ("Thắng sập hầm " + GameApplication.game.thisPlayer.name + "(+3)");
							} else {
								player.itemResult.note.Append (",Thắng sập hầm " + GameApplication.game.thisPlayer.name + "(+3)");
							}
						}
					}
				}
				if (count < 0) {
					player.itemResult.max++;
					if (player.itemResult.max == 3) {
						player.viewControl.showBinhValue (effPos, "Thắng sập hầm", new Color32 ());
						if (GameApplication.game.thisPlayer.itemResult.note.Length == 0) {
							GameApplication.game.thisPlayer.itemResult.note.Append ("Thắng sập hầm " + player.name + "(+3)");
							if (player.itemResult.note.Length == 0) {
								player.itemResult.note.Append ("Thua sập hầm " + GameApplication.game.thisPlayer.name + "(-3)");
							} else {
								player.itemResult.note.Append (",Thua sập hầm " + GameApplication.game.thisPlayer.name + "(-3)");
							}
						} else {
							GameApplication.game.thisPlayer.itemResult.note.Append (",Thắng sập hầm " + player.name);
							if (player.itemResult.note.Length == 0) {
								player.itemResult.note.Append ("Thua sập hầm " + GameApplication.game.thisPlayer.name + "(-3)");
							} else {
								player.itemResult.note.Append (",Thua sập hầm " + GameApplication.game.thisPlayer.name + "(-3)");
							}
						}
						
					}
				}
				if (count == 0) {
					if (chi == 3) {
						if (GameApplication.game.thisPlayer.itemResult.note.Length == 0) {
							GameApplication.game.thisPlayer.itemResult.note.Append ("Hòa chi 1 " + player.name);
						} else {
							GameApplication.game.thisPlayer.itemResult.note.Append (",Hòa chi 1" + player.name);
						}
					}
					if (chi == 2) {
						if (GameApplication.game.thisPlayer.itemResult.note.Length == 0) {
							GameApplication.game.thisPlayer.itemResult.note.Append ("Hòa chi 2 " + player.name);
						} else {
							GameApplication.game.thisPlayer.itemResult.note.Append (",Hòa chi 2" + player.name);
						}
					}
					if (chi == 1) {
						if (GameApplication.game.thisPlayer.itemResult.note.Length == 0) {
							GameApplication.game.thisPlayer.itemResult.note.Append ("Hòa chi 3 " + player.name);
						} else {
							GameApplication.game.thisPlayer.itemResult.note.Append (",Hòa chi 3" + player.name);
						}
					}
				}
				if (count != 0)
					player.viewControl.showAgPlus_Binh (count, effPos);
				else {
					if (player.text_winning != null) {
						player.text_winning.enabled = false;
						player.text_winning.GetComponentInParent<Gradient> ().enabled = false;
					}
				}
			}
		}
	}
	
	void showMBCard (List<int> listV, Player player)
	{
		if (player is OtherPlayer) {//Other Player
			float scale = 0.8f;
			float margin = 0.85f;
			Vector2 vOrg; //vi tri quan bai dau tien
			Vector2 posPlayer = getViewPositionOfPlayer (player);
			if (posPlayer.x > 0) { //Phai
				float x = posPlayer.x - player.rectTransform.sizeDelta.x / 2 - (float)Card.WIDTH;
				vOrg = new Vector2 (x, posPlayer.y + (Card.HEIGHT / 2));
			} else { //Trai
				float x = posPlayer.x + player.rectTransform.sizeDelta.x / 2 + (float)Card.WIDTH;
				vOrg = new Vector2 (x, posPlayer.y + (Card.HEIGHT / 2));
			}
			
			for (int i=0; i<listV.Count; i++) {
				RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
				rect.sizeDelta = new Vector2 (Card.WIDTH, Card.HEIGHT);
				rect.GetComponent<Image> ().sprite = Card.decode_binh (listV [i]).getSprite ();
				rect.SetParent (gameScene.cardLayer, false);
				rect.localScale = new Vector3 (scale, scale, scale);
				
				Vector2 vpos = Vector2.zero;
				if (posPlayer.x > 0) { //Phai
					if (i < 3) {
						vpos = vOrg + new Vector2 (-(Card.WIDTH * scale * margin) * i, 0);
						rect.SetSiblingIndex (2 - i);
					} else if (i >= 3 && i < 8) {
						vpos = vOrg + new Vector2 (-(Card.WIDTH * scale * margin) * (i - 3), -Card.HEIGHT * scale * margin);
						rect.SetSiblingIndex (10 - i);
					} else {
						vpos = vOrg + new Vector2 (-(Card.WIDTH * scale * margin) * (i - 8), -2 * Card.HEIGHT * scale * margin);
						rect.SetSiblingIndex (20 - i);
					}
				} else { //Trai
					if (i < 3) {
						vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * i, 0);
					} else if (i >= 3 && i < 8) {
						vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * (i - 3), -Card.HEIGHT * scale * margin);
					} else {
						vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * (i - 8), -2 * Card.HEIGHT * scale * margin);
					}
				}
				rect.anchoredPosition = vpos;
				
			}
		} else { //This Player
			float scale = 0.9f;
			float margin = 0.85f;
			Vector2 posPlayer = getViewPositionOfPlayer (player);
			
			//float x = posPlayer.x + player.rectTransform.sizeDelta.x / 2 + (float)(Card.WIDTH * scale);
			float x = -Card.WIDTH * scale * 2;
			Vector2 vOrg = new Vector2 (x, posPlayer.y + (Card.HEIGHT * 2 * scale)); //vi tri quan bai dau tien
			
			for (int i=0; i<listV.Count; i++) {
				RectTransform rect = (RectTransform)GameObject.Instantiate (gameScene.TransformCard);
				rect.sizeDelta = new Vector2 (Card.WIDTH, Card.HEIGHT);
				rect.GetComponent<Image> ().sprite = Card.decode_binh (listV [i]).getSprite ();
				rect.SetParent (gameScene.cardLayer, false);
				rect.localScale = new Vector3 (scale, scale, scale);
				
				Vector2 vpos = new Vector2(0f, -Card.HEIGHT * scale * margin);
				
				if (i < 3) {
					vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * i, 0);
				} else if (i >= 3 && i < 8) {
					vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * (i - 3), -Card.HEIGHT * scale * margin);
				} else {
					vpos = vOrg + new Vector2 ((Card.WIDTH * scale * margin) * (i - 8), -Card.HEIGHT * scale * margin * 2);
				}
				rect.anchoredPosition = vpos;
				
			}
		}
	}
	
	List<DataCard> dataCards = new List<DataCard> ();

	public override void onReconnection ()
	{
		base.onReconnection ();
		
	}

	public override void finishThisGame (JSONArray finishArray)
	{
		if (e != null) {
			gameScene.StopCoroutine (e);
		}
		int v = 0;	
		base.finishThisGame (finishArray);
		gameScene.enableLeaveGameButton (3);
		gameScene.clearCardLayer ();
		Player winner = null;
		ArrayList chips = new ArrayList ();
		
		dataCards.Clear ();
		int check = 0;
		for (int i = 0; i < finishArray.Count; i++) {
			var jobj = finishArray [i];
			JSONArray jcards = jobj ["ArrCard"].AsArray;
			string name = jobj ["N"];
			Player player = getPlayer (name);
			int mb = jobj ["MB"].AsInt;
			int winnings = jobj ["M"].AsInt;
			player.mb = mb;
			player.binhlung = jobj ["BL"].AsBool;
			player.maubinh = jobj ["MB"].AsInt;
			player.itemResult.name = name;
			player.itemResult.ag = winnings;
			player.itemResult.note.Length = 0;
			player.itemResult.max = 0;
			if (player.binhlung || player.maubinh > 0) {
				check++;
			}
			dataCards.Add (new DataCard (name, jcards));
		}

		List<ItemResult> listItem = new List<ItemResult> ();

		for (int i = 0; i < finishArray.Count; i++) {
			var jobj = finishArray [i];
			string name = jobj ["N"];
			int winnings = jobj ["M"].AsInt;
			int mb = jobj ["MB"].AsInt;
			Player player = getPlayer (name);
			if (jobj ["BL"].AsBool == true)
				v = -1;
			else {
				v = mb;
			}

			player.binhlung = jobj ["BL"].AsBool;
			player.maubinh = jobj ["MB"].AsInt;
			int ag = jobj ["AG"].AsInt;
			int d = jobj ["D"].AsInt;
			JSONArray jcards = jobj ["ArrCard"].AsArray;
			if (player.binhlung) {
				player.itemResult.note.Append ("Binh lủng");
			}
			if (v == 10)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_basanh);
			else if (v == 11)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_bathung);
			else if (v == 12)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_saudoi);
			else if (v == 13)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_donghoa); //13 cay cung mau
			else if (v == 14)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_sanhrong);//2-A
			else if (v == 15)
				player.itemResult.note.Append (Strings.instance.gameplay_binh_mb_sanhrongdonghoa); 
			
			if (player is OtherPlayer) {
				foreach (RectTransform rect in ((OtherPlayer)player).cardsInHandList)
					GameObject.Destroy (rect.gameObject);
			}


			List<int> listV = Binh_CardValues.getValueListCard (jcards);
			List<Card> listCard = new List<Card> ();
			for (int j=0; j<jcards.Count; j++) {
				listCard.Add (Card.decode_binh (jcards [j].AsInt));
			}
			if (player.binhlung || player.maubinh > 0) {
				showMBCard (listV, player);
				player.finishBinh (v, ag, winnings, jcards);
				listItem.Add (player.itemResult);
				gameScene.StartCoroutine (Utils.cr_runDelayed (10f, () => {
					player.viewControl.showWinnerImage (null);
				}));
			} else {
				if (check == finishArray.Count - 1) {
					showMBCard (listV, player);
					player.finishBinh (v, ag, winnings, jcards);
					listItem.Add (player.itemResult);
				} else {
					// cai nay de lam gi?
					gameScene.playerLayer.GetComponent<Image> ().enabled = true;
					sochi (listCard, player, 3);
					Utils.Executor[] exe = new Utils.Executor[3];
					float[] time = {3f,3f,3f};
					exe [0] = delegate {
						sochi (listCard, player, 2);
					};
					exe [1] = delegate {
						sochi (listCard, player, 1);
					};
					exe [2] = delegate {
						gameScene.StartCoroutine (Utils.cr_runDelayed (3f, () => {
							player.viewControl.showWinnerImage (null);
						}));
						listItem.Add (player.itemResult);
						gameScene.playerLayer.GetComponent<Image> ().enabled = false;
						player.finishBinh (v, ag, winnings, jcards);
						gameScene.clearCardLayer ();
						updateReadyStatus ();
					};
					gameScene.StartCoroutine (Utils.cr_runDelayed (time, exe));
				}
			}

		}
		gameScene.StartCoroutine (Utils.cr_runDelayed (8f, delegate() {
			SoundManager.instance.playFinished ();
		}));
		gameScene.StartCoroutine (Utils.cr_runDelayed (10f, delegate() {
//			thisPlayer.countDownReady ();
			if(GameApplication.gameApp == GameApplication.GameApp.G3C){
				gameScene.controllerControl.resultBinh.gameObject.SetActive (true);
				gameScene.controllerControl.resultBinh.init (listItem);
				gameScene.StartCoroutine (Utils.cr_runDelayed (3.5f, delegate() {
					gameScene.controllerControl.resultBinh.closePop();
				}));
			}
			if(GameApplication.gameApp == GameApplication.GameApp.G52Fun){
				gameScene.controllerControl.resultBinh.gameObject.SetActive (true);
				gameScene.controllerControl.resultBinh.init (listItem);
				gameScene.StartCoroutine (Utils.cr_runDelayed (3.5f, delegate() {
					gameScene.controllerControl.resultBinh.closePop();
				}));
			}
			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
				gameScene.controllerControl.resultBinh.gameObject.SetActive (true);
				gameScene.controllerControl.resultBinh.init (listItem);
				gameScene.StartCoroutine (Utils.cr_runDelayed (3.5f, delegate() {
					gameScene.controllerControl.resultBinh.closePop();
				}));
			}
		}));
		if (winner == null)
			return;
		
		float targetx = winner.rectTransform.anchoredPosition.x;
		float targety = winner.rectTransform.anchoredPosition.y + winner.viewControl.ag.rectTransform.anchoredPosition.y;
		foreach (RectTransform chip in chips) {
			LeanTween.moveLocal (chip.gameObject, new Vector3 (targetx, targety, 0), 0.8f).setEase (LeanTweenType.easeOutQuart).setDestroyOnComplete (true);
		}
	}
}
