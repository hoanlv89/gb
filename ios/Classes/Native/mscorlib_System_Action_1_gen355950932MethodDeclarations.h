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

// System.Action`1<Spine.EventQueue/EventQueueEntry>
struct Action_1_t355950932;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Spine_EventQueue_EventQueueEntry554151550.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<Spine.EventQueue/EventQueueEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m196668222_gshared (Action_1_t355950932 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m196668222(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t355950932 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m196668222_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<Spine.EventQueue/EventQueueEntry>::Invoke(T)
extern "C"  void Action_1_Invoke_m3575045650_gshared (Action_1_t355950932 * __this, EventQueueEntry_t554151550  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3575045650(__this, ___obj0, method) ((  void (*) (Action_1_t355950932 *, EventQueueEntry_t554151550 , const MethodInfo*))Action_1_Invoke_m3575045650_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<Spine.EventQueue/EventQueueEntry>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1285944901_gshared (Action_1_t355950932 * __this, EventQueueEntry_t554151550  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m1285944901(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t355950932 *, EventQueueEntry_t554151550 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1285944901_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<Spine.EventQueue/EventQueueEntry>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1236873544_gshared (Action_1_t355950932 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1236873544(__this, ___result0, method) ((  void (*) (Action_1_t355950932 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1236873544_gshared)(__this, ___result0, method)
