using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

	public class CharacterScript : MonoBehaviour
{
	[SerializeField]
	Color
		start;
	[SerializeField]
	Color
		end;
	[SerializeField]
	Image
		Circle;
	public GameObject WinnerImage;
	[SerializeField]
	RectTransform
		PFChatTransform;
	public Image emo;
	public RectTransform info;
	public Text ag;
	public Image vipbg;
	public GameObject hosticon;
	public RectTransform card1, card2; // for poker
	public RuntimeAnimatorController []emos = new RuntimeAnimatorController[12];
	public Sprite defaultFBAvatar;

	RectTransform chatsLayer; // lay tu game scene
	RectTransform chatTransform;
	System.Action<float> updateCountValue ;

	IEnumerator delayedEmoHide;
	public Image bg;
	public Image bg1;
	public Image bg2;
	public RuntimeAnimatorController [] emoFly = new RuntimeAnimatorController[6];
	public RuntimeAnimatorController [] emoPlayer = new RuntimeAnimatorController[6];
	public RectTransform pfflyEmo;
	public RectTransform flyEmo;
	public RectTransform win_xocdia;

	// Use this for initialization
	void Start ()
	{
		WinnerImage.SetActive (false);
		updateCountValue = delegate(float value) {
			byte red = (byte)(value * 255);
			if (red > 255)
				red = 255;
			byte green = (byte)((1f - value) * 255);
			if (green > 255)
				green = 255;
			
			Circle.fillAmount = value;
//			Circle.color = new Color32 (red, green, 0, 255);
			Circle.color = new Color32 (0, 255, 0, 255);
			
			if (value >= 1f)
				updateCountValue (0f);
		};
		updateCountValue (0f);
		chatsLayer = GameObject.Find ("ChatsLayer").GetComponent<RectTransform> ();
	}

	public void updateVipView (bool isvip)
	{
		Color32 cvip = new Color32 (200, 0, 0, 220);
		Color32 cthuong = new Color32 (20, 0, 255, 220);
//		isvip = true;
		if(isvip){
			vipbg.color=cvip;
			bg.gameObject.SetActive (true);
			bg1.gameObject.SetActive (true);
			bg2.gameObject.SetActive (true);
		}else{
			vipbg.color=cthuong;
			bg.gameObject.SetActive (false);
			bg1.gameObject.SetActive (false);
			bg2.gameObject.SetActive (false);
		}

	}

	public void showEmo (Sprite s)
	{
		if(delayedEmoHide != null)
			SuperScene.instance.StopCoroutine(delayedEmoHide);
		Animator animator = emo.rectTransform.GetComponent<Animator> ();
		animator.enabled = false;
		emo.sprite = s;
		emo.gameObject.SetActive(true);

		delayedEmoHide = Utils.cr_runDelayed(3.5f, delegate() {
			emo.gameObject.SetActive(false);
		});
		SuperScene.instance.StartCoroutine(delayedEmoHide);
	}

	public void showEmoticon(int i){
		if(delayedEmoHide != null)
			SuperScene.instance.StopCoroutine(delayedEmoHide);
		Animator animator = emo.rectTransform.GetComponent<Animator> ();
		animator.enabled = true;
		emo.gameObject.SetActive(true);
		if (animator == null) {
			Debug.Log ("animator null");
		} else {
			animator.runtimeAnimatorController = emos [i-1];
		}
		delayedEmoHide = Utils.cr_runDelayed(3.5f, delegate() {
			emo.gameObject.SetActive(false);
		});
		SuperScene.instance.StartCoroutine(delayedEmoHide);
	}

