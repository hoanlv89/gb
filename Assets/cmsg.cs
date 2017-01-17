using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class cmsg : MonoBehaviour {
	public static int unreadmail;
	public static int unreadbankmail;

	public static bool hasShowMail = false;
	public static bool hasShowBankMail = false;

	public bool isbanknotifier = false;

	public RectTransform numberCmsg;

	void Start(){
		if (isbanknotifier) {
			if (unreadbankmail <= 0) {
				this.gameObject.SetActive (false);
			} else {
				this.gameObject.SetActive (true);
				numberCmsg.GetComponent<Text> ().text = unreadbankmail.ToString ();
			}
		} else {
			if (unreadmail <= 0) {
				this.gameObject.SetActive (false);
			} else {
				this.gameObject.SetActive (true);
				numberCmsg.GetComponent<Text> ().text = unreadmail.ToString ();
			}
		}
	}

	public static void reset(){
		unreadmail = 0;
		unreadbankmail = 0;
		hasShowMail = false;
		hasShowBankMail = false;
	}

}
