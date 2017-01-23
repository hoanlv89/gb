#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3948421699;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowDailyBonus
struct  ShowDailyBonus_t1726595945  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ShowDailyBonus::title
	Text_t356221433 * ___title_2;
	// UnityEngine.UI.Text[] ShowDailyBonus::day
	TextU5BU5D_t4216439300* ___day_3;
	// UnityEngine.UI.Text[] ShowDailyBonus::money
	TextU5BU5D_t4216439300* ___money_4;
	// UnityEngine.RectTransform[] ShowDailyBonus::p_day
	RectTransformU5BU5D_t3948421699* ___p_day_5;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(ShowDailyBonus_t1726595945, ___title_2)); }
	inline Text_t356221433 * get_title_2() const { return ___title_2; }
	inline Text_t356221433 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Text_t356221433 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_day_3() { return static_cast<int32_t>(offsetof(ShowDailyBonus_t1726595945, ___day_3)); }
	inline TextU5BU5D_t4216439300* get_day_3() const { return ___day_3; }
	inline TextU5BU5D_t4216439300** get_address_of_day_3() { return &___day_3; }
	inline void set_day_3(TextU5BU5D_t4216439300* value)
	{
		___day_3 = value;
		Il2CppCodeGenWriteBarrier(&___day_3, value);
	}

	inline static int32_t get_offset_of_money_4() { return static_cast<int32_t>(offsetof(ShowDailyBonus_t1726595945, ___money_4)); }
	inline TextU5BU5D_t4216439300* get_money_4() const { return ___money_4; }
	inline TextU5BU5D_t4216439300** get_address_of_money_4() { return &___money_4; }
	inline void set_money_4(TextU5BU5D_t4216439300* value)
	{
		___money_4 = value;
		Il2CppCodeGenWriteBarrier(&___money_4, value);
	}

	inline static int32_t get_offset_of_p_day_5() { return static_cast<int32_t>(offsetof(ShowDailyBonus_t1726595945, ___p_day_5)); }
	inline RectTransformU5BU5D_t3948421699* get_p_day_5() const { return ___p_day_5; }
	inline RectTransformU5BU5D_t3948421699** get_address_of_p_day_5() { return &___p_day_5; }
	inline void set_p_day_5(RectTransformU5BU5D_t3948421699* value)
	{
		___p_day_5 = value;
		Il2CppCodeGenWriteBarrier(&___p_day_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
