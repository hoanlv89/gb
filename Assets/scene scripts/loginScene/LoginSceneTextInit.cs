using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LoginSceneTextInit : MonoBehaviour
{
	public Text normalLoginButton, normalSignUpButton, normalForgetPassButton, guestLoginButton, loginToGameWithFBAcc, logoutFB;
	public Image flag;

	// 
	public Text lbLoginName, lbLoginPass, lbRepeatPass;
//	public Text lbName, lbPass, lbRepeat, lbSignUpBtn;

	// Use this for initialization
	void Start ()
	{
		initText();
	}
	
	public void initText(){
		// chung
		normalLoginButton.text = Strings.instance.loginscene_normal_login_button;
		normalSignUpButton.text = Strings.instance.loginscene_normal_signup_button;
		normalForgetPassButton.text = Strings.instance.loginscene_normal_forgetpass;
		guestLoginButton.text = Strings.instance.loginscene_guestlogin;
		loginToGameWithFBAcc.text = Strings.instance.loginscene_logintogame_withfbacc;
		logoutFB.text = Strings.instance.loginscene_fb_lougout;

//		lbName.text = Strings.instance.loginscene_label_name;
//		lbPass.text = Strings.instance.loginscene_label_pass;
//		lbRepeat.text = Strings.instance.loginscene_label_repeatpass;
//		lbSignUpBtn.text = Strings.instance.loginscene_normal_signup_button;
	
		lbLoginName.text = Strings.instance.loginscene_label_name;
		lbLoginPass.text = Strings.instance.loginscene_label_pass;

//		flag.sprite = Strings.instance.flag;

		// 3c
		if(lbRepeatPass != null)
			lbRepeatPass.text = Strings.instance.loginscene_label_repeatpass;
	}
}
