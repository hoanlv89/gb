using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WebViewPayment_ATM :WebViewPanel_DieuKhoan {
	protected override string link {
		get{
			return PaymentManager.url_payment_atm;
		}
	}
}
