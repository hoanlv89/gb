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
// Spine.Bone
struct Bone_t4151268332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.Goblins
struct  Goblins_t2834387960  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.Goblins::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_2;
	// Spine.Bone Spine.Unity.Examples.Goblins::headBone
	Bone_t4151268332 * ___headBone_3;
	// System.Boolean Spine.Unity.Examples.Goblins::girlSkin
	bool ___girlSkin_4;
	// System.Single Spine.Unity.Examples.Goblins::extraRotation
	float ___extraRotation_5;

public:
	inline static int32_t get_offset_of_skeletonAnimation_2() { return static_cast<int32_t>(offsetof(Goblins_t2834387960, ___skeletonAnimation_2)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_2() const { return ___skeletonAnimation_2; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_2() { return &___skeletonAnimation_2; }
	inline void set_skeletonAnimation_2(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_2, value);
	}

	inline static int32_t get_offset_of_headBone_3() { return static_cast<int32_t>(offsetof(Goblins_t2834387960, ___headBone_3)); }
	inline Bone_t4151268332 * get_headBone_3() const { return ___headBone_3; }
	inline Bone_t4151268332 ** get_address_of_headBone_3() { return &___headBone_3; }
	inline void set_headBone_3(Bone_t4151268332 * value)
	{
		___headBone_3 = value;
		Il2CppCodeGenWriteBarrier(&___headBone_3, value);
	}

	inline static int32_t get_offset_of_girlSkin_4() { return static_cast<int32_t>(offsetof(Goblins_t2834387960, ___girlSkin_4)); }
	inline bool get_girlSkin_4() const { return ___girlSkin_4; }
	inline bool* get_address_of_girlSkin_4() { return &___girlSkin_4; }
	inline void set_girlSkin_4(bool value)
	{
		___girlSkin_4 = value;
	}

	inline static int32_t get_offset_of_extraRotation_5() { return static_cast<int32_t>(offsetof(Goblins_t2834387960, ___extraRotation_5)); }
	inline float get_extraRotation_5() const { return ___extraRotation_5; }
	inline float* get_address_of_extraRotation_5() { return &___extraRotation_5; }
	inline void set_extraRotation_5(float value)
	{
		___extraRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
