#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen3929979100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNativeAppEvents
struct  IOSNativeAppEvents_t694411788  : public ISN_Singleton_1_t3929979100
{
public:

public:
};

struct IOSNativeAppEvents_t694411788_StaticFields
{
public:
	// System.Action IOSNativeAppEvents::OnApplicationDidEnterBackground
	Action_t3226471752 * ___OnApplicationDidEnterBackground_4;
	// System.Action IOSNativeAppEvents::OnApplicationDidBecomeActive
	Action_t3226471752 * ___OnApplicationDidBecomeActive_5;
	// System.Action IOSNativeAppEvents::OnApplicationDidReceiveMemoryWarning
	Action_t3226471752 * ___OnApplicationDidReceiveMemoryWarning_6;
	// System.Action IOSNativeAppEvents::OnApplicationWillResignActive
	Action_t3226471752 * ___OnApplicationWillResignActive_7;
	// System.Action IOSNativeAppEvents::OnApplicationWillTerminate
	Action_t3226471752 * ___OnApplicationWillTerminate_8;

public:
	inline static int32_t get_offset_of_OnApplicationDidEnterBackground_4() { return static_cast<int32_t>(offsetof(IOSNativeAppEvents_t694411788_StaticFields, ___OnApplicationDidEnterBackground_4)); }
	inline Action_t3226471752 * get_OnApplicationDidEnterBackground_4() const { return ___OnApplicationDidEnterBackground_4; }
	inline Action_t3226471752 ** get_address_of_OnApplicationDidEnterBackground_4() { return &___OnApplicationDidEnterBackground_4; }
	inline void set_OnApplicationDidEnterBackground_4(Action_t3226471752 * value)
	{
		___OnApplicationDidEnterBackground_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationDidEnterBackground_4, value);
	}

	inline static int32_t get_offset_of_OnApplicationDidBecomeActive_5() { return static_cast<int32_t>(offsetof(IOSNativeAppEvents_t694411788_StaticFields, ___OnApplicationDidBecomeActive_5)); }
	inline Action_t3226471752 * get_OnApplicationDidBecomeActive_5() const { return ___OnApplicationDidBecomeActive_5; }
	inline Action_t3226471752 ** get_address_of_OnApplicationDidBecomeActive_5() { return &___OnApplicationDidBecomeActive_5; }
	inline void set_OnApplicationDidBecomeActive_5(Action_t3226471752 * value)
	{
		___OnApplicationDidBecomeActive_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationDidBecomeActive_5, value);
	}

	inline static int32_t get_offset_of_OnApplicationDidReceiveMemoryWarning_6() { return static_cast<int32_t>(offsetof(IOSNativeAppEvents_t694411788_StaticFields, ___OnApplicationDidReceiveMemoryWarning_6)); }
	inline Action_t3226471752 * get_OnApplicationDidReceiveMemoryWarning_6() const { return ___OnApplicationDidReceiveMemoryWarning_6; }
	inline Action_t3226471752 ** get_address_of_OnApplicationDidReceiveMemoryWarning_6() { return &___OnApplicationDidReceiveMemoryWarning_6; }
	inline void set_OnApplicationDidReceiveMemoryWarning_6(Action_t3226471752 * value)
	{
		___OnApplicationDidReceiveMemoryWarning_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationDidReceiveMemoryWarning_6, value);
	}

	inline static int32_t get_offset_of_OnApplicationWillResignActive_7() { return static_cast<int32_t>(offsetof(IOSNativeAppEvents_t694411788_StaticFields, ___OnApplicationWillResignActive_7)); }
	inline Action_t3226471752 * get_OnApplicationWillResignActive_7() const { return ___OnApplicationWillResignActive_7; }
	inline Action_t3226471752 ** get_address_of_OnApplicationWillResignActive_7() { return &___OnApplicationWillResignActive_7; }
	inline void set_OnApplicationWillResignActive_7(Action_t3226471752 * value)
	{
		___OnApplicationWillResignActive_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationWillResignActive_7, value);
	}

	inline static int32_t get_offset_of_OnApplicationWillTerminate_8() { return static_cast<int32_t>(offsetof(IOSNativeAppEvents_t694411788_StaticFields, ___OnApplicationWillTerminate_8)); }
	inline Action_t3226471752 * get_OnApplicationWillTerminate_8() const { return ___OnApplicationWillTerminate_8; }
	inline Action_t3226471752 ** get_address_of_OnApplicationWillTerminate_8() { return &___OnApplicationWillTerminate_8; }
	inline void set_OnApplicationWillTerminate_8(Action_t3226471752 * value)
	{
		___OnApplicationWillTerminate_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnApplicationWillTerminate_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
