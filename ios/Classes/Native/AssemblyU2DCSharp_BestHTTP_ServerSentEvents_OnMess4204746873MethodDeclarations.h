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

// BestHTTP.ServerSentEvents.OnMessageDelegate
struct OnMessageDelegate_t4204746873;
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

// System.Void BestHTTP.ServerSentEvents.OnMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnMessageDelegate__ctor_m4001683496 (OnMessageDelegate_t4204746873 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnMessageDelegate::Invoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.Message)
extern "C"  void OnMessageDelegate_Invoke_m2345011670 (OnMessageDelegate_t4204746873 * __this, EventSource_t3924127377 * ___eventSource0, Message_t1650395211 * ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.ServerSentEvents.OnMessageDelegate::BeginInvoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.Message,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnMessageDelegate_BeginInvoke_m2275708425 (OnMessageDelegate_t4204746873 * __this, EventSource_t3924127377 * ___eventSource0, Message_t1650395211 * ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnMessageDelegate_EndInvoke_m3134581234 (OnMessageDelegate_t4204746873 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
