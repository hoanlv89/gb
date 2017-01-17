using UnityEngine;
using UnityEditor;
using System.Collections;

public class IOSNativeRemoveTool  {

	public static void RemovePlugin(bool SaveSettings = true) {
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Addons");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Core");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Documentation");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Editor");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Enum");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/GameCenter");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/iAd");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/iCloud");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Market");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Notifications");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Other");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/PopUps");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Social");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/Templates");
		FileStaticAPI.DeleteFolder("Extensions/IOSNative/xExample");

		if(!SaveSettings) {
			FileStaticAPI.DeleteFolder("Extensions/IOSNative/Resources");
			FileStaticAPI.DeleteFolder("Extensions/IOSNative");
		}

		RemoveNativeFile("AppEventListener");
		RemoveNativeFile("CloudManager");
		RemoveNativeFile("CustomBannerView");
		RemoveNativeFile("iAdBannerController");
		RemoveNativeFile("iAdBannerObject");
		RemoveNativeFile("InAppPurchaseManager");
		RemoveNativeFile("IOSNativeNotificationCenter");
		RemoveNativeFile("ISN_GameCenterListner");
		RemoveNativeFile("ISN_GameCenterManager");
		RemoveNativeFile("ISN_GameCenterRTM");
		RemoveNativeFile("ISN_GameCenterTBM");
		RemoveNativeFile("ISN_NativePopUpsManager");
		RemoveNativeFile("ISN_NativeUtility");
		RemoveNativeFile("ISN_NSData+Base64");
		RemoveNativeFile("ISN_Reachability");
		RemoveNativeFile("ISN_Security");
		RemoveNativeFile("ISNCamera");
		RemoveNativeFile("ISNDataConvertor");
		RemoveNativeFile("ISNVideo");
		RemoveNativeFile("SKProduct+LocalizedPrice");
		RemoveNativeFile("SocialGate");
		RemoveNativeFile("StoreProductView");
		RemoveNativeFile("TransactionServer");


		AssetDatabase.Refresh();

	}


	public static void RemoveOneSignal() {
		RemoveNativeFile("libOneSignal");
		RemoveNativeFile("OneSignal");
		RemoveNativeFile("OneSignalUnityRuntime");
		FileStaticAPI.DeleteFolder("StansAssetsCommon/OneSignal");
	}



	private static void RemoveNativeFile(string filename) {
		string filePath = "Plugins/IOS/" + filename;
		FileStaticAPI.DeleteFile(filePath + ".h");
		FileStaticAPI.DeleteFile(filePath + ".m");
		FileStaticAPI.DeleteFile(filePath + ".mm");
		FileStaticAPI.DeleteFile(filePath + ".a");
	}
}
