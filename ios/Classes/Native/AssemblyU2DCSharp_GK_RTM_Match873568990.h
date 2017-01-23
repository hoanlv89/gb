#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GK_Player>
struct List_1_t2151129426;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_RTM_Match
struct  GK_RTM_Match_t873568990  : public Il2CppObject
{
public:
	// System.Int32 GK_RTM_Match::_ExpectedPlayerCount
	int32_t ____ExpectedPlayerCount_0;
	// System.Collections.Generic.List`1<GK_Player> GK_RTM_Match::_Players
	List_1_t2151129426 * ____Players_1;

public:
	inline static int32_t get_offset_of__ExpectedPlayerCount_0() { return static_cast<int32_t>(offsetof(GK_RTM_Match_t873568990, ____ExpectedPlayerCount_0)); }
	inline int32_t get__ExpectedPlayerCount_0() const { return ____ExpectedPlayerCount_0; }
	inline int32_t* get_address_of__ExpectedPlayerCount_0() { return &____ExpectedPlayerCount_0; }
	inline void set__ExpectedPlayerCount_0(int32_t value)
	{
		____ExpectedPlayerCount_0 = value;
	}

	inline static int32_t get_offset_of__Players_1() { return static_cast<int32_t>(offsetof(GK_RTM_Match_t873568990, ____Players_1)); }
	inline List_1_t2151129426 * get__Players_1() const { return ____Players_1; }
	inline List_1_t2151129426 ** get_address_of__Players_1() { return &____Players_1; }
	inline void set__Players_1(List_1_t2151129426 * value)
	{
		____Players_1 = value;
		Il2CppCodeGenWriteBarrier(&____Players_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
