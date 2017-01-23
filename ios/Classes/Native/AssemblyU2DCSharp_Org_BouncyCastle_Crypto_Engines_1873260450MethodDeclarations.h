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

// Org.BouncyCastle.Crypto.Engines.HC256Engine
struct HC256Engine_t1873260450;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.HC256Engine::.ctor()
extern "C"  void HC256Engine__ctor_m164498831 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC256Engine::Step()
extern "C"  uint32_t HC256Engine_Step_m2941539130 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC256Engine::Init()
extern "C"  void HC256Engine_Init_m2365501657 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.HC256Engine::get_AlgorithmName()
extern "C"  String_t* HC256Engine_get_AlgorithmName_m32426147 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC256Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void HC256Engine_Init_m2739909327 (HC256Engine_t1873260450 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.HC256Engine::GetByte()
extern "C"  uint8_t HC256Engine_GetByte_m2366140777 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC256Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void HC256Engine_ProcessBytes_m1740487376 (HC256Engine_t1873260450 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.HC256Engine::Reset()
extern "C"  void HC256Engine_Reset_m3497142916 (HC256Engine_t1873260450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Engines.HC256Engine::ReturnByte(System.Byte)
extern "C"  uint8_t HC256Engine_ReturnByte_m299946126 (HC256Engine_t1873260450 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Crypto.Engines.HC256Engine::RotateRight(System.UInt32,System.Int32)
extern "C"  uint32_t HC256Engine_RotateRight_m3806342296 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
