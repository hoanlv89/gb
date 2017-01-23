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

// Facebook.Unity.ResultBase
struct ResultBase_t864677574;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Facebook.Unity.ResultBase::.ctor(System.String)
extern "C"  void ResultBase__ctor_m2010714792 (ResultBase_t864677574 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::.ctor(System.String,System.String,System.Boolean)
extern "C"  void ResultBase__ctor_m1953355507 (ResultBase_t864677574 * __this, String_t* ___result0, String_t* ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_Error()
extern "C"  String_t* ResultBase_get_Error_m2573608226 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Error(System.String)
extern "C"  void ResultBase_set_Error_m1268355327 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary()
extern "C"  Il2CppObject* ResultBase_get_ResultDictionary_m2762370753 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ResultBase_set_ResultDictionary_m2963818516 (ResultBase_t864677574 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_RawResult()
extern "C"  String_t* ResultBase_get_RawResult_m188428829 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_RawResult(System.String)
extern "C"  void ResultBase_set_RawResult_m1537694244 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::get_Cancelled()
extern "C"  bool ResultBase_get_Cancelled_m2008374376 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Cancelled(System.Boolean)
extern "C"  void ResultBase_set_Cancelled_m549763097 (ResultBase_t864677574 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_CallbackId()
extern "C"  String_t* ResultBase_get_CallbackId_m1865066820 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CallbackId(System.String)
extern "C"  void ResultBase_set_CallbackId_m3637062983 (ResultBase_t864677574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::ToString()
extern "C"  String_t* ResultBase_ToString_m3083703059 (ResultBase_t864677574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::Init(System.String,System.String,System.Boolean,System.String)
extern "C"  void ResultBase_Init_m1929725675 (ResultBase_t864677574 * __this, String_t* ___result0, String_t* ___error1, bool ___cancelled2, String_t* ___callbackId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetErrorValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetErrorValue_m2008382596 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::GetCancelledValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResultBase_GetCancelledValue_m101146780 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetCallbackId_m809749097 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
