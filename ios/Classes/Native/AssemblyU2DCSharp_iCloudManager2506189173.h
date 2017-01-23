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
// System.Action`1<iCloudData>
struct Action_1_t2882436870;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1446789189.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iCloudManager
struct  iCloudManager_t2506189173  : public ISN_Singleton_1_t1446789189
{
public:

public:
};

struct iCloudManager_t2506189173_StaticFields
{
public:
	// System.Action`1<ISN_Result> iCloudManager::OnCloundInitAction
	Action_1_t2577430992 * ___OnCloundInitAction_4;
	// System.Action`1<iCloudData> iCloudManager::OnCloudDataReceivedAction
	Action_1_t2882436870 * ___OnCloudDataReceivedAction_5;

public:
	inline static int32_t get_offset_of_OnCloundInitAction_4() { return static_cast<int32_t>(offsetof(iCloudManager_t2506189173_StaticFields, ___OnCloundInitAction_4)); }
	inline Action_1_t2577430992 * get_OnCloundInitAction_4() const { return ___OnCloundInitAction_4; }
	inline Action_1_t2577430992 ** get_address_of_OnCloundInitAction_4() { return &___OnCloundInitAction_4; }
	inline void set_OnCloundInitAction_4(Action_1_t2577430992 * value)
	{
		___OnCloundInitAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloundInitAction_4, value);
	}

	inline static int32_t get_offset_of_OnCloudDataReceivedAction_5() { return static_cast<int32_t>(offsetof(iCloudManager_t2506189173_StaticFields, ___OnCloudDataReceivedAction_5)); }
	inline Action_1_t2882436870 * get_OnCloudDataReceivedAction_5() const { return ___OnCloudDataReceivedAction_5; }
	inline Action_1_t2882436870 ** get_address_of_OnCloudDataReceivedAction_5() { return &___OnCloudDataReceivedAction_5; }
	inline void set_OnCloudDataReceivedAction_5(Action_1_t2882436870 * value)
	{
		___OnCloudDataReceivedAction_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloudDataReceivedAction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
