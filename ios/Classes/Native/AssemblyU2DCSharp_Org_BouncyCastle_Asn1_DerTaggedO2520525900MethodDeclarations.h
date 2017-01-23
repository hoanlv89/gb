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

// Org.BouncyCastle.Asn1.DerTaggedObject
struct DerTaggedObject_t2520525900;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.DerTaggedObject::.ctor(System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerTaggedObject__ctor_m3844917594 (DerTaggedObject_t2520525900 * __this, int32_t ___tagNo0, Asn1Encodable_t3447851422 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerTaggedObject::.ctor(System.Boolean,System.Int32,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerTaggedObject__ctor_m2265064843 (DerTaggedObject_t2520525900 * __this, bool ___explicitly0, int32_t ___tagNo1, Asn1Encodable_t3447851422 * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerTaggedObject::.ctor(System.Int32)
extern "C"  void DerTaggedObject__ctor_m2484426337 (DerTaggedObject_t2520525900 * __this, int32_t ___tagNo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerTaggedObject::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerTaggedObject_Encode_m2002171095 (DerTaggedObject_t2520525900 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
