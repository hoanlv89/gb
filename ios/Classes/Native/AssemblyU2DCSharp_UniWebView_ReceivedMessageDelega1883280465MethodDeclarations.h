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

// UniWebView/ReceivedMessageDelegate
struct ReceivedMessageDelegate_t1883280465;
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
#include "AssemblyU2DCSharp_UniWebViewMessage74088308.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void UniWebView/ReceivedMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReceivedMessageDelegate__ctor_m405988070 (ReceivedMessageDelegate_t1883280465 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedMessageDelegate::Invoke(UniWebView,UniWebViewMessage)
extern "C"  void ReceivedMessageDelegate_Invoke_m793348175 (ReceivedMessageDelegate_t1883280465 * __this, UniWebView_t3614141785 * ___webView0, UniWebViewMessage_t74088308  ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/ReceivedMessageDelegate::BeginInvoke(UniWebView,UniWebViewMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReceivedMessageDelegate_BeginInvoke_m2555791562 (ReceivedMessageDelegate_t1883280465 * __this, UniWebView_t3614141785 * ___webView0, UniWebViewMessage_t74088308  ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ReceivedMessageDelegate_EndInvoke_m2127793608 (ReceivedMessageDelegate_t1883280465 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
