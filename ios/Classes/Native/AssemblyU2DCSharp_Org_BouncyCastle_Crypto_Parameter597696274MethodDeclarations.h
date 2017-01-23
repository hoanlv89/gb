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

// Org.BouncyCastle.Crypto.Parameters.DesEdeParameters
struct DesEdeParameters_t597696274;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::.ctor(System.Byte[])
extern "C"  void DesEdeParameters__ctor_m1474443335 (DesEdeParameters_t597696274 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void DesEdeParameters__ctor_m485055003 (DesEdeParameters_t597696274 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::FixKey(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DesEdeParameters_FixKey_m3782798603 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::IsWeakKey(System.Byte[],System.Int32,System.Int32)
extern "C"  bool DesEdeParameters_IsWeakKey_m165299836 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::IsWeakKey(System.Byte[],System.Int32)
extern "C"  bool DesEdeParameters_IsWeakKey_m1283169139 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::IsWeakKey(System.Byte[])
extern "C"  bool DesEdeParameters_IsWeakKey_m3802260806 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
