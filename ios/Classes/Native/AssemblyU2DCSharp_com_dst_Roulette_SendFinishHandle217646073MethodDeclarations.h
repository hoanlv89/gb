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

// com.dst.Roulette.SendFinishHandle
struct SendFinishHandle_t217646073;
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

// System.Void com.dst.Roulette.SendFinishHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void SendFinishHandle__ctor_m421808950 (SendFinishHandle_t217646073 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendFinishHandle::Invoke(System.Int32)
extern "C"  void SendFinishHandle_Invoke_m1798542103 (SendFinishHandle_t217646073 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.SendFinishHandle::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendFinishHandle_BeginInvoke_m3813217184 (SendFinishHandle_t217646073 * __this, int32_t ___id0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendFinishHandle::EndInvoke(System.IAsyncResult)
extern "C"  void SendFinishHandle_EndInvoke_m810685704 (SendFinishHandle_t217646073 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
