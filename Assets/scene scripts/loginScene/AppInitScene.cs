using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AppInitScene : MonoBehaviour {

	// Use this for initialization
	void Start () {
		string googleProjectNumber = null;
		string oneSignalAppID = "";
		if (GameApplication.gameApp == GameApplication.GameApp.DauTruong)
			oneSignalAppID = "05052740-e9a0-11e4-9294-7f1cdb478da5"; // dautruong
		else if (GameApplication.gameApp == GameApplication.GameApp.G3C)
			oneSignalAppID = "1f96cdec-1624-11e5-add5-3f9206d46331"; // 3C
		else if (GameApplication.gameApp == GameApplication.GameApp.G52Fun) {
			oneSignalAppID = "a34faff6-4d5a-11e5-bfed-3f96110e57ae"; // 52
			googleProjectNumber = "562105209170";
		}

//		OneSignal.SetLogLevel(OneSignal.LOG_LEVEL.INFO, OneSignal.LOG_LEVEL.INFO);
		OneSignal.Init(oneSignalAppID, googleProjectNumber, HandleNotification);

//		OneSignal.GetIdsAvailable(IdsAvailable);

		bool ignoreAdClass = false;

		#if UNITY_EDITOR
			ignoreAdClass = true;
		#endif

		#if UNITY_IOS 
		AppsFlyer.setAppsFlyerKey ("V7Q7k8CW66TGbfuK83f6yn");
		AppsFlyer.setAppID (GameApplication.appleAppID);
		AppsFlyer.setIsDebug (false);
		AppsFlyer.getConversionData ();
		AppsFlyer.trackAppLaunch ();
		
		#elif UNITY_ANDROID
		// All Initialization occur in the override activity defined in the mainfest.xml, including track app launch
		// You can define AppsFlyer library here use this commented out code.
		if(!ignoreAdClass){
			AppsFlyer.setAppsFlyerKey ("V7Q7k8CW66TGbfuK83f6yn");
			AppsFlyer.setAppID (Application.bundleIdentifier); // un-comment this in case you are not working with the manifest file
			AppsFlyer.setIsSandbox(false);
			AppsFlyer.setIsDebug (false);
			AppsFlyer.createValidateInAppListener ("AppsFlyerTrackerCallbacks", "onInAppBillingSuccess", "onInAppBillingFailure");
			AppsFlyer.loadConversionData("AppsFlyerTrackerCallbacks","didReceiveConversionData", "didReceiveConversionDataWithError");
			AppsFlyer.trackAppLaunch ();
		}
		#endif
	}
	
	// Gets called when the player opens the notification.
	private static void HandleNotification(string message, Dictionary<string, object> additionalData, bool isActive) {
		print(message);
		string extraMessage;
		// When isActive is true this means the player is currently in your game.
		// Use isActive and your own game logic so you don't interupt the player with a popup or menu when they are in the middle of playing your game.
		if (additionalData != null) {
			if (additionalData.ContainsKey("discount")) {
				extraMessage = "DISCOUNT!";
				// Take player to your store.
			}
			else if (additionalData.ContainsKey("bonusCredits")) {
				extraMessage = "BONUS CREDITS!";
				// Take player to your store.
			}
		}
	}

	private void IdsAvailable(string userID, string pushToken) {
		print("UserID:"  + userID);
		print("pushToken:" + pushToken);
	}
}
