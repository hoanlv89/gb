#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.IFacebookLogger
struct IFacebookLogger_t1451379;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FacebookLogger/CustomLogger
struct  CustomLogger_t2679588353  : public Il2CppObject
{
public:
	// Facebook.Unity.IFacebookLogger Facebook.Unity.FacebookLogger/CustomLogger::logger
	Il2CppObject * ___logger_0;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(CustomLogger_t2679588353, ___logger_0)); }
	inline Il2CppObject * get_logger_0() const { return ___logger_0; }
	inline Il2CppObject ** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(Il2CppObject * value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___logger_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
