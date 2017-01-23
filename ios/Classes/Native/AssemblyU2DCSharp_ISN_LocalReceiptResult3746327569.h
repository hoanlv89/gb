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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LocalReceiptResult
struct  ISN_LocalReceiptResult_t3746327569  : public Il2CppObject
{
public:
	// System.Byte[] ISN_LocalReceiptResult::_Receipt
	ByteU5BU5D_t3397334013* ____Receipt_0;

public:
	inline static int32_t get_offset_of__Receipt_0() { return static_cast<int32_t>(offsetof(ISN_LocalReceiptResult_t3746327569, ____Receipt_0)); }
	inline ByteU5BU5D_t3397334013* get__Receipt_0() const { return ____Receipt_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__Receipt_0() { return &____Receipt_0; }
	inline void set__Receipt_0(ByteU5BU5D_t3397334013* value)
	{
		____Receipt_0 = value;
		Il2CppCodeGenWriteBarrier(&____Receipt_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
