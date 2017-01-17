using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TransitionSceneTextBinder: MonoBehaviour {

	public Text loadingtext;

	// Use this for initialization
	void Start () {
		loadingtext.text = Strings.instance.transition_scene_loading;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
