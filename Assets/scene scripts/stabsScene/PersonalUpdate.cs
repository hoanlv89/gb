using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class PersonalUpdate : MonoBehaviour {

	public Text note1;
	public Text note2;
	public Button bt_ok;
	public Text sdt;
	public Text name;
	public InputField i_sdt;
	public InputField i_name;
	string n_name;
	string n_phone;
	public static PersonalUpdate instance;
	void Start () {
		instance = this;
		init ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void init(){
		this.note1.text = Strings.instance.person_info_note1;
		this.note2.text = Strings.instance.person_info_note2.Replace("(GAME)",GameApplication.gameName);;
		bt_ok.transform.Find("Text").GetComponent<Text> ().text = Strings.instance.person_info_update;
		name.text = Strings.instance.person_info_name;
		sdt.text = Strings.instance.person_info_sdt;
		if (User.mobile != null && User.mobile.Length > 0) {
			i_sdt.text=User.mobile;
			i_sdt.enabled=false;
		}
	}

	public void sendUpdateInfo(){
		n_name = i_name.text;
		n_phone = i_sdt.text;
		var data = new JSONClass ();
		data ["evt"] = "pf";
		data ["G"].AsInt = 1;
		data ["N"] = n_name;
		data ["Id"] = "";
		data ["M"] = n_phone;
		data ["J"] = "";
		data ["A"] = "";
		data ["E"] = "";
		data ["D"] = "11/11/1989";
		GameApplication.cubeia.sendService (data);
	}
}
