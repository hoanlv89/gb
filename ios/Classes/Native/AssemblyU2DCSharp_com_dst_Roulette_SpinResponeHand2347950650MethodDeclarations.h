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

// com.dst.Roulette.SpinResponeHandle
struct SpinResponeHandle_t2347950650;
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

// System.Void com.dst.Roulette.SpinResponeHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void SpinResponeHandle__ctor_m3499011245 (SpinResponeHandle_t2347950650 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SpinResponeHandle::Invoke(System.Int32,System.Int32,System.Int32)
extern "C"  void SpinResponeHandle_Invoke_m2452280732 (SpinResponeHandle_t2347950650 * __this, int32_t ___result0, int32_t ___id1, int32_t ___gold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.SpinResponeHandle::BeginInvoke(System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SpinResponeHandle_BeginInvoke_m2119370519 (SpinResponeHandle_t2347950650 * __this, int32_t ___result0, int32_t ___id1, int32_t ___gold2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SpinResponeHandle::EndInvoke(System.IAsyncResult)
extern "C"  void SpinResponeHandle_EndInvoke_m3355400887 (SpinResponeHandle_t2347950650 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
