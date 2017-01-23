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

// Utils/ExeOneStringParam
struct ExeOneStringParam_t2750684624;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Utils/ExeOneStringParam::.ctor(System.Object,System.IntPtr)
extern "C"  void ExeOneStringParam__ctor_m4211096745 (ExeOneStringParam_t2750684624 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils/ExeOneStringParam::Invoke(System.String)
extern "C"  void ExeOneStringParam_Invoke_m2607624027 (ExeOneStringParam_t2750684624 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Utils/ExeOneStringParam::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExeOneStringParam_BeginInvoke_m3628872978 (ExeOneStringParam_t2750684624 * __this, String_t* ___result0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils/ExeOneStringParam::EndInvoke(System.IAsyncResult)
extern "C"  void ExeOneStringParam_EndInvoke_m3537773099 (ExeOneStringParam_t2750684624 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
