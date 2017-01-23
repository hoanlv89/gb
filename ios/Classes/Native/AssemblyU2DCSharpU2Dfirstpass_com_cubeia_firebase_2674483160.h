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

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_3765944700.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket
struct  FilteredJoinTableResponsePacket_t2674483160  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::seq
	int32_t ___seq_1;
	// System.Int32 com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::gameid
	int32_t ___gameid_2;
	// System.String com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::address
	String_t* ___address_3;
	// com.cubeia.firebase.io.protocol.Enums/FilteredJoinResponseStatus com.cubeia.firebase.io.protocol.FilteredJoinTableResponsePacket::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(FilteredJoinTableResponsePacket_t2674483160, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_gameid_2() { return static_cast<int32_t>(offsetof(FilteredJoinTableResponsePacket_t2674483160, ___gameid_2)); }
	inline int32_t get_gameid_2() const { return ___gameid_2; }
	inline int32_t* get_address_of_gameid_2() { return &___gameid_2; }
	inline void set_gameid_2(int32_t value)
	{
		___gameid_2 = value;
	}

	inline static int32_t get_offset_of_address_3() { return static_cast<int32_t>(offsetof(FilteredJoinTableResponsePacket_t2674483160, ___address_3)); }
	inline String_t* get_address_3() const { return ___address_3; }
	inline String_t** get_address_of_address_3() { return &___address_3; }
	inline void set_address_3(String_t* value)
	{
		___address_3 = value;
		Il2CppCodeGenWriteBarrier(&___address_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(FilteredJoinTableResponsePacket_t2674483160, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
