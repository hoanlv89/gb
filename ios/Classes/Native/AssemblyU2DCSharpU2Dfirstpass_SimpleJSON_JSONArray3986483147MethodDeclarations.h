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

// SimpleJSON.JSONArray
struct JSONArray_t3986483147;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1542536681;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode1250409636.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_BinaryWriter3179371318.h"

// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m2496257826 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONArray_get_Item_m988613166 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m1042827053 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t1250409636 * JSONArray_get_Item_m1392175297 (JSONArray_t3986483147 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m177782292 (JSONArray_t3986483147 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m3722075420 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_Add_m3985193755 (JSONArray_t3986483147 * __this, String_t* ___aKey0, JSONNode_t1250409636 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t1250409636 * JSONArray_Remove_m724242792 (JSONArray_t3986483147 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t1250409636 * JSONArray_Remove_m150707029 (JSONArray_t3986483147 * __this, JSONNode_t1250409636 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern "C"  Il2CppObject* JSONArray_get_Childs_m3608071972 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C"  Il2CppObject * JSONArray_GetEnumerator_m804905100 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m1637576903 (JSONArray_t3986483147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m113063117 (JSONArray_t3986483147 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m2095428601 (JSONArray_t3986483147 * __this, BinaryWriter_t3179371318 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
