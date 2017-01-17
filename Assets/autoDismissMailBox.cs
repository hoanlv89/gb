using UnityEngine;
using System.Collections;

public class autoDismissMailBox : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (GameApplication.IsInitialized && GameApplication.cubeia.gameId == GameType.XOCDIA) {
			gameObject.SetActive (true);
		} else {
			gameObject.SetActive (false);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
