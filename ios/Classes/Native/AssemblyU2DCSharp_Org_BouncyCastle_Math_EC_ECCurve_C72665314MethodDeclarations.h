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

// Org.BouncyCastle.Math.EC.ECCurve/Config
struct Config_t72665314;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
struct ECEndomorphism_t1643381691;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"

// System.Void Org.BouncyCastle.Math.EC.ECCurve/Config::.ctor(Org.BouncyCastle.Math.EC.ECCurve,System.Int32,Org.BouncyCastle.Math.EC.Endo.ECEndomorphism,Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier)
extern "C"  void Config__ctor_m2437507328 (Config_t72665314 * __this, ECCurve_t140895757 * ___outer0, int32_t ___coord1, Il2CppObject * ___endomorphism2, Il2CppObject * ___multiplier3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve/Config::SetCoordinateSystem(System.Int32)
extern "C"  Config_t72665314 * Config_SetCoordinateSystem_m3118402644 (Config_t72665314 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve/Config::SetEndomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism)
extern "C"  Config_t72665314 * Config_SetEndomorphism_m4242626048 (Config_t72665314 * __this, Il2CppObject * ___endomorphism0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve/Config::SetMultiplier(Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier)
extern "C"  Config_t72665314 * Config_SetMultiplier_m3080040657 (Config_t72665314 * __this, Il2CppObject * ___multiplier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECCurve/Config::Create()
extern "C"  ECCurve_t140895757 * Config_Create_m3388577169 (Config_t72665314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
