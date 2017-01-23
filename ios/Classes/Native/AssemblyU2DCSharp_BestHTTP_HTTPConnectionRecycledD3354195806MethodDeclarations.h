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

// BestHTTP.HTTPConnectionRecycledDelegate
struct HTTPConnectionRecycledDelegate_t3354195806;
// System.Object
struct Il2CppObject;
// BestHTTP.ConnectionBase
struct ConnectionBase_t2782190729;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_BestHTTP_ConnectionBase2782190729.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void BestHTTP.HTTPConnectionRecycledDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HTTPConnectionRecycledDelegate__ctor_m2448123327 (HTTPConnectionRecycledDelegate_t3354195806 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnectionRecycledDelegate::Invoke(BestHTTP.ConnectionBase)
extern "C"  void HTTPConnectionRecycledDelegate_Invoke_m2209943888 (HTTPConnectionRecycledDelegate_t3354195806 * __this, ConnectionBase_t2782190729 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BestHTTP.HTTPConnectionRecycledDelegate::BeginInvoke(BestHTTP.ConnectionBase,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HTTPConnectionRecycledDelegate_BeginInvoke_m4157379405 (HTTPConnectionRecycledDelegate_t3354195806 * __this, ConnectionBase_t2782190729 * ___conn0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.HTTPConnectionRecycledDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HTTPConnectionRecycledDelegate_EndInvoke_m1962737217 (HTTPConnectionRecycledDelegate_t3354195806 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
