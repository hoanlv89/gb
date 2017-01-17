using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HomeSceneTextInit : MonoBehaviour
{
	public Text napGold, freeGold, fanPage, group;

	
	void Start ()
	{
		initText();
	}
	
	public void initText(){
		// chung
		napGold.text = Strings.instance.dialog_common_join_game_dialog_op3;
		freeGold.text = Strings.instance.free_gold;
		fanPage.text = Strings.instance.common_setting_fanpage;
//		group.text = Strings.instance.loginscene_guestlogin;
	}
}
