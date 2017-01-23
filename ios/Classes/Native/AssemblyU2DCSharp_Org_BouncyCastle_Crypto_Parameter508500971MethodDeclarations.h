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

// Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
struct DHKeyParameters_t508500971;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter508500971.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void DHKeyParameters__ctor_m1963926867 (DHKeyParameters_t508500971 * __this, bool ___isPrivate0, DHParameters_t431035336 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void DHKeyParameters__ctor_m2340869959 (DHKeyParameters_t508500971 * __this, bool ___isPrivate0, DHParameters_t431035336 * ___parameters1, DerObjectIdentifier_t3495876513 * ___algorithmOid2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::get_Parameters()
extern "C"  DHParameters_t431035336 * DHKeyParameters_get_Parameters_m421752060 (DHKeyParameters_t508500971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::get_AlgorithmOid()
extern "C"  DerObjectIdentifier_t3495876513 * DHKeyParameters_get_AlgorithmOid_m3677161716 (DHKeyParameters_t508500971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::Equals(System.Object)
extern "C"  bool DHKeyParameters_Equals_m462287762 (DHKeyParameters_t508500971 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DHKeyParameters)
extern "C"  bool DHKeyParameters_Equals_m3611765768 (DHKeyParameters_t508500971 * __this, DHKeyParameters_t508500971 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::GetHashCode()
extern "C"  int32_t DHKeyParameters_GetHashCode_m2654624334 (DHKeyParameters_t508500971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
