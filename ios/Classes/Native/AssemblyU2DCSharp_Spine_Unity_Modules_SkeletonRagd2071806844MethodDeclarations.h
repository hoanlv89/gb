#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spine.Unity.Modules.SkeletonRagdoll
struct SkeletonRagdoll_t2071806844;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// Spine.Bone
struct Bone_t4151268332;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t3881993182;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.String
struct String_t;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t2866794480;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Unity.Modules.SkeletonRagdoll::.ctor()
extern "C"  void SkeletonRagdoll__ctor_m777203638 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody Spine.Unity.Modules.SkeletonRagdoll::get_RootRigidbody()
extern "C"  Rigidbody_t4233889191 * SkeletonRagdoll_get_RootRigidbody_m3279642991 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::set_RootRigidbody(UnityEngine.Rigidbody)
extern "C"  void SkeletonRagdoll_set_RootRigidbody_m1377887742 (SkeletonRagdoll_t2071806844 * __this, Rigidbody_t4233889191 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll::get_StartingBone()
extern "C"  Bone_t4151268332 * SkeletonRagdoll_get_StartingBone_m487561101 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::set_StartingBone(Spine.Bone)
extern "C"  void SkeletonRagdoll_set_StartingBone_m350121164 (SkeletonRagdoll_t2071806844 * __this, Bone_t4151268332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll::get_RootOffset()
extern "C"  Vector3_t2243707580  SkeletonRagdoll_get_RootOffset_m1267888072 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.SkeletonRagdoll::get_IsActive()
extern "C"  bool SkeletonRagdoll_get_IsActive_m2543583695 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll::Start()
extern "C"  Il2CppObject * SkeletonRagdoll_Start_m4056745414 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody[] Spine.Unity.Modules.SkeletonRagdoll::get_RigidbodyArray()
extern "C"  RigidbodyU5BU5D_t3881993182* SkeletonRagdoll_get_RigidbodyArray_m906667872 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll::get_EstimatedSkeletonPosition()
extern "C"  Vector3_t2243707580  SkeletonRagdoll_get_EstimatedSkeletonPosition_m3229838057 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::Apply()
extern "C"  void SkeletonRagdoll_Apply_m2785908102 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Spine.Unity.Modules.SkeletonRagdoll::SmoothMix(System.Single,System.Single)
extern "C"  Coroutine_t2299508840 * SkeletonRagdoll_SmoothMix_m3249330420 (SkeletonRagdoll_t2071806844 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll::SmoothMixCoroutine(System.Single,System.Single)
extern "C"  Il2CppObject * SkeletonRagdoll_SmoothMixCoroutine_m112295580 (SkeletonRagdoll_t2071806844 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::SetSkeletonPosition(UnityEngine.Vector3)
extern "C"  void SkeletonRagdoll_SetSkeletonPosition_m398211303 (SkeletonRagdoll_t2071806844 * __this, Vector3_t2243707580  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::Remove()
extern "C"  void SkeletonRagdoll_Remove_m3719855736 (SkeletonRagdoll_t2071806844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody Spine.Unity.Modules.SkeletonRagdoll::GetRigidbody(System.String)
extern "C"  Rigidbody_t4233889191 * SkeletonRagdoll_GetRigidbody_m4159080440 (SkeletonRagdoll_t2071806844 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::RecursivelyCreateBoneProxies(Spine.Bone)
extern "C"  void SkeletonRagdoll_RecursivelyCreateBoneProxies_m2721558224 (SkeletonRagdoll_t2071806844 * __this, Bone_t4151268332 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll::UpdateSpineSkeleton(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonRagdoll_UpdateSpineSkeleton_m1776065109 (SkeletonRagdoll_t2071806844 * __this, Il2CppObject * ___skeletonRenderer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider> Spine.Unity.Modules.SkeletonRagdoll::AttachBoundingBoxRagdollColliders(Spine.Bone)
extern "C"  List_1_t2866794480 * SkeletonRagdoll_AttachBoundingBoxRagdollColliders_m3771774663 (SkeletonRagdoll_t2071806844 * __this, Bone_t4151268332 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.SkeletonRagdoll::GetPropagatedRotation(Spine.Bone)
extern "C"  float SkeletonRagdoll_GetPropagatedRotation_m3516305756 (Il2CppObject * __this /* static, unused */, Bone_t4151268332 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
