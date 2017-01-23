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

// Org.BouncyCastle.Asn1.Oiw.ElGamalParameter
struct ElGamalParameter_t1755000518;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"

// System.Void Org.BouncyCastle.Asn1.Oiw.ElGamalParameter::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void ElGamalParameter__ctor_m4106487687 (ElGamalParameter_t1755000518 * __this, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Oiw.ElGamalParameter::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void ElGamalParameter__ctor_m1798689960 (ElGamalParameter_t1755000518 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.Oiw.ElGamalParameter::get_P()
extern "C"  BigInteger_t4268922522 * ElGamalParameter_get_P_m1328192271 (ElGamalParameter_t1755000518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.Oiw.ElGamalParameter::get_G()
extern "C"  BigInteger_t4268922522 * ElGamalParameter_get_G_m4292604792 (ElGamalParameter_t1755000518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Oiw.ElGamalParameter::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * ElGamalParameter_ToAsn1Object_m3562280606 (ElGamalParameter_t1755000518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
