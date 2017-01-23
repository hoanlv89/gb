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

// com.dst.Roulette.CellClickHandle
struct CellClickHandle_t3729015220;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void com.dst.Roulette.CellClickHandle::.ctor(System.Object,System.IntPtr)
extern "C"  void CellClickHandle__ctor_m111259641 (CellClickHandle_t3729015220 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.CellClickHandle::Invoke(UnityEngine.GameObject)
extern "C"  void CellClickHandle_Invoke_m551307837 (CellClickHandle_t3729015220 * __this, GameObject_t1756533147 * ___g0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult com.dst.Roulette.CellClickHandle::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CellClickHandle_BeginInvoke_m605829424 (CellClickHandle_t3729015220 * __this, GameObject_t1756533147 * ___g0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.dst.Roulette.CellClickHandle::EndInvoke(System.IAsyncResult)
extern "C"  void CellClickHandle_EndInvoke_m2021898727 (CellClickHandle_t3729015220 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
