using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class ChangePass : MonoBehaviour {
    public InputField mkold;
    public InputField mknew;
    public InputField mknewr;
    public Button bnt_send;

	public static string _newPass;

    void Start() {

        bnt_send.onClick.AddListener(delegate
        {  
			bool check = true;
			string oldPass = mkold.text;
			string newPassr = mknewr.text;
			string newPass = mknew.text;
			if(oldPass != GameApplication.user.loginInfo.password){
				SuperScene.instance.showInfoDialog("Mật khẩu nhập không đúng");
			} else
			if(newPass != newPassr){
				SuperScene.instance.showInfoDialog("Mật khẩu nhập lại không đúng, vui lòng kiểm tra lại");
			} else if(newPassr.Length < 6){
				SuperScene.instance.showInfoDialog("Mật khẩu phải lớn hơn 6 kí tự, vui lòng nhập lại");
			} 
			else
			sendChangePass(oldPass,newPassr);
        });
    }
    public void sendChangePass(string oldPass, string newPass) { 
		var data = new JSONClass ();
		data ["evt"] = "changepass";
		data ["OP"] = oldPass;
		data ["NP"] = newPass;
		Debug.Log (oldPass);
		GameApplication.cubeia.sendService (data);

		_newPass = newPass;
    }
	
}
