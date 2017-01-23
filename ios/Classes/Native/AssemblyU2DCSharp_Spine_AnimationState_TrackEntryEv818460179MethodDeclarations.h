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

// Spine.AnimationState/TrackEntryEventDelegate
struct TrackEntryEventDelegate_t818460179;
// System.Object
struct Il2CppObject;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.AnimationState/TrackEntryEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void TrackEntryEventDelegate__ctor_m1661868010 (TrackEntryEventDelegate_t818460179 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/TrackEntryEventDelegate::Invoke(Spine.TrackEntry,Spine.Event)
extern "C"  void TrackEntryEventDelegate_Invoke_m1365740865 (TrackEntryEventDelegate_t818460179 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.AnimationState/TrackEntryEventDelegate::BeginInvoke(Spine.TrackEntry,Spine.Event,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TrackEntryEventDelegate_BeginInvoke_m4282943580 (TrackEntryEventDelegate_t818460179 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/TrackEntryEventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void TrackEntryEventDelegate_EndInvoke_m1463626812 (TrackEntryEventDelegate_t818460179 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
