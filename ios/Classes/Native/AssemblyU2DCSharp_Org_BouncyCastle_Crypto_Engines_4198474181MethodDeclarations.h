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

// Org.BouncyCastle.Crypto.Engines.NoekeonEngine
struct NoekeonEngine_t4198474181;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::.ctor()
extern "C"  void NoekeonEngine__ctor_m4257492132 (NoekeonEngine_t4198474181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.NoekeonEngine::get_AlgorithmName()
extern "C"  String_t* NoekeonEngine_get_AlgorithmName_m165950176 (NoekeonEngine_t4198474181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.NoekeonEngine::get_IsPartialBlockOkay()
extern "C"  bool NoekeonEngine_get_IsPartialBlockOkay_m3029895663 (NoekeonEngine_t4198474181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.NoekeonEngine::GetBlockSize()
extern "C"  int32_t NoekeonEngine_GetBlockSize_m1047475140 (NoekeonEngine_t4198474181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void NoekeonEngine_Init_m2764669922 (NoekeonEngine_t4198474181 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.NoekeonEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NoekeonEngine_ProcessBlock_m2534915784 (NoekeonEngine_t4198474181 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::Reset()
extern "C"  void NoekeonEngine_Reset_m446185327 (NoekeonEngine_t4198474181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::setKey(System.Byte[])
extern "C"  void NoekeonEngine_setKey_m2383094848 (NoekeonEngine_t4198474181 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.NoekeonEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NoekeonEngine_encryptBlock_m3856178356 (NoekeonEngine_t4198474181 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.NoekeonEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t NoekeonEngine_decryptBlock_m819249740 (NoekeonEngine_t4198474181 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::gamma(System.UInt32[])
extern "C"  void NoekeonEngine_gamma_m4249920703 (NoekeonEngine_t4198474181 * __this, UInt32U5BU5D_t59386216* ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::theta(System.UInt32[],System.UInt32[])
extern "C"  void NoekeonEngine_theta_m228928834 (NoekeonEngine_t4198474181 * __this, UInt32U5BU5D_t59386216* ___a0, UInt32U5BU5D_t59386216* ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::pi1(System.UInt32[])
extern "C"  void NoekeonEngine_pi1_m136294132 (NoekeonEngine_t4198474181 * __this, UInt32U5BU5D_t59386216* ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::pi2(System.UInt32[])
extern "C"  void NoekeonEngine_pi2_m2694781647 (NoekeonEngine_t4198474181 * __this, UInt32U5BU5D_t59386216* ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.NoekeonEngine::rotl(System.UInt32,System.Int32)
extern "C"  uint32_t NoekeonEngine_rotl_m1462793629 (NoekeonEngine_t4198474181 * __this, uint32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.NoekeonEngine::.cctor()
extern "C"  void NoekeonEngine__cctor_m2403931845 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
