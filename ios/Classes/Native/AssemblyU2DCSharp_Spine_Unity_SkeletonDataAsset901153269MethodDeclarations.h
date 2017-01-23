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

// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// Spine.Unity.AtlasAsset
struct AtlasAsset_t2757378847;
// Spine.Unity.AtlasAsset[]
struct AtlasAssetU5BU5D_t2817984902;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// Spine.Atlas[]
struct AtlasU5BU5D_t3222283718;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Spine.AttachmentLoader
struct AttachmentLoader_t459554434;
// System.String
struct String_t;
// Spine.AnimationStateData
struct AnimationStateData_t3672895841;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"
#include "AssemblyU2DCSharp_Spine_Unity_AtlasAsset2757378847.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData548167897.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Spine.Unity.SkeletonDataAsset::.ctor()
extern "C"  void SkeletonDataAsset__ctor_m3824986786 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Spine.Unity.SkeletonDataAsset::get_IsLoaded()
extern "C"  bool SkeletonDataAsset_get_IsLoaded_m335787234 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonDataAsset::Reset()
extern "C"  void SkeletonDataAsset_Reset_m168980597 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonDataAsset::CreateRuntimeInstance(UnityEngine.TextAsset,Spine.Unity.AtlasAsset,System.Boolean,System.Single)
extern "C"  SkeletonDataAsset_t901153269 * SkeletonDataAsset_CreateRuntimeInstance_m1643061960 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___skeletonDataFile0, AtlasAsset_t2757378847 * ___atlasAsset1, bool ___initialize2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Unity.SkeletonDataAsset Spine.Unity.SkeletonDataAsset::CreateRuntimeInstance(UnityEngine.TextAsset,Spine.Unity.AtlasAsset[],System.Boolean,System.Single)
extern "C"  SkeletonDataAsset_t901153269 * SkeletonDataAsset_CreateRuntimeInstance_m2992589852 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___skeletonDataFile0, AtlasAssetU5BU5D_t2817984902* ___atlasAssets1, bool ___initialize2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonDataAsset::Clear()
extern "C"  void SkeletonDataAsset_Clear_m40717893 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::GetSkeletonData(System.Boolean)
extern "C"  SkeletonData_t548167897 * SkeletonDataAsset_GetSkeletonData_m3956140469 (SkeletonDataAsset_t901153269 * __this, bool ___quiet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonDataAsset::InitializeWithData(Spine.SkeletonData)
extern "C"  void SkeletonDataAsset_InitializeWithData_m3454499810 (SkeletonDataAsset_t901153269 * __this, SkeletonData_t548167897 * ___sd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Atlas[] Spine.Unity.SkeletonDataAsset::GetAtlasArray()
extern "C"  AtlasU5BU5D_t3222283718* SkeletonDataAsset_GetAtlasArray_m2921812433 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::ReadSkeletonData(System.Byte[],Spine.AttachmentLoader,System.Single)
extern "C"  SkeletonData_t548167897 * SkeletonDataAsset_ReadSkeletonData_m3617040347 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, Il2CppObject * ___attachmentLoader1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.Unity.SkeletonDataAsset::ReadSkeletonData(System.String,Spine.AttachmentLoader,System.Single)
extern "C"  SkeletonData_t548167897 * SkeletonDataAsset_ReadSkeletonData_m528019830 (Il2CppObject * __this /* static, unused */, String_t* ___text0, Il2CppObject * ___attachmentLoader1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonDataAsset::FillStateData()
extern "C"  void SkeletonDataAsset_FillStateData_m547746432 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.AnimationStateData Spine.Unity.SkeletonDataAsset::GetAnimationStateData()
extern "C"  AnimationStateData_t3672895841 * SkeletonDataAsset_GetAnimationStateData_m658641826 (SkeletonDataAsset_t901153269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
