#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SDialog
struct  SDialog_t1510781833  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button SDialog::cancel
	Button_t2872111280 * ___cancel_2;
	// UnityEngine.UI.Button SDialog::positive
	Button_t2872111280 * ___positive_3;
	// UnityEngine.UI.Button SDialog::negative
	Button_t2872111280 * ___negative_4;
	// UnityEngine.UI.Button SDialog::neutral
	Button_t2872111280 * ___neutral_5;
	// UnityEngine.RectTransform SDialog::panel
	RectTransform_t3349966182 * ___panel_6;
	// UnityEngine.UI.Text SDialog::content
	Text_t356221433 * ___content_7;
	// UnityEngine.UI.Text SDialog::positiveText
	Text_t356221433 * ___positiveText_8;
	// UnityEngine.UI.Text SDialog::negativeText
	Text_t356221433 * ___negativeText_9;
	// UnityEngine.UI.Text SDialog::neutralText
	Text_t356221433 * ___neutralText_10;
	// System.Action SDialog::_onDismiss
	Action_t3226471752 * ____onDismiss_11;
	// System.Boolean SDialog::autoDismiss
	bool ___autoDismiss_12;
	// System.Single SDialog::autoDismissTime
	float ___autoDismissTime_13;
	// System.Single SDialog::showedTime
	float ___showedTime_14;

public:
	inline static int32_t get_offset_of_cancel_2() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___cancel_2)); }
	inline Button_t2872111280 * get_cancel_2() const { return ___cancel_2; }
	inline Button_t2872111280 ** get_address_of_cancel_2() { return &___cancel_2; }
	inline void set_cancel_2(Button_t2872111280 * value)
	{
		___cancel_2 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_2, value);
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___positive_3)); }
	inline Button_t2872111280 * get_positive_3() const { return ___positive_3; }
	inline Button_t2872111280 ** get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(Button_t2872111280 * value)
	{
		___positive_3 = value;
		Il2CppCodeGenWriteBarrier(&___positive_3, value);
	}

	inline static int32_t get_offset_of_negative_4() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___negative_4)); }
	inline Button_t2872111280 * get_negative_4() const { return ___negative_4; }
	inline Button_t2872111280 ** get_address_of_negative_4() { return &___negative_4; }
	inline void set_negative_4(Button_t2872111280 * value)
	{
		___negative_4 = value;
		Il2CppCodeGenWriteBarrier(&___negative_4, value);
	}

	inline static int32_t get_offset_of_neutral_5() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___neutral_5)); }
	inline Button_t2872111280 * get_neutral_5() const { return ___neutral_5; }
	inline Button_t2872111280 ** get_address_of_neutral_5() { return &___neutral_5; }
	inline void set_neutral_5(Button_t2872111280 * value)
	{
		___neutral_5 = value;
		Il2CppCodeGenWriteBarrier(&___neutral_5, value);
	}

	inline static int32_t get_offset_of_panel_6() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___panel_6)); }
	inline RectTransform_t3349966182 * get_panel_6() const { return ___panel_6; }
	inline RectTransform_t3349966182 ** get_address_of_panel_6() { return &___panel_6; }
	inline void set_panel_6(RectTransform_t3349966182 * value)
	{
		___panel_6 = value;
		Il2CppCodeGenWriteBarrier(&___panel_6, value);
	}

	inline static int32_t get_offset_of_content_7() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___content_7)); }
	inline Text_t356221433 * get_content_7() const { return ___content_7; }
	inline Text_t356221433 ** get_address_of_content_7() { return &___content_7; }
	inline void set_content_7(Text_t356221433 * value)
	{
		___content_7 = value;
		Il2CppCodeGenWriteBarrier(&___content_7, value);
	}

	inline static int32_t get_offset_of_positiveText_8() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___positiveText_8)); }
	inline Text_t356221433 * get_positiveText_8() const { return ___positiveText_8; }
	inline Text_t356221433 ** get_address_of_positiveText_8() { return &___positiveText_8; }
	inline void set_positiveText_8(Text_t356221433 * value)
	{
		___positiveText_8 = value;
		Il2CppCodeGenWriteBarrier(&___positiveText_8, value);
	}

	inline static int32_t get_offset_of_negativeText_9() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___negativeText_9)); }
	inline Text_t356221433 * get_negativeText_9() const { return ___negativeText_9; }
	inline Text_t356221433 ** get_address_of_negativeText_9() { return &___negativeText_9; }
	inline void set_negativeText_9(Text_t356221433 * value)
	{
		___negativeText_9 = value;
		Il2CppCodeGenWriteBarrier(&___negativeText_9, value);
	}

	inline static int32_t get_offset_of_neutralText_10() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___neutralText_10)); }
	inline Text_t356221433 * get_neutralText_10() const { return ___neutralText_10; }
	inline Text_t356221433 ** get_address_of_neutralText_10() { return &___neutralText_10; }
	inline void set_neutralText_10(Text_t356221433 * value)
	{
		___neutralText_10 = value;
		Il2CppCodeGenWriteBarrier(&___neutralText_10, value);
	}

	inline static int32_t get_offset_of__onDismiss_11() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ____onDismiss_11)); }
	inline Action_t3226471752 * get__onDismiss_11() const { return ____onDismiss_11; }
	inline Action_t3226471752 ** get_address_of__onDismiss_11() { return &____onDismiss_11; }
	inline void set__onDismiss_11(Action_t3226471752 * value)
	{
		____onDismiss_11 = value;
		Il2CppCodeGenWriteBarrier(&____onDismiss_11, value);
	}

	inline static int32_t get_offset_of_autoDismiss_12() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___autoDismiss_12)); }
	inline bool get_autoDismiss_12() const { return ___autoDismiss_12; }
	inline bool* get_address_of_autoDismiss_12() { return &___autoDismiss_12; }
	inline void set_autoDismiss_12(bool value)
	{
		___autoDismiss_12 = value;
	}

	inline static int32_t get_offset_of_autoDismissTime_13() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___autoDismissTime_13)); }
	inline float get_autoDismissTime_13() const { return ___autoDismissTime_13; }
	inline float* get_address_of_autoDismissTime_13() { return &___autoDismissTime_13; }
	inline void set_autoDismissTime_13(float value)
	{
		___autoDismissTime_13 = value;
	}

	inline static int32_t get_offset_of_showedTime_14() { return static_cast<int32_t>(offsetof(SDialog_t1510781833, ___showedTime_14)); }
	inline float get_showedTime_14() const { return ___showedTime_14; }
	inline float* get_address_of_showedTime_14() { return &___showedTime_14; }
	inline void set_showedTime_14(float value)
	{
		___showedTime_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
