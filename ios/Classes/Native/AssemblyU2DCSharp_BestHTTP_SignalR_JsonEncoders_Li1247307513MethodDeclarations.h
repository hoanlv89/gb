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

// BestHTTP.SignalR.JsonEncoders.LitJsonEncoder
struct LitJsonEncoder_t1247307513;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SignalR.JsonEncoders.LitJsonEncoder::.ctor()
extern "C"  void LitJsonEncoder__ctor_m3605055423 (LitJsonEncoder_t1247307513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.JsonEncoders.LitJsonEncoder::Encode(System.Object)
extern "C"  String_t* LitJsonEncoder_Encode_m3962971298 (LitJsonEncoder_t1247307513 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> BestHTTP.SignalR.JsonEncoders.LitJsonEncoder::DecodeMessage(System.String)
extern "C"  Il2CppObject* LitJsonEncoder_DecodeMessage_m1178568819 (LitJsonEncoder_t1247307513 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
