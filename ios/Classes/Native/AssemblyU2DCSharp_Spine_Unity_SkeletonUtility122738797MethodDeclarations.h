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

// Spine.Unity.SkeletonUtility
struct SkeletonUtility_t122738797;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// Spine.Skeleton
struct Skeleton_t1387859465;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// Spine.Slot
struct Slot_t306639170;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate
struct SkeletonUtilityDelegate_t3188065966;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.SkeletonUtilityBone
struct SkeletonUtilityBone_t1082253919;
// Spine.Unity.SkeletonUtilityConstraint
struct SkeletonUtilityConstraint_t1397591976;
// Spine.Unity.ISkeletonAnimation
struct ISkeletonAnimation_t174943072;
// Spine.Bone
struct Bone_t4151268332;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_Spine_BoundingBoxAttachment1898929740.h"
#include "AssemblyU2DCSharp_Spine_Slot306639170.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_PolygonCollider2D3220183178.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtility_Skel3188065966.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer2265953470.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone1082253919.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityConst1397591976.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonUtilityBone_3330739987.h"
#include "AssemblyU2DCSharp_Spine_Bone4151268332.h"

// System.Void Spine.Unity.SkeletonUtility::.ctor()
extern "C"  void SkeletonUtility__ctor_m3493281174 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxGameObject(Spine.Skeleton,System.String,System.String,System.String,UnityEngine.Transform,System.Boolean)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxGameObject_m209082721 (Il2CppObject * __this /* static, unused */, Skeleton_t1387859465 * ___skeleton0, String_t* ___skinName1, String_t* ___slotName2, String_t* ___attachmentName3, Transform_t3275118058 * ___parent4, bool ___isTrigger5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxGameObject(System.String,Spine.BoundingBoxAttachment,Spine.Slot,UnityEngine.Transform,System.Boolean)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxGameObject_m1575183621 (Il2CppObject * __this /* static, unused */, String_t* ___name0, BoundingBoxAttachment_t1898929740 * ___box1, Slot_t306639170 * ___slot2, Transform_t3275118058 * ___parent3, bool ___isTrigger4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.SkeletonUtility::AddBoundingBoxAsComponent(Spine.BoundingBoxAttachment,Spine.Slot,UnityEngine.GameObject,System.Boolean)
extern "C"  PolygonCollider2D_t3220183178 * SkeletonUtility_AddBoundingBoxAsComponent_m2230534500 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t1898929740 * ___box0, Slot_t306639170 * ___slot1, GameObject_t1756533147 * ___gameObject2, bool ___isTrigger3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::SetColliderPointsLocal(UnityEngine.PolygonCollider2D,Spine.Slot,Spine.BoundingBoxAttachment)
extern "C"  void SkeletonUtility_SetColliderPointsLocal_m157405515 (Il2CppObject * __this /* static, unused */, PolygonCollider2D_t3220183178 * ___collider0, Slot_t306639170 * ___slot1, BoundingBoxAttachment_t1898929740 * ___box2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Spine.Unity.SkeletonUtility::GetBoundingBoxBounds(Spine.BoundingBoxAttachment,System.Single)
extern "C"  Bounds_t3033363703  SkeletonUtility_GetBoundingBoxBounds_m98437773 (Il2CppObject * __this /* static, unused */, BoundingBoxAttachment_t1898929740 * ___boundingBox0, float ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::add_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_add_OnReset_m971633942 (SkeletonUtility_t122738797 * __this, SkeletonUtilityDelegate_t3188065966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::remove_OnReset(Spine.Unity.SkeletonUtility/SkeletonUtilityDelegate)
extern "C"  void SkeletonUtility_remove_OnReset_m1315168627 (SkeletonUtility_t122738797 * __this, SkeletonUtilityDelegate_t3188065966 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Update()
extern "C"  void SkeletonUtility_Update_m3509903409 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnEnable()
extern "C"  void SkeletonUtility_OnEnable_m1392589742 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::Start()
extern "C"  void SkeletonUtility_Start_m2194304654 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::OnDisable()
extern "C"  void SkeletonUtility_OnDisable_m2181623413 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::HandleRendererReset(Spine.Unity.SkeletonRenderer)
extern "C"  void SkeletonUtility_HandleRendererReset_m1811579084 (SkeletonUtility_t122738797 * __this, SkeletonRenderer_t2265953470 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_RegisterBone_m2187252792 (SkeletonUtility_t122738797 * __this, SkeletonUtilityBone_t1082253919 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterBone(Spine.Unity.SkeletonUtilityBone)
extern "C"  void SkeletonUtility_UnregisterBone_m990164741 (SkeletonUtility_t122738797 * __this, SkeletonUtilityBone_t1082253919 * ___bone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::RegisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_RegisterConstraint_m1550087608 (SkeletonUtility_t122738797 * __this, SkeletonUtilityConstraint_t1397591976 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UnregisterConstraint(Spine.Unity.SkeletonUtilityConstraint)
extern "C"  void SkeletonUtility_UnregisterConstraint_m4259616773 (SkeletonUtility_t122738797 * __this, SkeletonUtilityConstraint_t1397591976 * ___constraint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::CollectBones()
extern "C"  void SkeletonUtility_CollectBones_m901472631 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateLocal(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateLocal_m3655805726 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateWorld(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateWorld_m3847982091 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateComplete(Spine.Unity.ISkeletonAnimation)
extern "C"  void SkeletonUtility_UpdateComplete_m1325700426 (SkeletonUtility_t122738797 * __this, Il2CppObject * ___anim0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonUtility::UpdateAllBones()
extern "C"  void SkeletonUtility_UpdateAllBones_m1118004125 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Spine.Unity.SkeletonUtility::GetBoneRoot()
extern "C"  Transform_t3275118058 * SkeletonUtility_GetBoneRoot_m4079956246 (SkeletonUtility_t122738797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnRoot(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnRoot_m118013608 (SkeletonUtility_t122738797 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnHierarchy(Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnHierarchy_m59888777 (SkeletonUtility_t122738797 * __this, int32_t ___mode0, bool ___pos1, bool ___rot2, bool ___sca3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBoneRecursively(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnBoneRecursively_m638856357 (SkeletonUtility_t122738797 * __this, Bone_t4151268332 * ___bone0, Transform_t3275118058 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spine.Unity.SkeletonUtility::SpawnBone(Spine.Bone,UnityEngine.Transform,Spine.Unity.SkeletonUtilityBone/Mode,System.Boolean,System.Boolean,System.Boolean)
extern "C"  GameObject_t1756533147 * SkeletonUtility_SpawnBone_m2942893452 (SkeletonUtility_t122738797 * __this, Bone_t4151268332 * ___bone0, Transform_t3275118058 * ___parent1, int32_t ___mode2, bool ___pos3, bool ___rot4, bool ___sca5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
