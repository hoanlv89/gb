using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NotificationCenterFallingStyle : MonoBehaviour
{
	public static string staticMessage;
	public enum Type
	{
		normal,
		special,
		red,
		yellow
	}

	[SerializeField]
	Text
		content;
	int repeat, repeatCount;
	float showedTime, maxTime;
	float  textWidth;
	const float barWidth = 1000f;

	// Use this for initialization
	void Start ()
	{
		repeat = 0;
		repeatCount = 0;
//		showStaticMessage ();

	}
	
	// Update is called once per frame
	void FixedUpdate ()
	{
		showedTime += Time.fixedDeltaTime;
		if (textWidth >= barWidth) {
			content.rectTransform.anchoredPosition = new Vector2 (content.rectTransform.anchoredPosition.x - 2.2f, content.rectTransform.anchoredPosition.y);
			if (content.rectTransform.anchoredPosition.x < -0.5f * (textWidth + barWidth)) {
				repeatCount ++;
				if (repeatCount >= repeat) {
					showStaticMessage ();
				} else {
					// repeat
					setInitPosition ();
				}
			}
		} else if (showedTime > 8f) {
			repeatCount ++;
			if (repeatCount >= repeat) {
				showStaticMessage ();
			} else {
				// repeat
				setInitPosition ();
			}
		} else if (showedTime > maxTime) {
			showStaticMessage ();
		}
	}

	public void setText (string value)
	{
		content.text = value;
	}

	public void showNotification (int repeat, float maxTime)
	{
		gameObject.SetActive (true);

		this.repeatCount = 0;
		this.repeat = repeat;
		this.maxTime = maxTime;
		this.showedTime = 0f;
//		this.barWidth = ((RectTransform)transform).sizeDelta.x;
		this.textWidth = content.rectTransform.sizeDelta.x;


//		Debug.LogWarning("barWidth: " + barWidth);
//		Debug.LogWarning("textWidth: " + textWidth);

		if (textWidth < barWidth) {
			content.rectTransform.anchoredPosition = new Vector2 (0f, 0f);
		} else {
			content.rectTransform.anchoredPosition = new Vector2 ((textWidth + barWidth) * 0.5f, 0f);
		}
	}

	void setInitPosition ()
	{
		content.rectTransform.anchoredPosition = new Vector2 ((textWidth + barWidth) * 0.5f, 0f);
	}
	
	public void showStaticMessage ()
	{
		if (staticMessage != null && staticMessage.Length > 1) {
			content.text = staticMessage;
			showNotification (1, 0);
		} else if (Hints.hints != null && Hints.hints.Count > 0) {
			Debug.Log("Call Hints.getNextHint ()");
			content.text = Hints.getNextHint ();
			showNotification (1, 0);
		} else {
			gameObject.SetActive (false);
		}
	}

	public void showInfo ()
	{
	}

}
