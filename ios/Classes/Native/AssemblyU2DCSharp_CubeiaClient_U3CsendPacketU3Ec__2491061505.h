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
// CubeiaClient
struct CubeiaClient_t2232589536;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeiaClient/<sendPacket>c__AnonStorey1
struct  U3CsendPacketU3Ec__AnonStorey1_t2491061505  : public Il2CppObject
{
public:
	// System.Byte[] CubeiaClient/<sendPacket>c__AnonStorey1::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// CubeiaClient CubeiaClient/<sendPacket>c__AnonStorey1::$this
	CubeiaClient_t2232589536 * ___U24this_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CsendPacketU3Ec__AnonStorey1_t2491061505, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CsendPacketU3Ec__AnonStorey1_t2491061505, ___U24this_1)); }
	inline CubeiaClient_t2232589536 * get_U24this_1() const { return ___U24this_1; }
	inline CubeiaClient_t2232589536 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(CubeiaClient_t2232589536 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
