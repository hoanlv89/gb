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

// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
struct GcmBlockCipher_t1966957103;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
struct IGcmMultiplier_t3661509793;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void GcmBlockCipher__ctor_m629621317 (GcmBlockCipher_t1966957103 * __this, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier)
extern "C"  void GcmBlockCipher__ctor_m3472938642 (GcmBlockCipher_t1966957103 * __this, Il2CppObject * ___c0, Il2CppObject * ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::get_AlgorithmName()
extern "C"  String_t* GcmBlockCipher_get_AlgorithmName_m3758183647 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * GcmBlockCipher_GetUnderlyingCipher_m4156097602 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetBlockSize()
extern "C"  int32_t GcmBlockCipher_GetBlockSize_m616725731 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void GcmBlockCipher_Init_m778186463 (GcmBlockCipher_t1966957103 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetMac()
extern "C"  ByteU5BU5D_t3397334013* GcmBlockCipher_GetMac_m510594124 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t GcmBlockCipher_GetOutputSize_m2281232552 (GcmBlockCipher_t1966957103 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t GcmBlockCipher_GetUpdateOutputSize_m4049942281 (GcmBlockCipher_t1966957103 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadByte(System.Byte)
extern "C"  void GcmBlockCipher_ProcessAadByte_m190232407 (GcmBlockCipher_t1966957103 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void GcmBlockCipher_ProcessAadBytes_m2554548916 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::InitCipher()
extern "C"  void GcmBlockCipher_InitCipher_m1329221322 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t GcmBlockCipher_ProcessByte_m3629459079 (GcmBlockCipher_t1966957103 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t GcmBlockCipher_ProcessBytes_m3205609946 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::OutputBlock(System.Byte[],System.Int32)
extern "C"  void GcmBlockCipher_OutputBlock_m3269147951 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t GcmBlockCipher_DoFinal_m2190600376 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset()
extern "C"  void GcmBlockCipher_Reset_m988157920 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset(System.Boolean)
extern "C"  void GcmBlockCipher_Reset_m3897782457 (GcmBlockCipher_t1966957103 * __this, bool ___clearMac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gCTRBlock(System.Byte[],System.Byte[],System.Int32)
extern "C"  void GcmBlockCipher_gCTRBlock_m240033401 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___block0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gCTRPartial(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void GcmBlockCipher_gCTRPartial_m3580303063 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASH(System.Byte[],System.Byte[],System.Int32)
extern "C"  void GcmBlockCipher_gHASH_m4059145007 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___Y0, ByteU5BU5D_t3397334013* ___b1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHBlock(System.Byte[],System.Byte[])
extern "C"  void GcmBlockCipher_gHASHBlock_m1238786151 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___Y0, ByteU5BU5D_t3397334013* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHPartial(System.Byte[],System.Byte[],System.Int32,System.Int32)
extern "C"  void GcmBlockCipher_gHASHPartial_m3022758593 (GcmBlockCipher_t1966957103 * __this, ByteU5BU5D_t3397334013* ___Y0, ByteU5BU5D_t3397334013* ___b1, int32_t ___off2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetNextCounterBlock()
extern "C"  ByteU5BU5D_t3397334013* GcmBlockCipher_GetNextCounterBlock_m3111228959 (GcmBlockCipher_t1966957103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
