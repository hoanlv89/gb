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

// Org.BouncyCastle.Asn1.X9.DHDomainParameters
struct DHDomainParameters_t3489907266;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.X9.DHValidationParms
struct DHValidationParms_t4010119324;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_DHValid4010119324.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X9.DHDomainParameters::.ctor(Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.DerInteger,Org.BouncyCastle.Asn1.X9.DHValidationParms)
extern "C"  void DHDomainParameters__ctor_m2325840111 (DHDomainParameters_t3489907266 * __this, DerInteger_t967720487 * ___p0, DerInteger_t967720487 * ___g1, DerInteger_t967720487 * ___q2, DerInteger_t967720487 * ___j3, DHValidationParms_t4010119324 * ___validationParms4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.DHDomainParameters::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void DHDomainParameters__ctor_m1003234888 (DHDomainParameters_t3489907266 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHDomainParameters Org.BouncyCastle.Asn1.X9.DHDomainParameters::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DHDomainParameters_t3489907266 * DHDomainParameters_GetInstance_m199008921 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHDomainParameters Org.BouncyCastle.Asn1.X9.DHDomainParameters::GetInstance(System.Object)
extern "C"  DHDomainParameters_t3489907266 * DHDomainParameters_GetInstance_m2465937485 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Encodable Org.BouncyCastle.Asn1.X9.DHDomainParameters::GetNext(System.Collections.IEnumerator)
extern "C"  Asn1Encodable_t3447851422 * DHDomainParameters_GetNext_m2213319425 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHDomainParameters::get_P()
extern "C"  DerInteger_t967720487 * DHDomainParameters_get_P_m2782839781 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHDomainParameters::get_G()
extern "C"  DerInteger_t967720487 * DHDomainParameters_get_G_m2782839220 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHDomainParameters::get_Q()
extern "C"  DerInteger_t967720487 * DHDomainParameters_get_Q_m2782839814 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHDomainParameters::get_J()
extern "C"  DerInteger_t967720487 * DHDomainParameters_get_J_m2782839071 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHValidationParms Org.BouncyCastle.Asn1.X9.DHDomainParameters::get_ValidationParms()
extern "C"  DHValidationParms_t4010119324 * DHDomainParameters_get_ValidationParms_m504990171 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.DHDomainParameters::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DHDomainParameters_ToAsn1Object_m1072768046 (DHDomainParameters_t3489907266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
