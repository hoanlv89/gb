#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OperatorGame
struct  OperatorGame_t4100832846  : public Il2CppObject
{
public:

public:
};

struct OperatorGame_t4100832846_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> OperatorGame::games
	List_1_t1440998580 * ___games_0;
	// System.Collections.Generic.List`1<System.Int32> OperatorGame::disableGames
	List_1_t1440998580 * ___disableGames_1;
	// System.String OperatorGame::disablesgamesbyuser
	String_t* ___disablesgamesbyuser_2;

public:
	inline static int32_t get_offset_of_games_0() { return static_cast<int32_t>(offsetof(OperatorGame_t4100832846_StaticFields, ___games_0)); }
	inline List_1_t1440998580 * get_games_0() const { return ___games_0; }
	inline List_1_t1440998580 ** get_address_of_games_0() { return &___games_0; }
	inline void set_games_0(List_1_t1440998580 * value)
	{
		___games_0 = value;
		Il2CppCodeGenWriteBarrier(&___games_0, value);
	}

	inline static int32_t get_offset_of_disableGames_1() { return static_cast<int32_t>(offsetof(OperatorGame_t4100832846_StaticFields, ___disableGames_1)); }
	inline List_1_t1440998580 * get_disableGames_1() const { return ___disableGames_1; }
	inline List_1_t1440998580 ** get_address_of_disableGames_1() { return &___disableGames_1; }
	inline void set_disableGames_1(List_1_t1440998580 * value)
	{
		___disableGames_1 = value;
		Il2CppCodeGenWriteBarrier(&___disableGames_1, value);
	}

	inline static int32_t get_offset_of_disablesgamesbyuser_2() { return static_cast<int32_t>(offsetof(OperatorGame_t4100832846_StaticFields, ___disablesgamesbyuser_2)); }
	inline String_t* get_disablesgamesbyuser_2() const { return ___disablesgamesbyuser_2; }
	inline String_t** get_address_of_disablesgamesbyuser_2() { return &___disablesgamesbyuser_2; }
	inline void set_disablesgamesbyuser_2(String_t* value)
	{
		___disablesgamesbyuser_2 = value;
		Il2CppCodeGenWriteBarrier(&___disablesgamesbyuser_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
