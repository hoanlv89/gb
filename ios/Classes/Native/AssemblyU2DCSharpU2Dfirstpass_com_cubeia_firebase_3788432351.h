#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.SeatInfoPacket>
struct List_1_t134654621;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TableQueryResponsePacket
struct  TableQueryResponsePacket_t3788432351  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TableQueryResponsePacket::tableid
	int32_t ___tableid_1;
	// com.cubeia.firebase.io.protocol.Enums/ResponseStatus com.cubeia.firebase.io.protocol.TableQueryResponsePacket::status
	int32_t ___status_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.SeatInfoPacket> com.cubeia.firebase.io.protocol.TableQueryResponsePacket::seats
	List_1_t134654621 * ___seats_3;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(TableQueryResponsePacket_t3788432351, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(TableQueryResponsePacket_t3788432351, ___status_2)); }
	inline int32_t get_status_2() const { return ___status_2; }
	inline int32_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(int32_t value)
	{
		___status_2 = value;
	}

	inline static int32_t get_offset_of_seats_3() { return static_cast<int32_t>(offsetof(TableQueryResponsePacket_t3788432351, ___seats_3)); }
	inline List_1_t134654621 * get_seats_3() const { return ___seats_3; }
	inline List_1_t134654621 ** get_address_of_seats_3() { return &___seats_3; }
	inline void set_seats_3(List_1_t134654621 * value)
	{
		___seats_3 = value;
		Il2CppCodeGenWriteBarrier(&___seats_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
