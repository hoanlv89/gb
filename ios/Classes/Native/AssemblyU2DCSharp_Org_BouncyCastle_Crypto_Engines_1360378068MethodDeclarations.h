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

// Org.BouncyCastle.Crypto.Engines.CamelliaEngine
struct CamelliaEngine_t1360378068;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::.ctor()
extern "C"  void CamelliaEngine__ctor_m906601927 (CamelliaEngine_t1360378068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::rightRotate(System.UInt32,System.Int32)
extern "C"  uint32_t CamelliaEngine_rightRotate_m962614006 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::leftRotate(System.UInt32,System.Int32)
extern "C"  uint32_t CamelliaEngine_leftRotate_m2996748203 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_roldq_m693991052 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, UInt32U5BU5D_t59386216* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t59386216* ___ko3, int32_t ___ooff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldq(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_decroldq_m1207104212 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, UInt32U5BU5D_t59386216* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t59386216* ___ko3, int32_t ___ooff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::roldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_roldqo32_m237720504 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, UInt32U5BU5D_t59386216* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t59386216* ___ko3, int32_t ___ooff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::decroldqo32(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_decroldqo32_m3294547552 (Il2CppObject * __this /* static, unused */, int32_t ___rot0, UInt32U5BU5D_t59386216* ___ki1, int32_t ___ioff2, UInt32U5BU5D_t59386216* ___ko3, int32_t ___ooff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::bytes2uint(System.Byte[],System.Int32)
extern "C"  uint32_t CamelliaEngine_bytes2uint_m3876107587 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___src0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::uint2bytes(System.UInt32,System.Byte[],System.Int32)
extern "C"  void CamelliaEngine_uint2bytes_m2799140422 (Il2CppObject * __this /* static, unused */, uint32_t ___word0, ByteU5BU5D_t3397334013* ___dst1, int32_t ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaF2(System.UInt32[],System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_camelliaF2_m2464734768 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___s0, UInt32U5BU5D_t59386216* ___skey1, int32_t ___keyoff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::camelliaFLs(System.UInt32[],System.UInt32[],System.Int32)
extern "C"  void CamelliaEngine_camelliaFLs_m1611264073 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___s0, UInt32U5BU5D_t59386216* ___fkey1, int32_t ___keyoff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::setKey(System.Boolean,System.Byte[])
extern "C"  void CamelliaEngine_setKey_m3867812210 (CamelliaEngine_t1360378068 * __this, bool ___forEncryption0, ByteU5BU5D_t3397334013* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock128(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CamelliaEngine_processBlock128_m147592874 (CamelliaEngine_t1360378068 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::processBlock192or256(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CamelliaEngine_processBlock192or256_m1921293125 (CamelliaEngine_t1360378068 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CamelliaEngine_Init_m831725431 (CamelliaEngine_t1360378068 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.CamelliaEngine::get_AlgorithmName()
extern "C"  String_t* CamelliaEngine_get_AlgorithmName_m3371988527 (CamelliaEngine_t1360378068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.CamelliaEngine::get_IsPartialBlockOkay()
extern "C"  bool CamelliaEngine_get_IsPartialBlockOkay_m4289516172 (CamelliaEngine_t1360378068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::GetBlockSize()
extern "C"  int32_t CamelliaEngine_GetBlockSize_m202662051 (CamelliaEngine_t1360378068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.CamelliaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t CamelliaEngine_ProcessBlock_m1551569543 (CamelliaEngine_t1360378068 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::Reset()
extern "C"  void CamelliaEngine_Reset_m2623685350 (CamelliaEngine_t1360378068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.CamelliaEngine::.cctor()
extern "C"  void CamelliaEngine__cctor_m3452143208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
