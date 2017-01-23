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

// Spine.Unity.MaterialsTextureLoader
struct MaterialsTextureLoader_t2451137492;
// Spine.Unity.AtlasAsset
struct AtlasAsset_t2757378847;
// Spine.AtlasPage
struct AtlasPage_t1041509742;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Unity_AtlasAsset2757378847.h"
#include "AssemblyU2DCSharp_Spine_AtlasPage1041509742.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Spine.Unity.MaterialsTextureLoader::.ctor(Spine.Unity.AtlasAsset)
extern "C"  void MaterialsTextureLoader__ctor_m2972202450 (MaterialsTextureLoader_t2451137492 * __this, AtlasAsset_t2757378847 * ___atlasAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MaterialsTextureLoader::Load(Spine.AtlasPage,System.String)
extern "C"  void MaterialsTextureLoader_Load_m1833781196 (MaterialsTextureLoader_t2451137492 * __this, AtlasPage_t1041509742 * ___page0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.MaterialsTextureLoader::Unload(System.Object)
extern "C"  void MaterialsTextureLoader_Unload_m2490949248 (MaterialsTextureLoader_t2451137492 * __this, Il2CppObject * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
