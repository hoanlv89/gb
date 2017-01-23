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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Bugsnag_LogSeverity2812150593.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bugsnag
struct  Bugsnag_t2092357853  : public MonoBehaviour_t1158329972
{
public:
	// System.String Bugsnag::BugsnagApiKey
	String_t* ___BugsnagApiKey_2;
	// System.Boolean Bugsnag::AutoNotify
	bool ___AutoNotify_3;
	// Bugsnag/LogSeverity Bugsnag::NotifyLevel
	int32_t ___NotifyLevel_4;

public:
	inline static int32_t get_offset_of_BugsnagApiKey_2() { return static_cast<int32_t>(offsetof(Bugsnag_t2092357853, ___BugsnagApiKey_2)); }
	inline String_t* get_BugsnagApiKey_2() const { return ___BugsnagApiKey_2; }
	inline String_t** get_address_of_BugsnagApiKey_2() { return &___BugsnagApiKey_2; }
	inline void set_BugsnagApiKey_2(String_t* value)
	{
		___BugsnagApiKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___BugsnagApiKey_2, value);
	}

	inline static int32_t get_offset_of_AutoNotify_3() { return static_cast<int32_t>(offsetof(Bugsnag_t2092357853, ___AutoNotify_3)); }
	inline bool get_AutoNotify_3() const { return ___AutoNotify_3; }
	inline bool* get_address_of_AutoNotify_3() { return &___AutoNotify_3; }
	inline void set_AutoNotify_3(bool value)
	{
		___AutoNotify_3 = value;
	}

	inline static int32_t get_offset_of_NotifyLevel_4() { return static_cast<int32_t>(offsetof(Bugsnag_t2092357853, ___NotifyLevel_4)); }
	inline int32_t get_NotifyLevel_4() const { return ___NotifyLevel_4; }
	inline int32_t* get_address_of_NotifyLevel_4() { return &___NotifyLevel_4; }
	inline void set_NotifyLevel_4(int32_t value)
	{
		___NotifyLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
