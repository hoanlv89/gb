using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class NotificationCenter : MonoBehaviour
{
	public static string staticMessage;
	string onShowText;
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

	bool justshow = false;

	// Use this for initialization
	void Start ()
	{
		repeat = 0;
		repeatCount = 0;
		showStaticMessage ();

	}
	
	// Update is called once per frame
	void FixedUpdate ()
	{
		if(string.IsNullOrEmpty(onShowText))
			return;

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
		} else if (showedTime > maxTime && maxTime > 0) {
			showStaticMessage ();
		}
	}

	public void setText (string value)
	{
		onShowText = value;
		content.text = value;
	}

	public void showNotification (Type type, int repeat, float maxTime)
	{
		if(PaymentManager.gamenotification == false){
			gameObject.SetActive (false);
			return;
		}
		gameObject.SetActive (true);

		this.repeatCount = 0;
		this.repeat = repeat;
		this.maxTime = maxTime;
		this.showedTime = 0f;
//		this.barWidth = ((RectTransform)transform).sizeDelta.x;
		this.textWidth = content.rectTransform.sizeDelta.x;


//		Debug.LogWarning("barWidth: " + barWidth);
//		Debug.LogError("textWidth: " + textWidth);

		if (textWidth < barWidth) {
			content.rectTransform.anchoredPosition = new Vector2 (0f, 0f);
		} else {
			content.rectTransform.anchoredPosition = new Vector2 ((textWidth + barWidth) * 0.5f, 0f);
		}

		if(type.Equals(Type.normal)){
			content.color = new Color32(255,255,255,255);
		}
		if(type.Equals(Type.red)){
			content.color = new Color32(255,114,0,255);
		}
		if(type.Equals(Type.special)){
			content.color = new Color32(55,255,0,255);
		}
		if(type.Equals(Type.yellow)){
			content.color = new Color32(255,255,0,255);
		}
	}

	void setInitPosition ()
	{
		content.rectTransform.anchoredPosition = new Vector2 ((textWidth + barWidth) * 0.5f, 0f);
	}
	
	public void showStaticMessage ()
	{
		if(justshow)
			return;
		justshow = true;
		StartCoroutine(Utils.cr_runDelayed(2f, delegate{
			justshow = false;
		}));

		if (staticMessage != null && staticMessage.Length > 1) {
			setText(staticMessage);
			showNotification (Type.normal, 1, 0);
		} else if (Hints.hints != null && Hints.hints.Count > 0) {
			Debug.Log("Call Hints.getNextHint ()");
			setText(Hints.getNextHint ());
			showNotification (Type.normal, 1, 0);
		} else {
			gameObject.SetActive (false);
		}
	}

	public void showInfo ()
	{
	}

}
