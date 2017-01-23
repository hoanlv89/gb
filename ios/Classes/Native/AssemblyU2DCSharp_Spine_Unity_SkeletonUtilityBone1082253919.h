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
// UnityEngine.Transform
struct Transform_t3275118058;
// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t122738797;
// Spine.Bone
struct Bone_t4151268332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone_3330739987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.SkeletonUtilityBone
struct  SkeletonUtilityBone_t1082253919  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.SkeletonUtilityBone::boneName
	String_t* ___boneName_2;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::parentReference
	Transform_t3275118058 * ___parentReference_3;
	// Spine.Unity.SkeletonUtilityBone/Mode Spine.Unity.SkeletonUtilityBone::mode
	int32_t ___mode_4;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::position
	bool ___position_5;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::rotation
	bool ___rotation_6;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::scale
	bool ___scale_7;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::zPosition
	bool ___zPosition_8;
	// System.Single Spine.Unity.SkeletonUtilityBone::overrideAlpha
	float ___overrideAlpha_9;
	// Spine.Unity.SkeletonUtility Spine.Unity.SkeletonUtilityBone::skeletonUtility
	SkeletonUtility_t122738797 * ___skeletonUtility_10;
	// Spine.Bone Spine.Unity.SkeletonUtilityBone::bone
	Bone_t4151268332 * ___bone_11;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::transformLerpComplete
	bool ___transformLerpComplete_12;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::valid
	bool ___valid_13;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::cachedTransform
	Transform_t3275118058 * ___cachedTransform_14;
	// UnityEngine.Transform Spine.Unity.SkeletonUtilityBone::skeletonTransform
	Transform_t3275118058 * ___skeletonTransform_15;
	// System.Boolean Spine.Unity.SkeletonUtilityBone::incompatibleTransformMode
	bool ___incompatibleTransformMode_16;

public:
	inline static int32_t get_offset_of_boneName_2() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___boneName_2)); }
	inline String_t* get_boneName_2() const { return ___boneName_2; }
	inline String_t** get_address_of_boneName_2() { return &___boneName_2; }
	inline void set_boneName_2(String_t* value)
	{
		___boneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___boneName_2, value);
	}

	inline static int32_t get_offset_of_parentReference_3() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___parentReference_3)); }
	inline Transform_t3275118058 * get_parentReference_3() const { return ___parentReference_3; }
	inline Transform_t3275118058 ** get_address_of_parentReference_3() { return &___parentReference_3; }
	inline void set_parentReference_3(Transform_t3275118058 * value)
	{
		___parentReference_3 = value;
		Il2CppCodeGenWriteBarrier(&___parentReference_3, value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___position_5)); }
	inline bool get_position_5() const { return ___position_5; }
	inline bool* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(bool value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___rotation_6)); }
	inline bool get_rotation_6() const { return ___rotation_6; }
	inline bool* get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(bool value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___scale_7)); }
	inline bool get_scale_7() const { return ___scale_7; }
	inline bool* get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(bool value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_zPosition_8() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___zPosition_8)); }
	inline bool get_zPosition_8() const { return ___zPosition_8; }
	inline bool* get_address_of_zPosition_8() { return &___zPosition_8; }
	inline void set_zPosition_8(bool value)
	{
		___zPosition_8 = value;
	}

	inline static int32_t get_offset_of_overrideAlpha_9() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___overrideAlpha_9)); }
	inline float get_overrideAlpha_9() const { return ___overrideAlpha_9; }
	inline float* get_address_of_overrideAlpha_9() { return &___overrideAlpha_9; }
	inline void set_overrideAlpha_9(float value)
	{
		___overrideAlpha_9 = value;
	}

	inline static int32_t get_offset_of_skeletonUtility_10() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___skeletonUtility_10)); }
	inline SkeletonUtility_t122738797 * get_skeletonUtility_10() const { return ___skeletonUtility_10; }
	inline SkeletonUtility_t122738797 ** get_address_of_skeletonUtility_10() { return &___skeletonUtility_10; }
	inline void set_skeletonUtility_10(SkeletonUtility_t122738797 * value)
	{
		___skeletonUtility_10 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonUtility_10, value);
	}

	inline static int32_t get_offset_of_bone_11() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___bone_11)); }
	inline Bone_t4151268332 * get_bone_11() const { return ___bone_11; }
	inline Bone_t4151268332 ** get_address_of_bone_11() { return &___bone_11; }
	inline void set_bone_11(Bone_t4151268332 * value)
	{
		___bone_11 = value;
		Il2CppCodeGenWriteBarrier(&___bone_11, value);
	}

	inline static int32_t get_offset_of_transformLerpComplete_12() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___transformLerpComplete_12)); }
	inline bool get_transformLerpComplete_12() const { return ___transformLerpComplete_12; }
	inline bool* get_address_of_transformLerpComplete_12() { return &___transformLerpComplete_12; }
	inline void set_transformLerpComplete_12(bool value)
	{
		___transformLerpComplete_12 = value;
	}

	inline static int32_t get_offset_of_valid_13() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___valid_13)); }
	inline bool get_valid_13() const { return ___valid_13; }
	inline bool* get_address_of_valid_13() { return &___valid_13; }
	inline void set_valid_13(bool value)
	{
		___valid_13 = value;
	}

	inline static int32_t get_offset_of_cachedTransform_14() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___cachedTransform_14)); }
	inline Transform_t3275118058 * get_cachedTransform_14() const { return ___cachedTransform_14; }
	inline Transform_t3275118058 ** get_address_of_cachedTransform_14() { return &___cachedTransform_14; }
	inline void set_cachedTransform_14(Transform_t3275118058 * value)
	{
		___cachedTransform_14 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_14, value);
	}

	inline static int32_t get_offset_of_skeletonTransform_15() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___skeletonTransform_15)); }
	inline Transform_t3275118058 * get_skeletonTransform_15() const { return ___skeletonTransform_15; }
	inline Transform_t3275118058 ** get_address_of_skeletonTransform_15() { return &___skeletonTransform_15; }
	inline void set_skeletonTransform_15(Transform_t3275118058 * value)
	{
		___skeletonTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&___skeletonTransform_15, value);
	}

	inline static int32_t get_offset_of_incompatibleTransformMode_16() { return static_cast<int32_t>(offsetof(SkeletonUtilityBone_t1082253919, ___incompatibleTransformMode_16)); }
	inline bool get_incompatibleTransformMode_16() const { return ___incompatibleTransformMode_16; }
	inline bool* get_address_of_incompatibleTransformMode_16() { return &___incompatibleTransformMode_16; }
	inline void set_incompatibleTransformMode_16(bool value)
	{
		___incompatibleTransformMode_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
