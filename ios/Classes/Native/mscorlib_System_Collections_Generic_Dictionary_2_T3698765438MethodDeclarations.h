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

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.DictionaryEntry>
struct Transform_1_t3698765438;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "AssemblyU2DCSharp_BestHTTP_SignalR_Messages_ClientM624279968.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1401000232_gshared (Transform_1_t3698765438 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1401000232(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3698765438 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1401000232_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m2231684520_gshared (Transform_1_t3698765438 * __this, uint64_t ___key0, ClientMessage_t624279968  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2231684520(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t3698765438 *, uint64_t, ClientMessage_t624279968 , const MethodInfo*))Transform_1_Invoke_m2231684520_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1969237625_gshared (Transform_1_t3698765438 * __this, uint64_t ___key0, ClientMessage_t624279968  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1969237625(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3698765438 *, uint64_t, ClientMessage_t624279968 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1969237625_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,BestHTTP.SignalR.Messages.ClientMessage,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m3342639094_gshared (Transform_1_t3698765438 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3342639094(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t3698765438 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3342639094_gshared)(__this, ___result0, method)
