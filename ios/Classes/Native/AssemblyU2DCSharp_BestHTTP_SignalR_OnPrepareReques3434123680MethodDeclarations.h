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

// BestHTTP.SignalR.OnPrepareRequestDelegate
struct OnPrepareRequestDelegate_t3434123680;
// System.Object
struct Il2CppObject;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Connection2915781690.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_RequestTypes1771348820.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.SignalR.OnPrepareRequestDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnPrepareRequestDelegate__ctor_m889647869 (OnPrepareRequestDelegate_t3434123680 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnPrepareRequestDelegate::Invoke(BestHTTP.SignalR.Connection,BestHTTP.HTTPRequest,BestHTTP.SignalR.RequestTypes)
extern "C"  void OnPrepareRequestDelegate_Invoke_m4232796760 (OnPrepareRequestDelegate_t3434123680 * __this, Connection_t2915781690 * ___connection0, HTTPRequest_t138485887 * ___req1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.SignalR.OnPrepareRequestDelegate::BeginInvoke(BestHTTP.SignalR.Connection,BestHTTP.HTTPRequest,BestHTTP.SignalR.RequestTypes,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnPrepareRequestDelegate_BeginInvoke_m691790581 (OnPrepareRequestDelegate_t3434123680 * __this, Connection_t2915781690 * ___connection0, HTTPRequest_t138485887 * ___req1, int32_t ___type2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SignalR.OnPrepareRequestDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnPrepareRequestDelegate_EndInvoke_m1280605539 (OnPrepareRequestDelegate_t3434123680 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
