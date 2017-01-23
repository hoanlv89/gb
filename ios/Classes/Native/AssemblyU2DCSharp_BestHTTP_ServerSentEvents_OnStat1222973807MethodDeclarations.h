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

// BestHTTP.ServerSentEvents.OnStateChangedDelegate
struct OnStateChangedDelegate_t1222973807;
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
#include "AssemblyU2DCSharp_BestHTTP_ServerSentEvents_States3624480836.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.ServerSentEvents.OnStateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnStateChangedDelegate__ctor_m3651728038 (OnStateChangedDelegate_t1222973807 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnStateChangedDelegate::Invoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.States,BestHTTP.ServerSentEvents.States)
extern "C"  void OnStateChangedDelegate_Invoke_m2944848725 (OnStateChangedDelegate_t1222973807 * __this, EventSource_t3924127377 * ___eventSource0, int32_t ___oldState1, int32_t ___newState2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.ServerSentEvents.OnStateChangedDelegate::BeginInvoke(BestHTTP.ServerSentEvents.EventSource,BestHTTP.ServerSentEvents.States,BestHTTP.ServerSentEvents.States,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnStateChangedDelegate_BeginInvoke_m418670244 (OnStateChangedDelegate_t1222973807 * __this, EventSource_t3924127377 * ___eventSource0, int32_t ___oldState1, int32_t ___newState2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.ServerSentEvents.OnStateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnStateChangedDelegate_EndInvoke_m3519478256 (OnStateChangedDelegate_t1222973807 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
