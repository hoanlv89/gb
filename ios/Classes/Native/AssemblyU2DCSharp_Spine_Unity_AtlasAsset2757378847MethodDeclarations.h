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

// Spine.Unity.AtlasAsset
struct AtlasAsset_t2757378847;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// UnityEngine.Shader
struct Shader_t2430389951;
// Spine.Atlas
struct Atlas_t85765087;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void Spine.Unity.AtlasAsset::.ctor()
extern "C"  void AtlasAsset__ctor_m681858746 (AtlasAsset_t2757378847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.AtlasAsset::get_IsLoaded()
extern "C"  bool AtlasAsset_get_IsLoaded_m2623035602 (AtlasAsset_t2757378847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.AtlasAsset Spine.Unity.AtlasAsset::CreateRuntimeInstance(UnityEngine.TextAsset,UnityEngine.Material[],System.Boolean)
extern "C"  AtlasAsset_t2757378847 * AtlasAsset_CreateRuntimeInstance_m578887080 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___atlasText0, MaterialU5BU5D_t3123989686* ___materials1, bool ___initialize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.AtlasAsset Spine.Unity.AtlasAsset::CreateRuntimeInstance(UnityEngine.TextAsset,UnityEngine.Texture2D[],UnityEngine.Shader,System.Boolean)
extern "C"  AtlasAsset_t2757378847 * AtlasAsset_CreateRuntimeInstance_m384295992 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___atlasText0, Texture2DU5BU5D_t2724090252* ___textures1, Shader_t2430389951 * ___shader2, bool ___initialize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.AtlasAsset::Reset()
extern "C"  void AtlasAsset_Reset_m1755557107 (AtlasAsset_t2757378847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.AtlasAsset::Clear()
extern "C"  void AtlasAsset_Clear_m2230246923 (AtlasAsset_t2757378847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Atlas Spine.Unity.AtlasAsset::GetAtlas()
extern "C"  Atlas_t85765087 * AtlasAsset_GetAtlas_m2480932 (AtlasAsset_t2757378847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Spine.Unity.AtlasAsset::GenerateMesh(System.String,UnityEngine.Mesh,UnityEngine.Material&,System.Single)
extern "C"  Mesh_t1356156583 * AtlasAsset_GenerateMesh_m2545398190 (AtlasAsset_t2757378847 * __this, String_t* ___name0, Mesh_t1356156583 * ___mesh1, Material_t193706927 ** ___material2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
