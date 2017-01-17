using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using SimpleJSON;

public class CTComposeMail : MonoBehaviour
{
	public InputField EdtReceiver;
	public Text TContent, TSend, TPlaceHolder, TTo, TPlaceHolderContent;
	public Button BtnSend;


	// Use this for initialization
	void Start ()
	{
		init ();
	}

	void init ()
	{
		((RectTransform)transform).anchoredPosition = new Vector2(0,0);

		//TSend.text = Strings.instance.stabs_mail_send;
		TPlaceHolder.text = Strings.instance.stabs_mail_placeholder_to;
		TPlaceHolderContent.text = Strings.instance.stabs_mail_placeholder_content;

		BtnSend.onClick.AddListener (delegate {
			string address = TTo.text;
			string content = TContent.text;

			if (address.Length < 1 || content.Length < 1) {
				SuperScene.instance.showInfoDialog (Strings.instance.dialog_alert_lackof_info);
				return;
			}

			sendMail (address, content);
		});
	}

	private void sendMail (string address, string content)
	{

		JSONClass data = new JSONClass ();
		data ["evt"] = "15";
		data ["T"].AsInt = 7;
		data ["NN"] = address;
		data ["D"] = content;
		if (GameApplication.cubeia != null)
			GameApplication.cubeia.sendService (data);
	}
}
