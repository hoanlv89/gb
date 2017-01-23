#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t767462497;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Debug
struct  Debug_t154383703  : public Il2CppObject
{
public:

public:
};

struct Debug_t154383703_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> Debug::logs
	List_1_t767462497 * ___logs_0;

public:
	inline static int32_t get_offset_of_logs_0() { return static_cast<int32_t>(offsetof(Debug_t154383703_StaticFields, ___logs_0)); }
	inline List_1_t767462497 * get_logs_0() const { return ___logs_0; }
	inline List_1_t767462497 ** get_address_of_logs_0() { return &___logs_0; }
	inline void set_logs_0(List_1_t767462497 * value)
	{
		___logs_0 = value;
		Il2CppCodeGenWriteBarrier(&___logs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
