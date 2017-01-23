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

// Org.BouncyCastle.Crypto.Tls.TlsAeadCipher
struct TlsAeadCipher_t2267292935;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
struct IAeadBlockCipher_t2629578910;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsAeadCipher::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher,Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher,System.Int32,System.Int32)
extern "C"  void TlsAeadCipher__ctor_m2270106172 (TlsAeadCipher_t2267292935 * __this, Il2CppObject * ___context0, Il2CppObject * ___clientWriteCipher1, Il2CppObject * ___serverWriteCipher2, int32_t ___cipherKeySize3, int32_t ___macSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsAeadCipher::GetPlaintextLimit(System.Int32)
extern "C"  int32_t TlsAeadCipher_GetPlaintextLimit_m2250161717 (TlsAeadCipher_t2267292935 * __this, int32_t ___ciphertextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsAeadCipher::EncodePlaintext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsAeadCipher_EncodePlaintext_m4102238047 (TlsAeadCipher_t2267292935 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___plaintext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsAeadCipher::DecodeCiphertext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsAeadCipher_DecodeCiphertext_m3333763468 (TlsAeadCipher_t2267292935 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___ciphertext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsAeadCipher::GetAdditionalData(System.Int64,System.Byte,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsAeadCipher_GetAdditionalData_m3499447643 (TlsAeadCipher_t2267292935 * __this, int64_t ___seqNo0, uint8_t ___type1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
