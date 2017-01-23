#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket
struct  InvitePlayersRequestPacket_t3642695242  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::tableid
	int32_t ___tableid_1;
	// System.Int32[] com.cubeia.firebase.io.protocol.InvitePlayersRequestPacket::invitees
	Int32U5BU5D_t3030399641* ___invitees_2;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(InvitePlayersRequestPacket_t3642695242, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_invitees_2() { return static_cast<int32_t>(offsetof(InvitePlayersRequestPacket_t3642695242, ___invitees_2)); }
	inline Int32U5BU5D_t3030399641* get_invitees_2() const { return ___invitees_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_invitees_2() { return &___invitees_2; }
	inline void set_invitees_2(Int32U5BU5D_t3030399641* value)
	{
		___invitees_2 = value;
		Il2CppCodeGenWriteBarrier(&___invitees_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
