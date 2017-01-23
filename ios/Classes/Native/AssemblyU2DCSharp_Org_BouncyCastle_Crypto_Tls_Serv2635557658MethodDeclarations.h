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

// Org.BouncyCastle.Crypto.Tls.ServerName
struct ServerName_t2635557658;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Crypto.Tls.ServerName::.ctor(System.Byte,System.Object)
extern "C"  void ServerName__ctor_m993703366 (ServerName_t2635557658 * __this, uint8_t ___nameType0, Il2CppObject * ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.ServerName::get_NameType()
extern "C"  uint8_t ServerName_get_NameType_m949832315 (ServerName_t2635557658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Org.BouncyCastle.Crypto.Tls.ServerName::get_Name()
extern "C"  Il2CppObject * ServerName_get_Name_m235637644 (ServerName_t2635557658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.ServerName::GetHostName()
extern "C"  String_t* ServerName_GetHostName_m78422199 (ServerName_t2635557658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.ServerName::Encode(System.IO.Stream)
extern "C"  void ServerName_Encode_m3443469816 (ServerName_t2635557658 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.ServerName Org.BouncyCastle.Crypto.Tls.ServerName::Parse(System.IO.Stream)
extern "C"  ServerName_t2635557658 * ServerName_Parse_m999315446 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Tls.ServerName::IsCorrectType(System.Byte,System.Object)
extern "C"  bool ServerName_IsCorrectType_m2294098386 (Il2CppObject * __this /* static, unused */, uint8_t ___nameType0, Il2CppObject * ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
