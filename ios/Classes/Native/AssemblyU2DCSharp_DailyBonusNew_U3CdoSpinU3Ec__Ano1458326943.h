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
// DailyBonusNew
struct DailyBonusNew_t2304091542;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DailyBonusNew/<doSpin>c__AnonStorey0
struct  U3CdoSpinU3Ec__AnonStorey0_t1458326943  : public Il2CppObject
{
public:
	// System.Action DailyBonusNew/<doSpin>c__AnonStorey0::onFinish
	Action_t3226471752 * ___onFinish_0;
	// DailyBonusNew DailyBonusNew/<doSpin>c__AnonStorey0::$this
	DailyBonusNew_t2304091542 * ___U24this_1;

public:
	inline static int32_t get_offset_of_onFinish_0() { return static_cast<int32_t>(offsetof(U3CdoSpinU3Ec__AnonStorey0_t1458326943, ___onFinish_0)); }
	inline Action_t3226471752 * get_onFinish_0() const { return ___onFinish_0; }
	inline Action_t3226471752 ** get_address_of_onFinish_0() { return &___onFinish_0; }
	inline void set_onFinish_0(Action_t3226471752 * value)
	{
		___onFinish_0 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CdoSpinU3Ec__AnonStorey0_t1458326943, ___U24this_1)); }
	inline DailyBonusNew_t2304091542 * get_U24this_1() const { return ___U24this_1; }
	inline DailyBonusNew_t2304091542 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(DailyBonusNew_t2304091542 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
