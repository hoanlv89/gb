#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t1082253919;
// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t122738797;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonUtilityConstraint
struct  SkeletonUtilityConstraint_t1397591976  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonUtilityBone Spine.Unity.SkeletonUtilityConstraint::utilBone
	SkeletonUtilityBone_t1082253919 * ___utilBone_2;
	// Spine.Unity.SkeletonUtility Spine.Unity.SkeletonUtilityConstraint::skeletonUtility
	SkeletonUtility_t122738797 * ___skeletonUtility_3;

public:
	inline static int32_t get_offset_of_utilBone_2() { return static_cast<int32_t>(offsetof(SkeletonUtilityConstraint_t1397591976, ___utilBone_2)); }
	inline SkeletonUtilityBone_t1082253919 * get_utilBone_2() const { return ___utilBone_2; }
	inline SkeletonUtilityBone_t1082253919 ** get_address_of_utilBone_2() { return &___utilBone_2; }
	inline void set_utilBone_2(SkeletonUtilityBone_t1082253919 * value)
	{
		___utilBone_2 = value;
		Il2CppCodeGenWriteBarrier(&___utilBone_2, value);
	}

	inline static int32_t get_offset_of_skeletonUtility_3() { return static_cast<int32_t>(offsetof(SkeletonUtilityConstraint_t1397591976, ___skeletonUtility_3)); }
	inline SkeletonUtility_t122738797 * get_skeletonUtility_3() const { return ___skeletonUtility_3; }
	inline SkeletonUtility_t122738797 ** get_address_of_skeletonUtility_3() { return &___skeletonUtility_3; }
	inline void set_skeletonUtility_3(SkeletonUtility_t122738797 * value)
	{
		___skeletonUtility_3 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonUtility_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
