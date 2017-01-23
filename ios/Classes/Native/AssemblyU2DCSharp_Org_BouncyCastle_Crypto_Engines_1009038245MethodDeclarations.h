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

// Org.BouncyCastle.Crypto.Engines.SerpentEngine
struct SerpentEngine_t1009038245;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::.ctor()
extern "C"  void SerpentEngine__ctor_m3911948612 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void SerpentEngine_Init_m1292745570 (SerpentEngine_t1009038245 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.SerpentEngine::get_AlgorithmName()
extern "C"  String_t* SerpentEngine_get_AlgorithmName_m32781184 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngine::get_IsPartialBlockOkay()
extern "C"  bool SerpentEngine_get_IsPartialBlockOkay_m142329807 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngine::GetBlockSize()
extern "C"  int32_t SerpentEngine_GetBlockSize_m154231940 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SerpentEngine_ProcessBlock_m645350760 (SerpentEngine_t1009038245 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Reset()
extern "C"  void SerpentEngine_Reset_m193361519 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngine::MakeWorkingKey(System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* SerpentEngine_MakeWorkingKey_m1923001497 (SerpentEngine_t1009038245 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngine::RotateLeft(System.Int32,System.Int32)
extern "C"  int32_t SerpentEngine_RotateLeft_m3260041386 (SerpentEngine_t1009038245 * __this, int32_t ___x0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngine::RotateRight(System.Int32,System.Int32)
extern "C"  int32_t SerpentEngine_RotateRight_m3779738605 (SerpentEngine_t1009038245 * __this, int32_t ___x0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngine::BytesToWord(System.Byte[],System.Int32)
extern "C"  int32_t SerpentEngine_BytesToWord_m3702417330 (SerpentEngine_t1009038245 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::WordToBytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void SerpentEngine_WordToBytes_m1802262477 (SerpentEngine_t1009038245 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___dst1, int32_t ___dstOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void SerpentEngine_EncryptBlock_m617167046 (SerpentEngine_t1009038245 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void SerpentEngine_DecryptBlock_m1942237834 (SerpentEngine_t1009038245 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb0_m628252515 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib0_m3136099813 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb1_m279502526 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib1_m660997184 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb2_m2118745645 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib2_m1242992667 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb3_m1501655944 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib3_m2794517622 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb4_m871236047 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib4_m3379083345 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb5_m522486058 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib5_m903980716 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb6_m2361729177 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib6_m1485976199 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Sb7_m1744639476 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SerpentEngine_Ib7_m3037501154 (SerpentEngine_t1009038245 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::LT()
extern "C"  void SerpentEngine_LT_m739044354 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::InverseLT()
extern "C"  void SerpentEngine_InverseLT_m4277498200 (SerpentEngine_t1009038245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngine::.cctor()
extern "C"  void SerpentEngine__cctor_m2090441381 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
