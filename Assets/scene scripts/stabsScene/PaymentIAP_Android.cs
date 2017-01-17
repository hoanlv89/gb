using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class PaymentIAP_Android : MonoBehaviour {
	/*
//	public RectTransform IAPPaymentItem;
//	public RectTransform itemsContainer;
//	SoomlaStoreAndroid.
	public static VirtualCurrencyPack[] packs = null;

	// Use this for initialization
	void Start () {
		if (GameApplication.IsInitialized) {
			SoomlaStore.StartIabServiceInBg();
			StoreEvents.OnSoomlaStoreInitialized += onSoomlaStoreInitialized;
			Debug.LogError ("call SoomlaStore.Initialize");
			SoomlaStore.Initialize (new IAPGG ());
		}
	}

	public void onSoomlaStoreInitialized() {
		packs = IAPGG.getCurrenciesList();

		// do buy
		StoreInventory.BuyItem (packs[0].ItemId);
	}

	void OnDestroy() {
		SoomlaStore.StopIabServiceInBg();
	}

//	public void showItems(){
//		for(int i = 0; i < IOSInAppPurchaseManager.instance.products.Count; i++){
//			IOSProductTemplate iapItem = IOSInAppPurchaseManager.instance.products[i];
//			RectTransform rectItem = GameObject.Instantiate(IAPPaymentItem);
//			rectItem.SetParent(itemsContainer, false);
//			
//			rectItem.Find("TextValue").GetComponent<Text>().text = iapItem.title;
//			rectItem.Find("TextCost").GetComponent<Text>().text = iapItem.localizedPrice;
//			
//			rectItem.GetComponent<Button>().onClick.AddListener(delegate{
//				PaymentManager.buyItem(iapItem.id);
//			});
//
//		}
//	}
//	
//	void OnPurchasesStateSettingsLoaded (bool IsInAppPurchasesEnabled) {
//		IOSInAppPurchaseManager.OnPurchasesStateSettingsLoaded -= OnPurchasesStateSettingsLoaded;
//		if(IsInAppPurchasesEnabled){
//			PaymentManager.init();
//		} else {
//			IOSNativePopUpManager.showMessage("Payments Settings State", "In-App Purchase is disabled");
//		}
//	}
*/
}
