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

// Org.BouncyCastle.Asn1.LazyDerSequence
struct LazyDerSequence_t4187101828;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.LazyDerSequence::.ctor(System.Byte[])
extern "C"  void LazyDerSequence__ctor_m711329151 (LazyDerSequence_t4187101828 * __this, ByteU5BU5D_t3397334013* ___encoded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LazyDerSequence::Parse()
extern "C"  void LazyDerSequence_Parse_m1581495549 (LazyDerSequence_t4187101828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.LazyDerSequence::get_Item(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * LazyDerSequence_get_Item_m737655939 (LazyDerSequence_t4187101828 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.LazyDerSequence::GetEnumerator()
extern "C"  Il2CppObject * LazyDerSequence_GetEnumerator_m4264587658 (LazyDerSequence_t4187101828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.LazyDerSequence::get_Count()
extern "C"  int32_t LazyDerSequence_get_Count_m3622461594 (LazyDerSequence_t4187101828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LazyDerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void LazyDerSequence_Encode_m86213383 (LazyDerSequence_t4187101828 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
