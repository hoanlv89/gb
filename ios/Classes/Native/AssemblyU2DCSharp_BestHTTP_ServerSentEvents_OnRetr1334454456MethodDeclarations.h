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

// BestHTTP.ServerSentEvents.OnRetryDelegate
struct OnRetryDelegate_t1334454456;
// System.Object
struct Il2CppObject;
// BestHTTP.ServerSentEvents.EventSource
struct EventSource_t3924127377;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_EventS3924127377.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.ServerSentEvents.OnRetryDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRetryDelegate__ctor_m3480084219 (OnRetryDelegate_t1334454456 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ServerSentEvents.OnRetryDelegate::Invoke(BestHTTP.ServerSentEvents.EventSource)
extern "C"  bool OnRetryDelegate_Invoke_m2049157476 (OnRetryDelegate_t1334454456 * __this, EventSource_t3924127377 * ___eventSource0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.ServerSentEvents.OnRetryDelegate::BeginInvoke(BestHTTP.ServerSentEvents.EventSource,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnRetryDelegate_BeginInvoke_m2205860935 (OnRetryDelegate_t1334454456 * __this, EventSource_t3924127377 * ___eventSource0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.ServerSentEvents.OnRetryDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool OnRetryDelegate_EndInvoke_m2166654237 (OnRetryDelegate_t1334454456 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
