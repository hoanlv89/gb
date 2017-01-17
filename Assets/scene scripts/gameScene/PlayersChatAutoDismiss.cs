using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayersChatAutoDismiss : MonoBehaviour {

	[SerializeField] RectTransform PFPlayersChatItem;
	float showedTime;

	// Use this for initialization
	void Start () {
		showedTime = 0f;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		showedTime += Time.fixedDeltaTime;
		if(showedTime >= 5f)
		{
			showedTime = 0f;
			gameObject.SetActive(false);
		}
	}

	public void addContent(string content){
		Debug.LogWarning("addContent " + content);
		// tao mot text
		RectTransform item = GameObject.Instantiate(PFPlayersChatItem);
		item.SetParent(transform, false);
		item.GetComponent<Text>().text = content;
		// tang thoi gian hien thi
		showedTime = 0f;
		gameObject.SetActive(true);
	}
}
