#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TournamentSnapshotPacket
struct  TournamentSnapshotPacket_t4244198047  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::mttid
	int32_t ___mttid_1;
	// System.String com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::address
	String_t* ___address_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.TournamentSnapshotPacket::parameters
	List_1_t890982683 * ___parameters_3;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(TournamentSnapshotPacket_t4244198047, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(TournamentSnapshotPacket_t4244198047, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier(&___address_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(TournamentSnapshotPacket_t4244198047, ___parameters_3)); }
	inline List_1_t890982683 * get_parameters_3() const { return ___parameters_3; }
	inline List_1_t890982683 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(List_1_t890982683 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
