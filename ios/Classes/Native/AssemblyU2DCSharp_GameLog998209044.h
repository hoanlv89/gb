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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLog
struct  GameLog_t998209044  : public Il2CppObject
{
public:
	// System.String GameLog::timeInFormat
	String_t* ___timeInFormat_0;
	// System.String GameLog::log
	String_t* ___log_1;

public:
	inline static int32_t get_offset_of_timeInFormat_0() { return static_cast<int32_t>(offsetof(GameLog_t998209044, ___timeInFormat_0)); }
	inline String_t* get_timeInFormat_0() const { return ___timeInFormat_0; }
	inline String_t** get_address_of_timeInFormat_0() { return &___timeInFormat_0; }
	inline void set_timeInFormat_0(String_t* value)
	{
		___timeInFormat_0 = value;
		Il2CppCodeGenWriteBarrier(&___timeInFormat_0, value);
	}

	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(GameLog_t998209044, ___log_1)); }
	inline String_t* get_log_1() const { return ___log_1; }
	inline String_t** get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(String_t* value)
	{
		___log_1 = value;
		Il2CppCodeGenWriteBarrier(&___log_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
