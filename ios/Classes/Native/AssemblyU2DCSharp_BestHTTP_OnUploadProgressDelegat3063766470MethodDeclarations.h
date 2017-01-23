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

// BestHTTP.OnUploadProgressDelegate
struct OnUploadProgressDelegate_t3063766470;
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

// System.Void BestHTTP.OnUploadProgressDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnUploadProgressDelegate__ctor_m4061589201 (OnUploadProgressDelegate_t3063766470 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnUploadProgressDelegate::Invoke(BestHTTP.HTTPRequest,System.Int64,System.Int64)
extern "C"  void OnUploadProgressDelegate_Invoke_m1000946176 (OnUploadProgressDelegate_t3063766470 * __this, HTTPRequest_t138485887 * ___originalRequest0, int64_t ___uploaded1, int64_t ___uploadLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.OnUploadProgressDelegate::BeginInvoke(BestHTTP.HTTPRequest,System.Int64,System.Int64,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnUploadProgressDelegate_BeginInvoke_m3957310425 (OnUploadProgressDelegate_t3063766470 * __this, HTTPRequest_t138485887 * ___originalRequest0, int64_t ___uploaded1, int64_t ___uploadLength2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.OnUploadProgressDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnUploadProgressDelegate_EndInvoke_m4261524819 (OnUploadProgressDelegate_t3063766470 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
