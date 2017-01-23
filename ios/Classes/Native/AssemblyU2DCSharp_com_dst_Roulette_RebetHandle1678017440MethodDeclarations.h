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

// com.dst.Roulette.RebetHandle
struct RebetHandle_t1678017440;
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

// System.Void com.dst.Roulette.RebetHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void RebetHandle__ctor_m4209525841 (RebetHandle_t1678017440 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.RebetHandle::Invoke()
extern "C"  void RebetHandle_Invoke_m48039105 (RebetHandle_t1678017440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.RebetHandle::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RebetHandle_BeginInvoke_m628503004 (RebetHandle_t1678017440 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.RebetHandle::EndInvoke(System.IAsyncResult)
extern "C"  void RebetHandle_EndInvoke_m4284183163 (RebetHandle_t1678017440 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
