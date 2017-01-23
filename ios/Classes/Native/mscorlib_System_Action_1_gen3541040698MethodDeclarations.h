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

// System.Action`1<IOSDialogResult>
struct Action_1_t3541040698;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_IOSDialogResult3739241316.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<IOSDialogResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m157354353_gshared (Action_1_t3541040698 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m157354353(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t3541040698 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m157354353_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<IOSDialogResult>::Invoke(T)
extern "C"  void Action_1_Invoke_m1604875246_gshared (Action_1_t3541040698 * __this, int32_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m1604875246(__this, ___obj0, method) ((  void (*) (Action_1_t3541040698 *, int32_t, const MethodInfo*))Action_1_Invoke_m1604875246_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<IOSDialogResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3978838501_gshared (Action_1_t3541040698 * __this, int32_t ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3978838501(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t3541040698 *, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3978838501_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<IOSDialogResult>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m3011300264_gshared (Action_1_t3541040698 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m3011300264(__this, ___result0, method) ((  void (*) (Action_1_t3541040698 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m3011300264_gshared)(__this, ___result0, method)
