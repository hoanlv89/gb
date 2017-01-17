
using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;

public class LoadScene : SuperScene
{
#if UNITY_IOS || UNITY_ANDROID
	[SerializeField]
	SceneBundleObject[]
		sceneBundles;
	[SerializeField]
	string
		optionalVariantBundle;
	[SerializeField]
	string
		optionalVariantName;
	public Text status;
	public Slider slider;
	private int count = 0;

	IEnumerator Start ()
	{
		base.Start();

		if (!string.IsNullOrEmpty (optionalVariantBundle) && !string.IsNullOrEmpty (optionalVariantName))
			BundleManager.instance.RegisterVariant (optionalVariantBundle, optionalVariantName);

		while (!BundleManager.instance.isReady)
			yield return null;


		status.text = "Bắt đầu tải dữ liệu";
		slider.value = 0f;

		StartCoroutine (loadScene ());

		//Application.LoadLevel (sceneName);
	}

	IEnumerator loadScene ()
	{

		if (count == sceneBundles.Length) {
			status.text = "Cập nhật dữ liệu thành công";
			Debug.Log ("Cập nhật dữ liệu thành công");

			StartCoroutine (startScene ());
			yield break;
		}
		int size = sceneBundles.Length;
		float value = (count + 0.5f) / size; 
		status.text = "Đang tải " + (count + 1) + "/" + size;
		Debug.Log ("Đang tải " + (count + 1) + "/" + size);
		slider.value = value;

		BundleManager.instance.LoadBundle (sceneBundles [count].sceneBundle);

		while (!BundleManager.instance.IsBundleLoaded(sceneBundles [count].sceneBundle))
			yield return null;
		count += 1;
		StartCoroutine (loadScene ());
	}

	IEnumerator startScene ()
	{
		/*while (!BundleManager.instance.IsBundleLoaded(sceneBundles [count].sceneBundle)){
			yield return StartCoroutine(startScene());
		}*/
			
		Application.LoadLevel (GameApplication.LOGINSCENE);
		yield return null;
	}
#endif
}