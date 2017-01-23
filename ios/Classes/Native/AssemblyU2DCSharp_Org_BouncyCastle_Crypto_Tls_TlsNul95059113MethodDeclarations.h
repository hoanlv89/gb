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

// Org.BouncyCastle.Crypto.Tls.TlsNullCipher
struct TlsNullCipher_t95059113;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsNullCipher::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void TlsNullCipher__ctor_m2178166910 (TlsNullCipher_t95059113 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.TlsNullCipher::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void TlsNullCipher__ctor_m1111592638 (TlsNullCipher_t95059113 * __this, Il2CppObject * ___context0, Il2CppObject * ___clientWriteDigest1, Il2CppObject * ___serverWriteDigest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsNullCipher::GetPlaintextLimit(System.Int32)
extern "C"  int32_t TlsNullCipher_GetPlaintextLimit_m3889867855 (TlsNullCipher_t95059113 * __this, int32_t ___ciphertextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsNullCipher::EncodePlaintext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsNullCipher_EncodePlaintext_m2435347565 (TlsNullCipher_t95059113 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___plaintext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsNullCipher::DecodeCiphertext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsNullCipher_DecodeCiphertext_m3362782762 (TlsNullCipher_t95059113 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___ciphertext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