	public void showEmoticonPlayer(int i,RectTransform rect,Player player){
		rect.GetComponent<Animator> ().runtimeAnimatorController = emoFly [i];
		LeanTween.moveLocal (rect.gameObject, new Vector3 (player.rectTransform.anchoredPosition.x, player.rectTransform.anchoredPosition.y, 0), 0.5f).setOnComplete (delegate() {
			if(delayedEmoHide != null)
				SuperScene.instance.StopCoroutine(delayedEmoHide);
			if(emo!=null){
				Animator animator = emo.rectTransform.GetComponent<Animator> ();
				animator.enabled = true;
				emo.gameObject.SetActive(true);
				if (animator == null) {
					Debug.Log ("animator null");
				} else {
					animator.runtimeAnimatorController = emoPlayer [i];
				}
				delayedEmoHide = Utils.cr_runDelayed(3.5f, delegate() {
					if(emo!=null){
						emo.gameObject.SetActive(false);
					}
				});
				SuperScene.instance.StartCoroutine(delayedEmoHide);
				if(rect!=null){
					GameObject.Destroy(rect.gameObject);
				}
			}else{
				if(rect!=null){
					GameObject.Destroy(rect.gameObject);
				}
			}
		});
	}
	
	// Update is called once per frame
	void FixedUpdate ()
	{
		float del = Time.fixedDeltaTime;
//		Debug.Log ("=====> " + del);
		float delta = Time.fixedTime;
		float scale = 0.55f * (Mathf.Cos (20 * delta / (2 * Mathf.PI)) + 1);
//		Debug.Log ("=====> " + scale);
		bg.rectTransform.Rotate (0f, 0f, del*5);
		bg2.rectTransform.Rotate (0f, 0f, -del*10);
		bg1.rectTransform.localScale = new Vector3 (scale, scale, 1);
	}
	
	public void setSelectedCharacter ()
	{
//		string name = transform.Find ("NameBG").Find ("Name").GetComponent<Text> ().text;
//		string avurl = GameApplication.game.getPlayer(name).ava_url;
//		SuperScene.instance.showToast(avurl);
//		Debug.Log(avurl);

//		GameManager.selectedPlayer = GameApplication.game.getPlayer (name);
//		Text textSelectedPlayer = GameObject.Find ("TextSelectedPlayer").GetComponent<Text> ();
//		textSelectedPlayer.text = name;
	}

	public void countDown (float time)
	{
		Debug.Log ("start counting down...");
		LeanTween.value (gameObject, updateCountValue, 0f, 1f, time);
	}

	public void countDownByRemaining (float countedAmount, float time)
	{
		Debug.Log ("start counting down...");
		if (countedAmount < 0f || countedAmount > 1f)
			countedAmount = 0f;
		LeanTween.value (gameObject, updateCountValue, countedAmount, 1f, time);
	}

	public void stopCountDown ()
	{
		LeanTween.cancel (gameObject);
		if (updateCountValue != null)
			updateCountValue (0f);
	}

	public void updateGoldViewAnimate (int from, int to, float time)
	{
		LeanTween.value (gameObject, from, to, time).setOnUpdate (delegate(float value) {
			ag.text = "$" + Utils.formatNumber ((int)value);
		});
	}

	public void showWinnerImage (string str)
	{
		if (WinnerImage != null) {
			if (str != null && str.Length > 0) {
				WinnerImage.transform.Find ("Text").GetComponent<Text> ().text = str;
				WinnerImage.GetComponent<Image> ().color = new Color32 (255, 255, 255, 255);
				WinnerImage.SetActive (true);
				//Show ag plus/minus
			} else {
				WinnerImage.SetActive (false);
			}
		}
	}

	public void showOtherImage (string str)
	{
		if (WinnerImage != null) {
			if (str != null && str.Length > 0) {
				WinnerImage.transform.Find ("Text").GetComponent<Text> ().text = str;
				WinnerImage.GetComponent<Image> ().color = new Color32 (0, 0, 0, 165);
				WinnerImage.SetActive (true);
			} else {
				WinnerImage.SetActive (false);
			}
		}
	}

	public void showPokerHandImage (string str)
	{
		if (WinnerImage != null) {
			if (str != null && str.Length > 0) {
				WinnerImage.transform.Find ("Text").GetComponent<Text> ().text = str;
				WinnerImage.GetComponent<Image> ().color = new Color32 (111, 111, 111, 255);
				WinnerImage.SetActive (true);
			} else {
				WinnerImage.SetActive (false);
			}
		}
	}

