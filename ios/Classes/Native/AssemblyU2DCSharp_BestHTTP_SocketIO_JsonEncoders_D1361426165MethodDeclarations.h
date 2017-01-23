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

// BestHTTP.SocketIO.JsonEncoders.DefaultJSonEncoder
struct DefaultJSonEncoder_t1361426165;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SocketIO.JsonEncoders.DefaultJSonEncoder::.ctor()
extern "C"  void DefaultJSonEncoder__ctor_m2818712688 (DefaultJSonEncoder_t1361426165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BestHTTP.SocketIO.JsonEncoders.DefaultJSonEncoder::Decode(System.String)
extern "C"  List_1_t2058570427 * DefaultJSonEncoder_Decode_m1919626303 (DefaultJSonEncoder_t1361426165 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.JsonEncoders.DefaultJSonEncoder::Encode(System.Collections.Generic.List`1<System.Object>)
extern "C"  String_t* DefaultJSonEncoder_Encode_m3867670005 (DefaultJSonEncoder_t1361426165 * __this, List_1_t2058570427 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
