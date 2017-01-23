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

// Org.BouncyCastle.Asn1.X9.DHValidationParms
struct DHValidationParms_t4010119324;
// Org.BouncyCastle.Asn1.DerBitString
struct DerBitString_t2717907355;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerBitStri2717907355.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X9.DHValidationParms::.ctor(Org.BouncyCastle.Asn1.DerBitString,Org.BouncyCastle.Asn1.DerInteger)
extern "C"  void DHValidationParms__ctor_m474879115 (DHValidationParms_t4010119324 * __this, DerBitString_t2717907355 * ___seed0, DerInteger_t967720487 * ___pgenCounter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.DHValidationParms::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void DHValidationParms__ctor_m3010984302 (DHValidationParms_t4010119324 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHValidationParms Org.BouncyCastle.Asn1.X9.DHValidationParms::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DHValidationParms_t4010119324 * DHValidationParms_GetInstance_m276711929 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHValidationParms Org.BouncyCastle.Asn1.X9.DHValidationParms::GetInstance(System.Object)
extern "C"  DHValidationParms_t4010119324 * DHValidationParms_GetInstance_m343142333 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerBitString Org.BouncyCastle.Asn1.X9.DHValidationParms::get_Seed()
extern "C"  DerBitString_t2717907355 * DHValidationParms_get_Seed_m1455455724 (DHValidationParms_t4010119324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHValidationParms::get_PgenCounter()
extern "C"  DerInteger_t967720487 * DHValidationParms_get_PgenCounter_m790228737 (DHValidationParms_t4010119324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.DHValidationParms::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DHValidationParms_ToAsn1Object_m1045585592 (DHValidationParms_t4010119324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
