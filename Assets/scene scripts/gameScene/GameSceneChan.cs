using UnityEngine;
using System.Collections;
using com.cubeia.firebase.io.protocol;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using System;
using SimpleJSON;

public class GameSceneChan : GameScene
{
	// pf
	public RectTransform TransformCardChan;

	public string[] danhSachCuocU_showup = { "Xuông", "Thông", "Chì", "Thiên Ù", "Địa Ù", "Chíu", "Chíu Ù", "Bòn",
		"Ù bòn", "Thiên khai", "Bạch thủ", "Bạch thủ chi", "Thập thành", "Bạch định", "Tám đỏ", "Kính tứ chi",
		"Lèo", "Tôm", "Hoa rơi cửa phật", "Nhà lầu xe hơi hoa rơi cửa phật", "Cá lội sân đình",
		"Ngư ông bắt cá" };
	public string[] danhSachCuocU = { "Xuông", "Thông", "Chì", "Thiên Ù", "Địa Ù", "Chíu", "Chíu Ù", "Bòn", "Ù bòn",
		"Thiên khai", "Bạch thủ", "Bạch thủ chi", "Thập thành", "Bạch định", "Tám đỏ", "Kính tứ chi", "Lèo",
		"Đôi lèo", "Tôm", "Đôi tôm", "Hoa rơi cửa phật", "Nhà lầu xe hơi hoa rơi cửa phật", "Cá lội sân đình",
		"Ngư ông bắt cá" };
	public int[] danhSachCuocU_value = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 21, 22, 23, 24 };

	public override void Start()
	{
		base.Start();
		Debug.Log("GameSceneChan onStart");
	}
	
	protected override void initializeView()
	{
		base.initializeView();
		// doi cho playerLayer va cardLayer
		int pLindex = playerLayer.GetSiblingIndex();
		cardLayer.SetSiblingIndex(pLindex);
		TransformCardChan = Resources.Load ("prefabs/PFCardChan", typeof(RectTransform)) as RectTransform;

		buttonLeaveTable.GetComponent<Button>().onClick.AddListener(delegate {
			LeaveRequestPacket packet = new LeaveRequestPacket();
			packet.tableid = game.id;
			cubeia.sendPacket(packet);
		});

		controllerControl.bgControl.bg_tienlen.gameObject.SetActive(false);
		controllerControl.bgControl.bg_xocdia.gameObject.SetActive(true);

		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong){
			buttonLeaveTable.GetComponent<Image>().color = new Color32(0,0,0,0);
		}
		playerLayer.SetSiblingIndex (cardLayer.GetSiblingIndex () + 1);
	}
	
	
	public override void initializeViewOfPlayers()
	{
		base.initializeViewOfPlayers();
	}

	public void virtualDealing (Player pl, int code, Player npl, JSONArray jcards)
	{
		controllerControl.chanFuntions.gameObject.SetActive(true);
		controllerControl.chanFuntions.dealingPanel.gameObject.SetActive(true);

		playerLayer.SetSiblingIndex (cardLayer.GetSiblingIndex () + 1);

		int dealingPos = game.getViewIndexOfPlayer(pl); // 0,1,2,3,4
		int deltaPos = game.getViewIndexOfPlayer(npl) - game.getViewIndexOfPlayer(pl);

		List<RectTransform>[] big_list = new List<RectTransform>[5];

		for(int i = 0; i< 5; i++)
			big_list[i] = new List<RectTransform>();

		for (int i = 0; i < 50; i++) {
			RectTransform rectTransform = GameObject.Instantiate<RectTransform>(TransformCardChan);
			rectTransform.SetParent(controllerControl.chanFuntions.dealingPanel, false);

			int[] target = ((GameChan)game).getDealingLocation(dealingPos);
			LeanTween.moveLocal(rectTransform.gameObject, new Vector3(target[0], target[1], 0), 0.3f).setDelay(0.03f * i);
			LeanTween.rotateZ(rectTransform.gameObject, -((i / 5) % 10) * 36, 0.3f).setDelay(0.03f * i);

			// DEBUG
//			rectTransform.FindChild("Text").GetComponent<Text>().text = "" + dealingPos +"\n"+ ((dealingPos - deltaPos + 4) % 4);

			if(dealingPos == 4){
				big_list[4].Add(rectTransform);
			} else {
				big_list[(dealingPos - deltaPos + 4) % 4].Add(rectTransform);
			}
			dealingPos = ++dealingPos % 5;
		}

		CardChan cardHien = CardChan.decode(code);
		LeanTween.delayedCall(1.8f, delegate() {
			cardHien.rectTransform = GameObject.Instantiate<RectTransform>(TransformCardChan);
			cardHien.rectTransform.SetParent(controllerControl.chanFuntions.dealingPanel, false);
			int[] endPoint = ((GameChan)game).getDealingLocation(game.getViewIndexOfPlayer(pl));
			cardHien.rectTransform.anchoredPosition = new Vector2(endPoint[0], endPoint[1]);
		});
		
		int deltaDegree = getPosDegree(game.getViewIndexOfPlayer(npl)) - getPosDegree(game.getViewIndexOfPlayer(pl));
		if (deltaDegree < 0)
			deltaDegree += 360;

		// delay phai du lon: 50 * 0.03 + 0.3 = 1.8
		LeanTween.rotateZ(controllerControl.chanFuntions.dealingPanel.gameObject, deltaDegree, 1.2f).setDelay(1.82f).setOnComplete(delegate(object obj) {
			while(controllerControl.chanFuntions.dealingPanel.childCount > 0){
				Transform rtf = controllerControl.chanFuntions.dealingPanel.GetChild(0);
				rtf.SetParent (cardLayer, true);
			}
			// an cardHien
			GameObject.Destroy(cardHien.rectTransform.gameObject);

			// bay cac coc cay bai ve tung nguoi choi
			// luu lai cac coc da dc bay 
			List<int> UsedIndexs = new List<int>();
			for (int i = 0; i< game.players.Count; i++) {
				Player player = game.players[i];
				player.startGameChan(jcards);
				int pos = game.getViewIndexOfPlayer(player);
				Vector2 target = game.getViewPositionOfPlayer(player);

				UsedIndexs.Add(pos);

				foreach(RectTransform rtf in big_list[pos]){
					var res = LeanTween.moveLocal(rtf.gameObject, new Vector3(target.x, target.y, 0) , 0.3f);
					if(pos != 0){
						res.setDestroyOnComplete(true);
					}
					LeanTween.rotateZ(rtf.gameObject, 0 , 0.4f);
				}
			}

			// xoay coc bai o giua 
			UsedIndexs.Add(4);
			for(int i = 0; i < big_list[4].Count; i++){
				RectTransform rtf = big_list[4][i];
				if(i > 0){
					LeanTween.scale(rtf.gameObject, new Vector3(0.6f, 0.6f, 1f) , 0.3f).setDestroyOnComplete(true);
					LeanTween.rotateZ(rtf.gameObject, -15 , 0.3f).setDestroyOnComplete(true);
					LeanTween.moveLocalY(rtf.gameObject, 80, 0.3f).setDestroyOnComplete(true);
				} else {
					LeanTween.scale(rtf.gameObject, new Vector3(0.6f, 0.6f, 1f) , 0.3f);
					LeanTween.rotateZ(rtf.gameObject, -15 , 0.3f);
					LeanTween.moveLocalY(rtf.gameObject, 80, 0.3f);
				}
			}

			// xoa cac coc bai ko dc dung den
			for(int i = 0; i< 5; i++){
				if(!UsedIndexs.Contains(i)){
					foreach(RectTransform rtf in big_list[i]){
						Destroy(rtf.gameObject);
					}
				}
			}
			UsedIndexs = null;

			// chia bai cho thisPlayer
//			int[] startPoint = ((GameChan)game).getDealingLocation(0);
			Vector2 startPoint = game.getViewPositionOfPlayer(game.thisPlayer) + new Vector2(0, 16);
			for(int i = 0; i < jcards.Count; i++){
				CardChan card = CardChan.decode(jcards[i].AsInt);
				card.rectTransform = GameObject.Instantiate<RectTransform>(TransformCardChan);
				card.rectTransform.SetParent(cardLayer, false);
				card.rectTransform.pivot = new Vector2(0.5f, -0.4f);
				card.rectTransform.localScale = new Vector3(CardChan.thisPlayerScale, CardChan.thisPlayerScale, 1f);
				card.rectTransform.anchoredPosition = startPoint;
				card.rectTransform.GetComponent<Button>().onClick.AddListener(delegate {
					card.isSelected = !card.isSelected;
//					Debug.LogError("select "+ card.getResourceName() + " " + card.code);
					if(card.isSelected){
						// bo chon tat ca cac cay bai khac
						foreach (CardChan cc in game.thisPlayer.chan_cards){
							if(cc != card && cc.isSelected){
								cc.isSelected = false;
							}
						}
					}
				});

				game.thisPlayer.chan_cards.Add(card);
			}

			sortOnHandCards();

			for(int i = 0; i < game.thisPlayer.chan_cards.Count; i++){
				CardChan card = game.thisPlayer.chan_cards[i];
				card.rectTransform.SetAsLastSibling();
				LeanTween.rotateZ(card.rectTransform.gameObject, getRPos(i, jcards.Count), 0.2f).setDelay(0.03f * i);
			}

			LeanTween.delayedCall(0.03f * jcards.Count + 0.2f, delegate() {
				// xoa coc bai cua thisPlayer
				foreach(RectTransform rtf in big_list[0]){
					GameObject.Destroy(rtf.gameObject);
				}

				big_list = null;
				npl.countDown(15);
				if(npl is ThisPlayer)
					controllerControl.chanFuntions.showChanFuntionsOnTurn(2);

				cubeia.unLockProcessing();
			});
		});
	}

	public void reOrderThisPlayerCard(){
		sortOnHandCards();
		for(int i = 0; i < game.thisPlayer.chan_cards.Count; i++){
			CardChan card = game.thisPlayer.chan_cards[i];
			card.rectTransform.SetAsLastSibling();
			LeanTween.rotateZ(card.rectTransform.gameObject, getRPos(i, game.thisPlayer.chan_cards.Count), 0.2f);
		}
	}

	public void sortOnHandCards() {
		List<CardChan> chan_cards = game.thisPlayer.chan_cards;
		chan_cards.Sort(CardUtils.ComparisionChan);

		List<CardChan> scards = new List<CardChan>();
		scards.AddRange(chan_cards);

		chan_cards.Clear();
		List<CardChan> bo_chan_cards = new List<CardChan>();
		List<CardChan> badau_cards = new List<CardChan>();
		List<CardChan> ca_cards = new List<CardChan>();
		
		CardChan curCard, nextCard;
		// lấy chắn
		CardChan candidateCard = scards[0];
		for (int i = 1; i < scards.Count; i++) {
			curCard = scards[i];
			if (curCard.N == candidateCard.N && curCard.S == candidateCard.S) {
				bo_chan_cards.Add(candidateCard);
				bo_chan_cards.Add(curCard);
				i += 1;
				if (i < scards.Count)
					candidateCard = scards[i];
			} else {
				candidateCard = curCard;
			}
		}
		foreach (CardChan ccard in bo_chan_cards) {
			scards.Remove(ccard);
		}
		// lấy ba đầu
		if (scards.Count > 0) {
			candidateCard = scards[0];
			for (int i = 1; i < scards.Count; i++) {
				curCard = scards[i];
				if (curCard.N == candidateCard.N) {
					if (i + 1 > scards.Count - 1)
						break;
					nextCard = scards[i + 1];
					if (curCard.N == nextCard.N) {
						badau_cards.Add(candidateCard);
						badau_cards.Add(curCard);
						badau_cards.Add(nextCard);
						i += 2;
						if (i < scards.Count)
							candidateCard = scards[i];
					} else {
						i += 1;
						if (i < scards.Count)
							candidateCard = scards[i];
					}
				} else {
					candidateCard = curCard;
				}
			}
			foreach (CardChan ccard in badau_cards) {
				scards.Remove(ccard);
			}
		}
		// lấy cạ
		if (scards.Count > 0) {
			candidateCard = scards[0];
			for (int i = 1; i < scards.Count; i++) {
				curCard = scards[i];
				if (curCard.N == candidateCard.N) {
					ca_cards.Add(candidateCard);
					ca_cards.Add(curCard);
					i += 1;
					if (i < scards.Count)
						candidateCard = scards[i];
				} else {
					candidateCard = curCard;
				}
			}
			foreach (CardChan ccard in ca_cards) {
				scards.Remove(ccard);
			}
		}

		chan_cards.AddRange(bo_chan_cards);
		chan_cards.AddRange(ca_cards);
		chan_cards.AddRange(badau_cards);
		chan_cards.AddRange(scards);
	}

	public float getRPos (int i, int count)
	{
		float marginD = 1.2f;
		float singleSectorD = 11f;
		float totalD = singleSectorD * count + marginD * (count - 1);
		float startD = totalD * 0.5f;
		return startD - (singleSectorD + marginD) * i + (marginD - singleSectorD) * 0.5f;
	}

	int getPosDegree(int pos) {
		if (pos == 0)
			return 180;
		else if (pos == 1)
			return 90;
		else if (pos == 2)
			return 0;
		else
			return 270;
	}

}   