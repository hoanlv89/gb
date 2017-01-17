using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ChatLogAdapter : MonoBehaviour
{
	[SerializeField]
	RectTransform
		ChatLogItem;
	public bool debugOn;

	// Use this for initialization
	void Start ()
	{
		ChatLogItem = Resources.Load ("prefabs/gameScene/ChatLogItem", typeof(RectTransform))as RectTransform;
		MessageLog.instance.chatLogAdapter = this;
		initializeContent ();
	}
	
	private void initializeContent ()
	{
		foreach (string item in MessageLog.instance.messagesList) {
			addItem (item);
		}

		if (debugOn) {
			foreach (string item in MessageLog.instance.debugsList) {
				addItem (item);
			}
		}
	}

	public void addItem (string item)
	{
		RectTransform rectItem = GameObject.Instantiate<RectTransform> (ChatLogItem);
		rectItem.SetParent (this.transform, false);
		rectItem.Find ("Text").GetComponent<Text> ().text = item;
		if (transform.childCount > 30) {
			GameObject.Destroy (transform.GetChild (0).gameObject);
		}
	}
}
