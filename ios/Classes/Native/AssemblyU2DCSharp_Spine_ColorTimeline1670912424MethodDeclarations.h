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

// Spine.ColorTimeline
struct ColorTimeline_t1670912424;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.ColorTimeline::.ctor(System.Int32)
extern "C"  void ColorTimeline__ctor_m2822482187 (ColorTimeline_t1670912424 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.ColorTimeline::get_SlotIndex()
extern "C"  int32_t ColorTimeline_get_SlotIndex_m2425247975 (ColorTimeline_t1670912424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::set_SlotIndex(System.Int32)
extern "C"  void ColorTimeline_set_SlotIndex_m2062968550 (ColorTimeline_t1670912424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.ColorTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* ColorTimeline_get_Frames_m2231594865 (ColorTimeline_t1670912424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::set_Frames(System.Single[])
extern "C"  void ColorTimeline_set_Frames_m4210684862 (ColorTimeline_t1670912424 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.ColorTimeline::get_PropertyId()
extern "C"  int32_t ColorTimeline_get_PropertyId_m3225730819 (ColorTimeline_t1670912424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::SetFrame(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void ColorTimeline_SetFrame_m1931864893 (ColorTimeline_t1670912424 * __this, int32_t ___frameIndex0, float ___time1, float ___r2, float ___g3, float ___b4, float ___a5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.ColorTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void ColorTimeline_Apply_m4096807378 (ColorTimeline_t1670912424 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
