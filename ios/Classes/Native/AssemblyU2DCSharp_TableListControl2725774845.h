#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableListControl
struct  TableListControl_t2725774845  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform TableListControl::TableItem
	Transform_t3275118058 * ___TableItem_2;
	// UnityEngine.UI.Text TableListControl::tt_name
	Text_t356221433 * ___tt_name_3;
	// UnityEngine.UI.Text TableListControl::tt_id
	Text_t356221433 * ___tt_id_4;
	// UnityEngine.UI.Text TableListControl::tt_stake
	Text_t356221433 * ___tt_stake_5;
	// UnityEngine.UI.Text TableListControl::tt_load
	Text_t356221433 * ___tt_load_6;

public:
	inline static int32_t get_offset_of_TableItem_2() { return static_cast<int32_t>(offsetof(TableListControl_t2725774845, ___TableItem_2)); }
	inline Transform_t3275118058 * get_TableItem_2() const { return ___TableItem_2; }
	inline Transform_t3275118058 ** get_address_of_TableItem_2() { return &___TableItem_2; }
	inline void set_TableItem_2(Transform_t3275118058 * value)
	{
		___TableItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___TableItem_2, value);
	}

	inline static int32_t get_offset_of_tt_name_3() { return static_cast<int32_t>(offsetof(TableListControl_t2725774845, ___tt_name_3)); }
	inline Text_t356221433 * get_tt_name_3() const { return ___tt_name_3; }
	inline Text_t356221433 ** get_address_of_tt_name_3() { return &___tt_name_3; }
	inline void set_tt_name_3(Text_t356221433 * value)
	{
		___tt_name_3 = value;
		Il2CppCodeGenWriteBarrier(&___tt_name_3, value);
	}

	inline static int32_t get_offset_of_tt_id_4() { return static_cast<int32_t>(offsetof(TableListControl_t2725774845, ___tt_id_4)); }
	inline Text_t356221433 * get_tt_id_4() const { return ___tt_id_4; }
	inline Text_t356221433 ** get_address_of_tt_id_4() { return &___tt_id_4; }
	inline void set_tt_id_4(Text_t356221433 * value)
	{
		___tt_id_4 = value;
		Il2CppCodeGenWriteBarrier(&___tt_id_4, value);
	}

	inline static int32_t get_offset_of_tt_stake_5() { return static_cast<int32_t>(offsetof(TableListControl_t2725774845, ___tt_stake_5)); }
	inline Text_t356221433 * get_tt_stake_5() const { return ___tt_stake_5; }
	inline Text_t356221433 ** get_address_of_tt_stake_5() { return &___tt_stake_5; }
	inline void set_tt_stake_5(Text_t356221433 * value)
	{
		___tt_stake_5 = value;
		Il2CppCodeGenWriteBarrier(&___tt_stake_5, value);
	}

	inline static int32_t get_offset_of_tt_load_6() { return static_cast<int32_t>(offsetof(TableListControl_t2725774845, ___tt_load_6)); }
	inline Text_t356221433 * get_tt_load_6() const { return ___tt_load_6; }
	inline Text_t356221433 ** get_address_of_tt_load_6() { return &___tt_load_6; }
	inline void set_tt_load_6(Text_t356221433 * value)
	{
		___tt_load_6 = value;
		Il2CppCodeGenWriteBarrier(&___tt_load_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
