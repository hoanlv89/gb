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

// SThread
struct SThread_t3352612211;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void SThread::.ctor(System.Action)
extern "C"  void SThread__ctor_m3716835795 (SThread_t3352612211 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SThread::ThreadFunction()
extern "C"  void SThread_ThreadFunction_m3070086554 (SThread_t3352612211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SThread::OnFinished()
extern "C"  void SThread_OnFinished_m3173021421 (SThread_t3352612211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SThread::.cctor()
extern "C"  void SThread__cctor_m1600326481 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
