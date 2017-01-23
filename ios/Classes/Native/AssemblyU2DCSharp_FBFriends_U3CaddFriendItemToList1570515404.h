#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FBFriendItem
struct FBFriendItem_t904511001;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FBFriends/<addFriendItemToList>c__AnonStorey0
struct  U3CaddFriendItemToListU3Ec__AnonStorey0_t1570515404  : public Il2CppObject
{
public:
	// FBFriendItem FBFriends/<addFriendItemToList>c__AnonStorey0::item
	FBFriendItem_t904511001 * ___item_0;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(U3CaddFriendItemToListU3Ec__AnonStorey0_t1570515404, ___item_0)); }
	inline FBFriendItem_t904511001 * get_item_0() const { return ___item_0; }
	inline FBFriendItem_t904511001 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(FBFriendItem_t904511001 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier(&___item_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
