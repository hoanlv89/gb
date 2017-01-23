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

// com.dst.Roulette.ExitHandle
struct ExitHandle_t2480587484;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void com.dst.Roulette.ExitHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void ExitHandle__ctor_m2379323101 (ExitHandle_t2480587484 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.ExitHandle::Invoke()
extern "C"  void ExitHandle_Invoke_m61149853 (ExitHandle_t2480587484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.ExitHandle::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExitHandle_BeginInvoke_m2294340064 (ExitHandle_t2480587484 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.ExitHandle::EndInvoke(System.IAsyncResult)
extern "C"  void ExitHandle_EndInvoke_m3711679251 (ExitHandle_t2480587484 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
