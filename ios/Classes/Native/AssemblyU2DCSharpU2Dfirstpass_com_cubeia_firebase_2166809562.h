#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.SystemInfoResponsePacket
struct  SystemInfoResponsePacket_t2166809562  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::players
	int32_t ___players_1;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.SystemInfoResponsePacket::parameters
	List_1_t890982683 * ___parameters_2;

public:
	inline static int32_t get_offset_of_players_1() { return static_cast<int32_t>(offsetof(SystemInfoResponsePacket_t2166809562, ___players_1)); }
	inline int32_t get_players_1() const { return ___players_1; }
	inline int32_t* get_address_of_players_1() { return &___players_1; }
	inline void set_players_1(int32_t value)
	{
		___players_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(SystemInfoResponsePacket_t2166809562, ___parameters_2)); }
	inline List_1_t890982683 * get_parameters_2() const { return ___parameters_2; }
	inline List_1_t890982683 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(List_1_t890982683 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
