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

// Spine.DrawOrderTimeline
struct DrawOrderTimeline_t3899080909;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3750818532;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.DrawOrderTimeline::.ctor(System.Int32)
extern "C"  void DrawOrderTimeline__ctor_m4074610854 (DrawOrderTimeline_t3899080909 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.DrawOrderTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* DrawOrderTimeline_get_Frames_m965053046 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_Frames(System.Single[])
extern "C"  void DrawOrderTimeline_set_Frames_m2843874617 (DrawOrderTimeline_t3899080909 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[][] Spine.DrawOrderTimeline::get_DrawOrders()
extern "C"  Int32U5BU5DU5BU5D_t3750818532* DrawOrderTimeline_get_DrawOrders_m1465863531 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::set_DrawOrders(System.Int32[][])
extern "C"  void DrawOrderTimeline_set_DrawOrders_m1082085832 (DrawOrderTimeline_t3899080909 * __this, Int32U5BU5DU5BU5D_t3750818532* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DrawOrderTimeline::get_FrameCount()
extern "C"  int32_t DrawOrderTimeline_get_FrameCount_m2152648064 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.DrawOrderTimeline::get_PropertyId()
extern "C"  int32_t DrawOrderTimeline_get_PropertyId_m2685691820 (DrawOrderTimeline_t3899080909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::SetFrame(System.Int32,System.Single,System.Int32[])
extern "C"  void DrawOrderTimeline_SetFrame_m1558862993 (DrawOrderTimeline_t3899080909 * __this, int32_t ___frameIndex0, float ___time1, Int32U5BU5D_t3030399641* ___drawOrder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.DrawOrderTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void DrawOrderTimeline_Apply_m1676785259 (DrawOrderTimeline_t3899080909 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
