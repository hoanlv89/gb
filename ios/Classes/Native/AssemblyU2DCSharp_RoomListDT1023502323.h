#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomListDT
struct  RoomListDT_t1023502323  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image[] RoomListDT::img_room
	ImageU5BU5D_t590162004* ___img_room_2;

public:
	inline static int32_t get_offset_of_img_room_2() { return static_cast<int32_t>(offsetof(RoomListDT_t1023502323, ___img_room_2)); }
	inline ImageU5BU5D_t590162004* get_img_room_2() const { return ___img_room_2; }
	inline ImageU5BU5D_t590162004** get_address_of_img_room_2() { return &___img_room_2; }
	inline void set_img_room_2(ImageU5BU5D_t590162004* value)
	{
		___img_room_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_room_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
