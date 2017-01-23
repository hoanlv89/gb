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

// Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
struct Gost3410KeyParameters_t1164823134;
// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
struct Gost3410Parameters_t602285121;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter602285121.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters)
extern "C"  void Gost3410KeyParameters__ctor_m657050751 (Gost3410KeyParameters_t1164823134 * __this, bool ___isPrivate0, Gost3410Parameters_t602285121 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::.ctor(System.Boolean,Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  void Gost3410KeyParameters__ctor_m2051435015 (Gost3410KeyParameters_t1164823134 * __this, bool ___isPrivate0, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::get_Parameters()
extern "C"  Gost3410Parameters_t602285121 * Gost3410KeyParameters_get_Parameters_m1842895996 (Gost3410KeyParameters_t1164823134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::get_PublicKeyParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * Gost3410KeyParameters_get_PublicKeyParamSet_m1537547445 (Gost3410KeyParameters_t1164823134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters::LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier)
extern "C"  Gost3410Parameters_t602285121 * Gost3410KeyParameters_LookupParameters_m3442864943 (Il2CppObject * __this /* static, unused */, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
