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

// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t2028984527;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// UnityEngine.Texture
struct Texture_t2243626319;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.AnimationState
struct AnimationState_t1491536497;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator
struct ISimpleMeshGenerator_t669325259;
// Spine.Unity.UpdateBonesDelegate
struct UpdateBonesDelegate_t2937009411;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate1528800019.h"
#include "AssemblyU2DCSharp_Spine_Unity_UpdateBonesDelegate2937009411.h"

// System.Void Spine.Unity.SkeletonGraphic::.ctor()
extern "C"  void SkeletonGraphic__ctor_m3979911910 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonGraphic::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t901153269 * SkeletonGraphic_get_SkeletonDataAsset_m582654736 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Spine.Unity.SkeletonGraphic::get_mainTexture()
extern "C"  Texture_t2243626319 * SkeletonGraphic_get_mainTexture_m3007548470 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Awake()
extern "C"  void SkeletonGraphic_Awake_m2803125543 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void SkeletonGraphic_Rebuild_m2540143927 (SkeletonGraphic_t2028984527 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update()
extern "C"  void SkeletonGraphic_Update_m4160333643 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Update(System.Single)
extern "C"  void SkeletonGraphic_Update_m1567248602 (SkeletonGraphic_t2028984527 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::LateUpdate()
extern "C"  void SkeletonGraphic_LateUpdate_m1365003935 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonGraphic::get_Skeleton()
extern "C"  Skeleton_t1387859465 * SkeletonGraphic_get_Skeleton_m361332979 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonGraphic::get_SkeletonData()
extern "C"  SkeletonData_t548167897 * SkeletonGraphic_get_SkeletonData_m929834803 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonGraphic::get_IsValid()
extern "C"  bool SkeletonGraphic_get_IsValid_m1827568279 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationState Spine.Unity.SkeletonGraphic::get_AnimationState()
extern "C"  AnimationState_t1491536497 * SkeletonGraphic_get_AnimationState_m1766725715 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.ISimpleMeshGenerator Spine.Unity.SkeletonGraphic::get_SpineMeshGenerator()
extern "C"  Il2CppObject * SkeletonGraphic_get_SpineMeshGenerator_m449254519 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateLocal_m2626156109 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateLocal(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateLocal_m2047074432 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateWorld_m2834209890 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateWorld(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateWorld_m3639134513 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::add_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_add_UpdateComplete_m3329773269 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::remove_UpdateComplete(Spine.Unity.UpdateBonesDelegate)
extern "C"  void SkeletonGraphic_remove_UpdateComplete_m501633766 (SkeletonGraphic_t2028984527 * __this, UpdateBonesDelegate_t2937009411 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Clear()
extern "C"  void SkeletonGraphic_Clear_m4090372803 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::Initialize(System.Boolean)
extern "C"  void SkeletonGraphic_Initialize_m2096201673 (SkeletonGraphic_t2028984527 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonGraphic::UpdateMesh()
extern "C"  void SkeletonGraphic_UpdateMesh_m1308250424 (SkeletonGraphic_t2028984527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
