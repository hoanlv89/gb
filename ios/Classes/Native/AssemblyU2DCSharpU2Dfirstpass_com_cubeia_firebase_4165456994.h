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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TournamentUpdatePacket
struct  TournamentUpdatePacket_t4165456994  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TournamentUpdatePacket::mttid
	int32_t ___mttid_1;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.TournamentUpdatePacket::parameters
	List_1_t890982683 * ___parameters_2;
	// System.String[] com.cubeia.firebase.io.protocol.TournamentUpdatePacket::removedParams
	StringU5BU5D_t1642385972* ___removedParams_3;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(TournamentUpdatePacket_t4165456994, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(TournamentUpdatePacket_t4165456994, ___parameters_2)); }
	inline List_1_t890982683 * get_parameters_2() const { return ___parameters_2; }
	inline List_1_t890982683 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(List_1_t890982683 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_2, value);
	}

	inline static int32_t get_offset_of_removedParams_3() { return static_cast<int32_t>(offsetof(TournamentUpdatePacket_t4165456994, ___removedParams_3)); }
	inline StringU5BU5D_t1642385972* get_removedParams_3() const { return ___removedParams_3; }
	inline StringU5BU5D_t1642385972** get_address_of_removedParams_3() { return &___removedParams_3; }
	inline void set_removedParams_3(StringU5BU5D_t1642385972* value)
	{
		___removedParams_3 = value;
		Il2CppCodeGenWriteBarrier(&___removedParams_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
