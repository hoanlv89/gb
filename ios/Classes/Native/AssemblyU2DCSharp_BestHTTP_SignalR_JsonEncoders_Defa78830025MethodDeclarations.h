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

// BestHTTP.SignalR.JsonEncoders.DefaultJsonEncoder
struct DefaultJsonEncoder_t78830025;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SignalR.JsonEncoders.DefaultJsonEncoder::.ctor()
extern "C"  void DefaultJsonEncoder__ctor_m559779577 (DefaultJsonEncoder_t78830025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SignalR.JsonEncoders.DefaultJsonEncoder::Encode(System.Object)
extern "C"  String_t* DefaultJsonEncoder_Encode_m2416646590 (DefaultJsonEncoder_t78830025 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> BestHTTP.SignalR.JsonEncoders.DefaultJsonEncoder::DecodeMessage(System.String)
extern "C"  Il2CppObject* DefaultJsonEncoder_DecodeMessage_m4001666261 (DefaultJsonEncoder_t78830025 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
