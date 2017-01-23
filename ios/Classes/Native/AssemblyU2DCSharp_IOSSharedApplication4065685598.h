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
// System.Action`1<ISN_CheckUrlResult>
struct Action_1_t1447523883;
// System.Action`1<System.String>
struct Action_1_t1831019615;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen3006285614.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSSharedApplication
struct  IOSSharedApplication_t4065685598  : public ISN_Singleton_1_t3006285614
{
public:

public:
};

struct IOSSharedApplication_t4065685598_StaticFields
{
public:
	// System.Action`1<ISN_CheckUrlResult> IOSSharedApplication::OnUrlCheckResultAction
	Action_1_t1447523883 * ___OnUrlCheckResultAction_6;
	// System.Action`1<System.String> IOSSharedApplication::OnAdvertisingIdentifierLoadedAction
	Action_1_t1831019615 * ___OnAdvertisingIdentifierLoadedAction_7;

public:
	inline static int32_t get_offset_of_OnUrlCheckResultAction_6() { return static_cast<int32_t>(offsetof(IOSSharedApplication_t4065685598_StaticFields, ___OnUrlCheckResultAction_6)); }
	inline Action_1_t1447523883 * get_OnUrlCheckResultAction_6() const { return ___OnUrlCheckResultAction_6; }
	inline Action_1_t1447523883 ** get_address_of_OnUrlCheckResultAction_6() { return &___OnUrlCheckResultAction_6; }
	inline void set_OnUrlCheckResultAction_6(Action_1_t1447523883 * value)
	{
		___OnUrlCheckResultAction_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnUrlCheckResultAction_6, value);
	}

	inline static int32_t get_offset_of_OnAdvertisingIdentifierLoadedAction_7() { return static_cast<int32_t>(offsetof(IOSSharedApplication_t4065685598_StaticFields, ___OnAdvertisingIdentifierLoadedAction_7)); }
	inline Action_1_t1831019615 * get_OnAdvertisingIdentifierLoadedAction_7() const { return ___OnAdvertisingIdentifierLoadedAction_7; }
	inline Action_1_t1831019615 ** get_address_of_OnAdvertisingIdentifierLoadedAction_7() { return &___OnAdvertisingIdentifierLoadedAction_7; }
	inline void set_OnAdvertisingIdentifierLoadedAction_7(Action_1_t1831019615 * value)
	{
		___OnAdvertisingIdentifierLoadedAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdvertisingIdentifierLoadedAction_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
