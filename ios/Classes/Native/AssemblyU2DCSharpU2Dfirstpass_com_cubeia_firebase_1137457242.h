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

// com.cubeia.firebase.io.protocol.LoginResponsePacket
struct  LoginResponsePacket_t1137457242  : public Il2CppObject
{
public:
	// System.String com.cubeia.firebase.io.protocol.LoginResponsePacket::screenname
	String_t* ___screenname_1;
	// System.Int32 com.cubeia.firebase.io.protocol.LoginResponsePacket::pid
	int32_t ___pid_2;
	// com.cubeia.firebase.io.protocol.Enums/ResponseStatus com.cubeia.firebase.io.protocol.LoginResponsePacket::status
	int32_t ___status_3;
	// System.Int32 com.cubeia.firebase.io.protocol.LoginResponsePacket::code
	int32_t ___code_4;
	// System.String com.cubeia.firebase.io.protocol.LoginResponsePacket::message
	String_t* ___message_5;
	// System.Byte[] com.cubeia.firebase.io.protocol.LoginResponsePacket::credentials
	ByteU5BU5D_t3397334013* ___credentials_6;

public:
	inline static int32_t get_offset_of_screenname_1() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___screenname_1)); }
	inline String_t* get_screenname_1() const { return ___screenname_1; }
	inline String_t** get_address_of_screenname_1() { return &___screenname_1; }
	inline void set_screenname_1(String_t* value)
	{
		___screenname_1 = value;
		Il2CppCodeGenWriteBarrier(&___screenname_1, value);
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}

	inline static int32_t get_offset_of_code_4() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___code_4)); }
	inline int32_t get_code_4() const { return ___code_4; }
	inline int32_t* get_address_of_code_4() { return &___code_4; }
	inline void set_code_4(int32_t value)
	{
		___code_4 = value;
	}

	inline static int32_t get_offset_of_message_5() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___message_5)); }
	inline String_t* get_message_5() const { return ___message_5; }
	inline String_t** get_address_of_message_5() { return &___message_5; }
	inline void set_message_5(String_t* value)
	{
		___message_5 = value;
		Il2CppCodeGenWriteBarrier(&___message_5, value);
	}

	inline static int32_t get_offset_of_credentials_6() { return static_cast<int32_t>(offsetof(LoginResponsePacket_t1137457242, ___credentials_6)); }
	inline ByteU5BU5D_t3397334013* get_credentials_6() const { return ___credentials_6; }
	inline ByteU5BU5D_t3397334013** get_address_of_credentials_6() { return &___credentials_6; }
	inline void set_credentials_6(ByteU5BU5D_t3397334013* value)
	{
		___credentials_6 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
