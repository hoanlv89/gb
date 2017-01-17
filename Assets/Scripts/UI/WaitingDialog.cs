using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WaitingDialog : MonoBehaviour
{
	[SerializeField]
	Text
		content;
	[SerializeField]
	Text
		retry_text;
	[SerializeField]
	Button
		retry;
	public Button cancel;
	public Text cancel_text;
	string message = "";
	float totalVisibleTime;
	Utils.Executor exe;
	bool tried;

	public float maxVisibleTimeInSecond = 45f;

	void Start()
	{
		retry_text.text = Strings.instance.common_retry;
		if(cancel_text != null)
			cancel_text.text = Strings.instance.dialog_common_cancel;
	}

	void FixedUpdate()
	{
		if (retry.gameObject.activeSelf)
			return;

		totalVisibleTime += Time.fixedDeltaTime;
		if (totalVisibleTime > maxVisibleTimeInSecond) {
			if (exe == null ) {
				dismiss();
				SuperScene.instance.showToast(Strings.instance.common_network_error);
			} else if(tried == false) {
				totalVisibleTime = 0f;
				content.text = Strings.instance.common_network_error;
				retry.gameObject.SetActive(true);
				retry.onClick.AddListener(delegate {
					exe();
					retry.gameObject.SetActive(false);
					tried = true;
					content.text = message;
				});
			} else{
				dismiss();
				GameApplication.user.loginInfo.gameID = GameType.GATE;
				SuperScene.instance.forcedReconnect();
			}
		}
	}

	public void show(string value)
	{
		show(value, null);
	}

	public void show(string value, Utils.Executor callback, UnityEngine.Events.UnityAction onCancel = null)
	{
		exe = callback;
		message = value;
		if (gameObject.activeSelf == false) {
//			Debug.Log("showWaittingDialog : " + message);
			content.text = message;
			gameObject.SetActive(true);
			totalVisibleTime = 0f;
			tried = false;

			retry.gameObject.SetActive(false);
			retry.onClick.RemoveAllListeners();
		}

		if (onCancel != null && cancel != null) {
			cancel.gameObject.SetActive(true);
			cancel.onClick.RemoveAllListeners();
			cancel.onClick.AddListener(onCancel);
		} else if(cancel != null) {
			cancel.gameObject.SetActive(false);
		}

		if(SuperScene.instance != null &&
		   ( SuperScene.instance is LoginScene || SuperScene.instance is HomeScene))
			maxVisibleTimeInSecond = 60f;
		else 
			maxVisibleTimeInSecond = 20f;
	}

	public void dismiss()
	{
		if (gameObject != null && gameObject.activeSelf == true) {
//			Debug.Log("dismissWaittingDialog");
			totalVisibleTime = 0f;
			exe = null;
			message = "";
			this.content.text = "";
			gameObject.SetActive(false);
		}
	}
}