	public void addChatContent (string content, Vector2 pos)
	{
		if (PFChatTransform != null) {
			if (chatTransform == null) {
				chatTransform = GameObject.Instantiate (PFChatTransform);
				chatTransform.SetParent (chatsLayer, false);
			}
			if (content != null && content.Length > 0) {
				chatTransform.anchoredPosition = pos;
				chatTransform.gameObject.SetActive (true);
				chatTransform.GetComponent<PlayersChatAutoDismiss> ().addContent (content);
			}
		} else {
			Debug.LogError ("You have not set PFChatTransform for Character yet!");
		}
	}

	public void showPokerCards (int icard1, int icard2)
	{
		Card.decode_poker (icard1).rectTransform = card1;
		Card.decode_poker (icard2).rectTransform = card2;
		card1.gameObject.SetActive (true);
		card2.gameObject.SetActive (true);
	}

	public void showPokerCards (string json)
	{
		JSONArray jcards = JSONNode.Parse (json).AsArray;
		Card.decode_poker (jcards [0].AsInt).rectTransform = card1;
		Card.decode_poker (jcards [1].AsInt).rectTransform = card2;
		card1.gameObject.SetActive (true);
		card2.gameObject.SetActive (true);
	}

	public void hidePokerCards ()
	{
		card1.gameObject.SetActive (false);
		card2.gameObject.SetActive (false);
	}

	//********************************Binh*************************************
	public void showBinhValue (Vector2 vpos, string str,Color32 color)
	{
				
		GameObject binhText = GameObject.Instantiate (Resources.Load ("prefabs/Binh/BinhTextChi", typeof(GameObject))) as GameObject;
		if (binhText != null) {

			//Show Text
			Text t = binhText.GetComponentInChildren<Text> ();
			t.text = str;
			t.color=color;
			if(str.Length>10){
				t.fontSize=65;
			}
//			Debug.LogError("size ===> " + t.fontSize);
			binhText.transform.SetParent (GameApplication.gameScene.cardLayer.transform);
			binhText.GetComponent<RectTransform> ().anchoredPosition = vpos;
			binhText.transform.localScale = Vector3.one;

			GameApplication.gameScene.StartCoroutine (Utils.cr_runDelayed (1.5f, () => {
				GameObject.Destroy (binhText);
			}));

						
		} else {
			Debug.Log ("NULLLLLLLLLLLLL BINH TEXT");
		}
	}

	public void showAgPlus_Binh (int count, Vector2 pos)
	{
		GameObject agPlusText = GameObject.Instantiate (Resources.Load ("prefabs/Binh/agPlus", typeof(GameObject))) as GameObject;
		if (agPlusText != null && GameApplication.game is GameBinh) {
//			float agPlus = count * GameApplication.game.stake;
//			if (agPlus > 0)
//				agPlus = agPlus * 96 / 100;

			Text t = agPlusText.GetComponent<Text> ();
			t.text = Utils.formatNumberWithSign ((int)(count));
			agPlusText.transform.SetParent (GameApplication.gameScene.effectLayer);
			agPlusText.GetComponent<RectTransform> ().anchoredPosition = pos;
			agPlusText.transform.localScale = Vector3.one;

			if (count < 0)
				t.color = Color.white;
			
			float targetY = agPlusText.transform.localPosition.y + 70f;
			LeanTween.moveLocalY (agPlusText, targetY, 2.0f).setDestroyOnComplete (true);
		} else {
			Debug.Log ("NULLLLLLLLLLLLL BINH AG PLUS");
		}
	}

	public void show_win_xocdia(){
		win_xocdia.gameObject.SetActive (true);
		GameApplication.gameScene.StartCoroutine (Utils.cr_runDelayed (3.2f, () => {
			// co truong hop user da thoat
			if(win_xocdia != null) win_xocdia.gameObject.SetActive (false);
		}));
	}

}
