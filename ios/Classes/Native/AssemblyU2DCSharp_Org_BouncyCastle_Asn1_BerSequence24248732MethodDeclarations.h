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

// Org.BouncyCastle.Asn1.BerSequence
struct BerSequence_t24248732;
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

// System.Void Org.BouncyCastle.Asn1.BerSequence::.ctor()
extern "C"  void BerSequence__ctor_m3755258036 (BerSequence_t24248732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void BerSequence__ctor_m2082783097 (BerSequence_t24248732 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable[])
extern "C"  void BerSequence__ctor_m2217003079 (BerSequence_t24248732 * __this, Asn1EncodableU5BU5D_t3298833963* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  void BerSequence__ctor_m65062448 (BerSequence_t24248732 * __this, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.BerSequence Org.BouncyCastle.Asn1.BerSequence::FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector)
extern "C"  BerSequence_t24248732 * BerSequence_FromVector_m1824781451 (Il2CppObject * __this /* static, unused */, Asn1EncodableVector_t3471733113 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream)
extern "C"  void BerSequence_Encode_m672904031 (BerSequence_t24248732 * __this, DerOutputStream_t2807883870 * ___derOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerSequence::.cctor()
extern "C"  void BerSequence__cctor_m545364403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
