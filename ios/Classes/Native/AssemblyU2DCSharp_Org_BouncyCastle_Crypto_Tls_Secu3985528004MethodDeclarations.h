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

// Org.BouncyCastle.Crypto.Tls.SecurityParameters
struct SecurityParameters_t3985528004;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.SecurityParameters::.ctor()
extern "C"  void SecurityParameters__ctor_m318832185 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SecurityParameters::Clear()
extern "C"  void SecurityParameters_Clear_m2753346074 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_Entity()
extern "C"  int32_t SecurityParameters_get_Entity_m357142433 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_CipherSuite()
extern "C"  int32_t SecurityParameters_get_CipherSuite_m991775629 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_CompressionAlgorithm()
extern "C"  uint8_t SecurityParameters_get_CompressionAlgorithm_m3305416423 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_PrfAlgorithm()
extern "C"  int32_t SecurityParameters_get_PrfAlgorithm_m135979925 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_VerifyDataLength()
extern "C"  int32_t SecurityParameters_get_VerifyDataLength_m2888295685 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_MasterSecret()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_MasterSecret_m1350775644 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_ClientRandom()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_ClientRandom_m2535286318 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_ServerRandom()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_ServerRandom_m184766538 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_SessionHash()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_SessionHash_m312248692 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_PskIdentity()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_PskIdentity_m4221725344 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.SecurityParameters::get_SrpIdentity()
extern "C"  ByteU5BU5D_t3397334013* SecurityParameters_get_SrpIdentity_m2014552979 (SecurityParameters_t3985528004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
