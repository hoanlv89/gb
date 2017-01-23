#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SettingItem_Type1118325588.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RowSettingControl
struct  RowSettingControl_t3341645065  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image RowSettingControl::image
	Image_t2042527209 * ___image_2;
	// UnityEngine.Sprite RowSettingControl::sp_yes
	Sprite_t309593783 * ___sp_yes_3;
	// UnityEngine.Sprite RowSettingControl::sp_no
	Sprite_t309593783 * ___sp_no_4;
	// UnityEngine.Sprite RowSettingControl::icon_setting_action
	Sprite_t309593783 * ___icon_setting_action_5;
	// UnityEngine.UI.Text RowSettingControl::title
	Text_t356221433 * ___title_6;
	// UnityEngine.UI.Button RowSettingControl::button
	Button_t2872111280 * ___button_7;
	// SettingItem/Type RowSettingControl::type
	int32_t ___type_8;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_sp_yes_3() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___sp_yes_3)); }
	inline Sprite_t309593783 * get_sp_yes_3() const { return ___sp_yes_3; }
	inline Sprite_t309593783 ** get_address_of_sp_yes_3() { return &___sp_yes_3; }
	inline void set_sp_yes_3(Sprite_t309593783 * value)
	{
		___sp_yes_3 = value;
		Il2CppCodeGenWriteBarrier(&___sp_yes_3, value);
	}

	inline static int32_t get_offset_of_sp_no_4() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___sp_no_4)); }
	inline Sprite_t309593783 * get_sp_no_4() const { return ___sp_no_4; }
	inline Sprite_t309593783 ** get_address_of_sp_no_4() { return &___sp_no_4; }
	inline void set_sp_no_4(Sprite_t309593783 * value)
	{
		___sp_no_4 = value;
		Il2CppCodeGenWriteBarrier(&___sp_no_4, value);
	}

	inline static int32_t get_offset_of_icon_setting_action_5() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___icon_setting_action_5)); }
	inline Sprite_t309593783 * get_icon_setting_action_5() const { return ___icon_setting_action_5; }
	inline Sprite_t309593783 ** get_address_of_icon_setting_action_5() { return &___icon_setting_action_5; }
	inline void set_icon_setting_action_5(Sprite_t309593783 * value)
	{
		___icon_setting_action_5 = value;
		Il2CppCodeGenWriteBarrier(&___icon_setting_action_5, value);
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___title_6)); }
	inline Text_t356221433 * get_title_6() const { return ___title_6; }
	inline Text_t356221433 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t356221433 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_button_7() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___button_7)); }
	inline Button_t2872111280 * get_button_7() const { return ___button_7; }
	inline Button_t2872111280 ** get_address_of_button_7() { return &___button_7; }
	inline void set_button_7(Button_t2872111280 * value)
	{
		___button_7 = value;
		Il2CppCodeGenWriteBarrier(&___button_7, value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(RowSettingControl_t3341645065, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
