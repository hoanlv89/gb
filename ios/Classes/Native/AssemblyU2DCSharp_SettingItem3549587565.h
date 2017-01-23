#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Utils/Executor
struct Executor_t2576254565;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SettingItem_Type1118325588.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SettingItem
struct  SettingItem_t3549587565  : public Il2CppObject
{
public:
	// System.Boolean SettingItem::status
	bool ___status_0;
	// SettingItem/Type SettingItem::type
	int32_t ___type_1;
	// System.String SettingItem::title
	String_t* ___title_2;
	// Utils/Executor SettingItem::exeAction
	Executor_t2576254565 * ___exeAction_3;
	// Utils/Executor SettingItem::exe_on
	Executor_t2576254565 * ___exe_on_4;
	// Utils/Executor SettingItem::exe_off
	Executor_t2576254565 * ___exe_off_5;
	// UnityEngine.Sprite SettingItem::sprite
	Sprite_t309593783 * ___sprite_6;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___status_0)); }
	inline bool get_status_0() const { return ___status_0; }
	inline bool* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(bool value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_exeAction_3() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___exeAction_3)); }
	inline Executor_t2576254565 * get_exeAction_3() const { return ___exeAction_3; }
	inline Executor_t2576254565 ** get_address_of_exeAction_3() { return &___exeAction_3; }
	inline void set_exeAction_3(Executor_t2576254565 * value)
	{
		___exeAction_3 = value;
		Il2CppCodeGenWriteBarrier(&___exeAction_3, value);
	}

	inline static int32_t get_offset_of_exe_on_4() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___exe_on_4)); }
	inline Executor_t2576254565 * get_exe_on_4() const { return ___exe_on_4; }
	inline Executor_t2576254565 ** get_address_of_exe_on_4() { return &___exe_on_4; }
	inline void set_exe_on_4(Executor_t2576254565 * value)
	{
		___exe_on_4 = value;
		Il2CppCodeGenWriteBarrier(&___exe_on_4, value);
	}

	inline static int32_t get_offset_of_exe_off_5() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___exe_off_5)); }
	inline Executor_t2576254565 * get_exe_off_5() const { return ___exe_off_5; }
	inline Executor_t2576254565 ** get_address_of_exe_off_5() { return &___exe_off_5; }
	inline void set_exe_off_5(Executor_t2576254565 * value)
	{
		___exe_off_5 = value;
		Il2CppCodeGenWriteBarrier(&___exe_off_5, value);
	}

	inline static int32_t get_offset_of_sprite_6() { return static_cast<int32_t>(offsetof(SettingItem_t3549587565, ___sprite_6)); }
	inline Sprite_t309593783 * get_sprite_6() const { return ___sprite_6; }
	inline Sprite_t309593783 ** get_address_of_sprite_6() { return &___sprite_6; }
	inline void set_sprite_6(Sprite_t309593783 * value)
	{
		___sprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
