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

// MultiplayerManagerExample
struct MultiplayerManagerExample_t3644649635;
// GK_Player
struct GK_Player_t2782008294;
// GK_RTM_Match
struct GK_RTM_Match_t873568990;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t833698690;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState2434478783.h"
#include "AssemblyU2DCSharp_GK_RTM_Match873568990.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult833698690.h"

// System.Void MultiplayerManagerExample::.ctor()
extern "C"  void MultiplayerManagerExample__ctor_m3204338062 (MultiplayerManagerExample_t3644649635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::Awake()
extern "C"  void MultiplayerManagerExample_Awake_m2842387583 (MultiplayerManagerExample_t3644649635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::OnGUI()
extern "C"  void MultiplayerManagerExample_OnGUI_m2613912074 (MultiplayerManagerExample_t3644649635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionPlayerStateChanged(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void MultiplayerManagerExample_HandleActionPlayerStateChanged_m1848323109 (MultiplayerManagerExample_t3644649635 * __this, GK_Player_t2782008294 * ___player0, int32_t ___state1, GK_RTM_Match_t873568990 * ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void MultiplayerManagerExample_HandleActionMatchStarted_m3378222634 (MultiplayerManagerExample_t3644649635 * __this, GK_RTM_MatchStartedResult_t833698690 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionDataReceived(GK_Player,System.Byte[])
extern "C"  void MultiplayerManagerExample_HandleActionDataReceived_m2342909832 (MultiplayerManagerExample_t3644649635 * __this, GK_Player_t2782008294 * ___player0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
