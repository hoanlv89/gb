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

// com.dst.Roulette.FinishReceiverHandle
struct FinishReceiverHandle_t2175676894;
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

// System.Void com.dst.Roulette.FinishReceiverHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void FinishReceiverHandle__ctor_m2920025755 (FinishReceiverHandle_t2175676894 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.FinishReceiverHandle::Invoke(System.Int32)
extern "C"  void FinishReceiverHandle_Invoke_m3162523666 (FinishReceiverHandle_t2175676894 * __this, int32_t ___gold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.FinishReceiverHandle::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FinishReceiverHandle_BeginInvoke_m3605167901 (FinishReceiverHandle_t2175676894 * __this, int32_t ___gold0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.FinishReceiverHandle::EndInvoke(System.IAsyncResult)
extern "C"  void FinishReceiverHandle_EndInvoke_m1146283237 (FinishReceiverHandle_t2175676894 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
