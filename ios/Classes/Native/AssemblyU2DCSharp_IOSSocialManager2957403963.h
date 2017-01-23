#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<ISN_Result>
struct Action_1_t2577430992;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1898003979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSSocialManager
struct  IOSSocialManager_t2957403963  : public ISN_Singleton_1_t1898003979
{
public:

public:
};

struct IOSSocialManager_t2957403963_StaticFields
{
public:
	// System.Action`1<ISN_Result> IOSSocialManager::OnFacebookPostResult
	Action_1_t2577430992 * ___OnFacebookPostResult_4;
	// System.Action`1<ISN_Result> IOSSocialManager::OnTwitterPostResult
	Action_1_t2577430992 * ___OnTwitterPostResult_5;
	// System.Action`1<ISN_Result> IOSSocialManager::OnMailResult
	Action_1_t2577430992 * ___OnMailResult_6;

public:
	inline static int32_t get_offset_of_OnFacebookPostResult_4() { return static_cast<int32_t>(offsetof(IOSSocialManager_t2957403963_StaticFields, ___OnFacebookPostResult_4)); }
	inline Action_1_t2577430992 * get_OnFacebookPostResult_4() const { return ___OnFacebookPostResult_4; }
	inline Action_1_t2577430992 ** get_address_of_OnFacebookPostResult_4() { return &___OnFacebookPostResult_4; }
	inline void set_OnFacebookPostResult_4(Action_1_t2577430992 * value)
	{
		___OnFacebookPostResult_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFacebookPostResult_4, value);
	}

	inline static int32_t get_offset_of_OnTwitterPostResult_5() { return static_cast<int32_t>(offsetof(IOSSocialManager_t2957403963_StaticFields, ___OnTwitterPostResult_5)); }
	inline Action_1_t2577430992 * get_OnTwitterPostResult_5() const { return ___OnTwitterPostResult_5; }
	inline Action_1_t2577430992 ** get_address_of_OnTwitterPostResult_5() { return &___OnTwitterPostResult_5; }
	inline void set_OnTwitterPostResult_5(Action_1_t2577430992 * value)
	{
		___OnTwitterPostResult_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnTwitterPostResult_5, value);
	}

	inline static int32_t get_offset_of_OnMailResult_6() { return static_cast<int32_t>(offsetof(IOSSocialManager_t2957403963_StaticFields, ___OnMailResult_6)); }
	inline Action_1_t2577430992 * get_OnMailResult_6() const { return ___OnMailResult_6; }
	inline Action_1_t2577430992 ** get_address_of_OnMailResult_6() { return &___OnMailResult_6; }
	inline void set_OnMailResult_6(Action_1_t2577430992 * value)
	{
		___OnMailResult_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnMailResult_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
