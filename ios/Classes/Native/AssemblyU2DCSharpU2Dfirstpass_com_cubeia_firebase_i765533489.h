#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// com.cubeia.firebase.io.protocol.PlayerInfoPacket
struct PlayerInfoPacket_t1772682825;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_1267095325.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.SeatInfoPacket
struct  SeatInfoPacket_t765533489  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.SeatInfoPacket::tableid
	int32_t ___tableid_1;
	// System.Byte com.cubeia.firebase.io.protocol.SeatInfoPacket::seat
	uint8_t ___seat_2;
	// com.cubeia.firebase.io.protocol.Enums/PlayerStatus com.cubeia.firebase.io.protocol.SeatInfoPacket::status
	int32_t ___status_3;
	// com.cubeia.firebase.io.protocol.PlayerInfoPacket com.cubeia.firebase.io.protocol.SeatInfoPacket::player
	PlayerInfoPacket_t1772682825 * ___player_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(SeatInfoPacket_t765533489, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_seat_2() { return static_cast<int32_t>(offsetof(SeatInfoPacket_t765533489, ___seat_2)); }
	inline uint8_t get_seat_2() const { return ___seat_2; }
	inline uint8_t* get_address_of_seat_2() { return &___seat_2; }
	inline void set_seat_2(uint8_t value)
	{
		___seat_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(SeatInfoPacket_t765533489, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(SeatInfoPacket_t765533489, ___player_4)); }
	inline PlayerInfoPacket_t1772682825 * get_player_4() const { return ___player_4; }
	inline PlayerInfoPacket_t1772682825 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(PlayerInfoPacket_t1772682825 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
