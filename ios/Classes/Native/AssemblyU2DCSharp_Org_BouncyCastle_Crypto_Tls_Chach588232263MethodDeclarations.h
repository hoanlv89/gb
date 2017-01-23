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

// Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305
struct Chacha20Poly1305_t588232263;
// Org.BouncyCastle.Crypto.Tls.TlsContext
struct TlsContext_t4077776538;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t215653120;
// Org.BouncyCastle.Crypto.Engines.ChaChaEngine
struct ChaChaEngine_t2060435280;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t2321756708;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Engines_2060435280.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter215653120.h"

// System.Void Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::.ctor(Org.BouncyCastle.Crypto.Tls.TlsContext)
extern "C"  void Chacha20Poly1305__ctor_m3173666814 (Chacha20Poly1305_t588232263 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::GetPlaintextLimit(System.Int32)
extern "C"  int32_t Chacha20Poly1305_GetPlaintextLimit_m3700935349 (Chacha20Poly1305_t588232263 * __this, int32_t ___ciphertextLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::EncodePlaintext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Chacha20Poly1305_EncodePlaintext_m1598268487 (Chacha20Poly1305_t588232263 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___plaintext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::DecodeCiphertext(System.Int64,System.Byte,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Chacha20Poly1305_DecodeCiphertext_m2832834214 (Chacha20Poly1305_t588232263 * __this, int64_t ___seqNo0, uint8_t ___type1, ByteU5BU5D_t3397334013* ___ciphertext2, int32_t ___offset3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::InitRecordMac(Org.BouncyCastle.Crypto.Engines.ChaChaEngine,System.Boolean,System.Int64)
extern "C"  KeyParameter_t215653120 * Chacha20Poly1305_InitRecordMac_m3171101563 (Chacha20Poly1305_t588232263 * __this, ChaChaEngine_t2060435280 * ___cipher0, bool ___forEncryption1, int64_t ___seqNo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::CalculateRecordMac(Org.BouncyCastle.Crypto.Parameters.KeyParameter,System.Byte[],System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Chacha20Poly1305_CalculateRecordMac_m1462529233 (Chacha20Poly1305_t588232263 * __this, KeyParameter_t215653120 * ___macKey0, ByteU5BU5D_t3397334013* ___additionalData1, ByteU5BU5D_t3397334013* ___buf2, int32_t ___off3, int32_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::UpdateRecordMac(Org.BouncyCastle.Crypto.IMac,System.Byte[],System.Int32,System.Int32)
extern "C"  void Chacha20Poly1305_UpdateRecordMac_m3365789027 (Chacha20Poly1305_t588232263 * __this, Il2CppObject * ___mac0, ByteU5BU5D_t3397334013* ___buf1, int32_t ___off2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305::GetAdditionalData(System.Int64,System.Byte,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Chacha20Poly1305_GetAdditionalData_m2867923539 (Chacha20Poly1305_t588232263 * __this, int64_t ___seqNo0, uint8_t ___type1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
