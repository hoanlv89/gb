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

// Org.BouncyCastle.Crypto.Engines.HC128Engine
struct HC128Engine_t1442846786;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.HC128Engine::.ctor()
extern "C"  void HC128Engine__ctor_m1755662449 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::F1(System.UInt32)
extern "C"  uint32_t HC128Engine_F1_m121449161 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::F2(System.UInt32)
extern "C"  uint32_t HC128Engine_F2_m1506844138 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::G1(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t HC128Engine_G1_m2721692014 (HC128Engine_t1442846786 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::G2(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t HC128Engine_G2_m844899855 (HC128Engine_t1442846786 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::RotateLeft(System.UInt32,System.Int32)
extern "C"  uint32_t HC128Engine_RotateLeft_m3502994769 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::RotateRight(System.UInt32,System.Int32)
extern "C"  uint32_t HC128Engine_RotateRight_m4236532920 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::H1(System.UInt32)
extern "C"  uint32_t HC128Engine_H1_m2823890855 (HC128Engine_t1442846786 * __this, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::H2(System.UInt32)
extern "C"  uint32_t HC128Engine_H2_m4209285832 (HC128Engine_t1442846786 * __this, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::Mod1024(System.UInt32)
extern "C"  uint32_t HC128Engine_Mod1024_m848898799 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::Mod512(System.UInt32)
extern "C"  uint32_t HC128Engine_Mod512_m3931800494 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::Dim(System.UInt32,System.UInt32)
extern "C"  uint32_t HC128Engine_Dim_m349839566 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC128Engine::Step()
extern "C"  uint32_t HC128Engine_Step_m1387811734 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC128Engine::Init()
extern "C"  void HC128Engine_Init_m1772757275 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.HC128Engine::get_AlgorithmName()
extern "C"  String_t* HC128Engine_get_AlgorithmName_m449480609 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC128Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void HC128Engine_Init_m2466850801 (HC128Engine_t1442846786 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.HC128Engine::GetByte()
extern "C"  uint8_t HC128Engine_GetByte_m1803311623 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC128Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void HC128Engine_ProcessBytes_m1436924624 (HC128Engine_t1442846786 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC128Engine::Reset()
extern "C"  void HC128Engine_Reset_m4084000844 (HC128Engine_t1442846786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.HC128Engine::ReturnByte(System.Byte)
extern "C"  uint8_t HC128Engine_ReturnByte_m1594583686 (HC128Engine_t1442846786 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
