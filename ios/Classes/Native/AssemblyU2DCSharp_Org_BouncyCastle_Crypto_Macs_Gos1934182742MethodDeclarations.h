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

// Org.BouncyCastle.Crypto.Macs.Gost28147Mac
struct Gost28147Mac_t1934182742;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::.ctor()
extern "C"  void Gost28147Mac__ctor_m3277991488 (Gost28147Mac_t1934182742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::generateWorkingKey(System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* Gost28147Mac_generateWorkingKey_m912799188 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___userKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Gost28147Mac_Init_m4152106677 (Gost28147Mac_t1934182742 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.Gost28147Mac::get_AlgorithmName()
extern "C"  String_t* Gost28147Mac_get_AlgorithmName_m3738771892 (Gost28147Mac_t1934182742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::GetMacSize()
extern "C"  int32_t Gost28147Mac_GetMacSize_m4127916170 (Gost28147Mac_t1934182742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147_mainStep(System.Int32,System.Int32)
extern "C"  int32_t Gost28147Mac_gost28147_mainStep_m4160486329 (Gost28147Mac_t1934182742 * __this, int32_t ___n10, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147MacFunc(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void Gost28147Mac_gost28147MacFunc_m1499049011 (Gost28147Mac_t1934182742 * __this, Int32U5BU5D_t3030399641* ___workingKey0, ByteU5BU5D_t3397334013* ___input1, int32_t ___inOff2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::bytesToint(System.Byte[],System.Int32)
extern "C"  int32_t Gost28147Mac_bytesToint_m2473796647 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::intTobytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void Gost28147Mac_intTobytes_m4143981364 (Il2CppObject * __this /* static, unused */, int32_t ___num0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::CM5func(System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* Gost28147Mac_CM5func_m101108954 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___bufOff1, ByteU5BU5D_t3397334013* ___mac2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Update(System.Byte)
extern "C"  void Gost28147Mac_Update_m3375699198 (Gost28147Mac_t1934182742 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Gost28147Mac_BlockUpdate_m2938794129 (Gost28147Mac_t1934182742 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Gost28147Mac_DoFinal_m1124138553 (Gost28147Mac_t1934182742 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Reset()
extern "C"  void Gost28147Mac_Reset_m3878466579 (Gost28147Mac_t1934182742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
