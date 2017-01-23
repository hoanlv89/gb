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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_i621885505.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket
struct  PlayerQueryResponsePacket_t2710638996  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::pid
	int32_t ___pid_1;
	// System.String com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::nick
	String_t* ___nick_2;
	// com.cubeia.firebase.io.protocol.Enums/ResponseStatus com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::status
	int32_t ___status_3;
	// System.Byte[] com.cubeia.firebase.io.protocol.PlayerQueryResponsePacket::data
	ByteU5BU5D_t3397334013* ___data_4;

public:
	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(PlayerQueryResponsePacket_t2710638996, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}

	inline static int32_t get_offset_of_nick_2() { return static_cast<int32_t>(offsetof(PlayerQueryResponsePacket_t2710638996, ___nick_2)); }
	inline String_t* get_nick_2() const { return ___nick_2; }
	inline String_t** get_address_of_nick_2() { return &___nick_2; }
	inline void set_nick_2(String_t* value)
	{
		___nick_2 = value;
		Il2CppCodeGenWriteBarrier(&___nick_2, value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(PlayerQueryResponsePacket_t2710638996, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(PlayerQueryResponsePacket_t2710638996, ___data_4)); }
	inline ByteU5BU5D_t3397334013* get_data_4() const { return ___data_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(ByteU5BU5D_t3397334013* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
