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

// Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
struct PaddedBufferedBlockCipher_t4046604239;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
struct IBlockCipherPadding_t1136805358;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
extern "C"  void PaddedBufferedBlockCipher__ctor_m3513158544 (PaddedBufferedBlockCipher_t4046604239 * __this, Il2CppObject * ___cipher0, Il2CppObject * ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void PaddedBufferedBlockCipher__ctor_m83077779 (PaddedBufferedBlockCipher_t4046604239 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void PaddedBufferedBlockCipher_Init_m1998459133 (PaddedBufferedBlockCipher_t4046604239 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t PaddedBufferedBlockCipher_GetOutputSize_m3612042590 (PaddedBufferedBlockCipher_t4046604239 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t PaddedBufferedBlockCipher_GetUpdateOutputSize_m2547383743 (PaddedBufferedBlockCipher_t4046604239 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t PaddedBufferedBlockCipher_ProcessByte_m3291066893 (PaddedBufferedBlockCipher_t4046604239 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t PaddedBufferedBlockCipher_ProcessBytes_m1058631648 (PaddedBufferedBlockCipher_t4046604239 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t PaddedBufferedBlockCipher_DoFinal_m3629782446 (PaddedBufferedBlockCipher_t4046604239 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
