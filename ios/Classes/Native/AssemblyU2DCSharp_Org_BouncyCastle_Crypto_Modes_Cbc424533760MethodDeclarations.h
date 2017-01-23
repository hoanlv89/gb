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

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t424533760;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CbcBlockCipher__ctor_m3622503792 (CbcBlockCipher_t424533760 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * CbcBlockCipher_GetUnderlyingCipher_m637418691 (CbcBlockCipher_t424533760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CbcBlockCipher_Init_m2542338190 (CbcBlockCipher_t424533760 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::get_AlgorithmName()
extern "C"  String_t* CbcBlockCipher_get_AlgorithmName_m3364737866 (CbcBlockCipher_t424533760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool CbcBlockCipher_get_IsPartialBlockOkay_m1218230873 (CbcBlockCipher_t424533760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetBlockSize()
extern "C"  int32_t CbcBlockCipher_GetBlockSize_m1676794352 (CbcBlockCipher_t424533760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CbcBlockCipher_ProcessBlock_m2198085468 (CbcBlockCipher_t424533760 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Reset()
extern "C"  void CbcBlockCipher_Reset_m1439234101 (CbcBlockCipher_t424533760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CbcBlockCipher_EncryptBlock_m3225420916 (CbcBlockCipher_t424533760 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CbcBlockCipher_DecryptBlock_m4215694512 (CbcBlockCipher_t424533760 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
