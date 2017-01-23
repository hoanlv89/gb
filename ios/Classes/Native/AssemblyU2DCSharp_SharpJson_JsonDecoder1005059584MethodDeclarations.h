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

// SharpJson.JsonDecoder
struct JsonDecoder_t1005059584;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void SharpJson.JsonDecoder::.ctor()
extern "C"  void JsonDecoder__ctor_m328205435 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.JsonDecoder::get_errorMessage()
extern "C"  String_t* JsonDecoder_get_errorMessage_m2476396366 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.JsonDecoder::set_errorMessage(System.String)
extern "C"  void JsonDecoder_set_errorMessage_m1372403231 (JsonDecoder_t1005059584 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.JsonDecoder::get_parseNumbersAsFloat()
extern "C"  bool JsonDecoder_get_parseNumbersAsFloat_m2481793109 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.JsonDecoder::set_parseNumbersAsFloat(System.Boolean)
extern "C"  void JsonDecoder_set_parseNumbersAsFloat_m3935057324 (JsonDecoder_t1005059584 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SharpJson.JsonDecoder::Decode(System.String)
extern "C"  Il2CppObject * JsonDecoder_Decode_m1591170844 (JsonDecoder_t1005059584 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SharpJson.JsonDecoder::DecodeText(System.String)
extern "C"  Il2CppObject * JsonDecoder_DecodeText_m2938277841 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SharpJson.JsonDecoder::ParseObject()
extern "C"  Il2CppObject* JsonDecoder_ParseObject_m2612513118 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Object> SharpJson.JsonDecoder::ParseArray()
extern "C"  Il2CppObject* JsonDecoder_ParseArray_m1114350709 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SharpJson.JsonDecoder::ParseValue()
extern "C"  Il2CppObject * JsonDecoder_ParseValue_m1699306532 (JsonDecoder_t1005059584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.JsonDecoder::TriggerError(System.String)
extern "C"  void JsonDecoder_TriggerError_m1047256569 (JsonDecoder_t1005059584 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
