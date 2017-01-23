#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Cloud.Analytics.SessionImpl
struct SessionImpl_t2737873040;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cloud.Analytics.UnityAnalytics
struct  UnityAnalytics_t2559009677  : public Il2CppObject
{
public:

public:
};

struct UnityAnalytics_t2559009677_StaticFields
{
public:
	// UnityEngine.Cloud.Analytics.SessionImpl UnityEngine.Cloud.Analytics.UnityAnalytics::s_Implementation
	SessionImpl_t2737873040 * ___s_Implementation_0;

public:
	inline static int32_t get_offset_of_s_Implementation_0() { return static_cast<int32_t>(offsetof(UnityAnalytics_t2559009677_StaticFields, ___s_Implementation_0)); }
	inline SessionImpl_t2737873040 * get_s_Implementation_0() const { return ___s_Implementation_0; }
	inline SessionImpl_t2737873040 ** get_address_of_s_Implementation_0() { return &___s_Implementation_0; }
	inline void set_s_Implementation_0(SessionImpl_t2737873040 * value)
	{
		___s_Implementation_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Implementation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
