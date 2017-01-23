#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// Spine.Unity.Modules.SkeletonRenderSeparator
struct SkeletonRenderSeparator_t1604422724;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.SpineboyPole
struct  SpineboyPole_t2014951161  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.SpineboyPole::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_2;
	// Spine.Unity.Modules.SkeletonRenderSeparator Spine.Unity.Examples.SpineboyPole::separator
	SkeletonRenderSeparator_t1604422724 * ___separator_3;
	// System.String Spine.Unity.Examples.SpineboyPole::run
	String_t* ___run_4;
	// System.String Spine.Unity.Examples.SpineboyPole::pole
	String_t* ___pole_5;
	// System.Single Spine.Unity.Examples.SpineboyPole::startX
	float ___startX_6;
	// System.Single Spine.Unity.Examples.SpineboyPole::endX
	float ___endX_7;

public:
	inline static int32_t get_offset_of_skeletonAnimation_2() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___skeletonAnimation_2)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_2() const { return ___skeletonAnimation_2; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_2() { return &___skeletonAnimation_2; }
	inline void set_skeletonAnimation_2(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_2, value);
	}

	inline static int32_t get_offset_of_separator_3() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___separator_3)); }
	inline SkeletonRenderSeparator_t1604422724 * get_separator_3() const { return ___separator_3; }
	inline SkeletonRenderSeparator_t1604422724 ** get_address_of_separator_3() { return &___separator_3; }
	inline void set_separator_3(SkeletonRenderSeparator_t1604422724 * value)
	{
		___separator_3 = value;
		Il2CppCodeGenWriteBarrier(&___separator_3, value);
	}

	inline static int32_t get_offset_of_run_4() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___run_4)); }
	inline String_t* get_run_4() const { return ___run_4; }
	inline String_t** get_address_of_run_4() { return &___run_4; }
	inline void set_run_4(String_t* value)
	{
		___run_4 = value;
		Il2CppCodeGenWriteBarrier(&___run_4, value);
	}

	inline static int32_t get_offset_of_pole_5() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___pole_5)); }
	inline String_t* get_pole_5() const { return ___pole_5; }
	inline String_t** get_address_of_pole_5() { return &___pole_5; }
	inline void set_pole_5(String_t* value)
	{
		___pole_5 = value;
		Il2CppCodeGenWriteBarrier(&___pole_5, value);
	}

	inline static int32_t get_offset_of_startX_6() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___startX_6)); }
	inline float get_startX_6() const { return ___startX_6; }
	inline float* get_address_of_startX_6() { return &___startX_6; }
	inline void set_startX_6(float value)
	{
		___startX_6 = value;
	}

	inline static int32_t get_offset_of_endX_7() { return static_cast<int32_t>(offsetof(SpineboyPole_t2014951161, ___endX_7)); }
	inline float get_endX_7() const { return ___endX_7; }
	inline float* get_address_of_endX_7() { return &___endX_7; }
	inline void set_endX_7(float value)
	{
		___endX_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
