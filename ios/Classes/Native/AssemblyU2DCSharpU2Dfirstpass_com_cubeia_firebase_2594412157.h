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
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.CreateTableRequestPacket
struct  CreateTableRequestPacket_t2594412157  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.CreateTableRequestPacket::seq
	int32_t ___seq_1;
	// System.Int32 com.cubeia.firebase.io.protocol.CreateTableRequestPacket::gameid
	int32_t ___gameid_2;
	// System.Byte com.cubeia.firebase.io.protocol.CreateTableRequestPacket::seats
	uint8_t ___seats_3;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.CreateTableRequestPacket::parameters
	List_1_t890982683 * ___parameters_4;
	// System.Int32[] com.cubeia.firebase.io.protocol.CreateTableRequestPacket::invitees
	Int32U5BU5D_t3030399641* ___invitees_5;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(CreateTableRequestPacket_t2594412157, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_gameid_2() { return static_cast<int32_t>(offsetof(CreateTableRequestPacket_t2594412157, ___gameid_2)); }
	inline int32_t get_gameid_2() const { return ___gameid_2; }
	inline int32_t* get_address_of_gameid_2() { return &___gameid_2; }
	inline void set_gameid_2(int32_t value)
	{
		___gameid_2 = value;
	}

	inline static int32_t get_offset_of_seats_3() { return static_cast<int32_t>(offsetof(CreateTableRequestPacket_t2594412157, ___seats_3)); }
	inline uint8_t get_seats_3() const { return ___seats_3; }
	inline uint8_t* get_address_of_seats_3() { return &___seats_3; }
	inline void set_seats_3(uint8_t value)
	{
		___seats_3 = value;
	}

	inline static int32_t get_offset_of_parameters_4() { return static_cast<int32_t>(offsetof(CreateTableRequestPacket_t2594412157, ___parameters_4)); }
	inline List_1_t890982683 * get_parameters_4() const { return ___parameters_4; }
	inline List_1_t890982683 ** get_address_of_parameters_4() { return &___parameters_4; }
	inline void set_parameters_4(List_1_t890982683 * value)
	{
		___parameters_4 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_4, value);
	}

	inline static int32_t get_offset_of_invitees_5() { return static_cast<int32_t>(offsetof(CreateTableRequestPacket_t2594412157, ___invitees_5)); }
	inline Int32U5BU5D_t3030399641* get_invitees_5() const { return ___invitees_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_invitees_5() { return &___invitees_5; }
	inline void set_invitees_5(Int32U5BU5D_t3030399641* value)
	{
		___invitees_5 = value;
		Il2CppCodeGenWriteBarrier(&___invitees_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
