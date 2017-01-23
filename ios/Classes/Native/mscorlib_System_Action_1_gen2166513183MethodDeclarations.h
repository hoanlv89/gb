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

// System.Action`1<MP_MusicPlaybackState>
struct Action_1_t2166513183;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState2364713801.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<MP_MusicPlaybackState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2411811884_gshared (Action_1_t2166513183 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2411811884(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t2166513183 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2411811884_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<MP_MusicPlaybackState>::Invoke(T)
extern "C"  void Action_1_Invoke_m2585505051_gshared (Action_1_t2166513183 * __this, int32_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m2585505051(__this, ___obj0, method) ((  void (*) (Action_1_t2166513183 *, int32_t, const MethodInfo*))Action_1_Invoke_m2585505051_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<MP_MusicPlaybackState>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3272998202_gshared (Action_1_t2166513183 * __this, int32_t ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3272998202(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t2166513183 *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3272998202_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<MP_MusicPlaybackState>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1447439599_gshared (Action_1_t2166513183 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1447439599(__this, ___result0, method) ((  void (*) (Action_1_t2166513183 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1447439599_gshared)(__this, ___result0, method)
