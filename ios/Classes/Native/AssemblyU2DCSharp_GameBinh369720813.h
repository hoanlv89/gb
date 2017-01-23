#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<DataCard>
struct List_1_t2032532826;
// Utils/Executor
struct Executor_t2576254565;

#include "AssemblyU2DCSharp_Game1600141214.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBinh
struct  GameBinh_t369720813  : public Game_t1600141214
{
public:
	// System.Collections.IEnumerator GameBinh::e
	Il2CppObject * ___e_19;
	// System.Collections.Generic.List`1<DataCard> GameBinh::dataCards
	List_1_t2032532826 * ___dataCards_20;

public:
	inline static int32_t get_offset_of_e_19() { return static_cast<int32_t>(offsetof(GameBinh_t369720813, ___e_19)); }
	inline Il2CppObject * get_e_19() const { return ___e_19; }
	inline Il2CppObject ** get_address_of_e_19() { return &___e_19; }
	inline void set_e_19(Il2CppObject * value)
	{
		___e_19 = value;
		Il2CppCodeGenWriteBarrier(&___e_19, value);
	}

	inline static int32_t get_offset_of_dataCards_20() { return static_cast<int32_t>(offsetof(GameBinh_t369720813, ___dataCards_20)); }
	inline List_1_t2032532826 * get_dataCards_20() const { return ___dataCards_20; }
	inline List_1_t2032532826 ** get_address_of_dataCards_20() { return &___dataCards_20; }
	inline void set_dataCards_20(List_1_t2032532826 * value)
	{
		___dataCards_20 = value;
		Il2CppCodeGenWriteBarrier(&___dataCards_20, value);
	}
};

struct GameBinh_t369720813_StaticFields
{
public:
	// Utils/Executor GameBinh::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_21() { return static_cast<int32_t>(offsetof(GameBinh_t369720813_StaticFields, ___U3CU3Ef__amU24cache0_21)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_21() const { return ___U3CU3Ef__amU24cache0_21; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_21() { return &___U3CU3Ef__amU24cache0_21; }
	inline void set_U3CU3Ef__amU24cache0_21(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
