using UnityEngine;
using System.Collections;

public class WebViewPanel_GioiThieuDungSi : WebViewPanel_DieuKhoan {
	protected override string link {
		get{
			if(!string.IsNullOrEmpty(GameApplication.url_dungsi_gioithieu))
				return GameApplication.url_dungsi_gioithieu;

			if(GameApplication.gameApp == GameApplication.GameApp.DauTruong)
				return "http://mobile.dautruong.info/gioithieudungsi.html";
			if(GameApplication.gameApp == GameApplication.GameApp.G3C)
				return "http://mservices.game3c.info/gioithieudungsi.html";
			if(GameApplication.gameApp == GameApplication.GameApp.G52Fun)
				return "http://mservices.52fun.club/gioithieuvuabai.html";

			return "http://mservices.game3c.info/gioithieudungsi.html";
		}
	}
}
