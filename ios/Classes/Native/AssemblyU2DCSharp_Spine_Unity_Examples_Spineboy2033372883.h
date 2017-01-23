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
// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.Spineboy
struct  Spineboy_t2033372883  : public MonoBehaviour_t1158329972
{
public:
	// Spine.Unity.SkeletonAnimation Spine.Unity.Examples.Spineboy::skeletonAnimation
	SkeletonAnimation_t1845683983 * ___skeletonAnimation_2;

public:
	inline static int32_t get_offset_of_skeletonAnimation_2() { return static_cast<int32_t>(offsetof(Spineboy_t2033372883, ___skeletonAnimation_2)); }
	inline SkeletonAnimation_t1845683983 * get_skeletonAnimation_2() const { return ___skeletonAnimation_2; }
	inline SkeletonAnimation_t1845683983 ** get_address_of_skeletonAnimation_2() { return &___skeletonAnimation_2; }
	inline void set_skeletonAnimation_2(SkeletonAnimation_t1845683983 * value)
	{
		___skeletonAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonAnimation_2, value);
	}
};

struct Spineboy_t2033372883_StaticFields
{
public:
	// Spine.AnimationState/TrackEntryDelegate Spine.Unity.Examples.Spineboy::<>f__am$cache0
	TrackEntryDelegate_t737668607 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(Spineboy_t2033372883_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline TrackEntryDelegate_t737668607 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline TrackEntryDelegate_t737668607 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(TrackEntryDelegate_t737668607 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
