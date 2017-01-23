#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// Spine.Skeleton
struct Skeleton_t1387859465;
// System.Collections.Generic.Dictionary`2<Spine.Bone,UnityEngine.Transform>
struct Dictionary_2_t3074612505;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// Spine.Bone
struct Bone_t4151268332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRagdoll2D
struct  SkeletonRagdoll2D_t3804842650  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Modules.SkeletonRagdoll2D::startingBoneName
	String_t* ___startingBoneName_3;
	// System.Collections.Generic.List`1<System.String> Spine.Unity.Modules.SkeletonRagdoll2D::stopBoneNames
	List_1_t1398341365 * ___stopBoneNames_4;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::applyOnStart
	bool ___applyOnStart_5;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::disableIK
	bool ___disableIK_6;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::disableOtherConstraints
	bool ___disableOtherConstraints_7;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::pinStartBone
	bool ___pinStartBone_8;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::gravityScale
	float ___gravityScale_9;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::thickness
	float ___thickness_10;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::rotationLimit
	float ___rotationLimit_11;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::rootMass
	float ___rootMass_12;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::massFalloffFactor
	float ___massFalloffFactor_13;
	// System.Int32 Spine.Unity.Modules.SkeletonRagdoll2D::colliderLayer
	int32_t ___colliderLayer_14;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::mix
	float ___mix_15;
	// Spine.Unity.ISkeletonAnimation Spine.Unity.Modules.SkeletonRagdoll2D::targetSkeletonComponent
	Il2CppObject * ___targetSkeletonComponent_16;
	// Spine.Skeleton Spine.Unity.Modules.SkeletonRagdoll2D::skeleton
	Skeleton_t1387859465 * ___skeleton_17;
	// System.Collections.Generic.Dictionary`2<Spine.Bone,UnityEngine.Transform> Spine.Unity.Modules.SkeletonRagdoll2D::boneTable
	Dictionary_2_t3074612505 * ___boneTable_18;
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonRagdoll2D::ragdollRoot
	Transform_t3275118058 * ___ragdollRoot_19;
	// UnityEngine.Rigidbody2D Spine.Unity.Modules.SkeletonRagdoll2D::<RootRigidbody>k__BackingField
	Rigidbody2D_t502193897 * ___U3CRootRigidbodyU3Ek__BackingField_20;
	// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll2D::<StartingBone>k__BackingField
	Bone_t4151268332 * ___U3CStartingBoneU3Ek__BackingField_21;
	// UnityEngine.Vector2 Spine.Unity.Modules.SkeletonRagdoll2D::rootOffset
	Vector2_t2243707579  ___rootOffset_22;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::isActive
	bool ___isActive_23;

