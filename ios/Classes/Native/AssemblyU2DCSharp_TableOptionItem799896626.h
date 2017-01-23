#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TableOptionItem
struct  TableOptionItem_t799896626  : public Il2CppObject
{
public:
	// System.Int32 TableOptionItem::stakevalue
	int32_t ___stakevalue_0;
	// System.Boolean TableOptionItem::ennable
	bool ___ennable_1;
	// System.Boolean TableOptionItem::suggest
	bool ___suggest_2;

public:
	inline static int32_t get_offset_of_stakevalue_0() { return static_cast<int32_t>(offsetof(TableOptionItem_t799896626, ___stakevalue_0)); }
	inline int32_t get_stakevalue_0() const { return ___stakevalue_0; }
	inline int32_t* get_address_of_stakevalue_0() { return &___stakevalue_0; }
	inline void set_stakevalue_0(int32_t value)
	{
		___stakevalue_0 = value;
	}

	inline static int32_t get_offset_of_ennable_1() { return static_cast<int32_t>(offsetof(TableOptionItem_t799896626, ___ennable_1)); }
	inline bool get_ennable_1() const { return ___ennable_1; }
	inline bool* get_address_of_ennable_1() { return &___ennable_1; }
	inline void set_ennable_1(bool value)
	{
		___ennable_1 = value;
	}

	inline static int32_t get_offset_of_suggest_2() { return static_cast<int32_t>(offsetof(TableOptionItem_t799896626, ___suggest_2)); }
	inline bool get_suggest_2() const { return ___suggest_2; }
	inline bool* get_address_of_suggest_2() { return &___suggest_2; }
	inline void set_suggest_2(bool value)
	{
		___suggest_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
