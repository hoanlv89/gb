using UnityEngine;
using System.Collections;

public class BgControl : MonoBehaviour
{
	public GameObject bgDT;
	public GameObject bg3C;
	public GameObject bg3C_xocdia;

	// Use this for initialization
	void Start ()
	{
		bgDT.SetActive (false);
		bg3C.SetActive (false);
		bg3C_xocdia.SetActive (false);

		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
			bgDT.SetActive (true);
		} else if (GameApplication.gameApp == GameApplication.GameApp.G3C) {
			if (GameApplication.cubeia != null && GameApplication.cubeia.gameId == GameType.XOCDIA
				&& Application.loadedLevelName.Equals (GameApplication.LOBBYSCENE)) {
				bg3C_xocdia.SetActive (true);
			} else {
				bg3C.SetActive (true);
			}
		}
	}
}
