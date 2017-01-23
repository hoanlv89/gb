#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTBezier
struct  LTBezier_t3622621193  : public Il2CppObject
{
public:
	// System.Single LTBezier::length
	float ___length_0;
	// UnityEngine.Vector3 LTBezier::a
	Vector3_t2243707580  ___a_1;
	// UnityEngine.Vector3 LTBezier::aa
	Vector3_t2243707580  ___aa_2;
	// UnityEngine.Vector3 LTBezier::bb
	Vector3_t2243707580  ___bb_3;
	// UnityEngine.Vector3 LTBezier::cc
	Vector3_t2243707580  ___cc_4;
	// System.Single LTBezier::len
	float ___len_5;
	// System.Single[] LTBezier::arcLengths
	SingleU5BU5D_t577127397* ___arcLengths_6;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___length_0)); }
	inline float get_length_0() const { return ___length_0; }
	inline float* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(float value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___a_1)); }
	inline Vector3_t2243707580  get_a_1() const { return ___a_1; }
	inline Vector3_t2243707580 * get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(Vector3_t2243707580  value)
	{
		___a_1 = value;
	}

	inline static int32_t get_offset_of_aa_2() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___aa_2)); }
	inline Vector3_t2243707580  get_aa_2() const { return ___aa_2; }
	inline Vector3_t2243707580 * get_address_of_aa_2() { return &___aa_2; }
	inline void set_aa_2(Vector3_t2243707580  value)
	{
		___aa_2 = value;
	}

	inline static int32_t get_offset_of_bb_3() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___bb_3)); }
	inline Vector3_t2243707580  get_bb_3() const { return ___bb_3; }
	inline Vector3_t2243707580 * get_address_of_bb_3() { return &___bb_3; }
	inline void set_bb_3(Vector3_t2243707580  value)
	{
		___bb_3 = value;
	}

	inline static int32_t get_offset_of_cc_4() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___cc_4)); }
	inline Vector3_t2243707580  get_cc_4() const { return ___cc_4; }
	inline Vector3_t2243707580 * get_address_of_cc_4() { return &___cc_4; }
	inline void set_cc_4(Vector3_t2243707580  value)
	{
		___cc_4 = value;
	}

	inline static int32_t get_offset_of_len_5() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___len_5)); }
	inline float get_len_5() const { return ___len_5; }
	inline float* get_address_of_len_5() { return &___len_5; }
	inline void set_len_5(float value)
	{
		___len_5 = value;
	}

	inline static int32_t get_offset_of_arcLengths_6() { return static_cast<int32_t>(offsetof(LTBezier_t3622621193, ___arcLengths_6)); }
	inline SingleU5BU5D_t577127397* get_arcLengths_6() const { return ___arcLengths_6; }
	inline SingleU5BU5D_t577127397** get_address_of_arcLengths_6() { return &___arcLengths_6; }
	inline void set_arcLengths_6(SingleU5BU5D_t577127397* value)
	{
		___arcLengths_6 = value;
		Il2CppCodeGenWriteBarrier(&___arcLengths_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
