#if UNITY_IOS || UNITY_ANDROID
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class BundleManager : MonoBehaviour 
{
	public static BundleManager instance;

	SDialog dialogInstance;
	private const bool allowCarrierDataNetwork = true;
	private const string pingAddress = "8.8.8.8"; // Google Public DNS server
	private const float waitingTime = 2.0f;
	private Ping ping;
	private float pingStartTime;

	public static string version {
		get{
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.G3C)){
				return "3c_1073";
			}
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong)){
				return "dt_1074";
			}
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){
				return "f52_1075";
			}
			return "unknown";
		}
	}
	public Text status;
	public Slider slider;

	string pathToBundles {
		get{
			string _pathToBundles = "";
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.G3C)){
				_pathToBundles = "http://mservices.game3c.info/bundle/"+version+"/";
			}
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.DauTruong)){
				_pathToBundles = "http://mobile.dautruong.info/bundle/"+version+"/";
			}
			if(GameApplication.gameApp.Equals(GameApplication.GameApp.G52Fun)){
				_pathToBundles = "http://mservices.52fun.club/bundle/"+version+"/";
			}

			string platform = "";
			
			#if UNITY_IOS
			platform = "iOS";
			#elif UNITY_ANDROID
			platform = "Android";
			#elif UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
			platform = "PC";
			#elif UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
			platform = "OSX";
			#elif UNITY_WEBPLAYER
			platform = "Web";
			#elif UNITY_WP8
			platform = "WP8";
			#else
			platform = "error";
			Debug.Log("unsupported platform");
			#endif
			
			_pathToBundles += platform + "/";

			return _pathToBundles;
		}
	}

	Dictionary<string, AssetBundle> bundles;
	Dictionary<string, string> bundleVariants;
	AssetBundleManifest manifest = null;
	string platform;

	public bool isReady 
	{
		get { return !object.ReferenceEquals(manifest, null);}
	}


	void Awake()
	{
		if (object.ReferenceEquals (instance, null)) 
		{
			instance = this;
		}
		else if (!object.ReferenceEquals (instance, this))
		{
			Destroy (gameObject);
			return;
		}

		DontDestroyOnLoad (gameObject);

		platform = "";

		#if UNITY_IOS
				platform = "iOS";
		#elif UNITY_ANDROID
				platform = "Android";
		#elif UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
				platform = "PC";
		#elif UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
				platform = "OSX";
		#elif UNITY_WEBPLAYER
				platform = "Web";
		#elif UNITY_WP8
				platform = "WP8";
		#else
				platform = "error";
				Debug.Log("unsupported platform");
		#endif

//		pathToBundles += platform + "/";
		bundles = new Dictionary<string, AssetBundle> ();
		bundleVariants = new Dictionary<string, string> ();


		// tao dialog
		string dialogPFpath = "prefabs/PFDialog";
		if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
			dialogPFpath = "prefabs/PFDialog";
		else if(GameApplication.gameApp == GameApplication.GameApp.G3C)
			dialogPFpath = "prefabs/PFDialog3C";
		else if(GameApplication.gameApp == GameApplication.GameApp.G52Fun)
			dialogPFpath = "prefabs/PFDialog52";
		
		RectTransform PFDialog = Resources.Load (dialogPFpath, typeof(RectTransform)) as RectTransform;
		dialogInstance = Instantiate (PFDialog).GetComponent<SDialog> ();
		dialogInstance.gameObject.SetActive (false);

		// check internet connection
		bool internetPossiblyAvailable;
		switch (Application.internetReachability)
		{
		case NetworkReachability.ReachableViaLocalAreaNetwork:
			internetPossiblyAvailable = true;
			break;
		case NetworkReachability.ReachableViaCarrierDataNetwork:
			internetPossiblyAvailable = allowCarrierDataNetwork;
			break;
		default:
			internetPossiblyAvailable = false;
			break;
		}
		if (!internetPossiblyAvailable)
		{
			InternetIsNotAvailable();
			return;
		}
		ping = new Ping(pingAddress);
		pingStartTime = Time.time;

	}

	public void Update()
	{
		if (ping != null)
		{
			bool stopCheck = true;
			if (ping.isDone)
				InternetAvailable();
			else if (Time.time - pingStartTime < waitingTime)
				stopCheck = false;
			else
				InternetIsNotAvailable();
			if (stopCheck)
				ping = null;
		}
	}
	
	private void InternetIsNotAvailable()
	{
		Debug.Log("No Internet :(");
		showErrDialog();
	}
	
	private void InternetAvailable()
	{
		Debug.Log("Internet is available! ;)");
		StartCoroutine (LoadManifest(platform));
	}


	IEnumerator LoadManifest (string platform) 
	{
		Debug.Log( "Loading Manifest");
		Debug.Log (pathToBundles + platform);
		using(WWW www = new WWW(pathToBundles + platform))
		{
			yield return www;
			if(!string.IsNullOrEmpty(www.error))
			{
				Debug.Log(www.error);
				showErrDialog();
				yield return false;
			} else {
				manifest = (AssetBundleManifest)www.assetBundle.LoadAsset("AssetBundleManifest", typeof(AssetBundleManifest));
				yield return null;
				www.assetBundle.Unload(false);
			}
		} 

		if (!isReady)
			Debug.Log ("There was an error loading manifest");
		else
			Debug.Log ("Manifest loaded successfully");
	}

	public void showErrDialog(){
		// chua dam bao co SuperScene.instance nen ta tao SDialog khac.

		SDialog dialog = dialogInstance;
		dialog.show (DialogInfo.OKCancelDialog);
		dialog.transform.SetAsLastSibling ();

		dialog.content.text = Strings.instance.dialog_common_require_internet;
		dialog.positiveText.text = Strings.instance.common_retry;
		dialog.negativeText.text = Strings.instance.common_confirm_quit_app_ok;
		dialog.positive.onClick.AddListener (delegate {
			dialog.dismiss ();
//			instance = null;
			Awake();

//			DestroyObject(this.gameObject);
		});
		dialog.negative.onClick.AddListener (delegate {
			dialog.dismiss ();
			Application.Quit ();
		});
	}

	public bool IsBundleLoaded(string bundleName)
	{
		return bundles.ContainsKey (bundleName);
	}

	public void RegisterVariant(string bundleName, string variantName)
	{
		if (bundleVariants.ContainsValue (bundleName)) 
		{
			Debug.Log(string.Format("Variant for {0} cannot be added. {1} already registered. " +
				"Two vartiants of same bundle cannot be loaded (this is a safety check)", bundleName, variantName));
			return;
		}

		bundleVariants.Add (bundleName, variantName);
	}

	public Object GetAssetFromBundle(string bundleName, string assetName)
	{
		if (!IsBundleLoaded (bundleName))
			return null;

		return bundles [bundleName].LoadAsset (assetName);
	}

	public bool LoadBundle(string bundleName)
	{
		if (IsBundleLoaded(bundleName))
			return true;


		StartCoroutine(LoadBundleCoroutine(bundleName));
		return false;
	}

	IEnumerator LoadBundleCoroutine(string bundleName)
	{
		if (IsBundleLoaded (bundleName))
			yield break;

		string[] dependencies = manifest.GetAllDependencies (bundleName);
		for (int i = 0; i < dependencies.Length; i++){
			yield return StartCoroutine (LoadBundleCoroutine (dependencies [i]));
		}

		bundleName = RemapVariantName (bundleName);
		string url = pathToBundles + bundleName;
		Debug.Log ("Beginning to load " + bundleName + " / " + manifest.GetAssetBundleHash(bundleName));
		using(WWW www = WWW.LoadFromCacheOrDownload(url, manifest.GetAssetBundleHash(bundleName)))
		{
			yield return www;
			if(!string.IsNullOrEmpty(www.error))
			{
				Debug.Log(www.error);
				yield return false;
			}

			var materials = www.assetBundle.LoadAllAssets(typeof(Material));
			foreach(Material m in materials){
				var shaderName = m.shader.name;
				var newShader = Shader.Find(shaderName);
				if(newShader != null)
				{
					m.shader = newShader;
				}
				else
				{
					Debug.LogWarning("unable to refresh shader: "+ shaderName + " in material " + m.name);
				}
			}
			
			
			bundles.Add(bundleName, www.assetBundle);
		}
		Debug.Log ("Finished loading " + bundleName);
	}

	void OnDisable()
	{
		Debug.Log ("Unloading Bundles");

		foreach(KeyValuePair<string, AssetBundle> entry in bundles)
			entry.Value.Unload(false);
		bundles.Clear ();

		Debug.Log ("Bundles Unloaded");
	}
	
	string RemapVariantName(string assetBundleName)
	{
		string[] splitBundleName = assetBundleName.Split('.');
		string variant;

		if (!bundleVariants.TryGetValue(splitBundleName[0], out variant))
			return assetBundleName;

		string[] bundlesWithVariant = manifest.GetAllAssetBundlesWithVariant();
		string newBundleName = splitBundleName [0] + "." + variant;

		if (System.Array.IndexOf(bundlesWithVariant, newBundleName) < 0 )
			return assetBundleName;

		return newBundleName;
	}
}
#endif