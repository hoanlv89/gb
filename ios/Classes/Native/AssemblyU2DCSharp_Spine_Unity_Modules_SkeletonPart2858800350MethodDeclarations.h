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

// Spine.Unity.Modules.SkeletonPartsRenderer
struct SkeletonPartsRenderer_t2858800350;
// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator
struct ISubmeshSetMeshGenerator_t3291161234;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>
struct ExposedList_1_t1667832231;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MaterialPropertyBlock3303648957.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::.ctor()
extern "C"  void SkeletonPartsRenderer__ctor_m4201347100 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.MeshGeneration.ISubmeshSetMeshGenerator Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshGenerator()
extern "C"  Il2CppObject * SkeletonPartsRenderer_get_MeshGenerator_m1033174221 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshRenderer Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshRenderer()
extern "C"  MeshRenderer_t1268241104 * SkeletonPartsRenderer_get_MeshRenderer_m2158420871 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Spine.Unity.Modules.SkeletonPartsRenderer::get_MeshFilter()
extern "C"  MeshFilter_t3026937449 * SkeletonPartsRenderer_get_MeshFilter_m2266019815 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::LazyIntialize()
extern "C"  void SkeletonPartsRenderer_LazyIntialize_m3654150477 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::ClearMesh()
extern "C"  void SkeletonPartsRenderer_ClearMesh_m3456192456 (SkeletonPartsRenderer_t2858800350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::RenderParts(Spine.ExposedList`1<Spine.Unity.MeshGeneration.SubmeshInstruction>,System.Int32,System.Int32)
extern "C"  void SkeletonPartsRenderer_RenderParts_m905280520 (SkeletonPartsRenderer_t2858800350 * __this, ExposedList_1_t1667832231 * ___instructions0, int32_t ___startSubmesh1, int32_t ___endSubmesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Modules.SkeletonPartsRenderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C"  void SkeletonPartsRenderer_SetPropertyBlock_m44233078 (SkeletonPartsRenderer_t2858800350 * __this, MaterialPropertyBlock_t3303648957 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.Modules.SkeletonPartsRenderer Spine.Unity.Modules.SkeletonPartsRenderer::NewPartsRendererGameObject(UnityEngine.Transform,System.String)
extern "C"  SkeletonPartsRenderer_t2858800350 * SkeletonPartsRenderer_NewPartsRendererGameObject_m2097865747 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___parent0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
