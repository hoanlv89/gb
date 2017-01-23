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

// Org.BouncyCastle.Crypto.Modes.CfbBlockCipher
struct CfbBlockCipher_t1093564787;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void CfbBlockCipher__ctor_m1153211618 (CfbBlockCipher_t1093564787 * __this, Il2CppObject * ___cipher0, int32_t ___bitBlockSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * CfbBlockCipher_GetUnderlyingCipher_m1624661442 (CfbBlockCipher_t1093564787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CfbBlockCipher_Init_m2928505473 (CfbBlockCipher_t1093564787 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::get_AlgorithmName()
extern "C"  String_t* CfbBlockCipher_get_AlgorithmName_m2768815797 (CfbBlockCipher_t1093564787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool CfbBlockCipher_get_IsPartialBlockOkay_m2864354106 (CfbBlockCipher_t1093564787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::GetBlockSize()
extern "C"  int32_t CfbBlockCipher_GetBlockSize_m3148034801 (CfbBlockCipher_t1093564787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CfbBlockCipher_ProcessBlock_m626764741 (CfbBlockCipher_t1093564787 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CfbBlockCipher_EncryptBlock_m3063610645 (CfbBlockCipher_t1093564787 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CfbBlockCipher_DecryptBlock_m1928238023 (CfbBlockCipher_t1093564787 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::Reset()
extern "C"  void CfbBlockCipher_Reset_m923135008 (CfbBlockCipher_t1093564787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
