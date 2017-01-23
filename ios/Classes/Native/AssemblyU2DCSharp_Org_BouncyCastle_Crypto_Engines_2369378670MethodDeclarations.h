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

// Org.BouncyCastle.Crypto.Engines.BlowfishEngine
struct BlowfishEngine_t2369378670;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::.ctor()
extern "C"  void BlowfishEngine__ctor_m1671768515 (BlowfishEngine_t2369378670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BlowfishEngine_Init_m3706696171 (BlowfishEngine_t2369378670 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.BlowfishEngine::get_AlgorithmName()
extern "C"  String_t* BlowfishEngine_get_AlgorithmName_m3460145139 (BlowfishEngine_t2369378670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.BlowfishEngine::get_IsPartialBlockOkay()
extern "C"  bool BlowfishEngine_get_IsPartialBlockOkay_m1667906654 (BlowfishEngine_t2369378670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BlowfishEngine_ProcessBlock_m925134331 (BlowfishEngine_t2369378670 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::Reset()
extern "C"  void BlowfishEngine_Reset_m4283471364 (BlowfishEngine_t2369378670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::GetBlockSize()
extern "C"  int32_t BlowfishEngine_GetBlockSize_m3845343959 (BlowfishEngine_t2369378670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.BlowfishEngine::F(System.UInt32)
extern "C"  uint32_t BlowfishEngine_F_m3649392792 (BlowfishEngine_t2369378670 * __this, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::ProcessTable(System.UInt32,System.UInt32,System.UInt32[])
extern "C"  void BlowfishEngine_ProcessTable_m967069434 (BlowfishEngine_t2369378670 * __this, uint32_t ___xl0, uint32_t ___xr1, UInt32U5BU5D_t59386216* ___table2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::SetKey(System.Byte[])
extern "C"  void BlowfishEngine_SetKey_m947127313 (BlowfishEngine_t2369378670 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void BlowfishEngine_EncryptBlock_m1438109797 (BlowfishEngine_t2369378670 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void BlowfishEngine_DecryptBlock_m3509900547 (BlowfishEngine_t2369378670 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.BlowfishEngine::.cctor()
extern "C"  void BlowfishEngine__cctor_m575963650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
