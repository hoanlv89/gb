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

// BestHTTP.Extensions.KeyValuePairList
struct KeyValuePairList_t1715528642;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair>
struct List_1_t3552012726;
// System.String
struct String_t;
// BestHTTP.Extensions.KeyValuePair
struct KeyValuePair_t4182891594;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_BestHTTP_Extensions_KeyValuePair4182891594.h"

// System.Void BestHTTP.Extensions.KeyValuePairList::.ctor()
extern "C"  void KeyValuePairList__ctor_m763360957 (KeyValuePairList_t1715528642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair> BestHTTP.Extensions.KeyValuePairList::get_Values()
extern "C"  List_1_t3552012726 * KeyValuePairList_get_Values_m1199846341 (KeyValuePairList_t1715528642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.Extensions.KeyValuePairList::set_Values(System.Collections.Generic.List`1<BestHTTP.Extensions.KeyValuePair>)
extern "C"  void KeyValuePairList_set_Values_m1510667346 (KeyValuePairList_t1715528642 * __this, List_1_t3552012726 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Extensions.KeyValuePairList::TryGet(System.String,BestHTTP.Extensions.KeyValuePair&)
extern "C"  bool KeyValuePairList_TryGet_m133359250 (KeyValuePairList_t1715528642 * __this, String_t* ___value0, KeyValuePair_t4182891594 ** ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.Extensions.KeyValuePairList::HasAny(System.String,System.String)
extern "C"  bool KeyValuePairList_HasAny_m3131213993 (KeyValuePairList_t1715528642 * __this, String_t* ___val10, String_t* ___val21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
