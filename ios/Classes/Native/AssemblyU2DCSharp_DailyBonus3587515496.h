#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DailyBonus>
struct List_1_t2956636628;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DailyBonus
struct  DailyBonus_t3587515496  : public Il2CppObject
{
public:
	// System.Int32 DailyBonus::money
	int32_t ___money_0;

public:
	inline static int32_t get_offset_of_money_0() { return static_cast<int32_t>(offsetof(DailyBonus_t3587515496, ___money_0)); }
	inline int32_t get_money_0() const { return ___money_0; }
	inline int32_t* get_address_of_money_0() { return &___money_0; }
	inline void set_money_0(int32_t value)
	{
		___money_0 = value;
	}
};

struct DailyBonus_t3587515496_StaticFields
{
public:
	// System.Collections.Generic.List`1<DailyBonus> DailyBonus::listDailyBonus
	List_1_t2956636628 * ___listDailyBonus_1;

public:
	inline static int32_t get_offset_of_listDailyBonus_1() { return static_cast<int32_t>(offsetof(DailyBonus_t3587515496_StaticFields, ___listDailyBonus_1)); }
	inline List_1_t2956636628 * get_listDailyBonus_1() const { return ___listDailyBonus_1; }
	inline List_1_t2956636628 ** get_address_of_listDailyBonus_1() { return &___listDailyBonus_1; }
	inline void set_listDailyBonus_1(List_1_t2956636628 * value)
	{
		___listDailyBonus_1 = value;
		Il2CppCodeGenWriteBarrier(&___listDailyBonus_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
