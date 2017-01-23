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

// BestHTTP.SocketIO.JsonEncoders.LitJsonEncoder
struct LitJsonEncoder_t3191638375;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SocketIO.JsonEncoders.LitJsonEncoder::.ctor()
extern "C"  void LitJsonEncoder__ctor_m1607879656 (LitJsonEncoder_t3191638375 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> BestHTTP.SocketIO.JsonEncoders.LitJsonEncoder::Decode(System.String)
extern "C"  List_1_t2058570427 * LitJsonEncoder_Decode_m1614720341 (LitJsonEncoder_t3191638375 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.JsonEncoders.LitJsonEncoder::Encode(System.Collections.Generic.List`1<System.Object>)
extern "C"  String_t* LitJsonEncoder_Encode_m123324947 (LitJsonEncoder_t3191638375 * __this, List_1_t2058570427 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
