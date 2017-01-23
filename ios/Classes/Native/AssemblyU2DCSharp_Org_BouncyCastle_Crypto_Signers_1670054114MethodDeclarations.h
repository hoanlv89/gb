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

// Org.BouncyCastle.Crypto.Signers.PssSigner
struct PssSigner_t1670054114;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t1189117395;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  void PssSigner__ctor_m2814284039 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Int32)
extern "C"  void PssSigner__ctor_m949518034 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, int32_t ___saltLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32)
extern "C"  void PssSigner__ctor_m1879706236 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___contentDigest1, Il2CppObject * ___mgfDigest2, int32_t ___saltLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Int32,System.Byte)
extern "C"  void PssSigner__ctor_m2917411859 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, int32_t ___saltLen2, uint8_t ___trailer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32,System.Byte)
extern "C"  void PssSigner__ctor_m3411007769 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___contentDigest1, Il2CppObject * ___mgfDigest2, int32_t ___saltLen3, uint8_t ___trailer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32,System.Byte)
extern "C"  void PssSigner__ctor_m3647783763 (PssSigner_t1670054114 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___contentDigest11, Il2CppObject * ___contentDigest22, Il2CppObject * ___mgfDigest3, int32_t ___saltLen4, uint8_t ___trailer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Signers.PssSigner Org.BouncyCastle.Crypto.Signers.PssSigner::CreateRawSigner(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
extern "C"  PssSigner_t1670054114 * PssSigner_CreateRawSigner_m642353210 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___cipher0, Il2CppObject * ___digest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Signers.PssSigner Org.BouncyCastle.Crypto.Signers.PssSigner::CreateRawSigner(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Int32,System.Byte)
extern "C"  PssSigner_t1670054114 * PssSigner_CreateRawSigner_m3188662438 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___cipher0, Il2CppObject * ___contentDigest1, Il2CppObject * ___mgfDigest2, int32_t ___saltLen3, uint8_t ___trailer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Signers.PssSigner::get_AlgorithmName()
extern "C"  String_t* PssSigner_get_AlgorithmName_m463910305 (PssSigner_t1670054114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void PssSigner_Init_m3721769985 (PssSigner_t1670054114 * __this, bool ___forSigning0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::ClearBlock(System.Byte[])
extern "C"  void PssSigner_ClearBlock_m4065578140 (PssSigner_t1670054114 * __this, ByteU5BU5D_t3397334013* ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::Update(System.Byte)
extern "C"  void PssSigner_Update_m3897586157 (PssSigner_t1670054114 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void PssSigner_BlockUpdate_m249749212 (PssSigner_t1670054114 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::Reset()
extern "C"  void PssSigner_Reset_m502567596 (PssSigner_t1670054114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.PssSigner::GenerateSignature()
extern "C"  ByteU5BU5D_t3397334013* PssSigner_GenerateSignature_m1979898244 (PssSigner_t1670054114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.PssSigner::VerifySignature(System.Byte[])
extern "C"  bool PssSigner_VerifySignature_m3222345117 (PssSigner_t1670054114 * __this, ByteU5BU5D_t3397334013* ___signature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.PssSigner::ItoOSP(System.Int32,System.Byte[])
extern "C"  void PssSigner_ItoOSP_m650309333 (PssSigner_t1670054114 * __this, int32_t ___i0, ByteU5BU5D_t3397334013* ___sp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Signers.PssSigner::MaskGeneratorFunction1(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* PssSigner_MaskGeneratorFunction1_m808445539 (PssSigner_t1670054114 * __this, ByteU5BU5D_t3397334013* ___Z0, int32_t ___zOff1, int32_t ___zLen2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
