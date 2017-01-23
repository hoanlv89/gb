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

// BestHTTP.ServerSentEvents.OnEventDelegate
struct OnEventDelegate_t790674770;
// System.Object
struct Il2CppObject;
// BestHTTP.ServerSentEvents.EventSource
struct EventSource_t3924127377;
// BestHTTP.ServerSentEvents.Message
struct Message_t1650395211;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_EventS3924127377.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_Messag1650395211.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.ServerSentEvents.OnEventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnEventDelegate__ctor_m2469504187 (OnEventDelegate_t790674770 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnEventDelegate::Invoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.Message)
extern "C"  void OnEventDelegate_Invoke_m1099384225 (OnEventDelegate_t790674770 * __this, EventSource_t3924127377 * ___eventSource0, Message_t1650395211 * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.ServerSentEvents.OnEventDelegate::BeginInvoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.Message,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnEventDelegate_BeginInvoke_m3993925998 (OnEventDelegate_t790674770 * __this, EventSource_t3924127377 * ___eventSource0, Message_t1650395211 * ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnEventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnEventDelegate_EndInvoke_m3404769629 (OnEventDelegate_t790674770 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
