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
// System.Collections.Generic.List`1<Spine.BoneData>
struct List_1_t387056200;
// Spine.BoneData
struct BoneData_t1017935068;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.IkConstraintData
struct  IkConstraintData_t590779377  : public Il2CppObject
{
public:
	// System.String Spine.IkConstraintData::name
	String_t* ___name_0;
	// System.Int32 Spine.IkConstraintData::order
	int32_t ___order_1;
	// System.Collections.Generic.List`1<Spine.BoneData> Spine.IkConstraintData::bones
	List_1_t387056200 * ___bones_2;
	// Spine.BoneData Spine.IkConstraintData::target
	BoneData_t1017935068 * ___target_3;
	// System.Int32 Spine.IkConstraintData::bendDirection
	int32_t ___bendDirection_4;
	// System.Single Spine.IkConstraintData::mix
	float ___mix_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_bones_2() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___bones_2)); }
	inline List_1_t387056200 * get_bones_2() const { return ___bones_2; }
	inline List_1_t387056200 ** get_address_of_bones_2() { return &___bones_2; }
	inline void set_bones_2(List_1_t387056200 * value)
	{
		___bones_2 = value;
		Il2CppCodeGenWriteBarrier(&___bones_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___target_3)); }
	inline BoneData_t1017935068 * get_target_3() const { return ___target_3; }
	inline BoneData_t1017935068 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(BoneData_t1017935068 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_bendDirection_4() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___bendDirection_4)); }
	inline int32_t get_bendDirection_4() const { return ___bendDirection_4; }
	inline int32_t* get_address_of_bendDirection_4() { return &___bendDirection_4; }
	inline void set_bendDirection_4(int32_t value)
	{
		___bendDirection_4 = value;
	}

	inline static int32_t get_offset_of_mix_5() { return static_cast<int32_t>(offsetof(IkConstraintData_t590779377, ___mix_5)); }
	inline float get_mix_5() const { return ___mix_5; }
	inline float* get_address_of_mix_5() { return &___mix_5; }
	inline void set_mix_5(float value)
	{
		___mix_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
