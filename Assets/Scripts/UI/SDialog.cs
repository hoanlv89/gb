using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Events;
using System;

public class SDialog : MonoBehaviour
{
	public Button cancel, positive, negative, neutral;
	public RectTransform panel;
	public Text content, positiveText, negativeText, neutralText;

	private Action _onDismiss;
	public Action onDismiss {
		get{
			return _onDismiss;
		}
		set{
			_onDismiss = value;
			showedTime = 0f;
		}
	}

	public bool autoDismiss = false;
	public float autoDismissTime = 4f;
	private float showedTime = 0f;

	void FixedUpdate () {
		if(autoDismiss) {
			showedTime += Time.fixedDeltaTime;
			if(showedTime > autoDismissTime)
				dismiss();
		}
	}

	public void dismiss()
	{
		gameObject.SetActive(false);
		SuperScene.instance.mainCanvas.GetComponent<GraphicRaycaster>().enabled = true;

		// reset value
		autoDismiss = false;
		autoDismissTime = 4f;

		if(onDismiss != null)
			onDismiss();

		onDismiss = null;
	}

	public void invisibleXbutton(){
		cancel.transform.gameObject.SetActive(false);
	}

	public void show(DialogInfo dinfo)
	{
		gameObject.SetActive(true);
		cancel.transform.gameObject.SetActive(true);

		this.content.text = dinfo.content;
		this.positiveText.text = dinfo.positiveText;
		this.negativeText.text = dinfo.negativeText;
		this.neutralText.text = dinfo.neutralText;

		this.positive.onClick.RemoveAllListeners();
		if (dinfo.ePositive != null)
			this.positive.onClick.AddListener(dinfo.ePositive);

		this.negative.onClick.RemoveAllListeners();
		if (dinfo.eNegative != null)
			this.negative.onClick.AddListener(dinfo.eNegative);

		cancel.onClick.RemoveAllListeners();
		float panelRectHeight = panel.sizeDelta.y;
		if (dinfo.count == 1) {
			panel.sizeDelta = new Vector2(780, panelRectHeight);
			this.negative.gameObject.SetActive(false);
			((RectTransform)this.positive.transform).anchoredPosition = new Vector2(0, -100);
			this.cancel.gameObject.SetActive(false);
			this.neutral.gameObject.SetActive(false);
		} else if (dinfo.count == 2){
			panel.sizeDelta = new Vector2(780, panelRectHeight);
			this.negative.gameObject.SetActive(true);
			((RectTransform)this.positive.transform).anchoredPosition = new Vector2(180, -100);
			((RectTransform)this.negative.transform).anchoredPosition = new Vector2(-180, -100);
			this.cancel.gameObject.SetActive(true);
			this.neutral.gameObject.SetActive(false);
			this.cancel.onClick.AddListener(delegate {
				dismiss();
				SoundManager.instance.playButtonClicked ();
			});
		} else if (dinfo.count == 3){
			panel.sizeDelta = new Vector2(910, panelRectHeight);
			this.negative.gameObject.SetActive(true);
			this.cancel.gameObject.SetActive(true);
			this.neutral.gameObject.SetActive(true);
			((RectTransform)this.negative.transform).anchoredPosition = new Vector2(286, -100);
			((RectTransform)this.neutral.transform).anchoredPosition = new Vector2(0, -100);
			((RectTransform)this.positive.transform).anchoredPosition = new Vector2(-286, -100);
			this.cancel.onClick.AddListener(delegate {
				dismiss();
				SoundManager.instance.playButtonClicked ();
			});
		}

		Color textColor = Color.black;
		if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){
			textColor = Color.white;
		} else if (GameApplication.gameApp.Equals(GameApplication.GameApp.G3C)){
			textColor = Color.black;
		} else if (GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong)){
			textColor = new Color(241,255,0);
		}
		this.positiveText.color = textColor;
		this.negativeText.color = textColor;
		this.neutralText.color = textColor;
	}
}

public class DialogInfo
{
	public string positiveText, negativeText, content, neutralText;
	public UnityAction ePositive, eNegative;
	public bool oneChoiceForced = false;
	public int count=0;

	public static DialogInfo OKCancelDialog {
		get {
			DialogInfo dialog = new DialogInfo();
			dialog.positiveText = Strings.instance.dialog_common_ok;
			dialog.negativeText = Strings.instance.dialog_common_cancel;
			dialog.oneChoiceForced = false;
			dialog.count=2;
			return dialog;
		}
	}

	public static DialogInfo ThreeChoicesDialog {
		get {
			DialogInfo dialog = new DialogInfo();
			dialog.positiveText = Strings.instance.dialog_common_accept;
			dialog.negativeText = Strings.instance.dialog_common_deny;
			dialog.neutralText = Strings.instance.dialog_common_deny_all;
			dialog.oneChoiceForced = false;
			dialog.count=3;
			return dialog;
		}
	}

	public static DialogInfo OneChoiceDialog {
		get {
			DialogInfo dialog = new DialogInfo();
			dialog.positiveText = Strings.instance.dialog_common_ok;
			dialog.oneChoiceForced = true;
			dialog.count=1;
			return dialog;
		}
	}
}
