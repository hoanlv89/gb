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

// Spine.PathConstraintMixTimeline
struct PathConstraintMixTimeline_t3343865161;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.PathConstraintMixTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintMixTimeline__ctor_m3921605302 (PathConstraintMixTimeline_t3343865161 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintMixTimeline::get_PathConstraintIndex()
extern "C"  int32_t PathConstraintMixTimeline_get_PathConstraintIndex_m3602248002 (PathConstraintMixTimeline_t3343865161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::set_PathConstraintIndex(System.Int32)
extern "C"  void PathConstraintMixTimeline_set_PathConstraintIndex_m2005875397 (PathConstraintMixTimeline_t3343865161 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraintMixTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* PathConstraintMixTimeline_get_Frames_m1363847714 (PathConstraintMixTimeline_t3343865161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::set_Frames(System.Single[])
extern "C"  void PathConstraintMixTimeline_set_Frames_m3683683475 (PathConstraintMixTimeline_t3343865161 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintMixTimeline::get_PropertyId()
extern "C"  int32_t PathConstraintMixTimeline_get_PropertyId_m438446292 (PathConstraintMixTimeline_t3343865161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void PathConstraintMixTimeline_SetFrame_m1508763068 (PathConstraintMixTimeline_t3343865161 * __this, int32_t ___frameIndex0, float ___time1, float ___rotateMix2, float ___translateMix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintMixTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void PathConstraintMixTimeline_Apply_m982656497 (PathConstraintMixTimeline_t3343865161 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
