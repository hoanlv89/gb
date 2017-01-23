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

// Spine.RotateTimeline
struct RotateTimeline_t2591156164;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.RotateTimeline::.ctor(System.Int32)
extern "C"  void RotateTimeline__ctor_m693938823 (RotateTimeline_t2591156164 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.RotateTimeline::get_BoneIndex()
extern "C"  int32_t RotateTimeline_get_BoneIndex_m352808849 (RotateTimeline_t2591156164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::set_BoneIndex(System.Int32)
extern "C"  void RotateTimeline_set_BoneIndex_m3250676578 (RotateTimeline_t2591156164 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.RotateTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* RotateTimeline_get_Frames_m1481604433 (RotateTimeline_t2591156164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::set_Frames(System.Single[])
extern "C"  void RotateTimeline_set_Frames_m3320377936 (RotateTimeline_t2591156164 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.RotateTimeline::get_PropertyId()
extern "C"  int32_t RotateTimeline_get_PropertyId_m3439872727 (RotateTimeline_t2591156164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::SetFrame(System.Int32,System.Single,System.Single)
extern "C"  void RotateTimeline_SetFrame_m2225831444 (RotateTimeline_t2591156164 * __this, int32_t ___frameIndex0, float ___time1, float ___degrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.RotateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void RotateTimeline_Apply_m109244908 (RotateTimeline_t2591156164 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
