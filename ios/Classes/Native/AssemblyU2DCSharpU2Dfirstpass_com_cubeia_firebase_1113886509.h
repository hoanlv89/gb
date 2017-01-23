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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.ProbeStamp
struct  ProbeStamp_t1113886509  : public Il2CppObject
{
public:
	// System.String com.cubeia.firebase.io.protocol.ProbeStamp::clazz
	String_t* ___clazz_1;
	// System.Int64 com.cubeia.firebase.io.protocol.ProbeStamp::timestamp
	int64_t ___timestamp_2;

public:
	inline static int32_t get_offset_of_clazz_1() { return static_cast<int32_t>(offsetof(ProbeStamp_t1113886509, ___clazz_1)); }
	inline String_t* get_clazz_1() const { return ___clazz_1; }
	inline String_t** get_address_of_clazz_1() { return &___clazz_1; }
	inline void set_clazz_1(String_t* value)
	{
		___clazz_1 = value;
		Il2CppCodeGenWriteBarrier(&___clazz_1, value);
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(ProbeStamp_t1113886509, ___timestamp_2)); }
	inline int64_t get_timestamp_2() const { return ___timestamp_2; }
	inline int64_t* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(int64_t value)
	{
		___timestamp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
