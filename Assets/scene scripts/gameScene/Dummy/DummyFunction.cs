using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;
using System.Collections.Generic;
using System;
using UnityEngine.Events;

public class DummyFunction : MonoBehaviour {

	public Button btnHabai, btnDanhbai, btnXepbai, btnGuibai, btnBocbai, btnUNgay;
	public Button btnConfirm, btnCancel;
	public DummyFinishViewControl finishViewControl;
	public DummyFullFinishViewControl fullFinishViewControl;
	public Text info;
	public Image imginfo;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {

	}

	public void showDummyFuntionsOnTurn(bool danh, bool gui, bool boc, bool ha, bool xep, bool ungay = false) {
		ThisPlayer thisPlayer = GameApplication.game.thisPlayer;
		GameDummy game = (GameDummy)GameApplication.game;
		GameSceneDummy gameScene = (GameSceneDummy)GameApplication.gameScene;
		gameObject.SetActive(true);

		if(GameApplication.game.state.Equals(Game.State.VIEWING) || 
		   (!danh && !gui && !boc && !ha && !xep)){
			btnXepbai.gameObject.SetActive(false);
			btnDanhbai.gameObject.SetActive(false);
			btnHabai.gameObject.SetActive(false);
			btnBocbai.gameObject.SetActive(false);
			btnGuibai.gameObject.SetActive(false);
			btnCancel.gameObject.SetActive(false);
			btnConfirm.gameObject.SetActive(false);
			return;
		}

		btnXepbai.gameObject.SetActive(xep);
		btnDanhbai.gameObject.SetActive(danh);
		btnHabai.gameObject.SetActive(ha);
		btnGuibai.gameObject.SetActive(gui);
		btnBocbai.gameObject.SetActive(boc);
		btnUNgay.gameObject.SetActive(ungay);
		btnCancel.gameObject.SetActive(false);
		btnConfirm.gameObject.SetActive(false);	

		if (danh) {
			btnDanhbai.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_danh;
			btnDanhbai.onClick.RemoveAllListeners ();
			btnDanhbai.onClick.AddListener (delegate {
				hideGuideText();
				List<Card> selectedCards = new List<Card>();
				for (int i = 0; i < thisPlayer.cards.Count; i++) {
					Card card = thisPlayer.cards [i];
					if (card.isSelected) {
						selectedCards.Add(card);
					}
				}

				string msg = "";
				if (selectedCards.Count != 1) {
					if (selectedCards.Count > 1) {
						msg = Strings.instance.gameplay_dummy_chose_one_card;
					}
					if (selectedCards.Count < 1) {
						msg = Strings.instance.gameplay_dummy_chose_one_card;
					}
					showGuideText(msg);
					return;
				}

				bool warn = false;

				Card _card = selectedCards[0];
				if(game.potentialGui.Contains(_card)) { // tim thay trong potential_gui
					msg = Strings.instance.gameplay_dummy_warn_gui;
					warn = true;
				}

				// check truong hop khi danh se tao phom tren ban
				if(!warn){
					List<Card> allCards = new List<Card>();
					allCards.AddRange(gameScene.baitrenban);
					allCards.Add(_card);
					foreach(var phom in thisPlayer.getlistPhomDummy(allCards)){
						if(phom.Contains(_card)){
							msg = Strings.instance.gameplay_dummy_warn_ha;
							warn = true;
						}
					}
				}

				if(warn) {
					showGuideText(msg);
					
					showComfirmButtons (delegate() {
						// TODO: check thong bao neu ko gui dc
						hideGuideText();
						thisPlayer.send_danhdummy ();
					});
				} else {
					thisPlayer.send_danhdummy ();
				}
			});
		}

		if (boc) {
			btnBocbai.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_boc;
			btnBocbai.onClick.RemoveAllListeners ();
			btnBocbai.onClick.AddListener (delegate {
				hideGuideText();
				thisPlayer.send_bocbaidummy();
			});
		}

		if (ungay) {
			btnUNgay.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_ungay;
			btnUNgay.onClick.RemoveAllListeners ();
			btnUNgay.onClick.AddListener (delegate {
				hideGuideText();
				thisPlayer.send_ungayDummy();
			});
		}

		if (gui) {
			btnGuibai.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_gui;
			btnGuibai.onClick.RemoveAllListeners ();
			btnGuibai.onClick.AddListener (delegate {
				hideGuideText();

				thisPlayer.autoselectgui_dummy();
				game.cardInAutoSelectModeGui = true;

				showComfirmButtons (delegate() {
					// TODO: check thong bao neu ko gui dc
					hideGuideText();
					thisPlayer.send_guibaidummy();
				});

			});
		}

		if (xep) {
			btnXepbai.onClick.RemoveAllListeners ();
			btnXepbai.onClick.AddListener (delegate {
				(game).cardsort1 = !(game).cardsort1;
				if ((game).cardsort1) {
					thisPlayer.cards.Sort (CardUtils.ComparisionDummy1);
				} else {
					thisPlayer.cards.Sort (CardUtils.ComparisionDummy2);
				}

				thisPlayer.reArrangeCards ();
			});
		}

		if (ha) {
			btnHabai.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_ha;
			btnHabai.onClick.RemoveAllListeners();
			btnHabai.onClick.AddListener(delegate() {
				hideGuideText();

				thisPlayer.autoselectphom_dummy(onActionCard: null);
				game.cardInAutoSelectModeHa = true;

				showComfirmButtons (delegate() {
					// TODO: check thong bao neu ko ha dc
					hideGuideText();
					thisPlayer.send_habaidummy();
				});
			});
		}

		btnCancel.onClick.RemoveAllListeners();
		btnCancel.onClick.AddListener(delegate() {
			hideGuideText();
			btnXepbai.gameObject.SetActive(xep);
			btnDanhbai.gameObject.SetActive(danh);
			btnHabai.gameObject.SetActive(ha);
			btnGuibai.gameObject.SetActive(gui);
			btnBocbai.gameObject.SetActive(boc);
			
			btnConfirm.gameObject.SetActive(false);
			btnCancel.gameObject.SetActive(false);

			// huy nhac bai
			foreach(Card card in thisPlayer.cards) {
				if(card.isSelected){
					card.invertSelected();
				}
			}
			foreach(Card card in gameScene.baitrenban) {
				if(card.isSelected){
					float y = 72;
					LeanTween.moveLocalY (card.rectTransform.gameObject, y, 0.3f).setEase (LeanTweenType.easeOutQuart);
				}
			}

			game.cardInAutoSelectModeHa = false;
			game.cardInAutoSelectModeGui = false;
			// lam sang tat ca cac cay bai
			if(gameScene.baitrenban != null)
				foreach (Card card in gameScene.baitrenban) 
					card.clearColor();
			if(game.thisPlayer.cards != null)
				foreach (Card card in game.thisPlayer.cards)
					card.clearColor();
		});

		//trong truong hop an cac nut button thi an luon guidetext
		if (!boc && !gui && !ha && !danh) {
			hideGuideText();
			game.cardInAutoSelectModeHa = false;
			game.cardInAutoSelectModeGui = false;

			// lam sang tat ca cac cay bai
			if(gameScene.baitrenban != null)
				foreach (Card card in gameScene.baitrenban) 
					card.clearColor();
			if(game.thisPlayer.cards != null)
				foreach (Card card in game.thisPlayer.cards)
					card.clearColor();
		}
	}

	void showComfirmButtons(UnityAction onConfirm){
		btnBocbai.gameObject.SetActive(false);
		btnDanhbai.gameObject.SetActive(false);
		btnHabai.gameObject.SetActive(false);
		btnGuibai.gameObject.SetActive(false);
		
		btnConfirm.gameObject.SetActive(true);
		btnCancel.gameObject.SetActive(true);
		
		btnConfirm.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_confirm;
		btnCancel.GetComponentInChildren<Text> ().text = Strings.instance.gameplay_dummy_btn_cancel;

		btnConfirm.onClick.RemoveAllListeners();
		btnConfirm.onClick.AddListener (onConfirm);
	}

	public void showGuideText(string msg) {
		imginfo.enabled = true;
		info.text = msg;
	}

	public void hideGuideText() {
		imginfo.enabled = false;
		info.text = "";
	}
	
	public void hideDummyOnTurnFuntions(bool onFinish = false)
	{
		// for testing
		if(onFinish)
			btnXepbai.gameObject.SetActive(false);
		btnHabai.gameObject.SetActive(false);
		btnDanhbai.gameObject.SetActive(false);
		btnGuibai.gameObject.SetActive(false);
		btnBocbai.gameObject.SetActive(false);
	
		hideGuideText();
	}
}
