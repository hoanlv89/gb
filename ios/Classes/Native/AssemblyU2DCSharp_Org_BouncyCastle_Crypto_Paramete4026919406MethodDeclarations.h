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

// Org.BouncyCastle.Crypto.Parameters.DesParameters
struct DesParameters_t4026919406;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DesParameters::.ctor(System.Byte[])
extern "C"  void DesParameters__ctor_m1050002355 (DesParameters_t4026919406 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DesParameters::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void DesParameters__ctor_m2753088047 (DesParameters_t4026919406 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesParameters::IsWeakKey(System.Byte[],System.Int32)
extern "C"  bool DesParameters_IsWeakKey_m2816471679 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesParameters::IsWeakKey(System.Byte[])
extern "C"  bool DesParameters_IsWeakKey_m1270762544 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DesParameters::SetOddParity(System.Byte[])
extern "C"  void DesParameters_SetOddParity_m2184565941 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DesParameters::.cctor()
extern "C"  void DesParameters__cctor_m3277946407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
