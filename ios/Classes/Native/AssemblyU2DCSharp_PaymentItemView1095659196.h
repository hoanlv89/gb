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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentItemView
struct  PaymentItemView_t1095659196  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button PaymentItemView::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Image PaymentItemView::iconGold
	Image_t2042527209 * ___iconGold_3;
	// UnityEngine.UI.Text PaymentItemView::cost
	Text_t356221433 * ___cost_4;
	// UnityEngine.UI.Text PaymentItemView::value1
	Text_t356221433 * ___value1_5;
	// UnityEngine.UI.Text PaymentItemView::value2
	Text_t356221433 * ___value2_6;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(PaymentItemView_t1095659196, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_iconGold_3() { return static_cast<int32_t>(offsetof(PaymentItemView_t1095659196, ___iconGold_3)); }
	inline Image_t2042527209 * get_iconGold_3() const { return ___iconGold_3; }
	inline Image_t2042527209 ** get_address_of_iconGold_3() { return &___iconGold_3; }
	inline void set_iconGold_3(Image_t2042527209 * value)
	{
		___iconGold_3 = value;
		Il2CppCodeGenWriteBarrier(&___iconGold_3, value);
	}

	inline static int32_t get_offset_of_cost_4() { return static_cast<int32_t>(offsetof(PaymentItemView_t1095659196, ___cost_4)); }
	inline Text_t356221433 * get_cost_4() const { return ___cost_4; }
	inline Text_t356221433 ** get_address_of_cost_4() { return &___cost_4; }
	inline void set_cost_4(Text_t356221433 * value)
	{
		___cost_4 = value;
		Il2CppCodeGenWriteBarrier(&___cost_4, value);
	}

	inline static int32_t get_offset_of_value1_5() { return static_cast<int32_t>(offsetof(PaymentItemView_t1095659196, ___value1_5)); }
	inline Text_t356221433 * get_value1_5() const { return ___value1_5; }
	inline Text_t356221433 ** get_address_of_value1_5() { return &___value1_5; }
	inline void set_value1_5(Text_t356221433 * value)
	{
		___value1_5 = value;
		Il2CppCodeGenWriteBarrier(&___value1_5, value);
	}

	inline static int32_t get_offset_of_value2_6() { return static_cast<int32_t>(offsetof(PaymentItemView_t1095659196, ___value2_6)); }
	inline Text_t356221433 * get_value2_6() const { return ___value2_6; }
	inline Text_t356221433 ** get_address_of_value2_6() { return &___value2_6; }
	inline void set_value2_6(Text_t356221433 * value)
	{
		___value2_6 = value;
		Il2CppCodeGenWriteBarrier(&___value2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
