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

// Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
struct CcmBlockCipher_t2534265899;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CcmBlockCipher__ctor_m4190224073 (CcmBlockCipher_t2534265899 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * CcmBlockCipher_GetUnderlyingCipher_m278988462 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CcmBlockCipher_Init_m1727405787 (CcmBlockCipher_t2534265899 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::get_AlgorithmName()
extern "C"  String_t* CcmBlockCipher_get_AlgorithmName_m11735907 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetBlockSize()
extern "C"  int32_t CcmBlockCipher_GetBlockSize_m3082145871 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessAadByte(System.Byte)
extern "C"  void CcmBlockCipher_ProcessAadByte_m1956476635 (CcmBlockCipher_t2534265899 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CcmBlockCipher_ProcessAadBytes_m692084792 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t CcmBlockCipher_ProcessByte_m3065449331 (CcmBlockCipher_t2534265899 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CcmBlockCipher_ProcessBytes_m1497673414 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CcmBlockCipher_DoFinal_m2889682340 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___outBytes0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Reset()
extern "C"  void CcmBlockCipher_Reset_m2488469340 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetMac()
extern "C"  ByteU5BU5D_t3397334013* CcmBlockCipher_GetMac_m2010627024 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t CcmBlockCipher_GetUpdateOutputSize_m2194278773 (CcmBlockCipher_t2534265899 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t CcmBlockCipher_GetOutputSize_m401854140 (CcmBlockCipher_t2534265899 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CcmBlockCipher_ProcessPacket_m2427251479 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CcmBlockCipher_ProcessPacket_m3591675311 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::calculateMac(System.Byte[],System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t CcmBlockCipher_calculateMac_m1462730698 (CcmBlockCipher_t2534265899 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataOff1, int32_t ___dataLen2, ByteU5BU5D_t3397334013* ___macBlock3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetAssociatedTextLength()
extern "C"  int32_t CcmBlockCipher_GetAssociatedTextLength_m3407211736 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::HasAssociatedText()
extern "C"  bool CcmBlockCipher_HasAssociatedText_m747609068 (CcmBlockCipher_t2534265899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::.cctor()
extern "C"  void CcmBlockCipher__cctor_m1233654782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
