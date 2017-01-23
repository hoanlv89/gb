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

// Org.BouncyCastle.Crypto.Modes.SicBlockCipher
struct SicBlockCipher_t3693949395;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void SicBlockCipher__ctor_m3089391177 (SicBlockCipher_t3693949395 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * SicBlockCipher_GetUnderlyingCipher_m400507038 (SicBlockCipher_t3693949395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void SicBlockCipher_Init_m1522981527 (SicBlockCipher_t3693949395 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.SicBlockCipher::get_AlgorithmName()
extern "C"  String_t* SicBlockCipher_get_AlgorithmName_m975196055 (SicBlockCipher_t3693949395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.SicBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool SicBlockCipher_get_IsPartialBlockOkay_m3920608466 (SicBlockCipher_t3693949395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetBlockSize()
extern "C"  int32_t SicBlockCipher_GetBlockSize_m2814242043 (SicBlockCipher_t3693949395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SicBlockCipher_ProcessBlock_m270668663 (SicBlockCipher_t3693949395 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Reset()
extern "C"  void SicBlockCipher_Reset_m1330371496 (SicBlockCipher_t3693949395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
