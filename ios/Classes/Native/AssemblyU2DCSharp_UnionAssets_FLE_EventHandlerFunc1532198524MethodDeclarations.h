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

// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t1532198524;
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

// System.Void UnionAssets.FLE.EventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandlerFunction__ctor_m868158912 (EventHandlerFunction_t1532198524 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C"  void EventHandlerFunction_Invoke_m495018234 (EventHandlerFunction_t1532198524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandlerFunction_BeginInvoke_m3901756381 (EventHandlerFunction_t1532198524 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandlerFunction_EndInvoke_m3524340894 (EventHandlerFunction_t1532198524 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
