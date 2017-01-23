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

// Org.BouncyCastle.Crypto.Engines.SeedEngine
struct SeedEngine_t1028676545;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::.ctor()
extern "C"  void SeedEngine__ctor_m153327386 (SeedEngine_t1028676545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void SeedEngine_Init_m2926265844 (SeedEngine_t1028676545 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.SeedEngine::get_AlgorithmName()
extern "C"  String_t* SeedEngine_get_AlgorithmName_m4059281604 (SeedEngine_t1028676545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.SeedEngine::get_IsPartialBlockOkay()
extern "C"  bool SeedEngine_get_IsPartialBlockOkay_m1059344099 (SeedEngine_t1028676545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::GetBlockSize()
extern "C"  int32_t SeedEngine_GetBlockSize_m2162591178 (SeedEngine_t1028676545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SeedEngine_ProcessBlock_m783378478 (SeedEngine_t1028676545 * __this, ByteU5BU5D_t3397334013* ___inBuf0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBuf2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::Reset()
extern "C"  void SeedEngine_Reset_m2486229715 (SeedEngine_t1028676545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.SeedEngine::createWorkingKey(System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* SeedEngine_createWorkingKey_m977710131 (SeedEngine_t1028676545 * __this, ByteU5BU5D_t3397334013* ___inKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW1(System.Int64)
extern "C"  int32_t SeedEngine_extractW1_m905787753 (SeedEngine_t1028676545 * __this, int64_t ___lVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::extractW0(System.Int64)
extern "C"  int32_t SeedEngine_extractW0_m996982318 (SeedEngine_t1028676545 * __this, int64_t ___lVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateLeft8(System.Int64)
extern "C"  int64_t SeedEngine_rotateLeft8_m496782791 (SeedEngine_t1028676545 * __this, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::rotateRight8(System.Int64)
extern "C"  int64_t SeedEngine_rotateRight8_m2622769442 (SeedEngine_t1028676545 * __this, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::bytesToLong(System.Byte[],System.Int32)
extern "C"  int64_t SeedEngine_bytesToLong_m784837525 (SeedEngine_t1028676545 * __this, ByteU5BU5D_t3397334013* ___src0, int32_t ___srcOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::longToBytes(System.Byte[],System.Int32,System.Int64)
extern "C"  void SeedEngine_longToBytes_m2435918480 (SeedEngine_t1028676545 * __this, ByteU5BU5D_t3397334013* ___dest0, int32_t ___destOff1, int64_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::G(System.Int32)
extern "C"  int32_t SeedEngine_G_m3127625604 (SeedEngine_t1028676545 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Crypto.Engines.SeedEngine::F(System.Int32,System.Int32,System.Int64)
extern "C"  int64_t SeedEngine_F_m2616397479 (SeedEngine_t1028676545 * __this, int32_t ___ki00, int32_t ___ki11, int64_t ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc1(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t SeedEngine_phaseCalc1_m1735299543 (SeedEngine_t1028676545 * __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SeedEngine::phaseCalc2(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t SeedEngine_phaseCalc2_m444808596 (SeedEngine_t1028676545 * __this, int32_t ___r00, int32_t ___ki01, int32_t ___r12, int32_t ___ki13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.SeedEngine::.cctor()
extern "C"  void SeedEngine__cctor_m954737725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
