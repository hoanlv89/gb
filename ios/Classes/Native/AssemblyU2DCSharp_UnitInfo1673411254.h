#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnitInfo
struct  UnitInfo_t1673411254  : public Il2CppObject
{
public:
	// System.Int32 UnitInfo::id
	int32_t ___id_0;
	// UnityEngine.GameObject UnitInfo::gameObject
	GameObject_t1756533147 * ___gameObject_1;
	// System.Int32 UnitInfo::value
	int32_t ___value_2;
	// UnityEngine.Material UnitInfo::mat
	Material_t193706927 * ___mat_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(UnitInfo_t1673411254, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(UnitInfo_t1673411254, ___gameObject_1)); }
	inline GameObject_t1756533147 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_t1756533147 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_1, value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(UnitInfo_t1673411254, ___value_2)); }
	inline int32_t get_value_2() const { return ___value_2; }
	inline int32_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int32_t value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_mat_3() { return static_cast<int32_t>(offsetof(UnitInfo_t1673411254, ___mat_3)); }
	inline Material_t193706927 * get_mat_3() const { return ___mat_3; }
	inline Material_t193706927 ** get_address_of_mat_3() { return &___mat_3; }
	inline void set_mat_3(Material_t193706927 * value)
	{
		___mat_3 = value;
		Il2CppCodeGenWriteBarrier(&___mat_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
