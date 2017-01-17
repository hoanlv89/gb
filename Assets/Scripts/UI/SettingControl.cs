using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class SettingControl : MonoBehaviour
{
	[SerializeField]
	GameObject
		settingPanel;
	[SerializeField]
	Transform
		pfHeader, pfRowItem, pfDivider;
	[SerializeField]
	RectTransform
		DetailPanel;
	[SerializeField]
	RectTransform
		SettingScrollView;

	public GameObject close_btn_dautruong, close_btn_3c, close_btn_52;
	// prefab
	[SerializeField]
	RectTransform
		LanguageItem, Version, PlayerDetail;
	List<GameObject> listObjSetting;
	public static SettingControl instance;
	public const int detail_version = 1;
	public const int detail_player_info = 2;
	public const int detail_language = 3;
//	public const int detail_ = 4;


	// Use this for initialization
	void Start ()
	{
		listObjSetting = new List<GameObject> ();
		createSettingMenu (DataSetting.getList ());
		instance = this;

		close_btn_dautruong.SetActive(false);
		close_btn_3c.SetActive(false);
		close_btn_52.SetActive(false);
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
			close_btn_dautruong.SetActive(true);
		if(GameApplication.gameApp == GameApplication.GameApp.G3C)
			close_btn_3c.SetActive(true);
		if(GameApplication.gameApp == GameApplication.GameApp.G52Fun)
			close_btn_52.SetActive(true);
		if(GameApplication.gameApp == GameApplication.GameApp.GTL)
			close_btn_3c.SetActive(true);

		// check error
		if (settingPanel == null)
			Debug.LogError ("SettingControl settingPanel null");
		if (pfHeader == null)
			Debug.LogError ("SettingControl pfHeader null");
		if (pfRowItem == null)
			Debug.LogError ("SettingControl pfRowItem null");
		if (pfDivider == null)
			Debug.LogError ("SettingControl pfDivider null");
		if (DetailPanel == null)
			Debug.LogError ("SettingControl DetailPanel null");
		if (LanguageItem == null)
			Debug.LogError ("SettingControl LanguageItem null");
		if (Version == null)
			Debug.LogError ("SettingControl Version null");
		if (SettingScrollView == null)
			Debug.LogError ("SettingControl SettingScrollView null");
	}

	void createSettingMenu (List<DataSetting> listData)
	{
		addMultiData (listData);
	}

	void addData (DataSetting setting)
	{
		RectTransform header = (RectTransform)Instantiate (pfHeader);
		header.SetParent (transform, false);
		header.GetComponentInChildren<Text> ().text = setting.header;
		listObjSetting.Add (header.gameObject);
		
		for (int i=0; i<setting.listData.Count; i++) {
			RectTransform content_row = (RectTransform)Instantiate (pfRowItem);
			content_row.SetParent (transform, false);
			RowSettingControl rowControl = content_row.GetComponent<RowSettingControl> ();
			rowControl.setSettingItem (setting.listData [i]);

			listObjSetting.Add (content_row.gameObject);
			if (i < setting.listData.Count - 1) {
				RectTransform divider = (RectTransform)Instantiate (pfDivider);
				divider.SetParent (transform, false);
				listObjSetting.Add (divider.gameObject);
			}
		}
	}

	void addMultiData (List<DataSetting> listData)
	{
		clearData ();
		//content.
		for (int i=0; i<listData.Count; i++) {
			addData (listData [i]);
		}
	}

	void clearData ()
	{
		for (int i=0; i<listObjSetting.Count; i++) {
			//rowNoiDung[i].SetActive(false);
			GameObject.Destroy (listObjSetting [i]);
		}

		
		listObjSetting.Clear ();
	}

	public void toggleMenuSetting ()
	{
		SoundManager.instance.playButtonClicked ();
		if (settingPanel.activeSelf) {
			settingPanel.SetActive (false);
		} else {
			settingPanel.SetActive (true);
			DSTFBEvent.LogAppEvent(DSTFBEvent.UnitySettingClick, (float)1f, DSTFBEvent.defaultParams);
		}
	}

	private void hideSettingContent ()
	{
		LeanTween.value(gameObject, 0, 560, 0.3f).setEase(LeanTweenType.easeInQuad).setOnUpdate(delegate(float value) {
			RectTransform rectTransform = (RectTransform)transform;
			rectTransform.anchoredPosition = new Vector2 (value, rectTransform.anchoredPosition.y);
		});

	}

	public void showSettingContent ()
	{
		LeanTween.value(gameObject, 560, 0, 0.3f).setEase(LeanTweenType.easeOutQuad).setOnUpdate(delegate(float value) {
			RectTransform rectTransform = (RectTransform)transform;
			rectTransform.anchoredPosition = new Vector2 (value, rectTransform.anchoredPosition.y);
		});

		// chuyen scroll view content
		SettingScrollView.GetComponent<ScrollRect> ().content = (RectTransform)this.transform;
	}

	public void showDetailPanel (int option)
	{
		hideSettingContent (); // thao tac nay mat 0.3s

		LeanTween.delayedCall(0.3f, delegate() {
			LeanTween.value(gameObject, 560, 0, 0.3f).setEase(LeanTweenType.easeOutQuad).setOnUpdate(delegate(float value) {
				DetailPanel.anchoredPosition = new Vector2 (value, DetailPanel.anchoredPosition.y);
			});
			Button back = DetailPanel.Find ("Back").GetComponent<Button> ();
			if (back == null)
				Debug.LogError ("button Back NULL");
			back.onClick.RemoveAllListeners ();
			back.onClick.AddListener (delegate {
				hideDetailPanel (); // thao tac nay mat 0.3s
				LeanTween.delayedCall(0.3f, delegate() {
					showSettingContent ();
				});
			});
			
			// xoa tat cac cac child tru nut back
			int size = DetailPanel.childCount;
			for (int i = size - 1; i > 0; i--)
				GameObject.Destroy (DetailPanel.GetChild (i).gameObject);
			
			//...
			switch (option) {
			case detail_language:
				showLanguages ();
				break;
			case detail_version:
				showVersion ();
				break;
			case detail_player_info:
				showPlayerDetail();
				break;
			default:
				break;
			}
		});

		// chuyen scroll view content
		SettingScrollView.GetComponent<ScrollRect> ().content = DetailPanel;
	}

	private void hideDetailPanel ()
	{
		LeanTween.value(gameObject, 0, 560, 0.3f).setEase(LeanTweenType.easeInQuad).setOnUpdate(delegate(float value) {
			DetailPanel.anchoredPosition = new Vector2 (value, DetailPanel.anchoredPosition.y);
		});
	}

	private void showVersion ()
	{
		RectTransform rect = GameObject.Instantiate (Version);
		rect.SetParent (DetailPanel, false);
	}

	void showPlayerDetail ()
	{
		RectTransform rect = GameObject.Instantiate (PlayerDetail);
		Text title = rect.Find("LabelFunction").GetComponent<Text>();
		Text lbAccID = rect.Find("LabelAccID").GetComponent<Text>();
		Text ltDevID = rect.Find("LabelDevID").GetComponent<Text>();
		Text tvAccID = rect.Find("TextAccID").GetComponent<Text>();
		Text tvDevID = rect.Find("TextDevID").GetComponent<Text>();

		title.text = Strings.instance.common_setting_accinfo_title;
		lbAccID.text = Strings.instance.common_setting_accinfo_lb_accid;
		ltDevID.text = Strings.instance.common_setting_accinfo_lb_devid;

		tvAccID.text = GameApplication.user.id + "";
		tvDevID.text = GameApplication.getUniqueIdentifier();
		rect.SetParent (DetailPanel, false);
	}

	private void showLanguages ()
	{
		RectTransform rect = GameObject.Instantiate (LanguageItem);
		rect.SetParent (DetailPanel, false);
		rect.Find ("Image").GetComponent<Image> ().sprite = Strings.strings_vi.flag;
		rect.Find ("Text").GetComponent<Text> ().text = Strings.instance.common_language_vn;
		rect.GetComponent<Button> ().onClick.AddListener (delegate {
			Strings.currentLanguage = Strings.LANGUAGE_VI;
			SuperScene.instance.showInfoDialogWithAction (Strings.instance.common_change_language, delegate {
				Application.LoadLevel (Application.loadedLevel);
			});
		});

		rect = GameObject.Instantiate (LanguageItem);
		rect.SetParent (DetailPanel, false);
		rect.Find ("Image").GetComponent<Image> ().sprite = Strings.strings_en.flag;
		rect.Find ("Text").GetComponent<Text> ().text = Strings.instance.common_language_en_AU;
		rect.GetComponent<Button> ().onClick.AddListener (delegate {
			Strings.currentLanguage = Strings.LANGUAGE_EN;
			SuperScene.instance.showInfoDialogWithAction (Strings.instance.common_change_language, delegate {
				Application.LoadLevel (Application.loadedLevel);
			});
		});

		rect = GameObject.Instantiate (LanguageItem);
		rect.SetParent (DetailPanel, false);
		rect.Find ("Image").GetComponent<Image> ().sprite = Strings.strings_th.flag;
		rect.Find ("Text").GetComponent<Text> ().text = Strings.instance.common_language_th;
		rect.GetComponent<Button> ().onClick.AddListener (delegate {
			Strings.currentLanguage = Strings.LANGUAGE_TH;
			SuperScene.instance.showInfoDialogWithAction (Strings.instance.common_change_language, delegate {
				Application.LoadLevel (Application.loadedLevel);
			});
		});
	}
}
