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

// BestHTTP.ServerSentEvents.OnErrorDelegate
struct OnErrorDelegate_t676891988;
// System.Object
struct Il2CppObject;
// BestHTTP.ServerSentEvents.EventSource
struct EventSource_t3924127377;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_EventS3924127377.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.ServerSentEvents.OnErrorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnErrorDelegate__ctor_m3358000883 (OnErrorDelegate_t676891988 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnErrorDelegate::Invoke(BestHTTP.ServerSentEvents.EventSource,System.String)
extern "C"  void OnErrorDelegate_Invoke_m2675097742 (OnErrorDelegate_t676891988 * __this, EventSource_t3924127377 * ___eventSource0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.ServerSentEvents.OnErrorDelegate::BeginInvoke(BestHTTP.ServerSentEvents.EventSource,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnErrorDelegate_BeginInvoke_m3186231129 (OnErrorDelegate_t676891988 * __this, EventSource_t3924127377 * ___eventSource0, String_t* ___error1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnErrorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnErrorDelegate_EndInvoke_m4238836029 (OnErrorDelegate_t676891988 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
