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

// Ball
struct Ball_t3972794301;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1073530660 (Ball_t3972794301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Start()
extern "C"  void Ball_Start_m2511773116 (Ball_t3972794301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Update()
extern "C"  void Ball_Update_m2036524005 (Ball_t3972794301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::spin(System.Int32)
extern "C"  void Ball_spin_m352325873 (Ball_t3972794301 * __this, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Ball::PlaySound(System.Single,System.String,System.Single)
extern "C"  Il2CppObject * Ball_PlaySound_m1147526979 (Ball_t3972794301 * __this, float ___t0, String_t* ___n1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::complete()
extern "C"  void Ball_complete_m3085541749 (Ball_t3972794301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip Ball::findSound(System.String)
extern "C"  AudioClip_t1932558630 * Ball_findSound_m1353322402 (Ball_t3972794301 * __this, String_t* ___sname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
