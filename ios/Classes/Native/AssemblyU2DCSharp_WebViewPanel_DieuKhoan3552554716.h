#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniWebView
struct UniWebView_t3614141785;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebViewPanel_DieuKhoan
struct  WebViewPanel_DieuKhoan_t3552554716  : public MonoBehaviour_t1158329972
{
public:
	// UniWebView WebViewPanel_DieuKhoan::webView
	UniWebView_t3614141785 * ___webView_2;
	// UniWebView WebViewPanel_DieuKhoan::prefabWebView
	UniWebView_t3614141785 * ___prefabWebView_3;
	// System.Single WebViewPanel_DieuKhoan::panelLeft
	float ___panelLeft_4;
	// System.Single WebViewPanel_DieuKhoan::panelBottom
	float ___panelBottom_5;
	// System.Single WebViewPanel_DieuKhoan::panelRight
	float ___panelRight_6;

public:
	inline static int32_t get_offset_of_webView_2() { return static_cast<int32_t>(offsetof(WebViewPanel_DieuKhoan_t3552554716, ___webView_2)); }
	inline UniWebView_t3614141785 * get_webView_2() const { return ___webView_2; }
	inline UniWebView_t3614141785 ** get_address_of_webView_2() { return &___webView_2; }
	inline void set_webView_2(UniWebView_t3614141785 * value)
	{
		___webView_2 = value;
		Il2CppCodeGenWriteBarrier(&___webView_2, value);
	}

	inline static int32_t get_offset_of_prefabWebView_3() { return static_cast<int32_t>(offsetof(WebViewPanel_DieuKhoan_t3552554716, ___prefabWebView_3)); }
	inline UniWebView_t3614141785 * get_prefabWebView_3() const { return ___prefabWebView_3; }
	inline UniWebView_t3614141785 ** get_address_of_prefabWebView_3() { return &___prefabWebView_3; }
	inline void set_prefabWebView_3(UniWebView_t3614141785 * value)
	{
		___prefabWebView_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabWebView_3, value);
	}

	inline static int32_t get_offset_of_panelLeft_4() { return static_cast<int32_t>(offsetof(WebViewPanel_DieuKhoan_t3552554716, ___panelLeft_4)); }
	inline float get_panelLeft_4() const { return ___panelLeft_4; }
	inline float* get_address_of_panelLeft_4() { return &___panelLeft_4; }
	inline void set_panelLeft_4(float value)
	{
		___panelLeft_4 = value;
	}

	inline static int32_t get_offset_of_panelBottom_5() { return static_cast<int32_t>(offsetof(WebViewPanel_DieuKhoan_t3552554716, ___panelBottom_5)); }
	inline float get_panelBottom_5() const { return ___panelBottom_5; }
	inline float* get_address_of_panelBottom_5() { return &___panelBottom_5; }
	inline void set_panelBottom_5(float value)
	{
		___panelBottom_5 = value;
	}

	inline static int32_t get_offset_of_panelRight_6() { return static_cast<int32_t>(offsetof(WebViewPanel_DieuKhoan_t3552554716, ___panelRight_6)); }
	inline float get_panelRight_6() const { return ___panelRight_6; }
	inline float* get_address_of_panelRight_6() { return &___panelRight_6; }
	inline void set_panelRight_6(float value)
	{
		___panelRight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
