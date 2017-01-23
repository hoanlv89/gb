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

// Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
struct ECKeyGenerationParameters_t3475787761;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_t3495876513;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerObjectI3495876513.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ECKeyGenerationParameters__ctor_m1923273280 (ECKeyGenerationParameters_t3475787761 * __this, ECDomainParameters_t3939864474 * ___domainParameters0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ECKeyGenerationParameters__ctor_m2197851463 (ECKeyGenerationParameters_t3475787761 * __this, DerObjectIdentifier_t3495876513 * ___publicKeyParamSet0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::get_DomainParameters()
extern "C"  ECDomainParameters_t3939864474 * ECKeyGenerationParameters_get_DomainParameters_m603309022 (ECKeyGenerationParameters_t3475787761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters::get_PublicKeyParamSet()
extern "C"  DerObjectIdentifier_t3495876513 * ECKeyGenerationParameters_get_PublicKeyParamSet_m1076245474 (ECKeyGenerationParameters_t3475787761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
