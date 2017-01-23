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

// Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac
struct CfbBlockCipherMac_t471961930;
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

// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CfbBlockCipherMac__ctor_m193133876 (CfbBlockCipherMac_t471961930 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void CfbBlockCipherMac__ctor_m2925037239 (CfbBlockCipherMac_t471961930 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,System.Int32)
extern "C"  void CfbBlockCipherMac__ctor_m1382838794 (CfbBlockCipherMac_t471961930 * __this, Il2CppObject * ___cipher0, int32_t ___cfbBitSize1, int32_t ___macSizeInBits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void CfbBlockCipherMac__ctor_m1333749099 (CfbBlockCipherMac_t471961930 * __this, Il2CppObject * ___cipher0, int32_t ___cfbBitSize1, int32_t ___macSizeInBits2, Il2CppObject * ___padding3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::get_AlgorithmName()
extern "C"  String_t* CfbBlockCipherMac_get_AlgorithmName_m678447482 (CfbBlockCipherMac_t471961930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CfbBlockCipherMac_Init_m2788410493 (CfbBlockCipherMac_t471961930 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::GetMacSize()
extern "C"  int32_t CfbBlockCipherMac_GetMacSize_m3342953098 (CfbBlockCipherMac_t471961930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Update(System.Byte)
extern "C"  void CfbBlockCipherMac_Update_m339090410 (CfbBlockCipherMac_t471961930 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void CfbBlockCipherMac_BlockUpdate_m3481752361 (CfbBlockCipherMac_t471961930 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CfbBlockCipherMac_DoFinal_m337045789 (CfbBlockCipherMac_t471961930 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Reset()
extern "C"  void CfbBlockCipherMac_Reset_m2042280027 (CfbBlockCipherMac_t471961930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
