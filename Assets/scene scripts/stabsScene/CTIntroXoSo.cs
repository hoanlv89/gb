using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CTIntroXoSo : MonoBehaviour {

	// Use this for initialization
	void Start () {
		((RectTransform)transform).anchoredPosition = new Vector2(0,0);
		GameObject.Find ("textIntro").GetComponent<Text> ().text = Strings.instance.gameplay_xoso_introduce_content;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
