#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowHideTable
struct  ShowHideTable_t2264311159  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite ShowHideTable::s_on
	Sprite_t309593783 * ___s_on_2;
	// UnityEngine.Sprite ShowHideTable::s_off
	Sprite_t309593783 * ___s_off_3;
	// UnityEngine.UI.Button ShowHideTable::rectButton
	Button_t2872111280 * ___rectButton_4;
	// UnityEngine.UI.Text ShowHideTable::r_text
	Text_t356221433 * ___r_text_5;
	// System.Int32 ShowHideTable::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_s_on_2() { return static_cast<int32_t>(offsetof(ShowHideTable_t2264311159, ___s_on_2)); }
	inline Sprite_t309593783 * get_s_on_2() const { return ___s_on_2; }
	inline Sprite_t309593783 ** get_address_of_s_on_2() { return &___s_on_2; }
	inline void set_s_on_2(Sprite_t309593783 * value)
	{
		___s_on_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_on_2, value);
	}

	inline static int32_t get_offset_of_s_off_3() { return static_cast<int32_t>(offsetof(ShowHideTable_t2264311159, ___s_off_3)); }
	inline Sprite_t309593783 * get_s_off_3() const { return ___s_off_3; }
	inline Sprite_t309593783 ** get_address_of_s_off_3() { return &___s_off_3; }
	inline void set_s_off_3(Sprite_t309593783 * value)
	{
		___s_off_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_off_3, value);
	}

	inline static int32_t get_offset_of_rectButton_4() { return static_cast<int32_t>(offsetof(ShowHideTable_t2264311159, ___rectButton_4)); }
	inline Button_t2872111280 * get_rectButton_4() const { return ___rectButton_4; }
	inline Button_t2872111280 ** get_address_of_rectButton_4() { return &___rectButton_4; }
	inline void set_rectButton_4(Button_t2872111280 * value)
	{
		___rectButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___rectButton_4, value);
	}

	inline static int32_t get_offset_of_r_text_5() { return static_cast<int32_t>(offsetof(ShowHideTable_t2264311159, ___r_text_5)); }
	inline Text_t356221433 * get_r_text_5() const { return ___r_text_5; }
	inline Text_t356221433 ** get_address_of_r_text_5() { return &___r_text_5; }
	inline void set_r_text_5(Text_t356221433 * value)
	{
		___r_text_5 = value;
		Il2CppCodeGenWriteBarrier(&___r_text_5, value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(ShowHideTable_t2264311159, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
