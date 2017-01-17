using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using com.dst.Roulette;

public class UserInfo : MonoBehaviour {

	/**private**/
	private string _userName;
	private int _gold;

	private bool panelExpand = false;
	//private bool panelAnim = false;

	//private float panelStartPoint = 0f;
	//private float panelEndPoint = 1f;
	//private float panelTime = 0;

	private float headerHeight;
	private float bottomHeight;


	private RectTransform settingBox;


	public int totalBet {
		get;
		set;
	}

	/**public**/

	public string url;
	public Image rawImage;

	public RectTransform userTrans;
	public RectTransform goldTrans;
	public RectTransform betTrans;
	public RectTransform winTrans;
	public RectTransform header;
	public RectTransform bottom;

	public Button spinBtn;
	public Button rebetAndSpinBtn;
	public Button clearBtn;
	public Button undoBtn;
	public Button doubleBtn;
	public Button rebetAndDoubleBtn;
	public Button rebetBtn;

	public Button [] bt_chips = new Button[5];
	int [] valueChips = new int[5];
	public string userName(){
		return _userName;
	}
	public void  setUserName(string n){
		_userName = n;
		userTrans.GetComponent<Text> ().text = n;
	}

	public int gold{
		get{
			return _gold;
		}
	}
	public void  setGold(int g){

		_gold = g;
		goldTrans.GetComponent<Text>().text = _gold.ToString("#,##0");
	} 

	public void updateBet (int val, bool reset = false)
	{
		if (reset) {
			totalBet = 0;
			betTrans.GetComponent<Text> ().text = "0";
		} else {
			totalBet += val;
			setGold (_gold - val);
			betTrans.GetComponent<Text>().text = totalBet.ToString("#,##0");
		}

	}

	private void animControl(float val){
		if (panelExpand)
			val = 1 - val;
		//header.offsetMin = new Vector2 (header.offsetMin.x,	 headerHeight * val);
		//header.offsetMax = new Vector2 (header.offsetMax.x,  headerHeight * val);

//		bottom.offsetMin = new Vector2 (bottom.offsetMin.x,  -bottomHeight * val);
//		bottom.offsetMax = new Vector2 (bottom.offsetMax.x,  -bottomHeight * val);

	}

	public void ActiveControlPanel(bool active){
		panelExpand = active;
		//panelTime = 0;
		//panelAnim = true;

		iTween.ValueTo (gameObject, iTween.Hash ("from", 0, "to", 1, "time", 0.5f, "onUpdate", "animControl", "easeType", iTween.EaseType.linear));
	}

	void Awake(){
		headerHeight = header.rect.height;
		bottomHeight = bottom.rect.height;
	}

	// Use this for initialization
	IEnumerator  Start () {
		controlButton ("START");
		url = GameApplication.user.avatarUrl;
		settingBox = header.Find ("SettingContent") as RectTransform;
		settingBox.gameObject.SetActive (false);

		Button stBtn = header.Find ("Settings").GetComponent<Button>();
		stBtn.onClick.AddListener (() => {
//			settingBox.gameObject.SetActive(!settingBox.gameObject.activeInHierarchy);
			EventSink.onExit();
		});

		Button exitBtn = settingBox.Find ("Exit").GetComponent<Button>();
		exitBtn.onClick.AddListener (() => {EventSink.onExit();});

		Toggle tg = settingBox.Find ("Toggle").GetComponent<Toggle>();
		tg.onValueChanged.AddListener ((bool val) => {
			Manage.enableSound = val;
		});


		WWW www = new WWW(url);
		
		// Wait for download to complete
		yield return www;
		SuperScene.instance.loadImage (url, rawImage, null);
		updateValueChips ();
		// assign texture

//		rawImage.texture = www.texture;
	}

	public void controlButton(string status){
		switch (status) {
		case "START" :
			rebetAndSpinBtn.gameObject.SetActive (false);
			rebetAndDoubleBtn.gameObject.SetActive (false);
			rebetBtn.gameObject.SetActive (false);
			clearBtn.interactable = false;
			undoBtn.interactable = false;
			doubleBtn.interactable = false;
			spinBtn.interactable = false;
			break;
		case "BET" :
			clearBtn.gameObject.SetActive (true);
			undoBtn.gameObject.SetActive (true);
			doubleBtn.gameObject.SetActive (true);
			spinBtn.gameObject.SetActive (true);
			rebetAndSpinBtn.gameObject.SetActive (false);
			rebetAndDoubleBtn.gameObject.SetActive (false);
			rebetBtn.gameObject.SetActive (false);
			clearBtn.interactable = true;
			doubleBtn.interactable = true;
			spinBtn.interactable = true;
			undoBtn.interactable = true;
			break;
		case "SPIN" : 
			clearBtn.interactable = false;
			undoBtn.interactable = false;
			doubleBtn.interactable = false;
			spinBtn.interactable = false;
			break;
		case "NEW" :
			rebetAndSpinBtn.gameObject.SetActive (true);
			rebetAndDoubleBtn.gameObject.SetActive (true);
			rebetBtn.gameObject.SetActive (true);

			clearBtn.gameObject.SetActive (false);
			undoBtn.gameObject.SetActive (false);
			doubleBtn.gameObject.SetActive (false);
			spinBtn.gameObject.SetActive (false);
			break;
		}
	}
	
	// Update is called once per frame
	void Update () {
		/*(if (panelAnim) {
			panelTime += Time.deltaTime;
			float val = Mathf.Lerp(panelStartPoint, panelEndPoint, panelTime);
			if(val >= panelEndPoint){
				val = panelEndPoint;
				panelAnim = false;
			}

			if (panelExpand)
				val = 1 - val;
			header.offsetMin = new Vector2 (header.offsetMin.x,	 headerHeight * val);
			header.offsetMax = new Vector2 (header.offsetMax.x,  headerHeight * val);
			
			bottom.offsetMin = new Vector2 (bottom.offsetMin.x,  -bottomHeight * val);
			bottom.offsetMax = new Vector2 (bottom.offsetMax.x,  -bottomHeight * val);
		}*/
	}

	public void updateValueChips(){
		if (GameApplication.user.ag < 100000) {
			valueChips [0] = 10;
			valueChips [1] = 20;
			valueChips [2] = 100;
			valueChips [3] = 200;
			valueChips [4] = 1000;
			bt_chips[0].GetComponentInChildren<Text>().text="10";
			bt_chips[1].GetComponentInChildren<Text>().text="20";
			bt_chips[2].GetComponentInChildren<Text>().text="100";
			bt_chips[3].GetComponentInChildren<Text>().text="200";
			bt_chips[4].GetComponentInChildren<Text>().text="1K";
		} else {
			valueChips [0] = 100;
			valueChips [1] = 500;
			valueChips [2] = 1000;
			valueChips [3] = 5000;
			valueChips [4] = 10000;
			bt_chips[0].GetComponentInChildren<Text>().text="100";
			bt_chips[1].GetComponentInChildren<Text>().text="500";
			bt_chips[2].GetComponentInChildren<Text>().text="1K";
			bt_chips[3].GetComponentInChildren<Text>().text="5K";
			bt_chips[4].GetComponentInChildren<Text>().text="10K";
		}
		for (int i=0; i<5; i++) {
			int a=i;
//			bt_chips[a].transform.FindChild("Text").GetComponent<Text>().text=Utils.formatCurrency(valueChips[a]);
			bt_chips[a].onClick.AddListener(delegate {
//				Debug.LogError("aaaaaaaaaa ===> " + a);
				EventSink.onChangeUnitBet (valueChips[a]);
			});
		}
	}
}
