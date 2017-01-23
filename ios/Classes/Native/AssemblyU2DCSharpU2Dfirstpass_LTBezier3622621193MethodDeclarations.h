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

// LTBezier
struct LTBezier_t3622621193;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void LTBezier::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void LTBezier__ctor_m2784158903 (LTBezier_t3622621193 * __this, Vector3_t2243707580  ___a0, Vector3_t2243707580  ___b1, Vector3_t2243707580  ___c2, Vector3_t2243707580  ___d3, float ___precision4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LTBezier::map(System.Single)
extern "C"  float LTBezier_map_m3177523869 (LTBezier_t3622621193 * __this, float ___u0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezier::bezierPoint(System.Single)
extern "C"  Vector3_t2243707580  LTBezier_bezierPoint_m949812034 (LTBezier_t3622621193 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezier::point(System.Single)
extern "C"  Vector3_t2243707580  LTBezier_point_m3991867989 (LTBezier_t3622621193 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
