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
// Spine.Unity.SkeletonAnimation
struct SkeletonAnimation_t1845683983;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.SpineBeginnerTwo
struct  SpineBeginnerTwo_t3087270609  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Examples.SpineBeginnerTwo::runAnimationName
	String_t* ___runAnimationName_2;
	// System.String Spine.Unity.Examples.SpineBeginnerTwo::idleAnimationName
	String_t* ___idleAnimationName_3;
	// System.String Spine.Unity.Examples.SpineBeginnerTwo::walkAnimationName
	String_t* ___walkAnimationName_4;
	// System.String Spine.Unity.Examples.SpineBeginnerTwo::shootAnimationName
	String_t* ___shootAnimationName_5;
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.SpineBeginnerTwo::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_6;
	// Spine.AnimationState Spine.Unity.Examples.SpineBeginnerTwo::spineAnimationState
	AnimationState_t1491536497 * ___spineAnimationState_7;
	// Spine.Skeleton Spine.Unity.Examples.SpineBeginnerTwo::skeleton
	Skeleton_t1387859465 * ___skeleton_8;

public:
	inline static int32_t get_offset_of_runAnimationName_2() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___runAnimationName_2)); }
	inline String_t* get_runAnimationName_2() const { return ___runAnimationName_2; }
	inline String_t** get_address_of_runAnimationName_2() { return &___runAnimationName_2; }
	inline void set_runAnimationName_2(String_t* value)
	{
		___runAnimationName_2 = value;
		Il2CppCodeGenWriteBarrier(&___runAnimationName_2, value);
	}

	inline static int32_t get_offset_of_idleAnimationName_3() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___idleAnimationName_3)); }
	inline String_t* get_idleAnimationName_3() const { return ___idleAnimationName_3; }
	inline String_t** get_address_of_idleAnimationName_3() { return &___idleAnimationName_3; }
	inline void set_idleAnimationName_3(String_t* value)
	{
		___idleAnimationName_3 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimationName_3, value);
	}

	inline static int32_t get_offset_of_walkAnimationName_4() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___walkAnimationName_4)); }
	inline String_t* get_walkAnimationName_4() const { return ___walkAnimationName_4; }
	inline String_t** get_address_of_walkAnimationName_4() { return &___walkAnimationName_4; }
	inline void set_walkAnimationName_4(String_t* value)
	{
		___walkAnimationName_4 = value;
		Il2CppCodeGenWriteBarrier(&___walkAnimationName_4, value);
	}

	inline static int32_t get_offset_of_shootAnimationName_5() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___shootAnimationName_5)); }
	inline String_t* get_shootAnimationName_5() const { return ___shootAnimationName_5; }
	inline String_t** get_address_of_shootAnimationName_5() { return &___shootAnimationName_5; }
	inline void set_shootAnimationName_5(String_t* value)
	{
		___shootAnimationName_5 = value;
		Il2CppCodeGenWriteBarrier(&___shootAnimationName_5, value);
	}

	inline static int32_t get_offset_of_skeletonAnimation_6() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___skeletonAnimation_6)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_6() const { return ___skeletonAnimation_6; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_6() { return &___skeletonAnimation_6; }
	inline void set_skeletonAnimation_6(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_6, value);
	}

	inline static int32_t get_offset_of_spineAnimationState_7() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___spineAnimationState_7)); }
	inline AnimationState_t1491536497 * get_spineAnimationState_7() const { return ___spineAnimationState_7; }
	inline AnimationState_t1491536497 ** get_address_of_spineAnimationState_7() { return &___spineAnimationState_7; }
	inline void set_spineAnimationState_7(AnimationState_t1491536497 * value)
	{
		___spineAnimationState_7 = value;
		Il2CppCodeGenWriteBarrier(&___spineAnimationState_7, value);
	}

	inline static int32_t get_offset_of_skeleton_8() { return static_cast<int32_t>(offsetof(SpineBeginnerTwo_t3087270609, ___skeleton_8)); }
	inline Skeleton_t1387859465 * get_skeleton_8() const { return ___skeleton_8; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_8() { return &___skeleton_8; }
	inline void set_skeleton_8(Skeleton_t1387859465 * value)
	{
		___skeleton_8 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
