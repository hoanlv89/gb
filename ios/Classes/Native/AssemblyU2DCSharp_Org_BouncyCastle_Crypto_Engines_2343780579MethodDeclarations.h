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

// Org.BouncyCastle.Crypto.Engines.IdeaEngine
struct IdeaEngine_t2343780579;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::.ctor()
extern "C"  void IdeaEngine__ctor_m3960573424 (IdeaEngine_t2343780579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void IdeaEngine_Init_m1919734410 (IdeaEngine_t2343780579 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.IdeaEngine::get_AlgorithmName()
extern "C"  String_t* IdeaEngine_get_AlgorithmName_m3939999550 (IdeaEngine_t2343780579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.IdeaEngine::get_IsPartialBlockOkay()
extern "C"  bool IdeaEngine_get_IsPartialBlockOkay_m1172127221 (IdeaEngine_t2343780579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::GetBlockSize()
extern "C"  int32_t IdeaEngine_GetBlockSize_m2691000924 (IdeaEngine_t2343780579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t IdeaEngine_ProcessBlock_m3908825768 (IdeaEngine_t2343780579 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::Reset()
extern "C"  void IdeaEngine_Reset_m3126155329 (IdeaEngine_t2343780579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::BytesToWord(System.Byte[],System.Int32)
extern "C"  int32_t IdeaEngine_BytesToWord_m1512819550 (IdeaEngine_t2343780579 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::WordToBytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void IdeaEngine_WordToBytes_m936491363 (IdeaEngine_t2343780579 * __this, int32_t ___word0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::Mul(System.Int32,System.Int32)
extern "C"  int32_t IdeaEngine_Mul_m3127468516 (IdeaEngine_t2343780579 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::IdeaFunc(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void IdeaEngine_IdeaFunc_m2416614770 (IdeaEngine_t2343780579 * __this, Int32U5BU5D_t3030399641* ___workingKey0, ByteU5BU5D_t3397334013* ___input1, int32_t ___inOff2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.IdeaEngine::ExpandKey(System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* IdeaEngine_ExpandKey_m2124087732 (IdeaEngine_t2343780579 * __this, ByteU5BU5D_t3397334013* ___uKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::MulInv(System.Int32)
extern "C"  int32_t IdeaEngine_MulInv_m3461964984 (IdeaEngine_t2343780579 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.IdeaEngine::AddInv(System.Int32)
extern "C"  int32_t IdeaEngine_AddInv_m584889139 (IdeaEngine_t2343780579 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.IdeaEngine::InvertKey(System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* IdeaEngine_InvertKey_m2122025576 (IdeaEngine_t2343780579 * __this, Int32U5BU5D_t3030399641* ___inKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.IdeaEngine::GenerateWorkingKey(System.Boolean,System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* IdeaEngine_GenerateWorkingKey_m1799942037 (IdeaEngine_t2343780579 * __this, bool ___forEncryption0, ByteU5BU5D_t3397334013* ___userKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IdeaEngine::.cctor()
extern "C"  void IdeaEngine__cctor_m1733397087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
