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

// Org.BouncyCastle.Crypto.Engines.RC2Engine
struct RC2Engine_t3848943229;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::.ctor()
extern "C"  void RC2Engine__ctor_m72391980 (RC2Engine_t3848943229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.RC2Engine::GenerateWorkingKey(System.Byte[],System.Int32)
extern "C"  Int32U5BU5D_t3030399641* RC2Engine_GenerateWorkingKey_m1195420437 (RC2Engine_t3848943229 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC2Engine_Init_m2941226730 (RC2Engine_t3848943229 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::Reset()
extern "C"  void RC2Engine_Reset_m4253955623 (RC2Engine_t3848943229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC2Engine::get_AlgorithmName()
extern "C"  String_t* RC2Engine_get_AlgorithmName_m3335268200 (RC2Engine_t3848943229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2Engine::get_IsPartialBlockOkay()
extern "C"  bool RC2Engine_get_IsPartialBlockOkay_m3037668615 (RC2Engine_t3848943229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::GetBlockSize()
extern "C"  int32_t RC2Engine_GetBlockSize_m305558812 (RC2Engine_t3848943229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RC2Engine_ProcessBlock_m3015629104 (RC2Engine_t3848943229 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.RC2Engine::RotateWordLeft(System.Int32,System.Int32)
extern "C"  int32_t RC2Engine_RotateWordLeft_m3344609022 (RC2Engine_t3848943229 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void RC2Engine_EncryptBlock_m713087022 (RC2Engine_t3848943229 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void RC2Engine_DecryptBlock_m4188803058 (RC2Engine_t3848943229 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2Engine::.cctor()
extern "C"  void RC2Engine__cctor_m3171330365 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
