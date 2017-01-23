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

// Org.BouncyCastle.Crypto.Macs.Poly1305
struct Poly1305_t3186287769;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::.ctor()
extern "C"  void Poly1305__ctor_m2051571995 (Poly1305_t3186287769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void Poly1305__ctor_m2481761277 (Poly1305_t3186287769 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Poly1305_Init_m4258095264 (Poly1305_t3186287769 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::SetKey(System.Byte[],System.Byte[])
extern "C"  void Poly1305_SetKey_m3355367520 (Poly1305_t3186287769 * __this, ByteU5BU5D_t3397334013* ___key0, ByteU5BU5D_t3397334013* ___nonce1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.Poly1305::get_AlgorithmName()
extern "C"  String_t* Poly1305_get_AlgorithmName_m2262350159 (Poly1305_t3186287769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::GetMacSize()
extern "C"  int32_t Poly1305_GetMacSize_m2609122281 (Poly1305_t3186287769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Update(System.Byte)
extern "C"  void Poly1305_Update_m1633425531 (Poly1305_t3186287769 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Poly1305_BlockUpdate_m513593158 (Poly1305_t3186287769 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::processBlock()
extern "C"  void Poly1305_processBlock_m3157486369 (Poly1305_t3186287769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Poly1305_DoFinal_m1449452298 (Poly1305_t3186287769 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Reset()
extern "C"  void Poly1305_Reset_m829673718 (Poly1305_t3186287769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Crypto.Macs.Poly1305::mul32x32_64(System.UInt32,System.UInt32)
extern "C"  uint64_t Poly1305_mul32x32_64_m2926624356 (Il2CppObject * __this /* static, unused */, uint32_t ___i10, uint32_t ___i21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
