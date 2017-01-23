#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer2265953470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimation
struct  SkeletonAnimation_t1845683983  : public SkeletonRenderer_t2265953470
{
public:
	// Spine.AnimationState Spine.Unity.SkeletonAnimation::state
	AnimationState_t1491536497 * ___state_35;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateLocal
	UpdateBonesDelegate_t2937009411 * ____UpdateLocal_36;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateWorld
	UpdateBonesDelegate_t2937009411 * ____UpdateWorld_37;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimation::_UpdateComplete
	UpdateBonesDelegate_t2937009411 * ____UpdateComplete_38;
	// System.String Spine.Unity.SkeletonAnimation::_animationName
	String_t* ____animationName_39;
	// System.Boolean Spine.Unity.SkeletonAnimation::loop
	bool ___loop_40;
	// System.Single Spine.Unity.SkeletonAnimation::timeScale
	float ___timeScale_41;

public:
	inline static int32_t get_offset_of_state_35() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___state_35)); }
	inline AnimationState_t1491536497 * get_state_35() const { return ___state_35; }
	inline AnimationState_t1491536497 ** get_address_of_state_35() { return &___state_35; }
	inline void set_state_35(AnimationState_t1491536497 * value)
	{
		___state_35 = value;
		Il2CppCodeGenWriteBarrier(&___state_35, value);
	}

	inline static int32_t get_offset_of__UpdateLocal_36() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateLocal_36)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateLocal_36() const { return ____UpdateLocal_36; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateLocal_36() { return &____UpdateLocal_36; }
	inline void set__UpdateLocal_36(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateLocal_36 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_36, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_37() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateWorld_37)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateWorld_37() const { return ____UpdateWorld_37; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateWorld_37() { return &____UpdateWorld_37; }
	inline void set__UpdateWorld_37(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateWorld_37 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_37, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_38() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____UpdateComplete_38)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateComplete_38() const { return ____UpdateComplete_38; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateComplete_38() { return &____UpdateComplete_38; }
	inline void set__UpdateComplete_38(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateComplete_38 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_38, value);
	}

	inline static int32_t get_offset_of__animationName_39() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ____animationName_39)); }
	inline String_t* get__animationName_39() const { return ____animationName_39; }
	inline String_t** get_address_of__animationName_39() { return &____animationName_39; }
	inline void set__animationName_39(String_t* value)
	{
		____animationName_39 = value;
		Il2CppCodeGenWriteBarrier(&____animationName_39, value);
	}

	inline static int32_t get_offset_of_loop_40() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___loop_40)); }
	inline bool get_loop_40() const { return ___loop_40; }
	inline bool* get_address_of_loop_40() { return &___loop_40; }
	inline void set_loop_40(bool value)
	{
		___loop_40 = value;
	}

	inline static int32_t get_offset_of_timeScale_41() { return static_cast<int32_t>(offsetof(SkeletonAnimation_t1845683983, ___timeScale_41)); }
	inline float get_timeScale_41() const { return ___timeScale_41; }
	inline float* get_address_of_timeScale_41() { return &___timeScale_41; }
	inline void set_timeScale_41(float value)
	{
		___timeScale_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
