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

// Spine.Unity.SpineBone
struct SpineBone_t140009879;
// System.String
struct String_t;
// Spine.Bone
struct Bone_t4151268332;
// Spine.Unity.SkeletonRenderer
struct SkeletonRenderer_t2265953470;
// Spine.BoneData
struct BoneData_t1017935068;
// Spine.Unity.SkeletonDataAsset
struct SkeletonDataAsset_t901153269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer2265953470.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonDataAsset901153269.h"

// System.Void Spine.Unity.SpineBone::.ctor(System.String,System.String)
extern "C"  void SpineBone__ctor_m3814452824 (SpineBone_t140009879 * __this, String_t* ___startsWith0, String_t* ___dataField1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Bone Spine.Unity.SpineBone::GetBone(System.String,Spine.Unity.SkeletonRenderer)
extern "C"  Bone_t4151268332 * SpineBone_GetBone_m4188570450 (Il2CppObject * __this /* static, unused */, String_t* ___boneName0, SkeletonRenderer_t2265953470 * ___renderer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.BoneData Spine.Unity.SpineBone::GetBoneData(System.String,Spine.Unity.SkeletonDataAsset)
extern "C"  BoneData_t1017935068 * SpineBone_GetBoneData_m2427589593 (Il2CppObject * __this /* static, unused */, String_t* ___boneName0, SkeletonDataAsset_t901153269 * ___skeletonDataAsset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
