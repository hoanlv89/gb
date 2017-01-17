using UnityEngine;
using System.Collections;

public class WebViewPanel_TyGia : WebViewPanel_DieuKhoan {
	protected override string link {
		get{
			//url=url.replace("(VND)", ""+smsItem.vnd).replace("(Name)", User.getInstance().getUserName());
			return PaymentManager.url_exchange_rate;//.Replace("%value%", );
		}
	}
}