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

// Org.BouncyCastle.Crypto.Engines.Gost28147Engine
struct Gost28147Engine_t2806286145;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::.cctor()
extern "C"  void Gost28147Engine__cctor_m2159092889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::.ctor()
extern "C"  void Gost28147Engine__ctor_m2482537096 (Gost28147Engine_t2806286145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::AddSBox(System.String,System.Byte[])
extern "C"  void Gost28147Engine_AddSBox_m2077322344 (Il2CppObject * __this /* static, unused */, String_t* ___sBoxName0, ByteU5BU5D_t3397334013* ___sBox1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Gost28147Engine_Init_m4259529838 (Gost28147Engine_t2806286145 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Gost28147Engine::get_AlgorithmName()
extern "C"  String_t* Gost28147Engine_get_AlgorithmName_m911179492 (Gost28147Engine_t2806286145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.Gost28147Engine::get_IsPartialBlockOkay()
extern "C"  bool Gost28147Engine_get_IsPartialBlockOkay_m1227495451 (Gost28147Engine_t2806286145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Gost28147Engine::GetBlockSize()
extern "C"  int32_t Gost28147Engine_GetBlockSize_m3590367560 (Gost28147Engine_t2806286145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Gost28147Engine_ProcessBlock_m3388082780 (Gost28147Engine_t2806286145 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::Reset()
extern "C"  void Gost28147Engine_Reset_m1440004555 (Gost28147Engine_t2806286145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::generateWorkingKey(System.Boolean,System.Byte[])
extern "C"  Int32U5BU5D_t3030399641* Gost28147Engine_generateWorkingKey_m1872062307 (Gost28147Engine_t2806286145 * __this, bool ___forEncryption0, ByteU5BU5D_t3397334013* ___userKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Gost28147Engine::Gost28147_mainStep(System.Int32,System.Int32)
extern "C"  int32_t Gost28147Engine_Gost28147_mainStep_m616348201 (Gost28147Engine_t2806286145 * __this, int32_t ___n10, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::Gost28147Func(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  void Gost28147Engine_Gost28147Func_m3458327404 (Gost28147Engine_t2806286145 * __this, Int32U5BU5D_t3030399641* ___workingKey0, ByteU5BU5D_t3397334013* ___inBytes1, int32_t ___inOff2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Engines.Gost28147Engine::bytesToint(System.Byte[],System.Int32)
extern "C"  int32_t Gost28147Engine_bytesToint_m1895082975 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::intTobytes(System.Int32,System.Byte[],System.Int32)
extern "C"  void Gost28147Engine_intTobytes_m388333996 (Il2CppObject * __this /* static, unused */, int32_t ___num0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::GetSBox(System.String)
extern "C"  ByteU5BU5D_t3397334013* Gost28147Engine_GetSBox_m2855401416 (Il2CppObject * __this /* static, unused */, String_t* ___sBoxName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
