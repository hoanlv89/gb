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

// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t3286458088;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.ctor()
extern "C"  void TwofishEngine__ctor_m1086441281 (TwofishEngine_t3286458088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void TwofishEngine_Init_m2673841657 (TwofishEngine_t3286458088 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_AlgorithmName()
extern "C"  String_t* TwofishEngine_get_AlgorithmName_m2188539641 (TwofishEngine_t3286458088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_IsPartialBlockOkay()
extern "C"  bool TwofishEngine_get_IsPartialBlockOkay_m3643083812 (TwofishEngine_t3286458088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t TwofishEngine_ProcessBlock_m380608001 (TwofishEngine_t3286458088 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Reset()
extern "C"  void TwofishEngine_Reset_m3352558710 (TwofishEngine_t3286458088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::GetBlockSize()
extern "C"  int32_t TwofishEngine_GetBlockSize_m3254386749 (TwofishEngine_t3286458088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
extern "C"  void TwofishEngine_SetKey_m3353200999 (TwofishEngine_t3286458088 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void TwofishEngine_EncryptBlock_m236413539 (TwofishEngine_t3286458088 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void TwofishEngine_DecryptBlock_m2375954077 (TwofishEngine_t3286458088 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcIndex1, ByteU5BU5D_t3397334013* ___dst2, int32_t ___dstIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
extern "C"  int32_t TwofishEngine_F32_m3883316216 (TwofishEngine_t3286458088 * __this, int32_t ___x0, Int32U5BU5D_t3030399641* ___k321, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
extern "C"  int32_t TwofishEngine_RS_MDS_Encode_m4199125406 (TwofishEngine_t3286458088 * __this, int32_t ___k00, int32_t ___k11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
extern "C"  int32_t TwofishEngine_RS_rem_m3447814986 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
extern "C"  int32_t TwofishEngine_LFSR1_m3231370048 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
extern "C"  int32_t TwofishEngine_LFSR2_m321738591 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
extern "C"  int32_t TwofishEngine_Mx_X_m4108050408 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
extern "C"  int32_t TwofishEngine_Mx_Y_m4213549 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
extern "C"  int32_t TwofishEngine_M_b0_m3484325348 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
extern "C"  int32_t TwofishEngine_M_b1_m1988083871 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
extern "C"  int32_t TwofishEngine_M_b2_m3123932654 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
extern "C"  int32_t TwofishEngine_M_b3_m1627691177 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
extern "C"  int32_t TwofishEngine_Fe32_0_m3632445375 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
extern "C"  int32_t TwofishEngine_Fe32_3_m1775811204 (TwofishEngine_t3286458088 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
extern "C"  int32_t TwofishEngine_BytesTo32Bits_m2792490090 (TwofishEngine_t3286458088 * __this, ByteU5BU5D_t3397334013* ___b0, int32_t ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void TwofishEngine_Bits32ToBytes_m157388897 (TwofishEngine_t3286458088 * __this, int32_t ___inData0, ByteU5BU5D_t3397334013* ___b1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.cctor()
extern "C"  void TwofishEngine__cctor_m1366297164 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
