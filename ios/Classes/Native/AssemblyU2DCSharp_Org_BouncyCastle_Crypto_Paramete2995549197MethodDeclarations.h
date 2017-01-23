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

// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct AeadParameters_t2995549197;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t215653120;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter215653120.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.AeadParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.KeyParameter,System.Int32,System.Byte[])
extern "C"  void AeadParameters__ctor_m3853765762 (AeadParameters_t2995549197 * __this, KeyParameter_t215653120 * ___key0, int32_t ___macSize1, ByteU5BU5D_t3397334013* ___nonce2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.AeadParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.KeyParameter,System.Int32,System.Byte[],System.Byte[])
extern "C"  void AeadParameters__ctor_m1970382311 (AeadParameters_t2995549197 * __this, KeyParameter_t215653120 * ___key0, int32_t ___macSize1, ByteU5BU5D_t3397334013* ___nonce2, ByteU5BU5D_t3397334013* ___associatedText3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key()
extern "C"  KeyParameter_t215653120 * AeadParameters_get_Key_m1526676731 (AeadParameters_t2995549197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize()
extern "C"  int32_t AeadParameters_get_MacSize_m2998802548 (AeadParameters_t2995549197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText()
extern "C"  ByteU5BU5D_t3397334013* AeadParameters_GetAssociatedText_m1710041610 (AeadParameters_t2995549197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce()
extern "C"  ByteU5BU5D_t3397334013* AeadParameters_GetNonce_m3332391528 (AeadParameters_t2995549197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
