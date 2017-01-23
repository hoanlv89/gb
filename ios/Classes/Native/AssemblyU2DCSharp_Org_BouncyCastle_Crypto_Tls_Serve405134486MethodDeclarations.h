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

// Org.BouncyCastle.Crypto.Tls.ServerNameList
struct ServerNameList_t405134486;
// System.Collections.IList
struct IList_t3321498491;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.ServerNameList::.ctor(System.Collections.IList)
extern "C"  void ServerNameList__ctor_m3100136276 (ServerNameList_t405134486 * __this, Il2CppObject * ___serverNameList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Crypto.Tls.ServerNameList::get_ServerNames()
extern "C"  Il2CppObject * ServerNameList_get_ServerNames_m1198346633 (ServerNameList_t405134486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ServerNameList::Encode(System.IO.Stream)
extern "C"  void ServerNameList_Encode_m1911256236 (ServerNameList_t405134486 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ServerNameList Org.BouncyCastle.Crypto.Tls.ServerNameList::Parse(System.IO.Stream)
extern "C"  ServerNameList_t405134486 * ServerNameList_Parse_m148665118 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
