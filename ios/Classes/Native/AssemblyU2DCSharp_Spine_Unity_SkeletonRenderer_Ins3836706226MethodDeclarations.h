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

// Spine.Unity.SkeletonRenderer/InstructionDelegate
struct InstructionDelegate_t3836706226;
// System.Object
struct Il2CppObject;
// Spine.Unity.SkeletonRenderer/SmartMesh/Instruction
struct Instruction_t3058234646;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Spine_Unity_SkeletonRenderer_Sma3058234646.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InstructionDelegate__ctor_m3265084185 (InstructionDelegate_t3836706226 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::Invoke(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction)
extern "C"  void InstructionDelegate_Invoke_m1344951129 (InstructionDelegate_t3836706226 * __this, Instruction_t3058234646 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.Unity.SkeletonRenderer/InstructionDelegate::BeginInvoke(Spine.Unity.SkeletonRenderer/SmartMesh/Instruction,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InstructionDelegate_BeginInvoke_m1280939652 (InstructionDelegate_t3836706226 * __this, Instruction_t3058234646 * ___instruction0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.SkeletonRenderer/InstructionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InstructionDelegate_EndInvoke_m2636012231 (InstructionDelegate_t3836706226 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
