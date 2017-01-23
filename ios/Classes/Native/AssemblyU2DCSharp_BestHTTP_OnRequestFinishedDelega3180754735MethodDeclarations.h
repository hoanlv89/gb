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

// BestHTTP.OnRequestFinishedDelegate
struct OnRequestFinishedDelegate_t3180754735;
// System.Object
struct Il2CppObject;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.OnRequestFinishedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRequestFinishedDelegate__ctor_m3446790394 (OnRequestFinishedDelegate_t3180754735 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnRequestFinishedDelegate::Invoke(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse)
extern "C"  void OnRequestFinishedDelegate_Invoke_m4013166646 (OnRequestFinishedDelegate_t3180754735 * __this, HTTPRequest_t138485887 * ___originalRequest0, HTTPResponse_t62748825 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.OnRequestFinishedDelegate::BeginInvoke(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnRequestFinishedDelegate_BeginInvoke_m2785325805 (OnRequestFinishedDelegate_t3180754735 * __this, HTTPRequest_t138485887 * ___originalRequest0, HTTPResponse_t62748825 * ___response1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnRequestFinishedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnRequestFinishedDelegate_EndInvoke_m4172189736 (OnRequestFinishedDelegate_t3180754735 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
