using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NameTitle : MonoBehaviour {
	public static string name;
	public RectTransform title;
	// Use this for initialization
	void Start () {
		title.FindChild ("Text").GetComponent<Text> ().text = name;
	}

}
