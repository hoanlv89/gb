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

// LitJson.WrapperFactory
struct WrapperFactory_t2219329745;
// System.Object
struct Il2CppObject;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3045908096;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void WrapperFactory__ctor_m2172718591 (WrapperFactory_t2219329745 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C"  Il2CppObject * WrapperFactory_Invoke_m192211249 (WrapperFactory_t2219329745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WrapperFactory_BeginInvoke_m2063340798 (WrapperFactory_t2219329745 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * WrapperFactory_EndInvoke_m2414396403 (WrapperFactory_t2219329745 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
