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

// Spine.AnimationStateData
struct AnimationStateData_t3672895841;
// Spine.SkeletonData
struct SkeletonData_t548167897;
// System.String
struct String_t;
// Spine.Animation
struct Animation_t4237671184;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_SkeletonData548167897.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Spine_Animation4237671184.h"

// System.Void Spine.AnimationStateData::.ctor(Spine.SkeletonData)
extern "C"  void AnimationStateData__ctor_m407081907 (AnimationStateData_t3672895841 * __this, SkeletonData_t548167897 * ___skeletonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.SkeletonData Spine.AnimationStateData::get_SkeletonData()
extern "C"  SkeletonData_t548167897 * AnimationStateData_get_SkeletonData_m1487664778 (AnimationStateData_t3672895841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationStateData::get_DefaultMix()
extern "C"  float AnimationStateData_get_DefaultMix_m3867809225 (AnimationStateData_t3672895841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::set_DefaultMix(System.Single)
extern "C"  void AnimationStateData_set_DefaultMix_m666379820 (AnimationStateData_t3672895841 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::SetMix(System.String,System.String,System.Single)
extern "C"  void AnimationStateData_SetMix_m3464081170 (AnimationStateData_t3672895841 * __this, String_t* ___fromName0, String_t* ___toName1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationStateData::SetMix(Spine.Animation,Spine.Animation,System.Single)
extern "C"  void AnimationStateData_SetMix_m3200833810 (AnimationStateData_t3672895841 * __this, Animation_t4237671184 * ___from0, Animation_t4237671184 * ___to1, float ___duration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.AnimationStateData::GetMix(Spine.Animation,Spine.Animation)
extern "C"  float AnimationStateData_GetMix_m484961157 (AnimationStateData_t3672895841 * __this, Animation_t4237671184 * ___from0, Animation_t4237671184 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
