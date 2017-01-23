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

// Spine.PathConstraintSpacingTimeline
struct PathConstraintSpacingTimeline_t3057028764;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.PathConstraintSpacingTimeline::.ctor(System.Int32)
extern "C"  void PathConstraintSpacingTimeline__ctor_m423061163 (PathConstraintSpacingTimeline_t3057028764 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.PathConstraintSpacingTimeline::get_PropertyId()
extern "C"  int32_t PathConstraintSpacingTimeline_get_PropertyId_m1294479835 (PathConstraintSpacingTimeline_t3057028764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.PathConstraintSpacingTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void PathConstraintSpacingTimeline_Apply_m3395795932 (PathConstraintSpacingTimeline_t3057028764 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
