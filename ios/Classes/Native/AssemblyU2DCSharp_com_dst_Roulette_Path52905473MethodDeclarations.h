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

// com.dst.Roulette.Path
struct Path_t52905473;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"

// System.Void com.dst.Roulette.Path::.ctor(System.Single,System.Single,System.Int32,UnityEngine.Vector3[],System.String[])
extern "C"  void Path__ctor_m3884586224 (Path_t52905473 * __this, float ___wspeed0, float ___tspin1, int32_t ___retnumber2, Vector3U5BU5D_t1172311765* ___p3, StringU5BU5D_t1642385972* ___s4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single com.dst.Roulette.Path::get_WheelSpeed()
extern "C"  float Path_get_WheelSpeed_m2155267609 (Path_t52905473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single com.dst.Roulette.Path::get_timeSpin()
extern "C"  float Path_get_timeSpin_m846150158 (Path_t52905473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 com.dst.Roulette.Path::get_returnNumber()
extern "C"  int32_t Path_get_returnNumber_m3492853428 (Path_t52905473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] com.dst.Roulette.Path::get_points()
extern "C"  Vector3U5BU5D_t1172311765* Path_get_points_m588975784 (Path_t52905473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] com.dst.Roulette.Path::get_sounds()
extern "C"  StringU5BU5D_t1642385972* Path_get_sounds_m2141116030 (Path_t52905473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
