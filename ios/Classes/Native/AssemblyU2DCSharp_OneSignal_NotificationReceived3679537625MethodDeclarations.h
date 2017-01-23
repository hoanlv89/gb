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

// OneSignal/NotificationReceived
struct NotificationReceived_t3679537625;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OneSignal/NotificationReceived::.ctor(System.Object,System.IntPtr)
extern "C"  void NotificationReceived__ctor_m2375688236 (NotificationReceived_t3679537625 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/NotificationReceived::Invoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void NotificationReceived_Invoke_m2719959140 (NotificationReceived_t3679537625 * __this, String_t* ___message0, Dictionary_2_t309261261 * ___additionalData1, bool ___isActive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/NotificationReceived::BeginInvoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * NotificationReceived_BeginInvoke_m3308955661 (NotificationReceived_t3679537625 * __this, String_t* ___message0, Dictionary_2_t309261261 * ___additionalData1, bool ___isActive2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/NotificationReceived::EndInvoke(System.IAsyncResult)
extern "C"  void NotificationReceived_EndInvoke_m1741530038 (NotificationReceived_t3679537625 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
