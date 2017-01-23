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

// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Facebook.Unity.AccessToken
struct AccessToken_t2518141643;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Object2689449295.h"

// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
extern "C"  int64_t Utilities_TotalSeconds_m953484888 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  String_t* Utilities_ToCommaSeparateList_m2826688599 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
extern "C"  String_t* Utilities_AbsoluteUrlOrEmptyString_m2477967211 (Il2CppObject * __this /* static, unused */, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
extern "C"  String_t* Utilities_GetUserAgent_m1191005349 (Il2CppObject * __this /* static, unused */, String_t* ___productName0, String_t* ___productVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Utilities_ToJson_m133580136 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t2518141643 * Utilities_ParseAccessTokenFromResult_m1425101672 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t693205669  Utilities_ParseExpirationDateFromResult_m157426728 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Nullable_1_t3251239280  Utilities_ParseLastRefreshFromResult_m2225539185 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* Utilities_ParsePermissionFromResult_m10675787 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
extern "C"  DateTime_t693205669  Utilities_FromTimestamp_m3719826806 (Il2CppObject * __this /* static, unused */, int32_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::<ParsePermissionFromResult>m__0(System.Object)
extern "C"  String_t* Utilities_U3CParsePermissionFromResultU3Em__0_m3088769235 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
