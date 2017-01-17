using UnityEngine;
using System.Collections;
using SimpleJSON;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine.UI;

public class TestScene : MonoBehaviour {

	// Use this for initialization
	public RectTransform character;
	RectTransform emo;
	public Animator ami;
	public RuntimeAnimatorController xxx; 
	public RectTransform dealer;
	public Button test_dealer;
	public RectTransform layer_card;
	public RectTransform [] cards_1;
	public RectTransform [] cards_2;
	public Image img;

	void Start () {
//		dealer.GetComponent<Animator>().enabled=false;

//		test1();

//		test_dealer.onClick.AddListener(delegate {
//			send_dealer();
//		});

//		var alphabet = "<a href=\"http://www.clesto.com\">Clesto.com</a></p><color value=#fffccc>hihi annguyen</color>";
//		string noHTML = Regex.Replace(alphabet, @"<[^>]+>|&nbsp;", "").Trim();
//		Debug.Log(noHTML);

//		CardChan cc = CardChan.decode(1);
//		Debug.Log(cc.code);
//		Debug.Log(cc.getResourceName());
//		Debug.Log(cc.getSprite());

//		testAutoLineBreaking("tổ cha t.nao mậu binh");

//		JSONArray jcards = new JSONArray ();
//		jcards[-1].AsInt = (new Card(2,3).encode_lieng());
//		jcards[-1].AsInt = (new Card(2,15).encode_lieng());
//		jcards[-1].AsInt = (new Card(1,4).encode_lieng());
//
//		JSONArray jcards2 = new JSONArray ();
//		jcards2[-1].AsInt = (new Card(2,3).encode_lieng());
//		jcards2[-1].AsInt = (new Card(2,15).encode_lieng());
//		jcards2[-1].AsInt = (new Card(1,14).encode_lieng());
//
//		JSONArray jcards3 = new JSONArray ();
//		jcards3[-1].AsInt = (new Card(2,13).encode_lieng());
//		jcards3[-1].AsInt = (new Card(2,12).encode_lieng());
//		jcards3[-1].AsInt = (new Card(1,14).encode_lieng());
//
//		JSONArray jcards4 = new JSONArray ();
//		jcards4[-1].AsInt = (new Card(2,13).encode_lieng());
//		jcards4[-1].AsInt = (new Card(2,15).encode_lieng());
//		jcards4[-1].AsInt = (new Card(1,14).encode_lieng());
//
//		testLieng (jcards);
//		testLieng (jcards2);
//		testLieng (jcards3);
//		testLieng (jcards4);
//		StartCoroutine (LoadFromWeb ("https://graph.facebook.com/v2.4/738179629659938/picture?width=200&height=200&redirect=true", null, delegate(Sprite sprite) {
//			img.sprite = sprite;
//		}));
//		SuperScene.instance.loadImage ("https://graph.facebook.com/v2.4/738179629659938/picture?width=200&height=200&redirect=true", delegate(Sprite sprite) {
//			
//		});

		string str = "";
		for (int i = 1; i <= 100; i++) {
			str += ("code: " + i + " name: " + CardChan.decode (i).getResourceName()) + "\n";
		}
		Debug.Log (str);
	}
	private IEnumerator LoadFromWeb (string url, Image image = null, Utils.ExeOneSpriteParam action = null)
	{
		WWW www = new WWW (url);
		yield return www;
		if (www.error != null)
			yield break;
		Texture t = www.texture;
		Sprite sp = Sprite.Create (www.texture, new Rect (0, 0, t.width, t.height), new Vector2 (0, 0));
		if (action != null)
			action (sp);
		// co nhung truong hop image da bi destroy
		if (image != null && image.enabled)
			image.sprite = sp;

	}

	void testLieng(JSONArray jcards) {
		string result = "";

		for (int i = 0; i < jcards.Count; i++) {
			int item = jcards[i].AsInt;
			Debug.Log("item: " + item + " " + Card.decode_lieng(item).getResourceName() );
		}

		CardUtils.GroupType gt = CardUtils.getGroupCardType_Lieng (jcards);
		if (gt == CardUtils.GroupType.Single) {
			int r = CardUtils.getLiengScore (jcards);
			result = Strings.instance.gameplay_lieng_result.Replace ("%value1%", "" + r);
			if (r > 1)
				result = result.Replace ("(s)", "s");
			else
				result = result.Replace ("(s)", "");
		} else {
			result = CardUtils.getGroupTypeString (gt);
		}

		Debug.Log ("result: " + result);
	}

