#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[0...,0...]
struct Int32U5BU2CU5D_t3030399642;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransMatrixPos
struct  TransMatrixPos_t685997475  : public Il2CppObject
{
public:
	// System.Int32 TransMatrixPos::soluong
	int32_t ___soluong_0;
	// System.Int32[0...,0...] TransMatrixPos::pos
	Int32U5BU2CU5D_t3030399642* ___pos_1;

public:
	inline static int32_t get_offset_of_soluong_0() { return static_cast<int32_t>(offsetof(TransMatrixPos_t685997475, ___soluong_0)); }
	inline int32_t get_soluong_0() const { return ___soluong_0; }
	inline int32_t* get_address_of_soluong_0() { return &___soluong_0; }
	inline void set_soluong_0(int32_t value)
	{
		___soluong_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(TransMatrixPos_t685997475, ___pos_1)); }
	inline Int32U5BU2CU5D_t3030399642* get_pos_1() const { return ___pos_1; }
	inline Int32U5BU2CU5D_t3030399642** get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Int32U5BU2CU5D_t3030399642* value)
	{
		___pos_1 = value;
		Il2CppCodeGenWriteBarrier(&___pos_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