public:
	inline static int32_t get_offset_of_startingBoneName_3() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___startingBoneName_3)); }
	inline String_t* get_startingBoneName_3() const { return ___startingBoneName_3; }
	inline String_t** get_address_of_startingBoneName_3() { return &___startingBoneName_3; }
	inline void set_startingBoneName_3(String_t* value)
	{
		___startingBoneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___startingBoneName_3, value);
	}

	inline static int32_t get_offset_of_stopBoneNames_4() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___stopBoneNames_4)); }
	inline List_1_t1398341365 * get_stopBoneNames_4() const { return ___stopBoneNames_4; }
	inline List_1_t1398341365 ** get_address_of_stopBoneNames_4() { return &___stopBoneNames_4; }
	inline void set_stopBoneNames_4(List_1_t1398341365 * value)
	{
		___stopBoneNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___stopBoneNames_4, value);
	}

	inline static int32_t get_offset_of_applyOnStart_5() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___applyOnStart_5)); }
	inline bool get_applyOnStart_5() const { return ___applyOnStart_5; }
	inline bool* get_address_of_applyOnStart_5() { return &___applyOnStart_5; }
	inline void set_applyOnStart_5(bool value)
	{
		___applyOnStart_5 = value;
	}

	inline static int32_t get_offset_of_disableIK_6() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___disableIK_6)); }
	inline bool get_disableIK_6() const { return ___disableIK_6; }
	inline bool* get_address_of_disableIK_6() { return &___disableIK_6; }
	inline void set_disableIK_6(bool value)
	{
		___disableIK_6 = value;
	}

	inline static int32_t get_offset_of_disableOtherConstraints_7() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___disableOtherConstraints_7)); }
	inline bool get_disableOtherConstraints_7() const { return ___disableOtherConstraints_7; }
	inline bool* get_address_of_disableOtherConstraints_7() { return &___disableOtherConstraints_7; }
	inline void set_disableOtherConstraints_7(bool value)
	{
		___disableOtherConstraints_7 = value;
	}

	inline static int32_t get_offset_of_pinStartBone_8() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___pinStartBone_8)); }
	inline bool get_pinStartBone_8() const { return ___pinStartBone_8; }
	inline bool* get_address_of_pinStartBone_8() { return &___pinStartBone_8; }
	inline void set_pinStartBone_8(bool value)
	{
		___pinStartBone_8 = value;
	}

	inline static int32_t get_offset_of_gravityScale_9() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___gravityScale_9)); }
	inline float get_gravityScale_9() const { return ___gravityScale_9; }
	inline float* get_address_of_gravityScale_9() { return &___gravityScale_9; }
	inline void set_gravityScale_9(float value)
	{
		___gravityScale_9 = value;
	}

	inline static int32_t get_offset_of_thickness_10() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___thickness_10)); }
	inline float get_thickness_10() const { return ___thickness_10; }
	inline float* get_address_of_thickness_10() { return &___thickness_10; }
	inline void set_thickness_10(float value)
	{
		___thickness_10 = value;
	}

	inline static int32_t get_offset_of_rotationLimit_11() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___rotationLimit_11)); }
	inline float get_rotationLimit_11() const { return ___rotationLimit_11; }
	inline float* get_address_of_rotationLimit_11() { return &___rotationLimit_11; }
	inline void set_rotationLimit_11(float value)
	{
		___rotationLimit_11 = value;
	}

	inline static int32_t get_offset_of_rootMass_12() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___rootMass_12)); }
	inline float get_rootMass_12() const { return ___rootMass_12; }
	inline float* get_address_of_rootMass_12() { return &___rootMass_12; }
	inline void set_rootMass_12(float value)
	{
		___rootMass_12 = value;
	}

	inline static int32_t get_offset_of_massFalloffFactor_13() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___massFalloffFactor_13)); }
	inline float get_massFalloffFactor_13() const { return ___massFalloffFactor_13; }
	inline float* get_address_of_massFalloffFactor_13() { return &___massFalloffFactor_13; }
	inline void set_massFalloffFactor_13(float value)
	{
		___massFalloffFactor_13 = value;
	}

	inline static int32_t get_offset_of_colliderLayer_14() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___colliderLayer_14)); }
	inline int32_t get_colliderLayer_14() const { return ___colliderLayer_14; }
	inline int32_t* get_address_of_colliderLayer_14() { return &___colliderLayer_14; }
	inline void set_colliderLayer_14(int32_t value)
	{
		___colliderLayer_14 = value;
	}

	inline static int32_t get_offset_of_mix_15() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___mix_15)); }
	inline float get_mix_15() const { return ___mix_15; }
	inline float* get_address_of_mix_15() { return &___mix_15; }
	inline void set_mix_15(float value)
	{
		___mix_15 = value;
	}

	inline static int32_t get_offset_of_targetSkeletonComponent_16() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___targetSkeletonComponent_16)); }
	inline Il2CppObject * get_targetSkeletonComponent_16() const { return ___targetSkeletonComponent_16; }
	inline Il2CppObject ** get_address_of_targetSkeletonComponent_16() { return &___targetSkeletonComponent_16; }
	inline void set_targetSkeletonComponent_16(Il2CppObject * value)
	{
		___targetSkeletonComponent_16 = value;
		Il2CppCodeGenWriteBarrier(&___targetSkeletonComponent_16, value);
	}

	inline static int32_t get_offset_of_skeleton_17() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___skeleton_17)); }
	inline Skeleton_t1387859465 * get_skeleton_17() const { return ___skeleton_17; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_17() { return &___skeleton_17; }
	inline void set_skeleton_17(Skeleton_t1387859465 * value)
	{
		___skeleton_17 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_17, value);
	}

	inline static int32_t get_offset_of_boneTable_18() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___boneTable_18)); }
	inline Dictionary_2_t3074612505 * get_boneTable_18() const { return ___boneTable_18; }
	inline Dictionary_2_t3074612505 ** get_address_of_boneTable_18() { return &___boneTable_18; }
	inline void set_boneTable_18(Dictionary_2_t3074612505 * value)
	{
		___boneTable_18 = value;
		Il2CppCodeGenWriteBarrier(&___boneTable_18, value);
	}

	inline static int32_t get_offset_of_ragdollRoot_19() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___ragdollRoot_19)); }
	inline Transform_t3275118058 * get_ragdollRoot_19() const { return ___ragdollRoot_19; }
	inline Transform_t3275118058 ** get_address_of_ragdollRoot_19() { return &___ragdollRoot_19; }
	inline void set_ragdollRoot_19(Transform_t3275118058 * value)
	{
		___ragdollRoot_19 = value;
		Il2CppCodeGenWriteBarrier(&___ragdollRoot_19, value);
	}

	inline static int32_t get_offset_of_U3CRootRigidbodyU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___U3CRootRigidbodyU3Ek__BackingField_20)); }
	inline Rigidbody2D_t502193897 * get_U3CRootRigidbodyU3Ek__BackingField_20() const { return ___U3CRootRigidbodyU3Ek__BackingField_20; }
	inline Rigidbody2D_t502193897 ** get_address_of_U3CRootRigidbodyU3Ek__BackingField_20() { return &___U3CRootRigidbodyU3Ek__BackingField_20; }
	inline void set_U3CRootRigidbodyU3Ek__BackingField_20(Rigidbody2D_t502193897 * value)
	{
		___U3CRootRigidbodyU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRootRigidbodyU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3CStartingBoneU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___U3CStartingBoneU3Ek__BackingField_21)); }
	inline Bone_t4151268332 * get_U3CStartingBoneU3Ek__BackingField_21() const { return ___U3CStartingBoneU3Ek__BackingField_21; }
	inline Bone_t4151268332 ** get_address_of_U3CStartingBoneU3Ek__BackingField_21() { return &___U3CStartingBoneU3Ek__BackingField_21; }
	inline void set_U3CStartingBoneU3Ek__BackingField_21(Bone_t4151268332 * value)
	{
		___U3CStartingBoneU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartingBoneU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_rootOffset_22() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___rootOffset_22)); }
	inline Vector2_t2243707579  get_rootOffset_22() const { return ___rootOffset_22; }
	inline Vector2_t2243707579 * get_address_of_rootOffset_22() { return &___rootOffset_22; }
	inline void set_rootOffset_22(Vector2_t2243707579  value)
	{
		___rootOffset_22 = value;
	}

	inline static int32_t get_offset_of_isActive_23() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650, ___isActive_23)); }
	inline bool get_isActive_23() const { return ___isActive_23; }
	inline bool* get_address_of_isActive_23() { return &___isActive_23; }
	inline void set_isActive_23(bool value)
	{
		___isActive_23 = value;
	}
};

struct SkeletonRagdoll2D_t3804842650_StaticFields
{
public:
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonRagdoll2D::parentSpaceHelper
	Transform_t3275118058 * ___parentSpaceHelper_2;

public:
	inline static int32_t get_offset_of_parentSpaceHelper_2() { return static_cast<int32_t>(offsetof(SkeletonRagdoll2D_t3804842650_StaticFields, ___parentSpaceHelper_2)); }
	inline Transform_t3275118058 * get_parentSpaceHelper_2() const { return ___parentSpaceHelper_2; }
	inline Transform_t3275118058 ** get_address_of_parentSpaceHelper_2() { return &___parentSpaceHelper_2; }
	inline void set_parentSpaceHelper_2(Transform_t3275118058 * value)
	{
		___parentSpaceHelper_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentSpaceHelper_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
