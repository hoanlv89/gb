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

// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
struct CbcBlockCipherMac_t1613178881;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
struct IBlockCipherPadding_t1136805358;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CbcBlockCipherMac__ctor_m3479567613 (CbcBlockCipherMac_t1613178881 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void CbcBlockCipherMac__ctor_m2278200672 (CbcBlockCipherMac_t1613178881 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void CbcBlockCipherMac__ctor_m969992272 (CbcBlockCipherMac_t1613178881 * __this, Il2CppObject * ___cipher0, int32_t ___macSizeInBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void CbcBlockCipherMac__ctor_m3196134699 (CbcBlockCipherMac_t1613178881 * __this, Il2CppObject * ___cipher0, int32_t ___macSizeInBits1, Il2CppObject * ___padding2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::get_AlgorithmName()
extern "C"  String_t* CbcBlockCipherMac_get_AlgorithmName_m1382314371 (CbcBlockCipherMac_t1613178881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CbcBlockCipherMac_Init_m2658967228 (CbcBlockCipherMac_t1613178881 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::GetMacSize()
extern "C"  int32_t CbcBlockCipherMac_GetMacSize_m806205277 (CbcBlockCipherMac_t1613178881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Update(System.Byte)
extern "C"  void CbcBlockCipherMac_Update_m3321628659 (CbcBlockCipherMac_t1613178881 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void CbcBlockCipherMac_BlockUpdate_m551352074 (CbcBlockCipherMac_t1613178881 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CbcBlockCipherMac_DoFinal_m3789451242 (CbcBlockCipherMac_t1613178881 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Reset()
extern "C"  void CbcBlockCipherMac_Reset_m2374189522 (CbcBlockCipherMac_t1613178881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
