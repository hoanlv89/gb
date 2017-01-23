#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t1044426839;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cloud.Analytics.BasePlatformWrapper
struct  BasePlatformWrapper_t2426234205  : public Il2CppObject
{
public:
	// System.Random UnityEngine.Cloud.Analytics.BasePlatformWrapper::m_Random
	Random_t1044426839 * ___m_Random_0;

public:
	inline static int32_t get_offset_of_m_Random_0() { return static_cast<int32_t>(offsetof(BasePlatformWrapper_t2426234205, ___m_Random_0)); }
	inline Random_t1044426839 * get_m_Random_0() const { return ___m_Random_0; }
	inline Random_t1044426839 ** get_address_of_m_Random_0() { return &___m_Random_0; }
	inline void set_m_Random_0(Random_t1044426839 * value)
	{
		___m_Random_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Random_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
