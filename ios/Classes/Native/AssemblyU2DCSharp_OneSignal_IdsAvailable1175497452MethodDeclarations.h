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

// OneSignal/IdsAvailable
struct IdsAvailable_t1175497452;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void OneSignal/IdsAvailable::.ctor(System.Object,System.IntPtr)
extern "C"  void IdsAvailable__ctor_m2154080033 (IdsAvailable_t1175497452 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String)
extern "C"  void IdsAvailable_Invoke_m2258139881 (IdsAvailable_t1175497452 * __this, String_t* ___playerID0, String_t* ___pushToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult OneSignal/IdsAvailable::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * IdsAvailable_BeginInvoke_m3308124450 (IdsAvailable_t1175497452 * __this, String_t* ___playerID0, String_t* ___pushToken1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignal/IdsAvailable::EndInvoke(System.IAsyncResult)
extern "C"  void IdsAvailable_EndInvoke_m2197487299 (IdsAvailable_t1175497452 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
