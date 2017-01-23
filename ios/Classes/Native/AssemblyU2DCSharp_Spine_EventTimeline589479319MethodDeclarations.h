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

// Spine.EventTimeline
struct EventTimeline_t589479319;
// System.Single[]
struct SingleU5BU5D_t577127397;
// Spine.Event[]
struct EventU5BU5D_t182593839;
// Spine.Event
struct Event_t1819867114;
// Spine.Skeleton
struct Skeleton_t1387859465;
// Spine.ExposedList`1<Spine.Event>
struct ExposedList_1_t876769054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"
#include "AssemblyU2DCSharp_Spine_Skeleton1387859465.h"

// System.Void Spine.EventTimeline::.ctor(System.Int32)
extern "C"  void EventTimeline__ctor_m2007920940 (EventTimeline_t589479319 * __this, int32_t ___frameCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] Spine.EventTimeline::get_Frames()
extern "C"  SingleU5BU5D_t577127397* EventTimeline_get_Frames_m3792276336 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Frames(System.Single[])
extern "C"  void EventTimeline_set_Frames_m3904961007 (EventTimeline_t589479319 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Spine.Event[] Spine.EventTimeline::get_Events()
extern "C"  EventU5BU5D_t182593839* EventTimeline_get_Events_m171407595 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::set_Events(Spine.Event[])
extern "C"  void EventTimeline_set_Events_m2106855374 (EventTimeline_t589479319 * __this, EventU5BU5D_t182593839* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.EventTimeline::get_FrameCount()
extern "C"  int32_t EventTimeline_get_FrameCount_m863089154 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spine.EventTimeline::get_PropertyId()
extern "C"  int32_t EventTimeline_get_PropertyId_m3541321582 (EventTimeline_t589479319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::SetFrame(System.Int32,Spine.Event)
extern "C"  void EventTimeline_SetFrame_m3565913794 (EventTimeline_t589479319 * __this, int32_t ___frameIndex0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventTimeline::Apply(Spine.Skeleton,System.Single,System.Single,Spine.ExposedList`1<Spine.Event>,System.Single,System.Boolean,System.Boolean)
extern "C"  void EventTimeline_Apply_m391384353 (EventTimeline_t589479319 * __this, Skeleton_t1387859465 * ___skeleton0, float ___lastTime1, float ___time2, ExposedList_1_t876769054 * ___firedEvents3, float ___alpha4, bool ___setupPose5, bool ___mixingOut6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
