#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// com.cubeia.firebase.io.protocol.Param
struct Param_t1521861551;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.ParamFilter
struct  ParamFilter_t4156718529  : public Il2CppObject
{
public:
	// com.cubeia.firebase.io.protocol.Param com.cubeia.firebase.io.protocol.ParamFilter::param
	Param_t1521861551 * ___param_1;
	// System.Byte com.cubeia.firebase.io.protocol.ParamFilter::op
	uint8_t ___op_2;

public:
	inline static int32_t get_offset_of_param_1() { return static_cast<int32_t>(offsetof(ParamFilter_t4156718529, ___param_1)); }
	inline Param_t1521861551 * get_param_1() const { return ___param_1; }
	inline Param_t1521861551 ** get_address_of_param_1() { return &___param_1; }
	inline void set_param_1(Param_t1521861551 * value)
	{
		___param_1 = value;
		Il2CppCodeGenWriteBarrier(&___param_1, value);
	}

	inline static int32_t get_offset_of_op_2() { return static_cast<int32_t>(offsetof(ParamFilter_t4156718529, ___op_2)); }
	inline uint8_t get_op_2() const { return ___op_2; }
	inline uint8_t* get_address_of_op_2() { return &___op_2; }
	inline void set_op_2(uint8_t value)
	{
		___op_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
