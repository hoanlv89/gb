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

// Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
struct Iso9796d2Signer_t1034645512;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::.cctor()
extern "C"  void Iso9796d2Signer__cctor_m4287670616 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Boolean)
extern "C"  void Iso9796d2Signer__ctor_m4060122548 (Iso9796d2Signer_t1034645512 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, bool ___isImplicit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void Iso9796d2Signer__ctor_m2912656613 (Iso9796d2Signer_t1034645512 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::GetRecoveredMessage()
extern "C"  ByteU5BU5D_t3397334013* Iso9796d2Signer_GetRecoveredMessage_m3660085541 (Iso9796d2Signer_t1034645512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::get_AlgorithmName()
extern "C"  String_t* Iso9796d2Signer_get_AlgorithmName_m879975351 (Iso9796d2Signer_t1034645512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Iso9796d2Signer_Init_m750119563 (Iso9796d2Signer_t1034645512 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::IsSameAs(System.Byte[],System.Byte[])
extern "C"  bool Iso9796d2Signer_IsSameAs_m2802953561 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___a0, ByteU5BU5D_t3397334013* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::ClearBlock(System.Byte[])
extern "C"  void Iso9796d2Signer_ClearBlock_m4223827454 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::UpdateWithRecoveredMessage(System.Byte[])
extern "C"  void Iso9796d2Signer_UpdateWithRecoveredMessage_m2396627895 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::Update(System.Byte)
extern "C"  void Iso9796d2Signer_Update_m438185187 (Iso9796d2Signer_t1034645512 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Iso9796d2Signer_BlockUpdate_m2045416218 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::Reset()
extern "C"  void Iso9796d2Signer_Reset_m3717774222 (Iso9796d2Signer_t1034645512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* Iso9796d2Signer_GenerateSignature_m2416611458 (Iso9796d2Signer_t1034645512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::VerifySignature(System.Byte[])
extern "C"  bool Iso9796d2Signer_VerifySignature_m2364924115 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::ReturnFalse(System.Byte[])
extern "C"  bool Iso9796d2Signer_ReturnFalse_m2188128463 (Iso9796d2Signer_t1034645512 * __this, ByteU5BU5D_t3397334013* ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer::HasFullMessage()
extern "C"  bool Iso9796d2Signer_HasFullMessage_m2426507133 (Iso9796d2Signer_t1034645512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
