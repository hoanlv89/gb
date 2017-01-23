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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.LoginRequestPacket
struct  LoginRequestPacket_t3197689240  : public Il2CppObject
{
public:
	// System.String com.cubeia.firebase.io.protocol.LoginRequestPacket::user
	String_t* ___user_1;
	// System.String com.cubeia.firebase.io.protocol.LoginRequestPacket::password
	String_t* ___password_2;
	// System.Int32 com.cubeia.firebase.io.protocol.LoginRequestPacket::operatorid
	int32_t ___operatorid_3;
	// System.Byte[] com.cubeia.firebase.io.protocol.LoginRequestPacket::credentials
	ByteU5BU5D_t3397334013* ___credentials_4;

public:
	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(LoginRequestPacket_t3197689240, ___user_1)); }
	inline String_t* get_user_1() const { return ___user_1; }
	inline String_t** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(String_t* value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_1, value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(LoginRequestPacket_t3197689240, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier(&___password_2, value);
	}

	inline static int32_t get_offset_of_operatorid_3() { return static_cast<int32_t>(offsetof(LoginRequestPacket_t3197689240, ___operatorid_3)); }
	inline int32_t get_operatorid_3() const { return ___operatorid_3; }
	inline int32_t* get_address_of_operatorid_3() { return &___operatorid_3; }
	inline void set_operatorid_3(int32_t value)
	{
		___operatorid_3 = value;
	}

	inline static int32_t get_offset_of_credentials_4() { return static_cast<int32_t>(offsetof(LoginRequestPacket_t3197689240, ___credentials_4)); }
	inline ByteU5BU5D_t3397334013* get_credentials_4() const { return ___credentials_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_credentials_4() { return &___credentials_4; }
	inline void set_credentials_4(ByteU5BU5D_t3397334013* value)
	{
		___credentials_4 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
