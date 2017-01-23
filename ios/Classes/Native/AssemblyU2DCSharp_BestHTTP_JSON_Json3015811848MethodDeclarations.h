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

// BestHTTP.JSON.Json
struct Json_t3015811848;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void BestHTTP.JSON.Json::.ctor()
extern "C"  void Json__ctor_m2403612631 (Json_t3015811848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.JSON.Json::Decode(System.String)
extern "C"  Il2CppObject * Json_Decode_m2476848966 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.JSON.Json::Decode(System.String,System.Boolean&)
extern "C"  Il2CppObject * Json_Decode_m3392751513 (Il2CppObject * __this /* static, unused */, String_t* ___json0, bool* ___success1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.JSON.Json::Encode(System.Object)
extern "C"  String_t* Json_Encode_m1107749378 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> BestHTTP.JSON.Json::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Dictionary_2_t309261261 * Json_ParseObject_m3877596562 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BestHTTP.JSON.Json::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern "C"  List_1_t2058570427 * Json_ParseArray_m384159743 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object BestHTTP.JSON.Json::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * Json_ParseValue_m3088426475 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.JSON.Json::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C"  String_t* Json_ParseString_m3893038909 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double BestHTTP.JSON.Json::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C"  double Json_ParseNumber_m3788007171 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.JSON.Json::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t Json_GetLastIndexOfNumber_m1104347365 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.JSON.Json::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void Json_EatWhitespace_m4035947566 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.JSON.Json::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t Json_LookAhead_m1797202235 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BestHTTP.JSON.Json::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t Json_NextToken_m2547543323 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.JSON.Json::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool Json_SerializeValue_m2586969216 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.JSON.Json::SerializeObject(System.Collections.IDictionary,System.Text.StringBuilder)
extern "C"  bool Json_SerializeObject_m2869947445 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___anObject0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.JSON.Json::SerializeArray(System.Collections.IList,System.Text.StringBuilder)
extern "C"  bool Json_SerializeArray_m3441409431 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___anArray0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.JSON.Json::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  bool Json_SerializeString_m1005121670 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BestHTTP.JSON.Json::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  bool Json_SerializeNumber_m2317131414 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
