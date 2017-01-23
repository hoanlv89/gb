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

// Spine.PathConstraintPositionTimeline
struct PathConstraintPositionTimeline_t1763671084;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.PathConstraintPositionTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintPositionTimeline__ctor_m1054815551 (PathConstraintPositionTimeline_t1763671084 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintPositionTimeline::get_PropertyId()
extern "C"  int32_t PathConstraintPositionTimeline_get_PropertyId_m2069657247 (PathConstraintPositionTimeline_t1763671084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintPositionTimeline::get_PathConstraintIndex()
extern "C"  int32_t PathConstraintPositionTimeline_get_PathConstraintIndex_m247317159 (PathConstraintPositionTimeline_t1763671084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::set_PathConstraintIndex(System.Int32)
extern "C"  void PathConstraintPositionTimeline_set_PathConstraintIndex_m938197376 (PathConstraintPositionTimeline_t1763671084 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.PathConstraintPositionTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* PathConstraintPositionTimeline_get_Frames_m189058537 (PathConstraintPositionTimeline_t1763671084 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::set_Frames(System.Single[])
extern "C"  void PathConstraintPositionTimeline_set_Frames_m2664684024 (PathConstraintPositionTimeline_t1763671084 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::SetFrame(System.Int32,System.Single,System.Single)
extern "C"  void PathConstraintPositionTimeline_SetFrame_m3414596924 (PathConstraintPositionTimeline_t1763671084 * __this, int32_t ___frameIndex0, float ___time1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintPositionTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void PathConstraintPositionTimeline_Apply_m3034793732 (PathConstraintPositionTimeline_t1763671084 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
