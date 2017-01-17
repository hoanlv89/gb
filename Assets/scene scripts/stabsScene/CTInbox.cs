using UnityEngine;
using System.Collections;
using SimpleJSON;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
using System.Threading;

public class CTInbox : MonoBehaviour
{
	public RectTransform itemList;
	public RectTransform Header, Content, ScrollBar, Reading;
	public Text TextFrom, TextReply, TextGetGold, TextDelete, TextContent;
	public Button BtnBack, BtnReply, BtnGetGold, BtnDelete;
	public Button delMails;
	public bool is_admin_inbox = false;

	//prefab
	public RectTransform pfMailItem;
	Mail readingMail;
	List<Mail> idMailsDel = new List<Mail> ();

	public virtual void Start ()
	{
		if(!GameApplication.IsInitialized)
			return;

		init ();
		STabsScene tabs = (STabsScene)SuperScene.instance;
		_getMails ();
	}

	void _getMails(){	
		if (STabsScene.tabsType == STabsScene.STabType.BANK) {
			getMails (12);
		} else {
			if (GameApplication.gameApp == GameApplication.GameApp.G52Fun){
				getMails (10);
			}
			getMails (11);
			// vi dau truong chua co ngan hang nen cho luon thu co tien vao day
			//			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
			//				getMails (12);
		}
	}

	void init ()
	{
		// chinh ve vi tri giua
		Vector2 ap = ((RectTransform)transform).anchoredPosition;
		ap = new Vector2 (0, ap.y);

		TextFrom.text = "";
		TextReply.text = Strings.instance.stabs_mail_reply;
		TextGetGold.text = Strings.instance.stabs_mail_getgold;
		TextDelete.text = Strings.instance.stabs_mail_delete;
		TextContent.text = "";

		showMailReadingView (false);

		BtnBack.onClick.AddListener (delegate {
			showMailReadingView (false);
		});

		BtnReply.onClick.AddListener (delegate {
			if (SuperScene.instance is STabsScene) {
				STabsScene stabsscene = (STabsScene)SuperScene.instance;
				// head to compose mail
				stabsscene.changeToComposeMailTab (readingMail.from);
			}
		});

		BtnGetGold.onClick.AddListener (delegate {
			getGoldFromMail (readingMail.id);
		});

		BtnDelete.onClick.AddListener (delegate {
			SDialog sdialog = SuperScene.instance.showDialog (DialogInfo.OKCancelDialog);
			sdialog.content.text = Strings.instance.stabs_mail_delete_mail_confirm;
			sdialog.positive.onClick.AddListener (delegate {
				deleteMail (readingMail.id);
				sdialog.dismiss ();

				// vi khong co response nen minh xoa thu trong list va cap nhat lai list
				_getMails();
			});
			sdialog.negative.onClick.AddListener (delegate {
				sdialog.dismiss ();
			});
		});

	}

	public void updateViewDeleteReadingMail ()
	{
		showMailReadingView (false);

		Mail.mails20.Remove (readingMail);
		Mail.mails21.Remove (readingMail);
		Mail.mails22.Remove (readingMail);
		refreshMail ();
	}

	private void showMailReadingView (bool show)
	{
		Header.gameObject.SetActive (!show);
		Content.gameObject.SetActive (!show);
		ScrollBar.gameObject.SetActive (!show);
		Reading.gameObject.SetActive (show);
	}

	private void getMails (int type)
	{
		// 12 la thu nhan tien 
		JSONClass data = new JSONClass ();
		data ["evt"] = "15";
		data ["T"].AsInt = type; // 10.11.12
		data ["P"].AsInt = 0;
		if (GameApplication.cubeia != null)
			GameApplication.cubeia.sendService (data);
	}

	List<Mail> addmail(List<Mail> list, Mail mail){
		bool contains = false;
		foreach (Mail m in list) {
			if (m.id == mail.id) {
				contains = true;
				break;
			}
		}
		if (!contains)
			list.Add (mail);

		return list;
	}

