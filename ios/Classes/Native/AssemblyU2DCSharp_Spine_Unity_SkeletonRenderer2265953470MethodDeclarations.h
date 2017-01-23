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

// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material>
struct Dictionary_2_t3590089903;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material>
struct Dictionary_2_t1972914032;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t3058234646;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Ins3836706226.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Sma3058234646.h"

// System.Void Spine.Unity.SkeletonRenderer::.ctor()
extern "C"  void SkeletonRenderer__ctor_m3270278073 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonRenderer::get_SkeletonDataAsset()
extern "C"  SkeletonDataAsset_t901153269 * SkeletonRenderer_get_SkeletonDataAsset_m868320553 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_generateMeshOverride_m1005096089 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_generateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_generateMeshOverride_m355195180 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::add_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_add_GenerateMeshOverride_m1989294841 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::remove_GenerateMeshOverride(Spine.Unity.SkeletonRenderer/InstructionDelegate)
extern "C"  void SkeletonRenderer_remove_GenerateMeshOverride_m1498921740 (SkeletonRenderer_t2265953470 * __this, InstructionDelegate_t3836706226 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Material,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomMaterialOverride()
extern "C"  Dictionary_2_t3590089903 * SkeletonRenderer_get_CustomMaterialOverride_m3005457600 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Spine.Slot,UnityEngine.Material> Spine.Unity.SkeletonRenderer::get_CustomSlotMaterials()
extern "C"  Dictionary_2_t1972914032 * SkeletonRenderer_get_CustomSlotMaterials_m1330215566 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Skeleton Spine.Unity.SkeletonRenderer::get_Skeleton()
extern "C"  Skeleton_t1387859465 * SkeletonRenderer_get_Skeleton_m1462068316 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Awake()
extern "C"  void SkeletonRenderer_Awake_m2642790230 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::OnDisable()
extern "C"  void SkeletonRenderer_OnDisable_m3291998150 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::ClearState()
extern "C"  void SkeletonRenderer_ClearState_m574252343 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::Initialize(System.Boolean)
extern "C"  void SkeletonRenderer_Initialize_m13500638 (SkeletonRenderer_t2265953470 * __this, bool ___overwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer::LateUpdate()
extern "C"  void SkeletonRenderer_LateUpdate_m255846668 (SkeletonRenderer_t2265953470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonRenderer::CheckIfMustUpdateMeshStructure(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction,Spine.Unity.SkeletonRenderer/SmartMesh/Instruction)
extern "C"  bool SkeletonRenderer_CheckIfMustUpdateMeshStructure_m4101782686 (Il2CppObject * __this /* static, unused */, Instruction_t3058234646 * ___a0, Instruction_t3058234646 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
