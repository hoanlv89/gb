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

// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"

// System.Void Org.BouncyCastle.Asn1.Asn1Object::.ctor()
extern "C"  void Asn1Object__ctor_m1371885948 (Asn1Object_t564283626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1Object::FromByteArray(System.Byte[])
extern "C"  Asn1Object_t564283626 * Asn1Object_FromByteArray_m3718636382 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1Object::FromStream(System.IO.Stream)
extern "C"  Asn1Object_t564283626 * Asn1Object_FromStream_m3978053253 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___inStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1Object::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * Asn1Object_ToAsn1Object_m2295872423 (Asn1Object_t564283626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.Asn1Object::CallAsn1Equals(Org.BouncyCastle.Asn1.Asn1Object)
extern "C"  bool Asn1Object_CallAsn1Equals_m67523583 (Asn1Object_t564283626 * __this, Asn1Object_t564283626 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.Asn1Object::CallAsn1GetHashCode()
extern "C"  int32_t Asn1Object_CallAsn1GetHashCode_m3866311328 (Asn1Object_t564283626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