	public void refreshMail ()
	{
		Debug.Log("refreshMail");

		for (int i = 0; i<itemList.childCount; i++) {
			Transform child = itemList.GetChild (i);
			Destroy (child.gameObject);
		}

		List<Mail> totalMails = new List<Mail> ();
		if(STabsScene.tabsType == STabsScene.STabType.BANK) {
			totalMails.AddRange (Mail.mails22);
		}
		if(STabsScene.tabsType == STabsScene.STabType.MAIL || STabsScene.tabsType == STabsScene.STabType.FEEDBACK) {
			foreach (Mail mail in Mail.mails20) {
				totalMails = addmail(totalMails, mail);
			}
			foreach (Mail mail in Mail.mails21) {
				totalMails = addmail(totalMails, mail);
			}
		}


		totalMails.Sort (delegate(Mail x, Mail y) {
			if (!x.s && y.s){
				return -1;
			}

			if (x.s && !y.s){
				return 1;
			}

			return 0;
		});
		delMails.gameObject.SetActive (false);
//		Debug.LogError("total mails: "+ totalMails.Count);
		foreach (Mail mail in totalMails) {
			// neu la mail co AG thi show het
			if(mail.gold == 0 && GameApplication.gameApp == GameApplication.GameApp.DauTruong){
				if(is_admin_inbox){
					// chi show nhung mail co t = 0
					if(mail.t != 0)
						continue;
				} else {
					// mail cua ng choi co t = 2
					if(mail.t == 0)
						continue;
				}
			}
			RectTransform rect = GameObject.Instantiate (pfMailItem);
			rect.SetParent (itemList, false);
//			Debug.LogError("add mail, itemList.childCount: " + itemList.childCount);
			DateTime start = new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
			DateTime date = start.AddMilliseconds (mail.time).ToLocalTime ();

			Text tvfrom = rect.FindChild ("from").GetComponent<Text> ();
			Text tvtime = rect.FindChild ("time").GetComponent<Text> ();
			Text tvcontent = rect.FindChild ("content").GetComponent<Text> ();

			tvfrom.text = mail.from;
			tvtime.text = date.Day + "/" + date.Month + "/" + date.Year;

			// viec dat cac bien o ngoai nhu nay la quan trong
			string from = mail.from;
			string content = mail.msg;
			int id = mail.id;
			bool isRead = mail.s;
			int gold = mail.gold;
			Mail cmail = mail;

			if (gold > 0) {
				content = "(" + Utils.formatCurrency (mail.gold) + ") " + content;
				BtnReply.gameObject.SetActive (false);
				BtnGetGold.gameObject.SetActive (true);
				BtnDelete.gameObject.SetActive (false);
			} else {
				BtnReply.gameObject.SetActive (true);
				BtnGetGold.gameObject.SetActive (false);
			}
			tvcontent.text = content;

			if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
				if (!isRead) {
					tvfrom.fontStyle = FontStyle.Bold;
					tvtime.fontStyle = FontStyle.Bold;
					tvcontent.fontStyle = FontStyle.Bold;
					tvcontent.color = new Color32(255, 227, 0, 255);
				} else {
					tvfrom.fontStyle = FontStyle.Normal;
					tvtime.fontStyle = FontStyle.Normal;
					tvcontent.fontStyle = FontStyle.Normal;
					//tvcontent.color = new Color32(255, 227, 0, 255);
				}
			} else {
				if (!isRead) {
					tvfrom.fontStyle = FontStyle.Bold;
					tvtime.fontStyle = FontStyle.Bold;
					tvcontent.fontStyle = FontStyle.Bold;
					tvcontent.color = Color.yellow;
				} else {
					tvfrom.fontStyle = FontStyle.Normal;
					tvtime.fontStyle = FontStyle.Normal;
					tvcontent.fontStyle = FontStyle.Normal;
					tvcontent.color = Color.white;
				}
			}

			Toggle del = rect.FindChild ("Toggle").GetComponent<Toggle> ();
			del.onValueChanged.AddListener (delegate {
				showHideDelMails (cmail, del.isOn);
			});

			rect.FindChild ("Button").GetComponent<Button> ().onClick.AddListener (delegate {
				STabsScene stabsscene = (STabsScene)SuperScene.instance;
//				stabsscene.showInfoDialog(""+mail.id);
				showMailReadingView (true);
				TextFrom.text = from;
				TextContent.text = content;
				if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
					TextFrom.color = Color.black;
					TextContent.color = Color.black;
				}
				readingMail = cmail;
				if (!isRead) {
					tvfrom.fontStyle = FontStyle.Normal;
					tvtime.fontStyle = FontStyle.Normal;
					tvcontent.fontStyle = FontStyle.Normal;
					if (GameApplication.gameApp == GameApplication.GameApp.DauTruong) {
						//tvcontent.color = new Color32(255, 227, 0, 255);
					} else {
						tvcontent.color = Color.white;
					}
					readMail (readingMail.id);
					if (Mail.mails20.Count > 0 || Mail.mails21.Count > 0) {
						User.cmsg--;
					}
					if(mail.gold > 0)cmsg.unreadbankmail--;
					else cmsg.unreadmail--;
				}
			});
		}
		foreach (Mail mails in idMailsDel) {
			Debug.Log ("selected mail id ==> " + mails.id);
		}
		delMails.onClick.RemoveAllListeners();
		delMails.onClick.AddListener (delegate() {
			JSONArray arr = new JSONArray ();
			bool isGoldMail = false;
			foreach (Mail mail in idMailsDel) {
				arr [-1].AsInt = mail.id;
				readingMail = mail;
				if(mail.gold > 0){
					isGoldMail = true;
				}
				bool isRead = readingMail.s;
				if (!isRead) {
					readMail (readingMail.id);
					User.cmsg--;
					if(isGoldMail)cmsg.unreadbankmail--;
					else cmsg.unreadmail--;
				}

			}
			JSONClass obj = new JSONClass ();
			obj ["evt"] = "15";
			if(isGoldMail){
				// nhan gold
				obj ["T"].AsInt = 2;
			} else {
				// xoa thu
				obj ["T"].AsInt = 3;
			}
			obj ["Arr"] = arr;
			GameApplication.cubeia.sendService (obj);

			_getMails ();
		});
	
	}

	public void showHideDelMails (Mail mail, bool check)
	{
		if (check) {
			idMailsDel.Add (mail);
		} else {
			idMailsDel.Remove (mail);
		}
		if (idMailsDel.Count == 0) {
			delMails.gameObject.SetActive (false);
		} else {
			delMails.gameObject.SetActive (true);
			bool isGoldMail = false;
			foreach(Mail imail in idMailsDel){
				if(imail.gold > 0){
					isGoldMail = true;
					break;
				}
			}
			if(isGoldMail)
				delMails.GetComponentInChildren<Text>().text = "Nhận Gold";
			else 
				delMails.GetComponentInChildren<Text>().text = "Xóa thư";
		}
		foreach (Mail mails in idMailsDel) {
			Debug.Log ("selected mail id ==> " + mails.id);
		}
//		delMails.onClick.AddListener(delegate() {
//			JSONArray arr = new JSONArray ();
//			foreach(Mail mails in idMailsDel){
//				arr [-1].AsInt = mails.id;
//				Mail cmail = mails;
//				readingMail = cmail;
//				bool isRead = readingMail.s;
//				if(!isRead){
//					readMail(readingMail.id);
//					User.cmsg--;
//					Debug.Log("User.cmsg ==> " + User.cmsg);
//				}
//			}
//			JSONClass obj = new JSONClass ();
//			obj ["evt"] = "15";
//			obj ["T"].AsInt = 3;
//			obj ["Arr"] = arr;
//			GameApplication.cubeia.sendService (obj);
//			getMails (11);
//		});
	}
	
	private void readMail (int readingMailID)
	{
		JSONClass obj = new JSONClass ();
		obj ["evt"] = "15";
		obj ["T"].AsInt = 1;
		obj ["ID"].AsInt = readingMailID;
		
		GameApplication.cubeia.sendService (obj);
	}

	private void deleteMail (int readingMailID)
	{
		JSONArray arr = new JSONArray ();
		arr [-1].AsInt = readingMailID;
		
		JSONClass obj = new JSONClass ();
		obj ["evt"] = "15";
		obj ["T"].AsInt = 3;
		obj ["Arr"] = arr;
		
		GameApplication.cubeia.sendService (obj);
	}

	private void getGoldFromMail (int readingMailID)
	{
		JSONArray arr = new JSONArray ();
		arr [-1].AsInt = readingMailID;
		
		JSONClass obj = new JSONClass ();
		obj ["evt"] = "15";
		obj ["T"].AsInt = 2;
		obj ["Arr"] = arr;
		
		GameApplication.cubeia.sendService (obj);
	}
}

