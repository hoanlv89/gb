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

// OneSignal/OnPostNotificationSuccess
struct OnPostNotificationSuccess_t356380508;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OneSignal/OnPostNotificationSuccess::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPostNotificationSuccess__ctor_m1201827177 (OnPostNotificationSuccess_t356380508 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/OnPostNotificationSuccess::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void OnPostNotificationSuccess_Invoke_m3692284720 (OnPostNotificationSuccess_t356380508 * __this, Dictionary_2_t309261261 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/OnPostNotificationSuccess::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPostNotificationSuccess_BeginInvoke_m2482928073 (OnPostNotificationSuccess_t356380508 * __this, Dictionary_2_t309261261 * ___response0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/OnPostNotificationSuccess::EndInvoke(System.IAsyncResult)
extern "C"  void OnPostNotificationSuccess_EndInvoke_m646328463 (OnPostNotificationSuccess_t356380508 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
