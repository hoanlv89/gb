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

// LTBezierPath
struct LTBezierPath_t292484408;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void LTBezierPath::.ctor()
extern "C"  void LTBezierPath__ctor_m2496095695 (LTBezierPath_t292484408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::.ctor(UnityEngine.Vector3[])
extern "C"  void LTBezierPath__ctor_m1734542934 (LTBezierPath_t292484408 * __this, Vector3U5BU5D_t1172311765* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::setPoints(UnityEngine.Vector3[])
extern "C"  void LTBezierPath_setPoints_m3657560829 (LTBezierPath_t292484408 * __this, Vector3U5BU5D_t1172311765* ___pts_0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTBezierPath::point(System.Single)
extern "C"  Vector3_t2243707580  LTBezierPath_point_m683870598 (LTBezierPath_t292484408 * __this, float ___ratio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place2d_m3018838314 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal2d(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal2d_m2233932433 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_place_m2394429900 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::place(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_place_m1635474727 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single)
extern "C"  void LTBezierPath_placeLocal_m1028180751 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTBezierPath::placeLocal(UnityEngine.Transform,System.Single,UnityEngine.Vector3)
extern "C"  void LTBezierPath_placeLocal_m76283560 (LTBezierPath_t292484408 * __this, Transform_t3275118058 * ___transform0, float ___ratio1, Vector3_t2243707580  ___worldUp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
