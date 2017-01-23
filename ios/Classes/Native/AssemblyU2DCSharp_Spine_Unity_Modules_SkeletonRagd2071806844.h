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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Spine.Bone
struct Bone_t4151268332;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Modules.SkeletonRagdoll
struct  SkeletonRagdoll_t2071806844  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Modules.SkeletonRagdoll::startingBoneName
	String_t* ___startingBoneName_3;
	// System.Collections.Generic.List`1<System.String> Spine.Unity.Modules.SkeletonRagdoll::stopBoneNames
	List_1_t1398341365 * ___stopBoneNames_4;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::applyOnStart
	bool ___applyOnStart_5;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::disableIK
	bool ___disableIK_6;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::disableOtherConstraints
	bool ___disableOtherConstraints_7;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::pinStartBone
	bool ___pinStartBone_8;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::enableJointCollision
	bool ___enableJointCollision_9;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::useGravity
	bool ___useGravity_10;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll::thickness
	float ___thickness_11;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll::rotationLimit
	float ___rotationLimit_12;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll::rootMass
	float ___rootMass_13;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll::massFalloffFactor
	float ___massFalloffFactor_14;
	// System.Int32 Spine.Unity.Modules.SkeletonRagdoll::colliderLayer
	int32_t ___colliderLayer_15;
	// System.Single Spine.Unity.Modules.SkeletonRagdoll::mix
	float ___mix_16;
	// Spine.Unity.ISkeletonAnimation Spine.Unity.Modules.SkeletonRagdoll::targetSkeletonComponent
	Il2CppObject * ___targetSkeletonComponent_17;
	// Spine.Skeleton Spine.Unity.Modules.SkeletonRagdoll::skeleton
	Skeleton_t1387859465 * ___skeleton_18;
	// System.Collections.Generic.Dictionary`2<Spine.Bone,UnityEngine.Transform> Spine.Unity.Modules.SkeletonRagdoll::boneTable
	Dictionary_2_t3074612505 * ___boneTable_19;
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonRagdoll::ragdollRoot
	Transform_t3275118058 * ___ragdollRoot_20;
	// UnityEngine.Rigidbody Spine.Unity.Modules.SkeletonRagdoll::<RootRigidbody>k__BackingField
	Rigidbody_t4233889191 * ___U3CRootRigidbodyU3Ek__BackingField_21;
	// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll::<StartingBone>k__BackingField
	Bone_t4151268332 * ___U3CStartingBoneU3Ek__BackingField_22;
	// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll::rootOffset
	Vector3_t2243707580  ___rootOffset_23;
	// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::isActive
	bool ___isActive_24;

