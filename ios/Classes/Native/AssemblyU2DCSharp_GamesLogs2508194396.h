#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GameLogs>
struct List_1_t3650727243;
// GameLogs
struct GameLogs_t4281606111;
// Utils/ExeOneStringParam
struct ExeOneStringParam_t2750684624;
// Utils/Executor
struct Executor_t2576254565;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamesLogs
struct  GamesLogs_t2508194396  : public Il2CppObject
{
public:

public:
};

struct GamesLogs_t2508194396_StaticFields
{
public:
	// System.Collections.Generic.List`1<GameLogs> GamesLogs::gameslogs
	List_1_t3650727243 * ___gameslogs_0;
	// GameLogs GamesLogs::currentGame
	GameLogs_t4281606111 * ___currentGame_1;
	// System.Boolean GamesLogs::IN_REPLAY_MODE
	bool ___IN_REPLAY_MODE_2;
	// Utils/ExeOneStringParam GamesLogs::<>f__am$cache0
	ExeOneStringParam_t2750684624 * ___U3CU3Ef__amU24cache0_3;
	// Utils/Executor GamesLogs::<>f__am$cache1
	Executor_t2576254565 * ___U3CU3Ef__amU24cache1_4;

public:
	inline static int32_t get_offset_of_gameslogs_0() { return static_cast<int32_t>(offsetof(GamesLogs_t2508194396_StaticFields, ___gameslogs_0)); }
	inline List_1_t3650727243 * get_gameslogs_0() const { return ___gameslogs_0; }
	inline List_1_t3650727243 ** get_address_of_gameslogs_0() { return &___gameslogs_0; }
	inline void set_gameslogs_0(List_1_t3650727243 * value)
	{
		___gameslogs_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameslogs_0, value);
	}

	inline static int32_t get_offset_of_currentGame_1() { return static_cast<int32_t>(offsetof(GamesLogs_t2508194396_StaticFields, ___currentGame_1)); }
	inline GameLogs_t4281606111 * get_currentGame_1() const { return ___currentGame_1; }
	inline GameLogs_t4281606111 ** get_address_of_currentGame_1() { return &___currentGame_1; }
	inline void set_currentGame_1(GameLogs_t4281606111 * value)
	{
		___currentGame_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentGame_1, value);
	}

	inline static int32_t get_offset_of_IN_REPLAY_MODE_2() { return static_cast<int32_t>(offsetof(GamesLogs_t2508194396_StaticFields, ___IN_REPLAY_MODE_2)); }
	inline bool get_IN_REPLAY_MODE_2() const { return ___IN_REPLAY_MODE_2; }
	inline bool* get_address_of_IN_REPLAY_MODE_2() { return &___IN_REPLAY_MODE_2; }
	inline void set_IN_REPLAY_MODE_2(bool value)
	{
		___IN_REPLAY_MODE_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(GamesLogs_t2508194396_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline ExeOneStringParam_t2750684624 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline ExeOneStringParam_t2750684624 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(ExeOneStringParam_t2750684624 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_4() { return static_cast<int32_t>(offsetof(GamesLogs_t2508194396_StaticFields, ___U3CU3Ef__amU24cache1_4)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache1_4() const { return ___U3CU3Ef__amU24cache1_4; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache1_4() { return &___U3CU3Ef__amU24cache1_4; }
	inline void set_U3CU3Ef__amU24cache1_4(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
