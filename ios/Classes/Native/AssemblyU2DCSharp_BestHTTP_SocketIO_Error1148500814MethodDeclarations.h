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

// BestHTTP.SocketIO.Error
struct Error_t1148500814;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BestHTTP_SocketIO_SocketIOErrors567512470.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BestHTTP.SocketIO.Error::.ctor(BestHTTP.SocketIO.SocketIOErrors,System.String)
extern "C"  void Error__ctor_m3926113269 (Error_t1148500814 * __this, int32_t ___code0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BestHTTP.SocketIO.SocketIOErrors BestHTTP.SocketIO.Error::get_Code()
extern "C"  int32_t Error_get_Code_m1861683560 (Error_t1148500814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Error::set_Code(BestHTTP.SocketIO.SocketIOErrors)
extern "C"  void Error_set_Code_m490454511 (Error_t1148500814 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Error::get_Message()
extern "C"  String_t* Error_get_Message_m385150703 (Error_t1148500814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BestHTTP.SocketIO.Error::set_Message(System.String)
extern "C"  void Error_set_Message_m1285483410 (Error_t1148500814 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BestHTTP.SocketIO.Error::ToString()
extern "C"  String_t* Error_ToString_m1800527887 (Error_t1148500814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
