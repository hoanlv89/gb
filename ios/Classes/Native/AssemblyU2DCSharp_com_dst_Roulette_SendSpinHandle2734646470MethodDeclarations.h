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

// com.dst.Roulette.SendSpinHandle
struct SendSpinHandle_t2734646470;
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

// System.Void com.dst.Roulette.SendSpinHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void SendSpinHandle__ctor_m2841544205 (SendSpinHandle_t2734646470 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendSpinHandle::Invoke()
extern "C"  void SendSpinHandle_Invoke_m1253342733 (SendSpinHandle_t2734646470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.SendSpinHandle::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendSpinHandle_BeginInvoke_m4110046186 (SendSpinHandle_t2734646470 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendSpinHandle::EndInvoke(System.IAsyncResult)
extern "C"  void SendSpinHandle_EndInvoke_m2520401175 (SendSpinHandle_t2734646470 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
