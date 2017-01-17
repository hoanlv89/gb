using UnityEngine;
using System.Collections;

public class BgController : MonoBehaviour {

	public GameObject bgtienlen, bgxocdia;

	// Use this for initialization
	void Start () {
		if(!GameApplication.IsInitialized)
			return;
//		if(GameApplication.cubeia.gameId == GameType.XOCDIA || GameApplication.cubeia.gameId == GameType.CHAN) {
		if(GameApplication.cubeia.gameId == GameType.XOCDIA) {
			bgtienlen.SetActive(false);
			bgxocdia.SetActive(true);
		} else {
			bgtienlen.SetActive(true);
			bgxocdia.SetActive(false);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
