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

// Org.BouncyCastle.Crypto.Tls.TlsBlockCipher
struct TlsBlockCipher_t317591639;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// Org.BouncyCastle.Crypto.Tls.TlsMac
struct TlsMac_t4072537602;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext,Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32)
extern "C"  void TlsBlockCipher__ctor_m1870576189 (TlsBlockCipher_t317591639 * __this, Il2CppObject * ___context0, Il2CppObject * ___clientWriteCipher1, Il2CppObject * ___serverWriteCipher2, Il2CppObject * ___clientWriteDigest3, Il2CppObject * ___serverWriteDigest4, int32_t ___cipherKeySize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsMac Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::get_WriteMac()
extern "C"  TlsMac_t4072537602 * TlsBlockCipher_get_WriteMac_m4055058714 (TlsBlockCipher_t317591639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Tls.TlsMac Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::get_ReadMac()
extern "C"  TlsMac_t4072537602 * TlsBlockCipher_get_ReadMac_m2825117551 (TlsBlockCipher_t317591639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::GetPlaintextLimit(System.Int32)
extern "C"  int32_t TlsBlockCipher_GetPlaintextLimit_m2808067165 (TlsBlockCipher_t317591639 * __this, int32_t ___ciphertextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::EncodePlaintext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsBlockCipher_EncodePlaintext_m10036563 (TlsBlockCipher_t317591639 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___plaintext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::DecodeCiphertext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* TlsBlockCipher_DecodeCiphertext_m3516329676 (TlsBlockCipher_t317591639 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___ciphertext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::CheckPaddingConstantTime(System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t TlsBlockCipher_CheckPaddingConstantTime_m2331275631 (TlsBlockCipher_t317591639 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___blockSize3, int32_t ___macSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::ChooseExtraPadBlocks(Org.BouncyCastle.Security.SecureRandom,System.Int32)
extern "C"  int32_t TlsBlockCipher_ChooseExtraPadBlocks_m2984031631 (TlsBlockCipher_t317591639 * __this, SecureRandom_t3117234712 * ___r0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.TlsBlockCipher::LowestBitSet(System.Int32)
extern "C"  int32_t TlsBlockCipher_LowestBitSet_m2378186840 (TlsBlockCipher_t317591639 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
