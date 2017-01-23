#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spine.Unity.SkeletonAnimator/MixMode[]
struct MixModeU5BU5D_t3972352711;
// System.Collections.Generic.List`1<Spine.Animation>
struct List_1_t3606792316;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;
// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation>
struct Dictionary_2_t3245496819;
// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32>
struct Dictionary_2_t1985386661;
// UnityEngine.Animator
struct Animator_t69676727;

#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer2265953470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonAnimator
struct  SkeletonAnimator_t107094416  : public SkeletonRenderer_t2265953470
{
public:
	// Spine.Unity.SkeletonAnimator/MixMode[] Spine.Unity.SkeletonAnimator::layerMixModes
	MixModeU5BU5D_t3972352711* ___layerMixModes_35;
	// System.Boolean Spine.Unity.SkeletonAnimator::autoReset
	bool ___autoReset_36;
	// System.Collections.Generic.List`1<Spine.Animation> Spine.Unity.SkeletonAnimator::previousAnimations
	List_1_t3606792316 * ___previousAnimations_37;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateLocal
	UpdateBonesDelegate_t2937009411 * ____UpdateLocal_38;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateWorld
	UpdateBonesDelegate_t2937009411 * ____UpdateWorld_39;
	// Spine.Unity.UpdateBonesDelegate Spine.Unity.SkeletonAnimator::_UpdateComplete
	UpdateBonesDelegate_t2937009411 * ____UpdateComplete_40;
	// System.Collections.Generic.Dictionary`2<System.Int32,Spine.Animation> Spine.Unity.SkeletonAnimator::animationTable
	Dictionary_2_t3245496819 * ___animationTable_41;
	// System.Collections.Generic.Dictionary`2<UnityEngine.AnimationClip,System.Int32> Spine.Unity.SkeletonAnimator::clipNameHashCodeTable
	Dictionary_2_t1985386661 * ___clipNameHashCodeTable_42;
	// UnityEngine.Animator Spine.Unity.SkeletonAnimator::animator
	Animator_t69676727 * ___animator_43;

public:
	inline static int32_t get_offset_of_layerMixModes_35() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___layerMixModes_35)); }
	inline MixModeU5BU5D_t3972352711* get_layerMixModes_35() const { return ___layerMixModes_35; }
	inline MixModeU5BU5D_t3972352711** get_address_of_layerMixModes_35() { return &___layerMixModes_35; }
	inline void set_layerMixModes_35(MixModeU5BU5D_t3972352711* value)
	{
		___layerMixModes_35 = value;
		Il2CppCodeGenWriteBarrier(&___layerMixModes_35, value);
	}

	inline static int32_t get_offset_of_autoReset_36() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___autoReset_36)); }
	inline bool get_autoReset_36() const { return ___autoReset_36; }
	inline bool* get_address_of_autoReset_36() { return &___autoReset_36; }
	inline void set_autoReset_36(bool value)
	{
		___autoReset_36 = value;
	}

	inline static int32_t get_offset_of_previousAnimations_37() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___previousAnimations_37)); }
	inline List_1_t3606792316 * get_previousAnimations_37() const { return ___previousAnimations_37; }
	inline List_1_t3606792316 ** get_address_of_previousAnimations_37() { return &___previousAnimations_37; }
	inline void set_previousAnimations_37(List_1_t3606792316 * value)
	{
		___previousAnimations_37 = value;
		Il2CppCodeGenWriteBarrier(&___previousAnimations_37, value);
	}

	inline static int32_t get_offset_of__UpdateLocal_38() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateLocal_38)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateLocal_38() const { return ____UpdateLocal_38; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateLocal_38() { return &____UpdateLocal_38; }
	inline void set__UpdateLocal_38(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateLocal_38 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateLocal_38, value);
	}

	inline static int32_t get_offset_of__UpdateWorld_39() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateWorld_39)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateWorld_39() const { return ____UpdateWorld_39; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateWorld_39() { return &____UpdateWorld_39; }
	inline void set__UpdateWorld_39(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateWorld_39 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateWorld_39, value);
	}

	inline static int32_t get_offset_of__UpdateComplete_40() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ____UpdateComplete_40)); }
	inline UpdateBonesDelegate_t2937009411 * get__UpdateComplete_40() const { return ____UpdateComplete_40; }
	inline UpdateBonesDelegate_t2937009411 ** get_address_of__UpdateComplete_40() { return &____UpdateComplete_40; }
	inline void set__UpdateComplete_40(UpdateBonesDelegate_t2937009411 * value)
	{
		____UpdateComplete_40 = value;
		Il2CppCodeGenWriteBarrier(&____UpdateComplete_40, value);
	}

	inline static int32_t get_offset_of_animationTable_41() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___animationTable_41)); }
	inline Dictionary_2_t3245496819 * get_animationTable_41() const { return ___animationTable_41; }
	inline Dictionary_2_t3245496819 ** get_address_of_animationTable_41() { return &___animationTable_41; }
	inline void set_animationTable_41(Dictionary_2_t3245496819 * value)
	{
		___animationTable_41 = value;
		Il2CppCodeGenWriteBarrier(&___animationTable_41, value);
	}

	inline static int32_t get_offset_of_clipNameHashCodeTable_42() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___clipNameHashCodeTable_42)); }
	inline Dictionary_2_t1985386661 * get_clipNameHashCodeTable_42() const { return ___clipNameHashCodeTable_42; }
	inline Dictionary_2_t1985386661 ** get_address_of_clipNameHashCodeTable_42() { return &___clipNameHashCodeTable_42; }
	inline void set_clipNameHashCodeTable_42(Dictionary_2_t1985386661 * value)
	{
		___clipNameHashCodeTable_42 = value;
		Il2CppCodeGenWriteBarrier(&___clipNameHashCodeTable_42, value);
	}

	inline static int32_t get_offset_of_animator_43() { return static_cast<int32_t>(offsetof(SkeletonAnimator_t107094416, ___animator_43)); }
	inline Animator_t69676727 * get_animator_43() const { return ___animator_43; }
	inline Animator_t69676727 ** get_address_of_animator_43() { return &___animator_43; }
	inline void set_animator_43(Animator_t69676727 * value)
	{
		___animator_43 = value;
		Il2CppCodeGenWriteBarrier(&___animator_43, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
