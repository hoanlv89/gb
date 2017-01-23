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

// Org.BouncyCastle.Asn1.DerSequence
struct DerSequence_t4250014174;
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

// System.Void Org.BouncyCastle.Asn1.DerSequence::.ctor()
extern "C"  void DerSequence__ctor_m3930148730 (DerSequence_t4250014174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerSequence__ctor_m648402747 (DerSequence_t4250014174 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable[])
extern "C"  void DerSequence__ctor_m2127096141 (DerSequence_t4250014174 * __this, Asn1EncodableU5BU5D_t3298833963* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  void DerSequence__ctor_m940367542 (DerSequence_t4250014174 * __this, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSequence Org.BouncyCastle.Asn1.DerSequence::FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  DerSequence_t4250014174 * DerSequence_FromVector_m3581375947 (Il2CppObject * __this /* static, unused */, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void DerSequence_Encode_m3018243289 (DerSequence_t4250014174 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSequence::.cctor()
extern "C"  void DerSequence__cctor_m2021790009 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
