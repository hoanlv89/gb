#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_2098153499.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.JoinResponsePacket
struct  JoinResponsePacket_t3194022675  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.JoinResponsePacket::tableid
	int32_t ___tableid_1;
	// System.Byte com.cubeia.firebase.io.protocol.JoinResponsePacket::seat
	uint8_t ___seat_2;
	// com.cubeia.firebase.io.protocol.Enums/JoinResponseStatus com.cubeia.firebase.io.protocol.JoinResponsePacket::status
	int32_t ___status_3;
	// System.Int32 com.cubeia.firebase.io.protocol.JoinResponsePacket::code
	int32_t ___code_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(JoinResponsePacket_t3194022675, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_seat_2() { return static_cast<int32_t>(offsetof(JoinResponsePacket_t3194022675, ___seat_2)); }
	inline uint8_t get_seat_2() const { return ___seat_2; }
	inline uint8_t* get_address_of_seat_2() { return &___seat_2; }
	inline void set_seat_2(uint8_t value)
	{
		___seat_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(JoinResponsePacket_t3194022675, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}

	inline static int32_t get_offset_of_code_4() { return static_cast<int32_t>(offsetof(JoinResponsePacket_t3194022675, ___code_4)); }
	inline int32_t get_code_4() const { return ___code_4; }
	inline int32_t* get_address_of_code_4() { return &___code_4; }
	inline void set_code_4(int32_t value)
	{
		___code_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
