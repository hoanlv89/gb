#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_DeviceGUID
struct  ISN_DeviceGUID_t1787531836  : public Il2CppObject
{
public:
	// System.Byte[] ISN_DeviceGUID::_Bytes
	ByteU5BU5D_t3397334013* ____Bytes_0;
	// System.String ISN_DeviceGUID::_Base64
	String_t* ____Base64_1;

public:
	inline static int32_t get_offset_of__Bytes_0() { return static_cast<int32_t>(offsetof(ISN_DeviceGUID_t1787531836, ____Bytes_0)); }
	inline ByteU5BU5D_t3397334013* get__Bytes_0() const { return ____Bytes_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__Bytes_0() { return &____Bytes_0; }
	inline void set__Bytes_0(ByteU5BU5D_t3397334013* value)
	{
		____Bytes_0 = value;
		Il2CppCodeGenWriteBarrier(&____Bytes_0, value);
	}

	inline static int32_t get_offset_of__Base64_1() { return static_cast<int32_t>(offsetof(ISN_DeviceGUID_t1787531836, ____Base64_1)); }
	inline String_t* get__Base64_1() const { return ____Base64_1; }
	inline String_t** get_address_of__Base64_1() { return &____Base64_1; }
	inline void set__Base64_1(String_t* value)
	{
		____Base64_1 = value;
		Il2CppCodeGenWriteBarrier(&____Base64_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
