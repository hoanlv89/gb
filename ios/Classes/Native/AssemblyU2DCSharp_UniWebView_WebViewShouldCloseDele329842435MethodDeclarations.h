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

// UniWebView/WebViewShouldCloseDelegate
struct WebViewShouldCloseDelegate_t329842435;
// System.Object
struct Il2CppObject;
// UniWebView
struct UniWebView_t3614141785;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_UniWebView3614141785.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UniWebView/WebViewShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WebViewShouldCloseDelegate__ctor_m1645051628 (WebViewShouldCloseDelegate_t329842435 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView/WebViewShouldCloseDelegate::Invoke(UniWebView)
extern "C"  bool WebViewShouldCloseDelegate_Invoke_m314462597 (WebViewShouldCloseDelegate_t329842435 * __this, UniWebView_t3614141785 * ___webView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/WebViewShouldCloseDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebViewShouldCloseDelegate_BeginInvoke_m3507297012 (WebViewShouldCloseDelegate_t329842435 * __this, UniWebView_t3614141785 * ___webView0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView/WebViewShouldCloseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool WebViewShouldCloseDelegate_EndInvoke_m3976540620 (WebViewShouldCloseDelegate_t329842435 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
