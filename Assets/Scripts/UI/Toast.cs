using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Toast : MonoBehaviour {
	[SerializeField] Text text;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void setText(string content){
		text.text = content;
	}
}
