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

// Org.BouncyCastle.Crypto.Engines.AesEngine
struct AesEngine_t1294214581;
// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t1156922361;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::.ctor()
extern "C"  void AesEngine__ctor_m1824416192 (AesEngine_t1294214581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::Shift(System.UInt32,System.Int32)
extern "C"  uint32_t AesEngine_Shift_m3004306576 (Il2CppObject * __this /* static, unused */, uint32_t ___r0, int32_t ___shift1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::FFmulX(System.UInt32)
extern "C"  uint32_t AesEngine_FFmulX_m303534321 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::Inv_Mcol(System.UInt32)
extern "C"  uint32_t AesEngine_Inv_Mcol_m900155648 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.AesEngine::SubWord(System.UInt32)
extern "C"  uint32_t AesEngine_SubWord_m3330011823 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[][] Org.BouncyCastle.Crypto.Engines.AesEngine::GenerateWorkingKey(System.Byte[],System.Boolean)
extern "C"  UInt32U5BU5DU5BU5D_t1156922361* AesEngine_GenerateWorkingKey_m4142797946 (AesEngine_t1294214581 * __this, ByteU5BU5D_t3397334013* ___key0, bool ___forEncryption1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void AesEngine_Init_m2825360966 (AesEngine_t1294214581 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.AesEngine::get_AlgorithmName()
extern "C"  String_t* AesEngine_get_AlgorithmName_m3251723724 (AesEngine_t1294214581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.AesEngine::get_IsPartialBlockOkay()
extern "C"  bool AesEngine_get_IsPartialBlockOkay_m1308977811 (AesEngine_t1294214581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesEngine::GetBlockSize()
extern "C"  int32_t AesEngine_GetBlockSize_m1121380912 (AesEngine_t1294214581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.AesEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t AesEngine_ProcessBlock_m1398357476 (AesEngine_t1294214581 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::Reset()
extern "C"  void AesEngine_Reset_m2291903651 (AesEngine_t1294214581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::UnPackBlock(System.Byte[],System.Int32)
extern "C"  void AesEngine_UnPackBlock_m883598699 (AesEngine_t1294214581 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::PackBlock(System.Byte[],System.Int32)
extern "C"  void AesEngine_PackBlock_m2083209116 (AesEngine_t1294214581 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::EncryptBlock(System.UInt32[][])
extern "C"  void AesEngine_EncryptBlock_m856171826 (AesEngine_t1294214581 * __this, UInt32U5BU5DU5BU5D_t1156922361* ___KW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::DecryptBlock(System.UInt32[][])
extern "C"  void AesEngine_DecryptBlock_m1323188710 (AesEngine_t1294214581 * __this, UInt32U5BU5DU5BU5D_t1156922361* ___KW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.AesEngine::.cctor()
extern "C"  void AesEngine__cctor_m1866107109 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
