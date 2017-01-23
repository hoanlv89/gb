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

// Org.BouncyCastle.Crypto.Parameters.RC2Parameters
struct RC2Parameters_t852146563;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.RC2Parameters::.ctor(System.Byte[])
extern "C"  void RC2Parameters__ctor_m2273234776 (RC2Parameters_t852146563 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.RC2Parameters::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void RC2Parameters__ctor_m234552090 (RC2Parameters_t852146563 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.RC2Parameters::.ctor(System.Byte[],System.Int32)
extern "C"  void RC2Parameters__ctor_m1662107851 (RC2Parameters_t852146563 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___bits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.RC2Parameters::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  void RC2Parameters__ctor_m2287373015 (RC2Parameters_t852146563 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, int32_t ___bits3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RC2Parameters::get_EffectiveKeyBits()
extern "C"  int32_t RC2Parameters_get_EffectiveKeyBits_m1468884530 (RC2Parameters_t852146563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
