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
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Animation
struct Animation_t4237671184;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.SpineGauge
struct  SpineGauge_t1350063658  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Spine.Unity.Examples.SpineGauge::fillPercent
	float ___fillPercent_2;
	// System.String Spine.Unity.Examples.SpineGauge::fillAnimationName
	String_t* ___fillAnimationName_3;
	// Spine.Unity.SkeletonRenderer Spine.Unity.Examples.SpineGauge::skeletonRenderer
	SkeletonRenderer_t2265953470 * ___skeletonRenderer_4;
	// Spine.Animation Spine.Unity.Examples.SpineGauge::fillAnimation
	Animation_t4237671184 * ___fillAnimation_5;

public:
	inline static int32_t get_offset_of_fillPercent_2() { return static_cast<int32_t>(offsetof(SpineGauge_t1350063658, ___fillPercent_2)); }
	inline float get_fillPercent_2() const { return ___fillPercent_2; }
	inline float* get_address_of_fillPercent_2() { return &___fillPercent_2; }
	inline void set_fillPercent_2(float value)
	{
		___fillPercent_2 = value;
	}

	inline static int32_t get_offset_of_fillAnimationName_3() { return static_cast<int32_t>(offsetof(SpineGauge_t1350063658, ___fillAnimationName_3)); }
	inline String_t* get_fillAnimationName_3() const { return ___fillAnimationName_3; }
	inline String_t** get_address_of_fillAnimationName_3() { return &___fillAnimationName_3; }
	inline void set_fillAnimationName_3(String_t* value)
	{
		___fillAnimationName_3 = value;
		Il2CppCodeGenWriteBarrier(&___fillAnimationName_3, value);
	}

	inline static int32_t get_offset_of_skeletonRenderer_4() { return static_cast<int32_t>(offsetof(SpineGauge_t1350063658, ___skeletonRenderer_4)); }
	inline SkeletonRenderer_t2265953470 * get_skeletonRenderer_4() const { return ___skeletonRenderer_4; }
	inline SkeletonRenderer_t2265953470 ** get_address_of_skeletonRenderer_4() { return &___skeletonRenderer_4; }
	inline void set_skeletonRenderer_4(SkeletonRenderer_t2265953470 * value)
	{
		___skeletonRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonRenderer_4, value);
	}

	inline static int32_t get_offset_of_fillAnimation_5() { return static_cast<int32_t>(offsetof(SpineGauge_t1350063658, ___fillAnimation_5)); }
	inline Animation_t4237671184 * get_fillAnimation_5() const { return ___fillAnimation_5; }
	inline Animation_t4237671184 ** get_address_of_fillAnimation_5() { return &___fillAnimation_5; }
	inline void set_fillAnimation_5(Animation_t4237671184 * value)
	{
		___fillAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___fillAnimation_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
