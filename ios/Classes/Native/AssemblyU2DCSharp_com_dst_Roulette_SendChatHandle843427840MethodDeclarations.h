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

// com.dst.Roulette.SendChatHandle
struct SendChatHandle_t843427840;
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

// System.Void com.dst.Roulette.SendChatHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void SendChatHandle__ctor_m1607967959 (SendChatHandle_t843427840 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendChatHandle::Invoke()
extern "C"  void SendChatHandle_Invoke_m2584032099 (SendChatHandle_t843427840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.SendChatHandle::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SendChatHandle_BeginInvoke_m2356350000 (SendChatHandle_t843427840 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.SendChatHandle::EndInvoke(System.IAsyncResult)
extern "C"  void SendChatHandle_EndInvoke_m2964825953 (SendChatHandle_t843427840 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
