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

// Org.BouncyCastle.Crypto.Tls.TlsStreamCipher
struct TlsStreamCipher_t2175288028;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.IStreamCipher
struct IStreamCipher_t1073853310;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.IStreamCipher,Org.BouncyCastle.Crypto.IStreamCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32,System.Boolean)
extern "C"  void TlsStreamCipher__ctor_m953586911 (TlsStreamCipher_t2175288028 * __this, Il2CppObject * ___context0, Il2CppObject * ___clientWriteCipher1, Il2CppObject * ___serverWriteCipher2, Il2CppObject * ___clientWriteDigest3, Il2CppObject * ___serverWriteDigest4, int32_t ___cipherKeySize5, bool ___usesNonce6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::GetPlaintextLimit(System.Int32)
extern "C"  int32_t TlsStreamCipher_GetPlaintextLimit_m175831774 (TlsStreamCipher_t2175288028 * __this, int32_t ___ciphertextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::EncodePlaintext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsStreamCipher_EncodePlaintext_m2586701780 (TlsStreamCipher_t2175288028 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___plaintext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::DecodeCiphertext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsStreamCipher_DecodeCiphertext_m845763575 (TlsStreamCipher_t2175288028 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___ciphertext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::CheckMac(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsStreamCipher_CheckMac_m2974988765 (TlsStreamCipher_t2175288028 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___recBuf2, int32_t ___recStart3, int32_t ___recEnd4, ByteU5BU5D_t3397334013* ___calcBuf5, int32_t ___calcOff6, int32_t ___calcLen7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsStreamCipher::UpdateIV(Org.BouncyCastle.Crypto.IStreamCipher,System.Boolean,System.Int64)
extern "C"  void TlsStreamCipher_UpdateIV_m746418475 (TlsStreamCipher_t2175288028 * __this, Il2CppObject * ___cipher0, bool ___forEncryption1, int64_t ___seqNo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
