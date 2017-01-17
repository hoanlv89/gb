using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class RowSettingControl : MonoBehaviour
{

	[SerializeField]
	Image
		image;
	[SerializeField]
	Sprite
		sp_yes, sp_no, icon_setting_action;
	[SerializeField]
	Text
		title;
	[SerializeField]
	Button
		button;
	SettingItem.Type type;

	void Start ()
	{
	}

	public void setSettingItem (SettingItem settingItem)
	{
		this.title.text = settingItem.title;
		this.type = settingItem.type;
		switch (type) {
		case SettingItem.Type.onoff:
			image.sprite = settingItem.status ? sp_yes : sp_no;
			button.onClick.RemoveAllListeners ();
			button.onClick.AddListener (delegate {
				if (image.sprite == sp_yes) {
					image.sprite = sp_no;
					settingItem.exe_off ();
					Debug.Log ("NOOOOOOOOOOO");
				} else {
					image.sprite = sp_yes;
					settingItem.exe_on ();
					Debug.Log ("YESSSSSSSSSS");
				}
			});
			break;
		case SettingItem.Type.action:
		case SettingItem.Type.link:
			if (settingItem.sprite != null) {
				image.sprite = settingItem.sprite;
				image.rectTransform.sizeDelta = new Vector2 (image.rectTransform.sizeDelta.x, 52);
			} else {
				image.rectTransform.sizeDelta = new Vector2 (image.rectTransform.sizeDelta.x, 80);
				image.sprite = icon_setting_action;
			}
			button.onClick.RemoveAllListeners ();
			button.onClick.AddListener (delegate {
				Debug.Log ("CLICKKKKKKKKKK");
				settingItem.exeAction ();
			});
			break;
		default:
			break;
		}
	}
}
