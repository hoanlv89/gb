#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// iAdBannerController
struct iAdBannerController_t2502498128;
// System.Collections.Generic.Dictionary`2<System.Int32,iAdBanner>
struct Dictionary_2_t1213584195;
// System.Action
struct Action_t3226471752;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1443098144.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iAdBannerController
struct  iAdBannerController_t2502498128  : public ISN_Singleton_1_t1443098144
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,iAdBanner> iAdBannerController::_banners
	Dictionary_2_t1213584195 * ____banners_6;

public:
	inline static int32_t get_offset_of__banners_6() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128, ____banners_6)); }
	inline Dictionary_2_t1213584195 * get__banners_6() const { return ____banners_6; }
	inline Dictionary_2_t1213584195 ** get_address_of__banners_6() { return &____banners_6; }
	inline void set__banners_6(Dictionary_2_t1213584195 * value)
	{
		____banners_6 = value;
		Il2CppCodeGenWriteBarrier(&____banners_6, value);
	}
};

struct iAdBannerController_t2502498128_StaticFields
{
public:
	// System.Int32 iAdBannerController::_nextId
	int32_t ____nextId_4;
	// iAdBannerController iAdBannerController::_instance
	iAdBannerController_t2502498128 * ____instance_5;
	// System.Action iAdBannerController::InterstitialDidFailWithErrorAction
	Action_t3226471752 * ___InterstitialDidFailWithErrorAction_7;
	// System.Action iAdBannerController::InterstitialAdWillLoadAction
	Action_t3226471752 * ___InterstitialAdWillLoadAction_8;
	// System.Action iAdBannerController::InterstitialAdDidLoadAction
	Action_t3226471752 * ___InterstitialAdDidLoadAction_9;
	// System.Action iAdBannerController::InterstitialAdDidFinishAction
	Action_t3226471752 * ___InterstitialAdDidFinishAction_10;

public:
	inline static int32_t get_offset_of__nextId_4() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ____nextId_4)); }
	inline int32_t get__nextId_4() const { return ____nextId_4; }
	inline int32_t* get_address_of__nextId_4() { return &____nextId_4; }
	inline void set__nextId_4(int32_t value)
	{
		____nextId_4 = value;
	}

	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ____instance_5)); }
	inline iAdBannerController_t2502498128 * get__instance_5() const { return ____instance_5; }
	inline iAdBannerController_t2502498128 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(iAdBannerController_t2502498128 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}

	inline static int32_t get_offset_of_InterstitialDidFailWithErrorAction_7() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ___InterstitialDidFailWithErrorAction_7)); }
	inline Action_t3226471752 * get_InterstitialDidFailWithErrorAction_7() const { return ___InterstitialDidFailWithErrorAction_7; }
	inline Action_t3226471752 ** get_address_of_InterstitialDidFailWithErrorAction_7() { return &___InterstitialDidFailWithErrorAction_7; }
	inline void set_InterstitialDidFailWithErrorAction_7(Action_t3226471752 * value)
	{
		___InterstitialDidFailWithErrorAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialDidFailWithErrorAction_7, value);
	}

	inline static int32_t get_offset_of_InterstitialAdWillLoadAction_8() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ___InterstitialAdWillLoadAction_8)); }
	inline Action_t3226471752 * get_InterstitialAdWillLoadAction_8() const { return ___InterstitialAdWillLoadAction_8; }
	inline Action_t3226471752 ** get_address_of_InterstitialAdWillLoadAction_8() { return &___InterstitialAdWillLoadAction_8; }
	inline void set_InterstitialAdWillLoadAction_8(Action_t3226471752 * value)
	{
		___InterstitialAdWillLoadAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdWillLoadAction_8, value);
	}

	inline static int32_t get_offset_of_InterstitialAdDidLoadAction_9() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ___InterstitialAdDidLoadAction_9)); }
	inline Action_t3226471752 * get_InterstitialAdDidLoadAction_9() const { return ___InterstitialAdDidLoadAction_9; }
	inline Action_t3226471752 ** get_address_of_InterstitialAdDidLoadAction_9() { return &___InterstitialAdDidLoadAction_9; }
	inline void set_InterstitialAdDidLoadAction_9(Action_t3226471752 * value)
	{
		___InterstitialAdDidLoadAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdDidLoadAction_9, value);
	}

	inline static int32_t get_offset_of_InterstitialAdDidFinishAction_10() { return static_cast<int32_t>(offsetof(iAdBannerController_t2502498128_StaticFields, ___InterstitialAdDidFinishAction_10)); }
	inline Action_t3226471752 * get_InterstitialAdDidFinishAction_10() const { return ___InterstitialAdDidFinishAction_10; }
	inline Action_t3226471752 ** get_address_of_InterstitialAdDidFinishAction_10() { return &___InterstitialAdDidFinishAction_10; }
	inline void set_InterstitialAdDidFinishAction_10(Action_t3226471752 * value)
	{
		___InterstitialAdDidFinishAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdDidFinishAction_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
