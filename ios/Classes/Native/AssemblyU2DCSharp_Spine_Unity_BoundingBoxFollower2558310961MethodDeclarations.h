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

// Spine.Unity.BoundingBoxFollower
struct BoundingBoxFollower_t2558310961;
// Spine.Slot
struct Slot_t306639170;
// Spine.BoundingBoxAttachment
struct BoundingBoxAttachment_t1898929740;
// System.String
struct String_t;
// UnityEngine.PolygonCollider2D
struct PolygonCollider2D_t3220183178;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Attachment
struct Attachment_t2584075367;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer2265953470.h"
#include "AssemblyU2DCSharp_Spine_Attachment2584075367.h"

// System.Void Spine.Unity.BoundingBoxFollower::.ctor()
extern "C"  void BoundingBoxFollower__ctor_m3695856496 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Slot Spine.Unity.BoundingBoxFollower::get_Slot()
extern "C"  Slot_t306639170 * BoundingBoxFollower_get_Slot_m4219922481 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoundingBoxAttachment Spine.Unity.BoundingBoxFollower::get_CurrentAttachment()
extern "C"  BoundingBoxAttachment_t1898929740 * BoundingBoxFollower_get_CurrentAttachment_m3581833679 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Spine.Unity.BoundingBoxFollower::get_CurrentAttachmentName()
extern "C"  String_t* BoundingBoxFollower_get_CurrentAttachmentName_m3356142647 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PolygonCollider2D Spine.Unity.BoundingBoxFollower::get_CurrentCollider()
extern "C"  PolygonCollider2D_t3220183178 * BoundingBoxFollower_get_CurrentCollider_m196305868 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.BoundingBoxFollower::get_IsTrigger()
extern "C"  bool BoundingBoxFollower_get_IsTrigger_m4272151775 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::Start()
extern "C"  void BoundingBoxFollower_Start_m377354536 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnEnable()
extern "C"  void BoundingBoxFollower_OnEnable_m1790197864 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::HandleRebuild(Spine.Unity.SkeletonRenderer)
extern "C"  void BoundingBoxFollower_HandleRebuild_m668009353 (BoundingBoxFollower_t2558310961 * __this, SkeletonRenderer_t2265953470 * ___sr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::Initialize()
extern "C"  void BoundingBoxFollower_Initialize_m2192694032 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::OnDisable()
extern "C"  void BoundingBoxFollower_OnDisable_m1360460473 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::ClearState()
extern "C"  void BoundingBoxFollower_ClearState_m3866548344 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::DisposeColliders()
extern "C"  void BoundingBoxFollower_DisposeColliders_m78793924 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::LateUpdate()
extern "C"  void BoundingBoxFollower_LateUpdate_m634445761 (BoundingBoxFollower_t2558310961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::MatchAttachment(Spine.Attachment)
extern "C"  void BoundingBoxFollower_MatchAttachment_m3316882674 (BoundingBoxFollower_t2558310961 * __this, Attachment_t2584075367 * ___attachment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.BoundingBoxFollower::.cctor()
extern "C"  void BoundingBoxFollower__cctor_m78101503 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