	void send_dealer(){

		List<Vector2> vec1 = new List<Vector2> ();
		vec1.Add (new Vector2 (-322, -200));
		vec1.Add (new Vector2 (-286, -200));
		vec1.Add (new Vector2 (-252, -200));

		List<Vector2> vec2 = new List<Vector2> ();
		vec2.Add (new Vector2 (311, -120));
		vec2.Add (new Vector2 (343, -120));
		vec2.Add (new Vector2 (376, -120));
		for(int i=0;i<3;i++){
			cards_1[i].gameObject.SetActive(false);
			cards_2[i].gameObject.SetActive(false);
			cards_1[i].anchoredPosition= new Vector2(0,100);
			cards_2[i].anchoredPosition= new Vector2(0,100);
		}
		int k = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j< 2; j++) {


				dealer.GetComponent<Animator> ().enabled = true;
				dealer.GetComponent<Animator> ().Play(0);

				if(j==0){
					cards_1[i].gameObject.SetActive(true);
					LeanTween.value(cards_1[2].gameObject,0.1f,1.2f,2f).setOnUpdate(delegate(float v) {
						Debug.LogError("aaaa => " + i);
						cards_1[2].localScale = new Vector3(v,v,1);
					});
					LeanTween.moveLocal (cards_1[i].gameObject, new Vector3 (vec1[i].x, vec1[i].y, 0f), 0.3f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * 2 + j) * 0.1f).setOnComplete(delegate(object obj) {
						k++;
					});


				}else{
					cards_2[i].gameObject.SetActive(true);
					LeanTween.moveLocal (cards_2[i].gameObject, new Vector3 (vec2[i].x, vec2[i].y, 0f), 0.3f).setEase (LeanTweenType.easeOutQuart).setDelay ((i * 2 + j) * 0.1f).setOnComplete(delegate(object obj) {
						k++;
						if(k==6){
//							dealer.GetComponent<Animator> ().Stop();
							dealer.GetComponent<Animator> ().enabled = false;
						}
					});
				}
			}
		}
	}

	void testAutoLineBreaking(string data){
		Debug.Log(Utils.autoLineBreakingString(data));
	}

	void test2(){
		for(int i = 0; i<52; i++){
			Debug.Log(Card.decode(i+1).getResourceName());
		}
	}

	void test3(){
		for(int i = 1; i<101; i++){
			int code = (i - 1) / 4 - 1;
			Debug.Log((code+1)+" - "+CardChan.getName(i+1));
		}
	}

	public void show(int i){
		Debug.Log ("aaaaaaaa===>" + i);

	}

	void test1(){
		List<Card> cards = new List<Card>();
		cards.Add(Card.decode_tienlen(26-2+4)); // 6tep
		cards.Add(Card.decode_tienlen(26-2+5));// 6bich
		cards.Add(Card.decode_tienlen(0-2+6));// 6bich
//		cards.Add(Card.decode_tienlen(26-2+12));// 6bich
//		cards.Add(Card.decode_tienlen(0-2+13));// 6bich
//		cards.Add(Card.decode_tienlen(0-2+9));// 6bich

//		cards.Add(Card.decode_tienlen(39-2+6));// 6bich
//		cards.Add(Card.decode_tienlen(26-2+6));// 6ro
//		cards.Add(Card.decode_tienlen(39-2+7)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+7)); // 6tep
//		cards.Add(Card.decode_tienlen(0-2+8)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+8));// 6ro
//		cards.Add(Card.decode_tienlen(39-2+9)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+9)); // 6co

//		cards.Add(Card.decode_tienlen(39-2+5));// 6bich
//		cards.Add(Card.decode_tienlen(26-2+6));// 6ro
//		cards.Add(Card.decode_tienlen(39-2+7)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+8)); // 6tep
//		cards.Add(Card.decode_tienlen(0-2+9)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+10));// 6ro
//		cards.Add(Card.decode_tienlen(39-2+11)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+12)); // 6co
//		cards.Add(Card.decode_tienlen(26-2+13)); // 6co
		ami = character.GetComponent<Animator> ();
		
		cards.Sort(CardUtils.ComparisionTienLen);
		//		foreach(Card item in cards){
		//			Debug.Log("cards: " + item.getResourceName());
		//		}
		
		
		List<Card> lastcards = new List<Card>();
		lastcards.Add(Card.decode_tienlen(13-2+3));// 4ro
		lastcards.Add(Card.decode_tienlen(13-2+4)); // 4co
		lastcards.Add(Card.decode_tienlen(39-2+5));// 4bich
//		lastcards.Add(Card.decode_tienlen(13-2+7)); // 4tep
//		lastcards.Add(Card.decode_tienlen(0-2+8));// 4bich
//		lastcards.Add(Card.decode_tienlen(13-2+9)); // 4tep
//		lastcards.Add(Card.decode_tienlen(13-2+10)); // 4tep
//		lastcards.Add(Card.decode_tienlen(13-2+11)); // 4tep
//		lastcards.Add(Card.decode_tienlen(13-2+12)); // 4tep
		//		lastcards.Add(Card.decode_tienlen(26-2+7)); // 4tep
		
		//		Debug.LogError("straight: "+CardUtils.isStraight_Sam(lastcards));
		foreach(Card item in lastcards){
			Debug.Log("2: "+item.getResourceName()+ " N: "+ item.N);
		}
		
		List<Card> rcards = CardUtils.getRecommendCardsSam(lastcards, cards);
		
		foreach(Card item in rcards){
			Debug.Log("3:_______ "+item.getResourceName());
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}	
}
