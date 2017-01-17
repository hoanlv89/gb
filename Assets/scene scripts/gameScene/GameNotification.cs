using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Events;

public class GameNotification : MonoBehaviour
{

	[SerializeField]
	Button
		close;
	[SerializeField]
	Text
		content;
	IEnumerator delayDismiss;

	void Start ()
	{
		close.onClick.AddListener (delegate {
			dismiss ();
		});
	}

	public void showNotification (string content)
	{
		if (content != null && content.Length > 0) {
			content = content.Replace ("<font color=", "<color=");
			content = content.Replace ("</font>", "</color>");

			this.content.text = content;
			gameObject.SetActive (true);
		} else {
			Debug.LogWarning ("null content");
		}
	}

	public void showNotificationAutoDismiss (string content)
	{
		if (content != null && content.Length > 0) {
			content = content.Replace ("<font color=", "<color=");
			content = content.Replace ("</font>", "</color>");
			this.content.text = content;
			gameObject.SetActive (true);
			if (delayDismiss != null)
				StopCoroutine (delayDismiss);
			delayDismiss = Utils.cr_runDelayed (4f, delegate {
				dismiss ();
			});
			StartCoroutine (delayDismiss);
		} else {
			Debug.LogWarning ("null content");
		}
	}

	public void setOnDismiss (UnityAction action)
	{
		close.onClick.RemoveAllListeners ();
		close.onClick.AddListener (action);
	}

	public void dismiss ()
	{
		gameObject.SetActive (false);
		content.text = "";
	}

}
