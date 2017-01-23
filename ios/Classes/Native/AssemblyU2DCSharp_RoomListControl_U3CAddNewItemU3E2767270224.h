#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RoomGame
struct RoomGame_t2389026731;
// RoomListControl
struct RoomListControl_t2406123012;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomListControl/<AddNewItem>c__AnonStorey0
struct  U3CAddNewItemU3Ec__AnonStorey0_t2767270224  : public Il2CppObject
{
public:
	// System.Int32 RoomListControl/<AddNewItem>c__AnonStorey0::pos
	int32_t ___pos_0;
	// RoomGame RoomListControl/<AddNewItem>c__AnonStorey0::roomGame
	RoomGame_t2389026731 * ___roomGame_1;
	// RoomListControl RoomListControl/<AddNewItem>c__AnonStorey0::$this
	RoomListControl_t2406123012 * ___U24this_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(U3CAddNewItemU3Ec__AnonStorey0_t2767270224, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_roomGame_1() { return static_cast<int32_t>(offsetof(U3CAddNewItemU3Ec__AnonStorey0_t2767270224, ___roomGame_1)); }
	inline RoomGame_t2389026731 * get_roomGame_1() const { return ___roomGame_1; }
	inline RoomGame_t2389026731 ** get_address_of_roomGame_1() { return &___roomGame_1; }
	inline void set_roomGame_1(RoomGame_t2389026731 * value)
	{
		___roomGame_1 = value;
		Il2CppCodeGenWriteBarrier(&___roomGame_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAddNewItemU3Ec__AnonStorey0_t2767270224, ___U24this_2)); }
	inline RoomListControl_t2406123012 * get_U24this_2() const { return ___U24this_2; }
	inline RoomListControl_t2406123012 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(RoomListControl_t2406123012 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
