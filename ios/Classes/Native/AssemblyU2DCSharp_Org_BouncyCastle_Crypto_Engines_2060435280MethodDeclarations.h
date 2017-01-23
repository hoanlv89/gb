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

// Org.BouncyCastle.Crypto.Engines.ChaChaEngine
struct ChaChaEngine_t2060435280;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::.ctor()
extern "C"  void ChaChaEngine__ctor_m1876957665 (ChaChaEngine_t2060435280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::.ctor(System.Int32)
extern "C"  void ChaChaEngine__ctor_m609575104 (ChaChaEngine_t2060435280 * __this, int32_t ___rounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.ChaChaEngine::get_AlgorithmName()
extern "C"  String_t* ChaChaEngine_get_AlgorithmName_m4123160181 (ChaChaEngine_t2060435280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::AdvanceCounter()
extern "C"  void ChaChaEngine_AdvanceCounter_m3952697919 (ChaChaEngine_t2060435280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::ResetCounter()
extern "C"  void ChaChaEngine_ResetCounter_m1478900840 (ChaChaEngine_t2060435280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::SetKey(System.Byte[],System.Byte[])
extern "C"  void ChaChaEngine_SetKey_m2136327524 (ChaChaEngine_t2060435280 * __this, ByteU5BU5D_t3397334013* ___keyBytes0, ByteU5BU5D_t3397334013* ___ivBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::GenerateKeyStream(System.Byte[])
extern "C"  void ChaChaEngine_GenerateKeyStream_m1427739454 (ChaChaEngine_t2060435280 * __this, ByteU5BU5D_t3397334013* ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaChaEngine::ChachaCore(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  void ChaChaEngine_ChachaCore_m2786830923 (Il2CppObject * __this /* static, unused */, int32_t ___rounds0, UInt32U5BU5D_t59386216* ___input1, UInt32U5BU5D_t59386216* ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
