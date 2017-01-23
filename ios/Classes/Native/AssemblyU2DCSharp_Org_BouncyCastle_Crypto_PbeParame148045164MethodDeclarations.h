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

// Org.BouncyCastle.Crypto.PbeParametersGenerator
struct PbeParametersGenerator_t148045164;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::.ctor()
extern "C"  void PbeParametersGenerator__ctor_m3332314540 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32)
extern "C"  void PbeParametersGenerator_Init_m1699148781 (PbeParametersGenerator_t148045164 * __this, ByteU5BU5D_t3397334013* ___password0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___iterationCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::get_Password()
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_get_Password_m4143147638 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::GetPassword()
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_GetPassword_m4177183491 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::get_Salt()
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_get_Salt_m4112690409 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::GetSalt()
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_GetSalt_m2136926268 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.PbeParametersGenerator::get_IterationCount()
extern "C"  int32_t PbeParametersGenerator_get_IterationCount_m2354513981 (PbeParametersGenerator_t148045164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToBytes(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs5PasswordToBytes_m3793783264 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToBytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs5PasswordToBytes_m4246166731 (Il2CppObject * __this /* static, unused */, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToUtf8Bytes(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_m2818469855 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToUtf8Bytes(System.String)
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_m2975360488 (Il2CppObject * __this /* static, unused */, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs12PasswordToBytes(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs12PasswordToBytes_m2357155384 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs12PasswordToBytes(System.Char[],System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* PbeParametersGenerator_Pkcs12PasswordToBytes_m2348308445 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___password0, bool ___wrongPkcs12Zero1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
