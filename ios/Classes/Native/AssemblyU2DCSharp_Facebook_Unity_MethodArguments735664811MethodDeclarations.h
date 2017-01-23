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

// Facebook.Unity.MethodArguments
struct MethodArguments_t735664811;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_MethodArguments735664811.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Uri19570940.h"

// System.Void Facebook.Unity.MethodArguments::.ctor()
extern "C"  void MethodArguments__ctor_m95338319 (MethodArguments_t735664811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(Facebook.Unity.MethodArguments)
extern "C"  void MethodArguments__ctor_m2802186827 (MethodArguments_t735664811 * __this, MethodArguments_t735664811 * ___methodArgs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments__ctor_m1917159725 (MethodArguments_t735664811 * __this, Il2CppObject* ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddString(System.String,System.String)
extern "C"  void MethodArguments_AddString_m4012385003 (MethodArguments_t735664811 * __this, String_t* ___argumentName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddCommaSeparatedList(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void MethodArguments_AddCommaSeparatedList_m3170836823 (MethodArguments_t735664811 * __this, String_t* ___argumentName0, Il2CppObject* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddDictionary(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments_AddDictionary_m230143402 (MethodArguments_t735664811 * __this, String_t* ___argumentName0, Il2CppObject* ___dict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddUri(System.String,System.Uri)
extern "C"  void MethodArguments_AddUri_m688834895 (MethodArguments_t735664811 * __this, String_t* ___argumentName0, Uri_t19570940 * ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.MethodArguments::ToJsonString()
extern "C"  String_t* MethodArguments_ToJsonString_m3095497714 (MethodArguments_t735664811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.MethodArguments::ToStringDict(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Dictionary_2_t3943999495 * MethodArguments_ToStringDict_m787202485 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dict0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
