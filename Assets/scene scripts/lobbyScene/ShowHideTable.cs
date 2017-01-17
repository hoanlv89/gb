using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ShowHideTable : MonoBehaviour
{
	public Sprite s_on;
	public Sprite s_off;
	public Button rectButton;
	public Text r_text;
	public int count=0;
	// Use this for initialization
	void Start ()
	{

	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}

	public void updateSpirte(){
		count++;
		if(count%2==0){
			rectButton.GetComponent<Image>().sprite=s_off;
			r_text.text="Ẩn bàn đầy";
		}else{
			rectButton.GetComponent<Image>().sprite=s_on;
			r_text.text="Ẩn bàn đầy";
		}
	}
}

