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

// Spine.AnimationState/TrackEntryDelegate
struct TrackEntryDelegate_t737668607;
// System.Object
struct Il2CppObject;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Spine.AnimationState/TrackEntryDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void TrackEntryDelegate__ctor_m940403838 (TrackEntryDelegate_t737668607 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/TrackEntryDelegate::Invoke(Spine.TrackEntry)
extern "C"  void TrackEntryDelegate_Invoke_m3627656250 (TrackEntryDelegate_t737668607 * __this, TrackEntry_t4106063311 * ___trackEntry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Spine.AnimationState/TrackEntryDelegate::BeginInvoke(Spine.TrackEntry,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TrackEntryDelegate_BeginInvoke_m2063160605 (TrackEntryDelegate_t737668607 * __this, TrackEntry_t4106063311 * ___trackEntry0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.AnimationState/TrackEntryDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void TrackEntryDelegate_EndInvoke_m1505202048 (TrackEntryDelegate_t737668607 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
