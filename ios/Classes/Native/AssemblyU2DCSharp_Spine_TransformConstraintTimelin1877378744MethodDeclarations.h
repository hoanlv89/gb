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

// Spine.TransformConstraintTimeline
struct TransformConstraintTimeline_t1877378744;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.TransformConstraintTimeline::.ctor(System.Int32)
extern "C"  void TransformConstraintTimeline__ctor_m3564902815 (TransformConstraintTimeline_t1877378744 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TransformConstraintTimeline::get_TransformConstraintIndex()
extern "C"  int32_t TransformConstraintTimeline_get_TransformConstraintIndex_m1557931004 (TransformConstraintTimeline_t1877378744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::set_TransformConstraintIndex(System.Int32)
extern "C"  void TransformConstraintTimeline_set_TransformConstraintIndex_m3675090221 (TransformConstraintTimeline_t1877378744 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.TransformConstraintTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* TransformConstraintTimeline_get_Frames_m2171028529 (TransformConstraintTimeline_t1877378744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::set_Frames(System.Single[])
extern "C"  void TransformConstraintTimeline_set_Frames_m2144645410 (TransformConstraintTimeline_t1877378744 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TransformConstraintTimeline::get_PropertyId()
extern "C"  int32_t TransformConstraintTimeline_get_PropertyId_m3790069055 (TransformConstraintTimeline_t1877378744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void TransformConstraintTimeline_SetFrame_m1739783541 (TransformConstraintTimeline_t1877378744 * __this, int32_t ___frameIndex0, float ___time1, float ___rotateMix2, float ___translateMix3, float ___scaleMix4, float ___shearMix5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TransformConstraintTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void TransformConstraintTimeline_Apply_m887737474 (TransformConstraintTimeline_t1877378744 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
