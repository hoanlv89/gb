using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class RegFBUserName : MonoBehaviour
{

	public Text msg1, msg2, placeHolder, textBtnReg, result;
	public InputField input;

	// Use this for initialization
	void Start ()
	{
		msg1.text = Strings.instance.home_dialog_reg_name_tile;
		msg2.text = Strings.instance.home_dialog_reg_rules;
		placeHolder.text = Strings.instance.home_dialog_reg_placeholder;
		textBtnReg.text = Strings.instance.home_dialog_reg_text_button_reg;
		result.gameObject.SetActive (false);
	}
	
	public void reg_username ()
	{
		if (result.text.Equals (Strings.instance.home_dialog_reg_loading))
			return;
		result.text = Strings.instance.home_dialog_reg_loading;
		string strin = input.text;
		JSONClass json = new JSONClass ();
		json ["evt"] = "RUF";
		json ["U"] = strin;
		GameApplication.cubeia.sendService (json);
	}

	public void dismiss ()
	{
		gameObject.SetActive (false);
	}

	public void setResult (string str)
	{
		result.gameObject.SetActive (true);
		result.text = str;
	}
}
