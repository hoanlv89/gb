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

// Org.BouncyCastle.Crypto.Tls.Ssl3Mac
struct Ssl3Mac_t1535524432;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void Ssl3Mac__ctor_m2822297259 (Ssl3Mac_t1535524432 * __this, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Tls.Ssl3Mac::get_AlgorithmName()
extern "C"  String_t* Ssl3Mac_get_AlgorithmName_m3524578861 (Ssl3Mac_t1535524432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Ssl3Mac_Init_m3238003218 (Ssl3Mac_t1535524432 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.Ssl3Mac::GetMacSize()
extern "C"  int32_t Ssl3Mac_GetMacSize_m2016493411 (Ssl3Mac_t1535524432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::Update(System.Byte)
extern "C"  void Ssl3Mac_Update_m149623353 (Ssl3Mac_t1535524432 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void Ssl3Mac_BlockUpdate_m4277055820 (Ssl3Mac_t1535524432 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Tls.Ssl3Mac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t Ssl3Mac_DoFinal_m2130273248 (Ssl3Mac_t1535524432 * __this, ByteU5BU5D_t3397334013* ___output0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::Reset()
extern "C"  void Ssl3Mac_Reset_m1174632128 (Ssl3Mac_t1535524432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Tls.Ssl3Mac::GenPad(System.Byte,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Ssl3Mac_GenPad_m3942842826 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.Ssl3Mac::.cctor()
extern "C"  void Ssl3Mac__cctor_m3636322678 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
