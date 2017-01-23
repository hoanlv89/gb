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

// Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding
struct Pkcs7Padding_t2353579457;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding::.ctor()
extern "C"  void Pkcs7Padding__ctor_m2680508497 (Pkcs7Padding_t2353579457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void Pkcs7Padding_Init_m649470833 (Pkcs7Padding_t2353579457 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding::get_PaddingName()
extern "C"  String_t* Pkcs7Padding_get_PaddingName_m465008107 (Pkcs7Padding_t2353579457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t Pkcs7Padding_AddPadding_m195978041 (Pkcs7Padding_t2353579457 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.Pkcs7Padding::PadCount(System.Byte[])
extern "C"  int32_t Pkcs7Padding_PadCount_m1992769568 (Pkcs7Padding_t2353579457 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
