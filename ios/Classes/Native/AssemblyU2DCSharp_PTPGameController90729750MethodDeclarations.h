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

// PTPGameController
struct PTPGameController_t90729750;
// ISN_Result
struct ISN_Result_t2775631610;
// GK_Player
struct GK_Player_t2782008294;
// GK_RTM_Match
struct GK_RTM_Match_t873568990;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t833698690;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState2434478783.h"
#include "AssemblyU2DCSharp_GK_RTM_Match873568990.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult833698690.h"

// System.Void PTPGameController::.ctor()
extern "C"  void PTPGameController__ctor_m343077761 (PTPGameController_t90729750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::Awake()
extern "C"  void PTPGameController_Awake_m1300759698 (PTPGameController_t90729750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::createRedSphere(UnityEngine.Vector3)
extern "C"  void PTPGameController_createRedSphere_m214670444 (PTPGameController_t90729750 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::createGreenSphere(UnityEngine.Vector3)
extern "C"  void PTPGameController_createGreenSphere_m1563504156 (PTPGameController_t90729750 * __this, Vector3_t2243707580  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::OnAuthFinished(ISN_Result)
extern "C"  void PTPGameController_OnAuthFinished_m170100434 (PTPGameController_t90729750 * __this, ISN_Result_t2775631610 * ___res0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::HandleActionPlayerStateChanged(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void PTPGameController_HandleActionPlayerStateChanged_m874558872 (PTPGameController_t90729750 * __this, GK_Player_t2782008294 * ___player0, int32_t ___state1, GK_RTM_Match_t873568990 * ___macth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void PTPGameController_HandleActionMatchStarted_m538375939 (PTPGameController_t90729750 * __this, GK_RTM_MatchStartedResult_t833698690 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::CheckMatchState(GK_RTM_Match)
extern "C"  void PTPGameController_CheckMatchState_m3499570167 (PTPGameController_t90729750 * __this, GK_RTM_Match_t873568990 * ___macth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::cleanUpScene()
extern "C"  void PTPGameController_cleanUpScene_m1893806963 (PTPGameController_t90729750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
