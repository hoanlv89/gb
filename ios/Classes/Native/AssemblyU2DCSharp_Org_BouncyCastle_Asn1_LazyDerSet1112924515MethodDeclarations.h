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

// Org.BouncyCastle.Asn1.LazyDerSet
struct LazyDerSet_t1112924515;
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

// System.Void Org.BouncyCastle.Asn1.LazyDerSet::.ctor(System.Byte[])
extern "C"  void LazyDerSet__ctor_m1503449374 (LazyDerSet_t1112924515 * __this, ByteU5BU5D_t3397334013* ___encoded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LazyDerSet::Parse()
extern "C"  void LazyDerSet_Parse_m1886769368 (LazyDerSet_t1112924515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.LazyDerSet::get_Item(System.Int32)
extern "C"  Asn1Encodable_t3447851422 * LazyDerSet_get_Item_m1688794258 (LazyDerSet_t1112924515 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Org.BouncyCastle.Asn1.LazyDerSet::GetEnumerator()
extern "C"  Il2CppObject * LazyDerSet_GetEnumerator_m1990024177 (LazyDerSet_t1112924515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.LazyDerSet::get_Count()
extern "C"  int32_t LazyDerSet_get_Count_m1429551529 (LazyDerSet_t1112924515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LazyDerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void LazyDerSet_Encode_m505276456 (LazyDerSet_t1112924515 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
