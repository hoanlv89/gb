#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ReplayController
struct ReplayController_t4058236085;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_TimeSpan3430258949.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReplayController/<handleNextEvent>c__AnonStorey0
struct  U3ChandleNextEventU3Ec__AnonStorey0_t2231148890  : public Il2CppObject
{
public:
	// System.TimeSpan ReplayController/<handleNextEvent>c__AnonStorey0::currentTimeSpan
	TimeSpan_t3430258949  ___currentTimeSpan_0;
	// ReplayController ReplayController/<handleNextEvent>c__AnonStorey0::$this
	ReplayController_t4058236085 * ___U24this_1;

public:
	inline static int32_t get_offset_of_currentTimeSpan_0() { return static_cast<int32_t>(offsetof(U3ChandleNextEventU3Ec__AnonStorey0_t2231148890, ___currentTimeSpan_0)); }
	inline TimeSpan_t3430258949  get_currentTimeSpan_0() const { return ___currentTimeSpan_0; }
	inline TimeSpan_t3430258949 * get_address_of_currentTimeSpan_0() { return &___currentTimeSpan_0; }
	inline void set_currentTimeSpan_0(TimeSpan_t3430258949  value)
	{
		___currentTimeSpan_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3ChandleNextEventU3Ec__AnonStorey0_t2231148890, ___U24this_1)); }
	inline ReplayController_t4058236085 * get_U24this_1() const { return ___U24this_1; }
	inline ReplayController_t4058236085 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ReplayController_t4058236085 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