public:
	inline static int32_t get_offset_of_startingBoneName_3() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___startingBoneName_3)); }
	inline String_t* get_startingBoneName_3() const { return ___startingBoneName_3; }
	inline String_t** get_address_of_startingBoneName_3() { return &___startingBoneName_3; }
	inline void set_startingBoneName_3(String_t* value)
	{
		___startingBoneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___startingBoneName_3, value);
	}

	inline static int32_t get_offset_of_stopBoneNames_4() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___stopBoneNames_4)); }
	inline List_1_t1398341365 * get_stopBoneNames_4() const { return ___stopBoneNames_4; }
	inline List_1_t1398341365 ** get_address_of_stopBoneNames_4() { return &___stopBoneNames_4; }
	inline void set_stopBoneNames_4(List_1_t1398341365 * value)
	{
		___stopBoneNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___stopBoneNames_4, value);
	}

	inline static int32_t get_offset_of_applyOnStart_5() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___applyOnStart_5)); }
	inline bool get_applyOnStart_5() const { return ___applyOnStart_5; }
	inline bool* get_address_of_applyOnStart_5() { return &___applyOnStart_5; }
	inline void set_applyOnStart_5(bool value)
	{
		___applyOnStart_5 = value;
	}

	inline static int32_t get_offset_of_disableIK_6() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___disableIK_6)); }
	inline bool get_disableIK_6() const { return ___disableIK_6; }
	inline bool* get_address_of_disableIK_6() { return &___disableIK_6; }
	inline void set_disableIK_6(bool value)
	{
		___disableIK_6 = value;
	}

	inline static int32_t get_offset_of_disableOtherConstraints_7() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___disableOtherConstraints_7)); }
	inline bool get_disableOtherConstraints_7() const { return ___disableOtherConstraints_7; }
	inline bool* get_address_of_disableOtherConstraints_7() { return &___disableOtherConstraints_7; }
	inline void set_disableOtherConstraints_7(bool value)
	{
		___disableOtherConstraints_7 = value;
	}

	inline static int32_t get_offset_of_pinStartBone_8() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___pinStartBone_8)); }
	inline bool get_pinStartBone_8() const { return ___pinStartBone_8; }
	inline bool* get_address_of_pinStartBone_8() { return &___pinStartBone_8; }
	inline void set_pinStartBone_8(bool value)
	{
		___pinStartBone_8 = value;
	}

	inline static int32_t get_offset_of_enableJointCollision_9() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___enableJointCollision_9)); }
	inline bool get_enableJointCollision_9() const { return ___enableJointCollision_9; }
	inline bool* get_address_of_enableJointCollision_9() { return &___enableJointCollision_9; }
	inline void set_enableJointCollision_9(bool value)
	{
		___enableJointCollision_9 = value;
	}

	inline static int32_t get_offset_of_useGravity_10() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___useGravity_10)); }
	inline bool get_useGravity_10() const { return ___useGravity_10; }
	inline bool* get_address_of_useGravity_10() { return &___useGravity_10; }
	inline void set_useGravity_10(bool value)
	{
		___useGravity_10 = value;
	}

	inline static int32_t get_offset_of_thickness_11() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___thickness_11)); }
	inline float get_thickness_11() const { return ___thickness_11; }
	inline float* get_address_of_thickness_11() { return &___thickness_11; }
	inline void set_thickness_11(float value)
	{
		___thickness_11 = value;
	}

	inline static int32_t get_offset_of_rotationLimit_12() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___rotationLimit_12)); }
	inline float get_rotationLimit_12() const { return ___rotationLimit_12; }
	inline float* get_address_of_rotationLimit_12() { return &___rotationLimit_12; }
	inline void set_rotationLimit_12(float value)
	{
		___rotationLimit_12 = value;
	}

	inline static int32_t get_offset_of_rootMass_13() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___rootMass_13)); }
	inline float get_rootMass_13() const { return ___rootMass_13; }
	inline float* get_address_of_rootMass_13() { return &___rootMass_13; }
	inline void set_rootMass_13(float value)
	{
		___rootMass_13 = value;
	}

	inline static int32_t get_offset_of_massFalloffFactor_14() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___massFalloffFactor_14)); }
	inline float get_massFalloffFactor_14() const { return ___massFalloffFactor_14; }
	inline float* get_address_of_massFalloffFactor_14() { return &___massFalloffFactor_14; }
	inline void set_massFalloffFactor_14(float value)
	{
		___massFalloffFactor_14 = value;
	}

	inline static int32_t get_offset_of_colliderLayer_15() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___colliderLayer_15)); }
	inline int32_t get_colliderLayer_15() const { return ___colliderLayer_15; }
	inline int32_t* get_address_of_colliderLayer_15() { return &___colliderLayer_15; }
	inline void set_colliderLayer_15(int32_t value)
	{
		___colliderLayer_15 = value;
	}

	inline static int32_t get_offset_of_mix_16() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___mix_16)); }
	inline float get_mix_16() const { return ___mix_16; }
	inline float* get_address_of_mix_16() { return &___mix_16; }
	inline void set_mix_16(float value)
	{
		___mix_16 = value;
	}

	inline static int32_t get_offset_of_targetSkeletonComponent_17() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___targetSkeletonComponent_17)); }
	inline Il2CppObject * get_targetSkeletonComponent_17() const { return ___targetSkeletonComponent_17; }
	inline Il2CppObject ** get_address_of_targetSkeletonComponent_17() { return &___targetSkeletonComponent_17; }
	inline void set_targetSkeletonComponent_17(Il2CppObject * value)
	{
		___targetSkeletonComponent_17 = value;
		Il2CppCodeGenWriteBarrier(&___targetSkeletonComponent_17, value);
	}

	inline static int32_t get_offset_of_skeleton_18() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___skeleton_18)); }
	inline Skeleton_t1387859465 * get_skeleton_18() const { return ___skeleton_18; }
	inline Skeleton_t1387859465 ** get_address_of_skeleton_18() { return &___skeleton_18; }
	inline void set_skeleton_18(Skeleton_t1387859465 * value)
	{
		___skeleton_18 = value;
		Il2CppCodeGenWriteBarrier(&___skeleton_18, value);
	}

	inline static int32_t get_offset_of_boneTable_19() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___boneTable_19)); }
	inline Dictionary_2_t3074612505 * get_boneTable_19() const { return ___boneTable_19; }
	inline Dictionary_2_t3074612505 ** get_address_of_boneTable_19() { return &___boneTable_19; }
	inline void set_boneTable_19(Dictionary_2_t3074612505 * value)
	{
		___boneTable_19 = value;
		Il2CppCodeGenWriteBarrier(&___boneTable_19, value);
	}

	inline static int32_t get_offset_of_ragdollRoot_20() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___ragdollRoot_20)); }
	inline Transform_t3275118058 * get_ragdollRoot_20() const { return ___ragdollRoot_20; }
	inline Transform_t3275118058 ** get_address_of_ragdollRoot_20() { return &___ragdollRoot_20; }
	inline void set_ragdollRoot_20(Transform_t3275118058 * value)
	{
		___ragdollRoot_20 = value;
		Il2CppCodeGenWriteBarrier(&___ragdollRoot_20, value);
	}

	inline static int32_t get_offset_of_U3CRootRigidbodyU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___U3CRootRigidbodyU3Ek__BackingField_21)); }
	inline Rigidbody_t4233889191 * get_U3CRootRigidbodyU3Ek__BackingField_21() const { return ___U3CRootRigidbodyU3Ek__BackingField_21; }
	inline Rigidbody_t4233889191 ** get_address_of_U3CRootRigidbodyU3Ek__BackingField_21() { return &___U3CRootRigidbodyU3Ek__BackingField_21; }
	inline void set_U3CRootRigidbodyU3Ek__BackingField_21(Rigidbody_t4233889191 * value)
	{
		___U3CRootRigidbodyU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRootRigidbodyU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CStartingBoneU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___U3CStartingBoneU3Ek__BackingField_22)); }
	inline Bone_t4151268332 * get_U3CStartingBoneU3Ek__BackingField_22() const { return ___U3CStartingBoneU3Ek__BackingField_22; }
	inline Bone_t4151268332 ** get_address_of_U3CStartingBoneU3Ek__BackingField_22() { return &___U3CStartingBoneU3Ek__BackingField_22; }
	inline void set_U3CStartingBoneU3Ek__BackingField_22(Bone_t4151268332 * value)
	{
		___U3CStartingBoneU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartingBoneU3Ek__BackingField_22, value);
	}

	inline static int32_t get_offset_of_rootOffset_23() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___rootOffset_23)); }
	inline Vector3_t2243707580  get_rootOffset_23() const { return ___rootOffset_23; }
	inline Vector3_t2243707580 * get_address_of_rootOffset_23() { return &___rootOffset_23; }
	inline void set_rootOffset_23(Vector3_t2243707580  value)
	{
		___rootOffset_23 = value;
	}

	inline static int32_t get_offset_of_isActive_24() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844, ___isActive_24)); }
	inline bool get_isActive_24() const { return ___isActive_24; }
	inline bool* get_address_of_isActive_24() { return &___isActive_24; }
	inline void set_isActive_24(bool value)
	{
		___isActive_24 = value;
	}
};

struct SkeletonRagdoll_t2071806844_StaticFields
{
public:
	// UnityEngine.Transform Spine.Unity.Modules.SkeletonRagdoll::parentSpaceHelper
	Transform_t3275118058 * ___parentSpaceHelper_2;

public:
	inline static int32_t get_offset_of_parentSpaceHelper_2() { return static_cast<int32_t>(offsetof(SkeletonRagdoll_t2071806844_StaticFields, ___parentSpaceHelper_2)); }
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
