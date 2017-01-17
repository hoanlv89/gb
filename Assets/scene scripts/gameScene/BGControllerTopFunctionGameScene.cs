using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BGControllerTopFunctionGameScene : MonoBehaviour
{
	public Sprite backbg, chatbg, settingbg;
	public Sprite backbg_xocdia, chatbg_xocdia, settingbg_xocdia;
	public Image backimg, chatimg, settingimg;

	// Use this for initialization
	void Start ()
	{

		if(!GameApplication.IsInitialized)
			return;
		if(GameApplication.cubeia.gameId == GameType.XOCDIA || GameApplication.cubeia.gameId == GameType.CHAN){
			backimg.sprite = backbg_xocdia;
			chatimg.sprite = chatbg_xocdia;
			settingimg.sprite = settingbg_xocdia;
		} else {
			backimg.sprite = backbg;
			chatimg.sprite = chatbg;
			settingimg.sprite = settingbg;
		}
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}
