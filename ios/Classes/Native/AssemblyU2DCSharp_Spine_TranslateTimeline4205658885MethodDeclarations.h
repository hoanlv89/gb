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

// Spine.TranslateTimeline
struct TranslateTimeline_t4205658885;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.TranslateTimeline::.ctor(System.Int32)
extern "C"  void TranslateTimeline__ctor_m1872661554 (TranslateTimeline_t4205658885 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TranslateTimeline::get_BoneIndex()
extern "C"  int32_t TranslateTimeline_get_BoneIndex_m1498882148 (TranslateTimeline_t4205658885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::set_BoneIndex(System.Int32)
extern "C"  void TranslateTimeline_set_BoneIndex_m567536397 (TranslateTimeline_t4205658885 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.TranslateTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* TranslateTimeline_get_Frames_m4249738470 (TranslateTimeline_t4205658885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::set_Frames(System.Single[])
extern "C"  void TranslateTimeline_set_Frames_m1157097125 (TranslateTimeline_t4205658885 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.TranslateTimeline::get_PropertyId()
extern "C"  int32_t TranslateTimeline_get_PropertyId_m2005549392 (TranslateTimeline_t4205658885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void TranslateTimeline_SetFrame_m2535348560 (TranslateTimeline_t4205658885 * __this, int32_t ___frameIndex0, float ___time1, float ___x2, float ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.TranslateTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void TranslateTimeline_Apply_m295488427 (TranslateTimeline_t4205658885 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
