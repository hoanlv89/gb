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

// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
struct OfbBlockCipher_t2804280439;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void OfbBlockCipher__ctor_m3390245998 (OfbBlockCipher_t2804280439 * __this, Il2CppObject * ___cipher0, int32_t ___blockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * OfbBlockCipher_GetUnderlyingCipher_m853754454 (OfbBlockCipher_t2804280439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void OfbBlockCipher_Init_m3043268469 (OfbBlockCipher_t2804280439 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::get_AlgorithmName()
extern "C"  String_t* OfbBlockCipher_get_AlgorithmName_m2625324337 (OfbBlockCipher_t2804280439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool OfbBlockCipher_get_IsPartialBlockOkay_m1248483662 (OfbBlockCipher_t2804280439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::GetBlockSize()
extern "C"  int32_t OfbBlockCipher_GetBlockSize_m1272713349 (OfbBlockCipher_t2804280439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t OfbBlockCipher_ProcessBlock_m1277991561 (OfbBlockCipher_t2804280439 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::Reset()
extern "C"  void OfbBlockCipher_Reset_m2769599396 (OfbBlockCipher_t2804280439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
