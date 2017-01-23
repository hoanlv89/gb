#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// System.String
struct String_t;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator
struct ISimpleMeshGenerator_t669325259;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonGraphic
struct  SkeletonGraphic_t2028984527  : public MaskableGraphic_t540192618
{
public:
	// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::skeletonDataAsset
	SkeletonDataAsset_t901153269 * ___skeletonDataAsset_28;
	// System.String Spine.Unity.SkeletonGraphic::initialSkinName
	String_t* ___initialSkinName_29;
	// System.String Spine.Unity.SkeletonGraphic::startingAnimation
	String_t* ___startingAnimation_30;
	// System.Boolean Spine.Unity.SkeletonGraphic::startingLoop
	bool ___startingLoop_31;
	// System.Single Spine.Unity.SkeletonGraphic::timeScale
	float ___timeScale_32;
	// System.Boolean Spine.Unity.SkeletonGraphic::freeze
	bool ___freeze_33;
	// System.Boolean Spine.Unity.SkeletonGraphic::unscaledTime
	bool ___unscaledTime_34;
	// Spine.Skeleton Spine.Unity.SkeletonGraphic::skeleton
	Skeleton_t1387859465 * ___skeleton_35;
	// Spine.AnimationState Spine.Unity.SkeletonGraphic::state
	AnimationState_t1491536497 * ___state_36;
	// Spine.Unity.MeshGeneration.ISimpleMeshGenerator Spine.Unity.SkeletonGraphic::spineMeshGenerator
	Il2CppObject * ___spineMeshGenerator_37;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateLocal
	UpdateBonesDelegate_t2937009411 * ___UpdateLocal_38;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateWorld
	UpdateBonesDelegate_t2937009411 * ___UpdateWorld_39;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonGraphic::UpdateComplete
	UpdateBonesDelegate_t2937009411 * ___UpdateComplete_40;

public:
	inline static int32_t get_offset_of_skeletonDataAsset_28() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___skeletonDataAsset_28)); }
	inline SkeletonDataAsset_t901153269 * get_skeletonDataAsset_28() const { return ___skeletonDataAsset_28; }
	inline SkeletonDataAsset_t901153269 ** get_address_of_skeletonDataAsset_28() { return &___skeletonDataAsset_28; }
	inline void set_skeletonDataAsset_28(SkeletonDataAsset_t901153269 * value)
	{
		___skeletonDataAsset_28 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonDataAsset_28, value);
	}

	inline static int32_t get_offset_of_initialSkinName_29() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___initialSkinName_29)); }
	inline String_t* get_initialSkinName_29() const { return ___initialSkinName_29; }
	inline String_t** get_address_of_initialSkinName_29() { return &___initialSkinName_29; }
	inline void set_initialSkinName_29(String_t* value)
	{
		___initialSkinName_29 = value;
		Il2CppCodeGenWriteBarrier(&___initialSkinName_29, value);
	}

	inline static int32_t get_offset_of_startingAnimation_30() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___startingAnimation_30)); }
	inline String_t* get_startingAnimation_30() const { return ___startingAnimation_30; }
	inline String_t** get_address_of_startingAnimation_30() { return &___startingAnimation_30; }
	inline void set_startingAnimation_30(String_t* value)
	{
		___startingAnimation_30 = value;
		Il2CppCodeGenWriteBarrier(&___startingAnimation_30, value);
	}

	inline static int32_t get_offset_of_startingLoop_31() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___startingLoop_31)); }
	inline bool get_startingLoop_31() const { return ___startingLoop_31; }
	inline bool* get_address_of_startingLoop_31() { return &___startingLoop_31; }
	inline void set_startingLoop_31(bool value)
	{
		___startingLoop_31 = value;
	}

	inline static int32_t get_offset_of_timeScale_32() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___timeScale_32)); }
	inline float get_timeScale_32() const { return ___timeScale_32; }
	inline float* get_address_of_timeScale_32() { return &___timeScale_32; }
	inline void set_timeScale_32(float value)
	{
		___timeScale_32 = value;
	}

	inline static int32_t get_offset_of_freeze_33() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___freeze_33)); }
	inline bool get_freeze_33() const { return ___freeze_33; }
	inline bool* get_address_of_freeze_33() { return &___freeze_33; }
	inline void set_freeze_33(bool value)
	{
		___freeze_33 = value;
	}

	inline static int32_t get_offset_of_unscaledTime_34() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___unscaledTime_34)); }
	inline bool get_unscaledTime_34() const { return ___unscaledTime_34; }
	inline bool* get_address_of_unscaledTime_34() { return &___unscaledTime_34; }
	inline void set_unscaledTime_34(bool value)
	{
		___unscaledTime_34 = value;
	}

	inline static int32_t get_offset_of_skeleton_35() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___skeleton_35)); }
	inline Skeleton_t1387859465 * get_skeleton_35() const { return ___skeleton_35; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_35() { return &___skeleton_35; }
	inline void set_skeleton_35(Skeleton_t1387859465 * value)
	{
		___skeleton_35 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_35, value);
	}

	inline static int32_t get_offset_of_state_36() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___state_36)); }
	inline AnimationState_t1491536497 * get_state_36() const { return ___state_36; }
	inline AnimationState_t1491536497 ** get_address_of_state_36() { return &___state_36; }
	inline void set_state_36(AnimationState_t1491536497 * value)
	{
		___state_36 = value;
		Il2CppCodeGenWriteBarrier(&___state_36, value);
	}

	inline static int32_t get_offset_of_spineMeshGenerator_37() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___spineMeshGenerator_37)); }
	inline Il2CppObject * get_spineMeshGenerator_37() const { return ___spineMeshGenerator_37; }
	inline Il2CppObject ** get_address_of_spineMeshGenerator_37() { return &___spineMeshGenerator_37; }
	inline void set_spineMeshGenerator_37(Il2CppObject * value)
	{
		___spineMeshGenerator_37 = value;
		Il2CppCodeGenWriteBarrier(&___spineMeshGenerator_37, value);
	}

	inline static int32_t get_offset_of_UpdateLocal_38() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateLocal_38)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateLocal_38() const { return ___UpdateLocal_38; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateLocal_38() { return &___UpdateLocal_38; }
	inline void set_UpdateLocal_38(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateLocal_38 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateLocal_38, value);
	}

	inline static int32_t get_offset_of_UpdateWorld_39() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateWorld_39)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateWorld_39() const { return ___UpdateWorld_39; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateWorld_39() { return &___UpdateWorld_39; }
	inline void set_UpdateWorld_39(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateWorld_39 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateWorld_39, value);
	}

	inline static int32_t get_offset_of_UpdateComplete_40() { return static_cast<int32_t>(offsetof(SkeletonGraphic_t2028984527, ___UpdateComplete_40)); }
	inline UpdateBonesDelegate_t2937009411 * get_UpdateComplete_40() const { return ___UpdateComplete_40; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of_UpdateComplete_40() { return &___UpdateComplete_40; }
	inline void set_UpdateComplete_40(UpdateBonesDelegate_t2937009411 * value)
	{
		___UpdateComplete_40 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateComplete_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
