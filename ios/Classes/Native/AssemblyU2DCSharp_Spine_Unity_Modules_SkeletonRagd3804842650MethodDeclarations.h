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

// Spine.Unity.Modules.SkeletonRagdoll2D
struct SkeletonRagdoll2D_t3804842650;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// Spine.Bone
struct Bone_t4151268332;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t4025623380;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// System.String
struct String_t;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t15182870;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Spine.Skeleton
struct Skeleton_t1387859465;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::.ctor()
extern "C"  void SkeletonRagdoll2D__ctor_m4264764564 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Spine.Unity.Modules.SkeletonRagdoll2D::get_RootRigidbody()
extern "C"  Rigidbody2D_t502193897 * SkeletonRagdoll2D_get_RootRigidbody_m2364485455 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::set_RootRigidbody(UnityEngine.Rigidbody2D)
extern "C"  void SkeletonRagdoll2D_set_RootRigidbody_m1570062162 (SkeletonRagdoll2D_t3804842650 * __this, Rigidbody2D_t502193897 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.Modules.SkeletonRagdoll2D::get_StartingBone()
extern "C"  Bone_t4151268332 * SkeletonRagdoll2D_get_StartingBone_m1047820079 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::set_StartingBone(Spine.Bone)
extern "C"  void SkeletonRagdoll2D_set_StartingBone_m711350786 (SkeletonRagdoll2D_t3804842650 * __this, Bone_t4151268332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::get_RootOffset()
extern "C"  Vector3_t2243707580  SkeletonRagdoll2D_get_RootOffset_m3934314386 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.Modules.SkeletonRagdoll2D::get_IsActive()
extern "C"  bool SkeletonRagdoll2D_get_IsActive_m1815756753 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll2D::Start()
extern "C"  Il2CppObject * SkeletonRagdoll2D_Start_m2843073100 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D[] Spine.Unity.Modules.SkeletonRagdoll2D::get_RigidbodyArray()
extern "C"  Rigidbody2DU5BU5D_t4025623380* SkeletonRagdoll2D_get_RigidbodyArray_m2355952448 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::get_EstimatedSkeletonPosition()
extern "C"  Vector3_t2243707580  SkeletonRagdoll2D_get_EstimatedSkeletonPosition_m1106572723 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::Apply()
extern "C"  void SkeletonRagdoll2D_Apply_m3013727780 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine Spine.Unity.Modules.SkeletonRagdoll2D::SmoothMix(System.Single,System.Single)
extern "C"  Coroutine_t2299508840 * SkeletonRagdoll2D_SmoothMix_m652605962 (SkeletonRagdoll2D_t3804842650 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spine.Unity.Modules.SkeletonRagdoll2D::SmoothMixCoroutine(System.Single,System.Single)
extern "C"  Il2CppObject * SkeletonRagdoll2D_SmoothMixCoroutine_m1175732346 (SkeletonRagdoll2D_t3804842650 * __this, float ___target0, float ___duration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::SetSkeletonPosition(UnityEngine.Vector3)
extern "C"  void SkeletonRagdoll2D_SetSkeletonPosition_m3240973917 (SkeletonRagdoll2D_t3804842650 * __this, Vector3_t2243707580  ___worldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::Remove()
extern "C"  void SkeletonRagdoll2D_Remove_m4207556054 (SkeletonRagdoll2D_t3804842650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Spine.Unity.Modules.SkeletonRagdoll2D::GetRigidbody(System.String)
extern "C"  Rigidbody2D_t502193897 * SkeletonRagdoll2D_GetRigidbody_m4000049752 (SkeletonRagdoll2D_t3804842650 * __this, String_t* ___boneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::RecursivelyCreateBoneProxies(Spine.Bone)
extern "C"  void SkeletonRagdoll2D_RecursivelyCreateBoneProxies_m1384895666 (SkeletonRagdoll2D_t3804842650 * __this, Bone_t4151268332 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonRagdoll2D::UpdateSpineSkeleton(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonRagdoll2D_UpdateSpineSkeleton_m810938763 (SkeletonRagdoll2D_t3804842650 * __this, Il2CppObject * ___animatedSkeleton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> Spine.Unity.Modules.SkeletonRagdoll2D::AttachBoundingBoxRagdollColliders(Spine.Bone,UnityEngine.GameObject,Spine.Skeleton)
extern "C"  List_1_t15182870 * SkeletonRagdoll2D_AttachBoundingBoxRagdollColliders_m3026159441 (Il2CppObject * __this /* static, unused */, Bone_t4151268332 * ___b0, GameObject_t1756533147 * ___go1, Skeleton_t1387859465 * ___skeleton2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Modules.SkeletonRagdoll2D::GetPropagatedRotation(Spine.Bone)
extern "C"  float SkeletonRagdoll2D_GetPropagatedRotation_m4290589822 (Il2CppObject * __this /* static, unused */, Bone_t4151268332 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spine.Unity.Modules.SkeletonRagdoll2D::FlipScale(System.Boolean,System.Boolean)
extern "C"  Vector3_t2243707580  SkeletonRagdoll2D_FlipScale_m2031834803 (Il2CppObject * __this /* static, unused */, bool ___flipX0, bool ___flipY1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
