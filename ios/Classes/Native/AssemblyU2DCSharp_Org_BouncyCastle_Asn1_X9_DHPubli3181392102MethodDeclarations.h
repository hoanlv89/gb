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

// Org.BouncyCastle.Asn1.X9.DHPublicKey
struct DHPublicKey_t3181392102;
// Org.BouncyCastle.Asn1.DerInteger
struct DerInteger_t967720487;
// Org.BouncyCastle.Asn1.Asn1TaggedObject
struct Asn1TaggedObject_t990853098;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerInteger967720487.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1TaggedO990853098.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Asn1.X9.DHPublicKey::.ctor(Org.BouncyCastle.Asn1.DerInteger)
extern "C"  void DHPublicKey__ctor_m3995787607 (DHPublicKey_t3181392102 * __this, DerInteger_t967720487 * ___y0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHPublicKey Org.BouncyCastle.Asn1.X9.DHPublicKey::GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject,System.Boolean)
extern "C"  DHPublicKey_t3181392102 * DHPublicKey_GetInstance_m2705573209 (Il2CppObject * __this /* static, unused */, Asn1TaggedObject_t990853098 * ___obj0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.X9.DHPublicKey Org.BouncyCastle.Asn1.X9.DHPublicKey::GetInstance(System.Object)
extern "C"  DHPublicKey_t3181392102 * DHPublicKey_GetInstance_m639704349 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerInteger Org.BouncyCastle.Asn1.X9.DHPublicKey::get_Y()
extern "C"  DerInteger_t967720487 * DHPublicKey_get_Y_m1734696588 (DHPublicKey_t3181392102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.DHPublicKey::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * DHPublicKey_ToAsn1Object_m1635135434 (DHPublicKey_t3181392102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
