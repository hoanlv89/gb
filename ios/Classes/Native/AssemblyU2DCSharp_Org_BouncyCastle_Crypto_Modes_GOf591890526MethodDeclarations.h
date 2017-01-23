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

// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
struct GOfbBlockCipher_t591890526;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void GOfbBlockCipher__ctor_m3936052670 (GOfbBlockCipher_t591890526 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * GOfbBlockCipher_GetUnderlyingCipher_m2260877157 (GOfbBlockCipher_t591890526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void GOfbBlockCipher_Init_m2108673640 (GOfbBlockCipher_t591890526 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_AlgorithmName()
extern "C"  String_t* GOfbBlockCipher_get_AlgorithmName_m149076586 (GOfbBlockCipher_t591890526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool GOfbBlockCipher_get_IsPartialBlockOkay_m1610133155 (GOfbBlockCipher_t591890526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetBlockSize()
extern "C"  int32_t GOfbBlockCipher_GetBlockSize_m2913462430 (GOfbBlockCipher_t591890526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t GOfbBlockCipher_ProcessBlock_m2019418866 (GOfbBlockCipher_t591890526 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Reset()
extern "C"  void GOfbBlockCipher_Reset_m2073673731 (GOfbBlockCipher_t591890526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::bytesToint(System.Byte[],System.Int32)
extern "C"  int32_t GOfbBlockCipher_bytesToint_m1969898207 (GOfbBlockCipher_t591890526 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::intTobytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void GOfbBlockCipher_intTobytes_m2304636002 (GOfbBlockCipher_t591890526 * __this, int32_t ___num0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
