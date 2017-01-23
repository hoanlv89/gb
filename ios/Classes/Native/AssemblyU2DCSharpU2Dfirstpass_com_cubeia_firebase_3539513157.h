#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.CreateTableResponsePacket
struct  CreateTableResponsePacket_t3539513157  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.CreateTableResponsePacket::seq
	int32_t ___seq_1;
	// System.Int32 com.cubeia.firebase.io.protocol.CreateTableResponsePacket::tableid
	int32_t ___tableid_2;
	// System.Byte com.cubeia.firebase.io.protocol.CreateTableResponsePacket::seat
	uint8_t ___seat_3;
	// com.cubeia.firebase.io.protocol.Enums/ResponseStatus com.cubeia.firebase.io.protocol.CreateTableResponsePacket::status
	int32_t ___status_4;
	// System.Int32 com.cubeia.firebase.io.protocol.CreateTableResponsePacket::code
	int32_t ___code_5;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(CreateTableResponsePacket_t3539513157, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_tableid_2() { return static_cast<int32_t>(offsetof(CreateTableResponsePacket_t3539513157, ___tableid_2)); }
	inline int32_t get_tableid_2() const { return ___tableid_2; }
	inline int32_t* get_address_of_tableid_2() { return &___tableid_2; }
	inline void set_tableid_2(int32_t value)
	{
		___tableid_2 = value;
	}

	inline static int32_t get_offset_of_seat_3() { return static_cast<int32_t>(offsetof(CreateTableResponsePacket_t3539513157, ___seat_3)); }
	inline uint8_t get_seat_3() const { return ___seat_3; }
	inline uint8_t* get_address_of_seat_3() { return &___seat_3; }
	inline void set_seat_3(uint8_t value)
	{
		___seat_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(CreateTableResponsePacket_t3539513157, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}

	inline static int32_t get_offset_of_code_5() { return static_cast<int32_t>(offsetof(CreateTableResponsePacket_t3539513157, ___code_5)); }
	inline int32_t get_code_5() const { return ___code_5; }
	inline int32_t* get_address_of_code_5() { return &___code_5; }
	inline void set_code_5(int32_t value)
	{
		___code_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
