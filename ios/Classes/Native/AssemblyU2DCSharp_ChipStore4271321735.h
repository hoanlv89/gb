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
// UnitInfo[]
struct UnitInfoU5BU5D_t4070532531;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct List_1_t3355777842;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChipStore
struct  ChipStore_t4271321735  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ChipStore::CellParent
	Transform_t3275118058 * ___CellParent_2;
	// UnitInfo[] ChipStore::unitInfo
	UnitInfoU5BU5D_t4070532531* ___unitInfo_3;
	// UnityEngine.GameObject ChipStore::chipPrefab
	GameObject_t1756533147 * ___chipPrefab_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ChipStore::dict
	Dictionary_2_t3986656710 * ___dict_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ChipStore::o_dict
	Dictionary_2_t3986656710 * ___o_dict_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>> ChipStore::history
	List_1_t3355777842 * ___history_7;

public:
	inline static int32_t get_offset_of_CellParent_2() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___CellParent_2)); }
	inline Transform_t3275118058 * get_CellParent_2() const { return ___CellParent_2; }
	inline Transform_t3275118058 ** get_address_of_CellParent_2() { return &___CellParent_2; }
	inline void set_CellParent_2(Transform_t3275118058 * value)
	{
		___CellParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___CellParent_2, value);
	}

	inline static int32_t get_offset_of_unitInfo_3() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___unitInfo_3)); }
	inline UnitInfoU5BU5D_t4070532531* get_unitInfo_3() const { return ___unitInfo_3; }
	inline UnitInfoU5BU5D_t4070532531** get_address_of_unitInfo_3() { return &___unitInfo_3; }
	inline void set_unitInfo_3(UnitInfoU5BU5D_t4070532531* value)
	{
		___unitInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&___unitInfo_3, value);
	}

	inline static int32_t get_offset_of_chipPrefab_4() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___chipPrefab_4)); }
	inline GameObject_t1756533147 * get_chipPrefab_4() const { return ___chipPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_chipPrefab_4() { return &___chipPrefab_4; }
	inline void set_chipPrefab_4(GameObject_t1756533147 * value)
	{
		___chipPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___chipPrefab_4, value);
	}

	inline static int32_t get_offset_of_dict_5() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___dict_5)); }
	inline Dictionary_2_t3986656710 * get_dict_5() const { return ___dict_5; }
	inline Dictionary_2_t3986656710 ** get_address_of_dict_5() { return &___dict_5; }
	inline void set_dict_5(Dictionary_2_t3986656710 * value)
	{
		___dict_5 = value;
		Il2CppCodeGenWriteBarrier(&___dict_5, value);
	}

	inline static int32_t get_offset_of_o_dict_6() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___o_dict_6)); }
	inline Dictionary_2_t3986656710 * get_o_dict_6() const { return ___o_dict_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_o_dict_6() { return &___o_dict_6; }
	inline void set_o_dict_6(Dictionary_2_t3986656710 * value)
	{
		___o_dict_6 = value;
		Il2CppCodeGenWriteBarrier(&___o_dict_6, value);
	}

	inline static int32_t get_offset_of_history_7() { return static_cast<int32_t>(offsetof(ChipStore_t4271321735, ___history_7)); }
	inline List_1_t3355777842 * get_history_7() const { return ___history_7; }
	inline List_1_t3355777842 ** get_address_of_history_7() { return &___history_7; }
	inline void set_history_7(List_1_t3355777842 * value)
	{
		___history_7 = value;
		Il2CppCodeGenWriteBarrier(&___history_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
