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

// Org.BouncyCastle.Asn1.DerSet
struct DerSet_t2720781401;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Encodable[]
struct Asn1EncodableU5BU5D_t3298833963;
// Org.BouncyCastle.Asn1.Asn1EncodableVector
struct Asn1EncodableVector_t3471733113;
// Org.BouncyCastle.Asn1.DerOutputStream
struct DerOutputStream_t2807883870;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3471733113.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerOutputS2807883870.h"

// System.Void Org.BouncyCastle.Asn1.DerSet::.ctor()
extern "C"  void DerSet__ctor_m312792215 (DerSet_t2720781401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerSet__ctor_m3292494754 (DerSet_t2720781401 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable[])
extern "C"  void DerSet__ctor_m243727846 (DerSet_t2720781401 * __this, Asn1EncodableU5BU5D_t3298833963* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  void DerSet__ctor_m1394999219 (DerSet_t2720781401 * __this, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector,System.Boolean)
extern "C"  void DerSet__ctor_m2090059438 (DerSet_t2720781401 * __this, Asn1EncodableVector_t3471733113 * ___v0, bool ___needsSorting1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSet Org.BouncyCastle.Asn1.DerSet::FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  DerSet_t2720781401 * DerSet_FromVector_m1380949851 (Il2CppObject * __this /* static, unused */, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSet Org.BouncyCastle.Asn1.DerSet::FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector,System.Boolean)
extern "C"  DerSet_t2720781401 * DerSet_FromVector_m2394255680 (Il2CppObject * __this /* static, unused */, Asn1EncodableVector_t3471733113 * ___v0, bool ___needsSorting1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerSet_Encode_m2982515178 (DerSet_t2720781401 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSet::.cctor()
extern "C"  void DerSet__cctor_m2153917624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
