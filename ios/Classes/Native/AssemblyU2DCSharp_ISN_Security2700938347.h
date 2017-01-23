#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<ISN_LocalReceiptResult>
struct Action_1_t3548126951;
// System.Action`1<ISN_DeviceGUID>
struct Action_1_t1589331218;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1641538363.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Security
struct  ISN_Security_t2700938347  : public ISN_Singleton_1_t1641538363
{
public:

public:
};

struct ISN_Security_t2700938347_StaticFields
{
public:
	// System.Action`1<ISN_LocalReceiptResult> ISN_Security::OnReceiptLoaded
	Action_1_t3548126951 * ___OnReceiptLoaded_4;
	// System.Action`1<ISN_DeviceGUID> ISN_Security::OnGUIDLoaded
	Action_1_t1589331218 * ___OnGUIDLoaded_5;
	// System.Action`1<ISN_Result> ISN_Security::OnReceiptRefreshComplete
	Action_1_t2577430992 * ___OnReceiptRefreshComplete_6;

public:
	inline static int32_t get_offset_of_OnReceiptLoaded_4() { return static_cast<int32_t>(offsetof(ISN_Security_t2700938347_StaticFields, ___OnReceiptLoaded_4)); }
	inline Action_1_t3548126951 * get_OnReceiptLoaded_4() const { return ___OnReceiptLoaded_4; }
	inline Action_1_t3548126951 ** get_address_of_OnReceiptLoaded_4() { return &___OnReceiptLoaded_4; }
	inline void set_OnReceiptLoaded_4(Action_1_t3548126951 * value)
	{
		___OnReceiptLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceiptLoaded_4, value);
	}

	inline static int32_t get_offset_of_OnGUIDLoaded_5() { return static_cast<int32_t>(offsetof(ISN_Security_t2700938347_StaticFields, ___OnGUIDLoaded_5)); }
	inline Action_1_t1589331218 * get_OnGUIDLoaded_5() const { return ___OnGUIDLoaded_5; }
	inline Action_1_t1589331218 ** get_address_of_OnGUIDLoaded_5() { return &___OnGUIDLoaded_5; }
	inline void set_OnGUIDLoaded_5(Action_1_t1589331218 * value)
	{
		___OnGUIDLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnGUIDLoaded_5, value);
	}

	inline static int32_t get_offset_of_OnReceiptRefreshComplete_6() { return static_cast<int32_t>(offsetof(ISN_Security_t2700938347_StaticFields, ___OnReceiptRefreshComplete_6)); }
	inline Action_1_t2577430992 * get_OnReceiptRefreshComplete_6() const { return ___OnReceiptRefreshComplete_6; }
	inline Action_1_t2577430992 ** get_address_of_OnReceiptRefreshComplete_6() { return &___OnReceiptRefreshComplete_6; }
	inline void set_OnReceiptRefreshComplete_6(Action_1_t2577430992 * value)
	{
		___OnReceiptRefreshComplete_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnReceiptRefreshComplete_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
