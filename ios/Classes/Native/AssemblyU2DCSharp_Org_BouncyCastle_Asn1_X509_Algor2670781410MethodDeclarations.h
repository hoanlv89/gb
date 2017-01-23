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

// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
struct AlgorithmIdentifier_t2670781410;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void AlgorithmIdentifier__ctor_m3913178938 (AlgorithmIdentifier_t2670781410 * __this, DerObjectIdentifier_t3495876513 * ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::.ctor(System.String)
extern "C"  void AlgorithmIdentifier__ctor_m3042812548 (AlgorithmIdentifier_t2670781410 * __this, String_t* ___objectID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void AlgorithmIdentifier__ctor_m4057696801 (AlgorithmIdentifier_t2670781410 * __this, DerObjectIdentifier_t3495876513 * ___objectID0, Asn1Encodable_t3447851422 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void AlgorithmIdentifier__ctor_m1805933183 (AlgorithmIdentifier_t2670781410 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  AlgorithmIdentifier_t2670781410 * AlgorithmIdentifier_GetInstance_m1543466785 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___explicitly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::GetInstance(System.Object)
extern "C"  AlgorithmIdentifier_t2670781410 * AlgorithmIdentifier_GetInstance_m2237377005 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::get_ObjectID()
extern "C"  DerObjectIdentifier_t3495876513 * AlgorithmIdentifier_get_ObjectID_m1639025468 (AlgorithmIdentifier_t2670781410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::get_Parameters()
extern "C"  Asn1Encodable_t3447851422 * AlgorithmIdentifier_get_Parameters_m3516197297 (AlgorithmIdentifier_t2670781410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * AlgorithmIdentifier_ToAsn1Object_m3845249721 (AlgorithmIdentifier_t2670781410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
