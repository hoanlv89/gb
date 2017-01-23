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

// BestHTTP.OnDownloadProgressDelegate
struct OnDownloadProgressDelegate_t447146369;
// System.Object
struct Il2CppObject;
// BestHTTP.HTTPRequest
struct HTTPRequest_t138485887;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_HTTPRequest138485887.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.OnDownloadProgressDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnDownloadProgressDelegate__ctor_m1053106336 (OnDownloadProgressDelegate_t447146369 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnDownloadProgressDelegate::Invoke(BestHTTP.HTTPRequest,System.Int32,System.Int32)
extern "C"  void OnDownloadProgressDelegate_Invoke_m3815916761 (OnDownloadProgressDelegate_t447146369 * __this, HTTPRequest_t138485887 * ___originalRequest0, int32_t ___downloaded1, int32_t ___downloadLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.OnDownloadProgressDelegate::BeginInvoke(BestHTTP.HTTPRequest,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnDownloadProgressDelegate_BeginInvoke_m3734010578 (OnDownloadProgressDelegate_t447146369 * __this, HTTPRequest_t138485887 * ___originalRequest0, int32_t ___downloaded1, int32_t ___downloadLength2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnDownloadProgressDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnDownloadProgressDelegate_EndInvoke_m3555037670 (OnDownloadProgressDelegate_t447146369 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
