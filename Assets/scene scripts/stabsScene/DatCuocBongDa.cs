using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DatCuocBongDa : MonoBehaviour
{
	public Text home;
	public Text away;
	public Text cuoc;
	public Text agwin;
	public RectTransform btOK;
	public RectTransform close;
	public InputField input;

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void updateAGwin(){
		SuperScene.instance.showInfoDialog ("xxxxxxxx");
		string cuoc = input.GetComponent<InputField> ().text;
		
		int i_cuoc = -1;
		int.TryParse(cuoc, out i_cuoc);
		if (i_cuoc < 0) {
			
		}
		Debug.Log ("vao day k ==> " + i_cuoc);
		agwin.text = "" + i_cuoc;
	}
}

