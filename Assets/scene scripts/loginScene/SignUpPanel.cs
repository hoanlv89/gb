using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class SignUpPanel : MonoBehaviour
{

	public InputField edtName, edtPass, edtRepeat;
	public Button btnSignUp, btnBack;

	// Use this for initialization
	void Start ()
	{
		
	}
	
	public void hideSignUpPanel ()
	{
		gameObject.SetActive (false);
		loginScene.loginPanel.SetActive(true);
	}

	public void signup ()
	{
		string name = edtName.text;
		string pass = edtPass.text;
		string repeat = edtRepeat.text;

		loginScene.regAccount(name, pass, repeat);
	}

	private bool isNullOrEmpty (string input)
	{
		return input == null || input == string.Empty;
	}

	LoginScene loginScene {
		get {
			if (SuperScene.instance is LoginScene) {
				return (LoginScene)SuperScene.instance;
			} else {
				throw new Exception ();
			}
		}
	}
}
