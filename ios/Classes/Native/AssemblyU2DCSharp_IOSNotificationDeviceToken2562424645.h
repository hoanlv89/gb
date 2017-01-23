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

// IOSNotificationDeviceToken
struct  IOSNotificationDeviceToken_t2562424645  : public Il2CppObject
{
public:
	// System.String IOSNotificationDeviceToken::_tokenString
	String_t* ____tokenString_0;
	// System.Byte[] IOSNotificationDeviceToken::_tokenBytes
	ByteU5BU5D_t3397334013* ____tokenBytes_1;

public:
	inline static int32_t get_offset_of__tokenString_0() { return static_cast<int32_t>(offsetof(IOSNotificationDeviceToken_t2562424645, ____tokenString_0)); }
	inline String_t* get__tokenString_0() const { return ____tokenString_0; }
	inline String_t** get_address_of__tokenString_0() { return &____tokenString_0; }
	inline void set__tokenString_0(String_t* value)
	{
		____tokenString_0 = value;
		Il2CppCodeGenWriteBarrier(&____tokenString_0, value);
	}

	inline static int32_t get_offset_of__tokenBytes_1() { return static_cast<int32_t>(offsetof(IOSNotificationDeviceToken_t2562424645, ____tokenBytes_1)); }
	inline ByteU5BU5D_t3397334013* get__tokenBytes_1() const { return ____tokenBytes_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__tokenBytes_1() { return &____tokenBytes_1; }
	inline void set__tokenBytes_1(ByteU5BU5D_t3397334013* value)
	{
		____tokenBytes_1 = value;
		Il2CppCodeGenWriteBarrier(&____tokenBytes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
