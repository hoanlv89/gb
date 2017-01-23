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

// Org.BouncyCastle.Crypto.Engines.AesFastEngine
struct AesFastEngine_t2923690633;
// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t1156922361;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::.ctor()
extern "C"  void AesFastEngine__ctor_m2205326994 (AesFastEngine_t2923690633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Shift(System.UInt32,System.Int32)
extern "C"  uint32_t AesFastEngine_Shift_m3072864422 (Il2CppObject * __this /* static, unused */, uint32_t ___r0, int32_t ___shift1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::FFmulX(System.UInt32)
extern "C"  uint32_t AesFastEngine_FFmulX_m2237559773 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::Inv_Mcol(System.UInt32)
extern "C"  uint32_t AesFastEngine_Inv_Mcol_m3836546994 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::SubWord(System.UInt32)
extern "C"  uint32_t AesFastEngine_SubWord_m4033129603 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesFastEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
extern "C"  UInt32U5BU5DU5BU5D_t1156922361* AesFastEngine_GenerateWorkingKey_m917726436 (AesFastEngine_t2923690633 * __this, ByteU5BU5D_t3397334013* ___key0, bool ___forEncryption1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void AesFastEngine_Init_m455028476 (AesFastEngine_t2923690633 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.AesFastEngine::get_AlgorithmName()
extern "C"  String_t* AesFastEngine_get_AlgorithmName_m1429176726 (AesFastEngine_t2923690633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.AesFastEngine::get_IsPartialBlockOkay()
extern "C"  bool AesFastEngine_get_IsPartialBlockOkay_m2512904351 (AesFastEngine_t2923690633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::GetBlockSize()
extern "C"  int32_t AesFastEngine_GetBlockSize_m2193682690 (AesFastEngine_t2923690633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesFastEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t AesFastEngine_ProcessBlock_m2996930638 (AesFastEngine_t2923690633 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::Reset()
extern "C"  void AesFastEngine_Reset_m2022506543 (AesFastEngine_t2923690633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::UnPackBlock(System.Byte[],System.Int32)
extern "C"  void AesFastEngine_UnPackBlock_m2011943031 (AesFastEngine_t2923690633 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::PackBlock(System.Byte[],System.Int32)
extern "C"  void AesFastEngine_PackBlock_m4184761330 (AesFastEngine_t2923690633 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::EncryptBlock(System.UInt32[][])
extern "C"  void AesFastEngine_EncryptBlock_m1065007708 (AesFastEngine_t2923690633 * __this, UInt32U5BU5DU5BU5D_t1156922361* ___KW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::DecryptBlock(System.UInt32[][])
extern "C"  void AesFastEngine_DecryptBlock_m3564207004 (AesFastEngine_t2923690633 * __this, UInt32U5BU5DU5BU5D_t1156922361* ___KW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesFastEngine::.cctor()
extern "C"  void AesFastEngine__cctor_m2641934817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
