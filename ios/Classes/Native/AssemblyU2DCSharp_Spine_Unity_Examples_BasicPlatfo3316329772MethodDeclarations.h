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

// Spine.Unity.Examples.BasicPlatformerController
struct BasicPlatformerController_t3316329772;
// Spine.TrackEntry
struct TrackEntry_t4106063311;
// Spine.Event
struct Event_t1819867114;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Spine_TrackEntry4106063311.h"
#include "AssemblyU2DCSharp_Spine_Event1819867114.h"

// System.Void Spine.Unity.Examples.BasicPlatformerController::.ctor()
extern "C"  void BasicPlatformerController__ctor_m682552624 (BasicPlatformerController_t3316329772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Examples.BasicPlatformerController::Awake()
extern "C"  void BasicPlatformerController_Awake_m2567496267 (BasicPlatformerController_t3316329772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Examples.BasicPlatformerController::Start()
extern "C"  void BasicPlatformerController_Start_m962968188 (BasicPlatformerController_t3316329772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Examples.BasicPlatformerController::HandleEvent(Spine.TrackEntry,Spine.Event)
extern "C"  void BasicPlatformerController_HandleEvent_m2978564727 (BasicPlatformerController_t3316329772 * __this, TrackEntry_t4106063311 * ___trackEntry0, Event_t1819867114 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spine.Unity.Examples.BasicPlatformerController::Update()
extern "C"  void BasicPlatformerController_Update_m2789617967 (BasicPlatformerController_t3316329772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spine.Unity.Examples.BasicPlatformerController::GetRandomPitch(System.Single)
extern "C"  float BasicPlatformerController_GetRandomPitch_m2047357088 (Il2CppObject * __this /* static, unused */, float ___maxOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
