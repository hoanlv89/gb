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

// Org.BouncyCastle.Crypto.Macs.SipHash
struct SipHash_t1664512494;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor()
extern "C"  void SipHash__ctor_m2890767328 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor(System.Int32,System.Int32)
extern "C"  void SipHash__ctor_m331210044 (SipHash_t1664512494 * __this, int32_t ___c0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.SipHash::get_AlgorithmName()
extern "C"  String_t* SipHash_get_AlgorithmName_m2962139222 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::GetMacSize()
extern "C"  int32_t SipHash_GetMacSize_m1102017350 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void SipHash_Init_m4001600025 (SipHash_t1664512494 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Update(System.Byte)
extern "C"  void SipHash_Update_m3206639718 (SipHash_t1664512494 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void SipHash_BlockUpdate_m2547344901 (SipHash_t1664512494 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal()
extern "C"  int64_t SipHash_DoFinal_m4162433790 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t SipHash_DoFinal_m2283725313 (SipHash_t1664512494 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset()
extern "C"  void SipHash_Reset_m1165556327 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord()
extern "C"  void SipHash_ProcessMessageWord_m1561639530 (SipHash_t1664512494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32)
extern "C"  void SipHash_ApplySipRounds_m2800298674 (SipHash_t1664512494 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::RotateLeft(System.Int64,System.Int32)
extern "C"  int64_t SipHash_RotateLeft_m1678091174 (Il2CppObject * __this /* static, unused */, int64_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
