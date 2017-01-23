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

// Spine.EventQueue
struct EventQueue_t3612440949;
// Spine.AnimationState
struct AnimationState_t1491536497;
// System.Action
struct Action_t3226471752;
// Spine.Pool`1<Spine.TrackEntry>
struct Pool_1_t428500383;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_AnimationState1491536497.h"
#include "System_Core_System_Action3226471752.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"

// System.Void Spine.EventQueue::.ctor(Spine.AnimationState,System.Action,Spine.Pool`1<Spine.TrackEntry>)
extern "C"  void EventQueue__ctor_m2483562522 (EventQueue_t3612440949 * __this, AnimationState_t1491536497 * ___state0, Action_t3226471752 * ___HandleAnimationsChanged1, Pool_1_t428500383 * ___trackEntryPool2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::add_AnimationsChanged(System.Action)
extern "C"  void EventQueue_add_AnimationsChanged_m537680573 (EventQueue_t3612440949 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::remove_AnimationsChanged(System.Action)
extern "C"  void EventQueue_remove_AnimationsChanged_m785989728 (EventQueue_t3612440949 * __this, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Start(Spine.TrackEntry)
extern "C"  void EventQueue_Start_m2926450437 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Interrupt(Spine.TrackEntry)
extern "C"  void EventQueue_Interrupt_m3472277266 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::End(Spine.TrackEntry)
extern "C"  void EventQueue_End_m3161419088 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Dispose(Spine.TrackEntry)
extern "C"  void EventQueue_Dispose_m659133616 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Complete(Spine.TrackEntry)
extern "C"  void EventQueue_Complete_m914789342 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Event(Spine.TrackEntry,Spine.Event)
extern "C"  void EventQueue_Event_m311274830 (EventQueue_t3612440949 * __this, TrackEntry_t4106063311 * ___entry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Drain()
extern "C"  void EventQueue_Drain_m224925777 (EventQueue_t3612440949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.EventQueue::Clear()
extern "C"  void EventQueue_Clear_m842930342 (EventQueue_t3612440949 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
