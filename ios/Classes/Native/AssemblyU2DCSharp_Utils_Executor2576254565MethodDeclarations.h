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

// Utils/Executor
struct Executor_t2576254565;
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

// System.Void Utils/Executor::.ctor(System.Object,System.IntPtr)
extern "C"  void Executor__ctor_m2283687114 (Executor_t2576254565 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils/Executor::Invoke()
extern "C"  void Executor_Invoke_m2279376136 (Executor_t2576254565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Utils/Executor::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Executor_BeginInvoke_m3011020691 (Executor_t2576254565 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils/Executor::EndInvoke(System.IAsyncResult)
extern "C"  void Executor_EndInvoke_m330215604 (Executor_t2576254565 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
