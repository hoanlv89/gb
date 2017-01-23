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

// com.dst.Roulette.SendAMHandle
struct SendAMHandle_t3228690636;
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

// System.Void com.dst.Roulette.SendAMHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void SendAMHandle__ctor_m941392493 (SendAMHandle_t3228690636 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendAMHandle::Invoke(System.Int32)
extern "C"  void SendAMHandle_Invoke_m2170719780 (SendAMHandle_t3228690636 * __this, int32_t ___gold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.SendAMHandle::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendAMHandle_BeginInvoke_m332074735 (SendAMHandle_t3228690636 * __this, int32_t ___gold0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendAMHandle::EndInvoke(System.IAsyncResult)
extern "C"  void SendAMHandle_EndInvoke_m4016006371 (SendAMHandle_t3228690636 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
