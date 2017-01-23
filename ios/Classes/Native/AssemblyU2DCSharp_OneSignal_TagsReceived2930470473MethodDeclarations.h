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

// OneSignal/TagsReceived
struct TagsReceived_t2930470473;
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

// System.Void OneSignal/TagsReceived::.ctor(System.Object,System.IntPtr)
extern "C"  void TagsReceived__ctor_m1146050258 (TagsReceived_t2930470473 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void TagsReceived_Invoke_m909300587 (TagsReceived_t2930470473 * __this, Dictionary_2_t309261261 * ___tags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/TagsReceived::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TagsReceived_BeginInvoke_m1915622526 (TagsReceived_t2930470473 * __this, Dictionary_2_t309261261 * ___tags0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/TagsReceived::EndInvoke(System.IAsyncResult)
extern "C"  void TagsReceived_EndInvoke_m2814756976 (TagsReceived_t2930470473 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
