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

// BestHTTP.OnBeforeRedirectionDelegate
struct OnBeforeRedirectionDelegate_t290558967;
// System.Object
struct Il2CppObject;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// BestHTTP.HTTPResponse
struct HTTPResponse_t62748825;
// System.Uri
struct Uri_t19570940;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPResponse62748825.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.OnBeforeRedirectionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnBeforeRedirectionDelegate__ctor_m728708930 (OnBeforeRedirectionDelegate_t290558967 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.OnBeforeRedirectionDelegate::Invoke(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse,System.Uri)
extern "C"  bool OnBeforeRedirectionDelegate_Invoke_m2502345419 (OnBeforeRedirectionDelegate_t290558967 * __this, HTTPRequest_t138485887 * ___originalRequest0, HTTPResponse_t62748825 * ___response1, Uri_t19570940 * ___redirectUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.OnBeforeRedirectionDelegate::BeginInvoke(BestHTTP.HTTPRequest,BestHTTP.HTTPResponse,System.Uri,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnBeforeRedirectionDelegate_BeginInvoke_m3225336640 (OnBeforeRedirectionDelegate_t290558967 * __this, HTTPRequest_t138485887 * ___originalRequest0, HTTPResponse_t62748825 * ___response1, Uri_t19570940 * ___redirectUri2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.OnBeforeRedirectionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool OnBeforeRedirectionDelegate_EndInvoke_m3844237146 (OnBeforeRedirectionDelegate_t290558967 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
