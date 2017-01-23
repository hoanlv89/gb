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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UniWebViewMessage
struct UniWebViewMessage_t74088308;
struct UniWebViewMessage_t74088308_marshaled_pinvoke;
struct UniWebViewMessage_t74088308_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UniWebViewMessage74088308.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UniWebViewMessage::.ctor(System.String)
extern "C"  void UniWebViewMessage__ctor_m3401059341 (UniWebViewMessage_t74088308 * __this, String_t* ___rawMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_rawMessage()
extern "C"  String_t* UniWebViewMessage_get_rawMessage_m1395912076 (UniWebViewMessage_t74088308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_rawMessage(System.String)
extern "C"  void UniWebViewMessage_set_rawMessage_m590016843 (UniWebViewMessage_t74088308 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_scheme()
extern "C"  String_t* UniWebViewMessage_get_scheme_m3924000090 (UniWebViewMessage_t74088308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_scheme(System.String)
extern "C"  void UniWebViewMessage_set_scheme_m2913429341 (UniWebViewMessage_t74088308 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_path()
extern "C"  String_t* UniWebViewMessage_get_path_m387030186 (UniWebViewMessage_t74088308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_path(System.String)
extern "C"  void UniWebViewMessage_set_path_m433297993 (UniWebViewMessage_t74088308 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_args()
extern "C"  Dictionary_2_t3943999495 * UniWebViewMessage_get_args_m853282841 (UniWebViewMessage_t74088308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void UniWebViewMessage_set_args_m731117038 (UniWebViewMessage_t74088308 * __this, Dictionary_2_t3943999495 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UniWebViewMessage_t74088308;
struct UniWebViewMessage_t74088308_marshaled_pinvoke;

extern "C" void UniWebViewMessage_t74088308_marshal_pinvoke(const UniWebViewMessage_t74088308& unmarshaled, UniWebViewMessage_t74088308_marshaled_pinvoke& marshaled);
extern "C" void UniWebViewMessage_t74088308_marshal_pinvoke_back(const UniWebViewMessage_t74088308_marshaled_pinvoke& marshaled, UniWebViewMessage_t74088308& unmarshaled);
extern "C" void UniWebViewMessage_t74088308_marshal_pinvoke_cleanup(UniWebViewMessage_t74088308_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UniWebViewMessage_t74088308;
struct UniWebViewMessage_t74088308_marshaled_com;

extern "C" void UniWebViewMessage_t74088308_marshal_com(const UniWebViewMessage_t74088308& unmarshaled, UniWebViewMessage_t74088308_marshaled_com& marshaled);
extern "C" void UniWebViewMessage_t74088308_marshal_com_back(const UniWebViewMessage_t74088308_marshaled_com& marshaled, UniWebViewMessage_t74088308& unmarshaled);
extern "C" void UniWebViewMessage_t74088308_marshal_com_cleanup(UniWebViewMessage_t74088308_marshaled_com& marshaled);
