using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PaymentIAP_IOS : MonoBehaviour {

	public RectTransform IAPPaymentItem;
	public RectTransform itemsContainer;

	// Use this for initialization
	void Start () {
		// check if In-App device Settings State is true
		IOSInAppPurchaseManager.OnPurchasesStateSettingsLoaded += OnPurchasesStateSettingsLoaded;
		IOSInAppPurchaseManager.instance.RequestInAppSettingState();
	}

	public void showItems(){
		for(int i = 0; i < IOSInAppPurchaseManager.instance.products.Count; i++){
			IOSProductTemplate iapItem = IOSInAppPurchaseManager.instance.products[i];
			RectTransform rectItem = GameObject.Instantiate(IAPPaymentItem);
			rectItem.SetParent(itemsContainer, false);
			
			rectItem.Find("TextValue").GetComponent<Text>().text = iapItem.title;
			rectItem.Find("TextCost").GetComponent<Text>().text = iapItem.localizedPrice;
			
			rectItem.GetComponent<Button>().onClick.AddListener(delegate{
				DSTFBEvent.LogAppEvent(DSTFBEvent.UnityPurchaseIAPClick, (float)1f, DSTFBEvent.defaultParams);
				PaymentManager.buyItem(iapItem.id);
			});
		}
	}
	
	void OnPurchasesStateSettingsLoaded (bool IsInAppPurchasesEnabled) {
		IOSInAppPurchaseManager.OnPurchasesStateSettingsLoaded -= OnPurchasesStateSettingsLoaded;
		if(IsInAppPurchasesEnabled){
			PaymentManager.init();
		} else {
			IOSNativePopUpManager.showMessage("Payments Settings State", "In-App Purchase is disabled");
		}
	}
}
