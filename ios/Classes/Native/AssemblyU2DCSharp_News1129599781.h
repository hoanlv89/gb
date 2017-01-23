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
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Button
struct Button_t2872111280;
// Utils/Executor
struct Executor_t2576254565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// News
struct  News_t1129599781  : public MonoBehaviour_t1158329972
{
public:
	// UniWebView News::webView
	UniWebView_t3614141785 * ___webView_2;
	// UniWebView News::prefabWebView
	UniWebView_t3614141785 * ___prefabWebView_3;
	// UnityEngine.RectTransform News::NewsItem
	RectTransform_t3349966182 * ___NewsItem_4;
	// UnityEngine.RectTransform News::ListView
	RectTransform_t3349966182 * ___ListView_5;
	// UnityEngine.RectTransform News::Content
	RectTransform_t3349966182 * ___Content_6;
	// UnityEngine.RectTransform News::ScrollBar
	RectTransform_t3349966182 * ___ScrollBar_7;
	// UnityEngine.UI.Button News::back
	Button_t2872111280 * ___back_8;
	// System.Single News::backButtonWidth
	float ___backButtonWidth_9;
	// System.Single News::panelLeft
	float ___panelLeft_10;
	// System.Single News::panelBottom
	float ___panelBottom_11;
	// System.Single News::panelRight
	float ___panelRight_12;

public:
	inline static int32_t get_offset_of_webView_2() { return static_cast<int32_t>(offsetof(News_t1129599781, ___webView_2)); }
	inline UniWebView_t3614141785 * get_webView_2() const { return ___webView_2; }
	inline UniWebView_t3614141785 ** get_address_of_webView_2() { return &___webView_2; }
	inline void set_webView_2(UniWebView_t3614141785 * value)
	{
		___webView_2 = value;
		Il2CppCodeGenWriteBarrier(&___webView_2, value);
	}

	inline static int32_t get_offset_of_prefabWebView_3() { return static_cast<int32_t>(offsetof(News_t1129599781, ___prefabWebView_3)); }
	inline UniWebView_t3614141785 * get_prefabWebView_3() const { return ___prefabWebView_3; }
	inline UniWebView_t3614141785 ** get_address_of_prefabWebView_3() { return &___prefabWebView_3; }
	inline void set_prefabWebView_3(UniWebView_t3614141785 * value)
	{
		___prefabWebView_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabWebView_3, value);
	}

	inline static int32_t get_offset_of_NewsItem_4() { return static_cast<int32_t>(offsetof(News_t1129599781, ___NewsItem_4)); }
	inline RectTransform_t3349966182 * get_NewsItem_4() const { return ___NewsItem_4; }
	inline RectTransform_t3349966182 ** get_address_of_NewsItem_4() { return &___NewsItem_4; }
	inline void set_NewsItem_4(RectTransform_t3349966182 * value)
	{
		___NewsItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___NewsItem_4, value);
	}

	inline static int32_t get_offset_of_ListView_5() { return static_cast<int32_t>(offsetof(News_t1129599781, ___ListView_5)); }
	inline RectTransform_t3349966182 * get_ListView_5() const { return ___ListView_5; }
	inline RectTransform_t3349966182 ** get_address_of_ListView_5() { return &___ListView_5; }
	inline void set_ListView_5(RectTransform_t3349966182 * value)
	{
		___ListView_5 = value;
		Il2CppCodeGenWriteBarrier(&___ListView_5, value);
	}

	inline static int32_t get_offset_of_Content_6() { return static_cast<int32_t>(offsetof(News_t1129599781, ___Content_6)); }
	inline RectTransform_t3349966182 * get_Content_6() const { return ___Content_6; }
	inline RectTransform_t3349966182 ** get_address_of_Content_6() { return &___Content_6; }
	inline void set_Content_6(RectTransform_t3349966182 * value)
	{
		___Content_6 = value;
		Il2CppCodeGenWriteBarrier(&___Content_6, value);
	}

	inline static int32_t get_offset_of_ScrollBar_7() { return static_cast<int32_t>(offsetof(News_t1129599781, ___ScrollBar_7)); }
	inline RectTransform_t3349966182 * get_ScrollBar_7() const { return ___ScrollBar_7; }
	inline RectTransform_t3349966182 ** get_address_of_ScrollBar_7() { return &___ScrollBar_7; }
	inline void set_ScrollBar_7(RectTransform_t3349966182 * value)
	{
		___ScrollBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___ScrollBar_7, value);
	}

	inline static int32_t get_offset_of_back_8() { return static_cast<int32_t>(offsetof(News_t1129599781, ___back_8)); }
	inline Button_t2872111280 * get_back_8() const { return ___back_8; }
	inline Button_t2872111280 ** get_address_of_back_8() { return &___back_8; }
	inline void set_back_8(Button_t2872111280 * value)
	{
		___back_8 = value;
		Il2CppCodeGenWriteBarrier(&___back_8, value);
	}

	inline static int32_t get_offset_of_backButtonWidth_9() { return static_cast<int32_t>(offsetof(News_t1129599781, ___backButtonWidth_9)); }
	inline float get_backButtonWidth_9() const { return ___backButtonWidth_9; }
	inline float* get_address_of_backButtonWidth_9() { return &___backButtonWidth_9; }
	inline void set_backButtonWidth_9(float value)
	{
		___backButtonWidth_9 = value;
	}

	inline static int32_t get_offset_of_panelLeft_10() { return static_cast<int32_t>(offsetof(News_t1129599781, ___panelLeft_10)); }
	inline float get_panelLeft_10() const { return ___panelLeft_10; }
	inline float* get_address_of_panelLeft_10() { return &___panelLeft_10; }
	inline void set_panelLeft_10(float value)
	{
		___panelLeft_10 = value;
	}

	inline static int32_t get_offset_of_panelBottom_11() { return static_cast<int32_t>(offsetof(News_t1129599781, ___panelBottom_11)); }
	inline float get_panelBottom_11() const { return ___panelBottom_11; }
	inline float* get_address_of_panelBottom_11() { return &___panelBottom_11; }
	inline void set_panelBottom_11(float value)
	{
		___panelBottom_11 = value;
	}

	inline static int32_t get_offset_of_panelRight_12() { return static_cast<int32_t>(offsetof(News_t1129599781, ___panelRight_12)); }
	inline float get_panelRight_12() const { return ___panelRight_12; }
	inline float* get_address_of_panelRight_12() { return &___panelRight_12; }
	inline void set_panelRight_12(float value)
	{
		___panelRight_12 = value;
	}
};

struct News_t1129599781_StaticFields
{
public:
	// Utils/Executor News::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(News_t1129599781_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
