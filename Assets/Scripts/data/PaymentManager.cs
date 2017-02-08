using UnityEngine;
using System.Collections;
using UnionAssets.FLE;
using System.Collections.Generic;
using SimpleJSON;

public class PaymentManager
{
	public static bool discount;
	public static string kmMessage = "";
	public static bool payment;
	public static bool sms_enable;
	public static bool card_enable;
	public static bool atm_enable;
	public static bool iap_ios_enable;
	public static bool exchange_rate_enable;
	public static bool gamenotification;

	public static string url_exchange_rate;
	public static string url_payment_atm;
	public static string url_payment_card;
	
	public static List<string> iap_items = new List<string>();

	private static bool IsInitialized = false;

	public static void init() {
		if(!IsInitialized) {
			//You do not have to add products by code if you already did it in seetings guid
			//Windows -> IOS Native -> Edit Settings
			//Billing tab.

//			for(int i = 0; i<iap_items.Count; i++){
//				Debug.Log ("loadStore "+ iap_items[i]);
//				IOSInAppPurchaseManager.Instance.addProductId(iap_items[i]);
//			}

			//Event Use Examples
			IOSInAppPurchaseManager.OnVerificationComplete += HandleOnVerificationComplete;
			IOSInAppPurchaseManager.OnStoreKitInitComplete += OnStoreKitInitComplete;
			
			//Action Use Examples
			IOSInAppPurchaseManager.OnTransactionComplete += OnTransactionComplete;
			IOSInAppPurchaseManager.OnRestoreComplete += OnRestoreComplete;
			
			IsInitialized = true;
			
			IOSInAppPurchaseManager.Instance.loadStore();
			SuperScene.instance.showWaittingDialog(Strings.instance.common_waitingdialog_loading);
		
		} else if (IOSInAppPurchaseManager.Instance.IsStoreLoaded){
			if(SuperScene.instance is STabsScene){
				STabsScene stabsScene = (STabsScene)SuperScene.instance;
				stabsScene.showIAPItems();
			}
		}

		
		// check if IOSInAppPurchaseManager is initialized successfully by call
		// IOSInAppPurchaseManager.Instance.IsStoreLoaded
	}

	//--------------------------------------
	//  PUBLIC METHODS
	//--------------------------------------
	
	
	public static void buyItem(string productId) {
		IOSInAppPurchaseManager.Instance.buyProduct(productId);
		SuperScene.instance.showWaittingDialog(Strings.instance.common_waitingdialog_loading, 120);
		IOSStoreKitResult i;
	}
	
	//--------------------------------------
	//  GET/SET
	//--------------------------------------
	
	//--------------------------------------
	//  EVENTS
	//--------------------------------------
	
	
	private static void UnlockProducts(string productIdentifier) {
//		validateReceipt();
	}
	
	private static void OnTransactionComplete (IOSStoreKitResult response) {

		SuperScene.instance.dismissWaittingDialog();
		Debug.Log("OnTransactionComplete: " + response.ProductIdentifier);
		Debug.Log("OnTransactionComplete: state: " + response.State);
		
		switch(response.State) {
		case InAppPurchaseState.Purchased:
			//validate receipt on server side
			validateReceipt(response.Receipt);
			return;
		case InAppPurchaseState.Restored:
			//Our product been succsesly purchased or restored
			//So we need to provide content to our user depends on productIdentifier
			UnlockProducts(response.ProductIdentifier);
			break;
		case InAppPurchaseState.Deferred:
			//iOS 8 introduces Ask to Buy, which lets parents approve any purchases initiated by children
			//You should update your UI to reflect this deferred state, and expect another Transaction Complete  to be called again with a new transaction state 
			//reflecting the parent’s decision or after the transaction times out. Avoid blocking your UI or gameplay while waiting for the transaction to be updated.
			break;
		case InAppPurchaseState.Failed:
			//Our purchase flow is failed.
			//We can unlock intrefase and repor user that the purchase is failed. 
			Debug.Log("Transaction failed with error, code: " + response.Error.Code);
			Debug.Log("Transaction failed with error, description: " + response.Error.Description);
			
			
			break;
		}

		if(response.State == InAppPurchaseState.Failed) {
			IOSNativePopUpManager.showMessage("Transaction Failed", "Error code: " + response.Error.Code + "\n" + "Error description:" + response.Error.Description);
		} else {
			IOSNativePopUpManager.showMessage("Store Kit Response", "product " + response.ProductIdentifier + " state: " + response.State.ToString());
		}
		
	}

	static void validateReceipt (string receipt)
	{
		SuperScene.instance.showWaittingDialog("");
		var jsonObject = new JSONClass();
		jsonObject["evt"] = "iap_ios";
		jsonObject["receipt_encoded64"] = receipt;

		GameApplication.cubeia.sendService(jsonObject);
//		IOSInAppPurchaseManager.Instance.verifyLastPurchase(IOSInAppPurchaseManager.SANDBOX_VERIFICATION_SERVER);
	}

	private static void OnRestoreComplete (IOSStoreKitRestoreResult res) {
		if(res.IsSucceeded) {
			IOSNativePopUpManager.showMessage("Success", "Restore Compleated");
		} else {
			IOSNativePopUpManager.showMessage("Error: " + res.Error.Code, res.Error.Description);
		}
	}	

	private static void HandleOnVerificationComplete (IOSStoreKitVerificationResponse response) {
		IOSNativePopUpManager.showMessage("Verification", "Transaction verification status: " + response.status.ToString());
		
		Debug.Log("ORIGINAL JSON: " + response.originalJSON);
	}
	
	private static void OnStoreKitInitComplete(ISN_Result result) {
		SuperScene.instance.dismissWaittingDialog();
		IOSInAppPurchaseManager.OnStoreKitInitComplete -= OnStoreKitInitComplete;

		if(result.IsSucceeded) {
//			IOSNativePopUpManager.showMessage("StoreKit Init Succeeded", "Available products count: " + IOSInAppPurchaseManager.Instance.products.Count.ToString());
			// load product to view
			if(SuperScene.instance is STabsScene){
				STabsScene stabsScene = (STabsScene)SuperScene.instance;
				stabsScene.showIAPItems();
			}
		} else {
			IOSNativePopUpManager.showMessage("StoreKit Init Failed",  "Error code: " + result.Error.Code + "\n" + "Error description:" + result.Error.Description);
		}
	}
	
	
	//--------------------------------------
	//  PRIVATE METHODS
	//--------------------------------------
	
	//--------------------------------------
	//  DESTROY
	//--------------------------------------
}

