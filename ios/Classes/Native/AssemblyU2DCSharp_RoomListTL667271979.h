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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomListTL
struct  RoomListTL_t667271979  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image[] RoomListTL::img_room
	ImageU5BU5D_t590162004* ___img_room_2;
	// UnityEngine.Sprite[] RoomListTL::room1
	SpriteU5BU5D_t3359083662* ___room1_3;
	// UnityEngine.UI.Image RoomListTL::img_temp
	Image_t2042527209 * ___img_temp_4;
	// UnityEngine.Vector3[] RoomListTL::postion_temp
	Vector3U5BU5D_t1172311765* ___postion_temp_5;

public:
	inline static int32_t get_offset_of_img_room_2() { return static_cast<int32_t>(offsetof(RoomListTL_t667271979, ___img_room_2)); }
	inline ImageU5BU5D_t590162004* get_img_room_2() const { return ___img_room_2; }
	inline ImageU5BU5D_t590162004** get_address_of_img_room_2() { return &___img_room_2; }
	inline void set_img_room_2(ImageU5BU5D_t590162004* value)
	{
		___img_room_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_room_2, value);
	}

	inline static int32_t get_offset_of_room1_3() { return static_cast<int32_t>(offsetof(RoomListTL_t667271979, ___room1_3)); }
	inline SpriteU5BU5D_t3359083662* get_room1_3() const { return ___room1_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_room1_3() { return &___room1_3; }
	inline void set_room1_3(SpriteU5BU5D_t3359083662* value)
	{
		___room1_3 = value;
		Il2CppCodeGenWriteBarrier(&___room1_3, value);
	}

	inline static int32_t get_offset_of_img_temp_4() { return static_cast<int32_t>(offsetof(RoomListTL_t667271979, ___img_temp_4)); }
	inline Image_t2042527209 * get_img_temp_4() const { return ___img_temp_4; }
	inline Image_t2042527209 ** get_address_of_img_temp_4() { return &___img_temp_4; }
	inline void set_img_temp_4(Image_t2042527209 * value)
	{
		___img_temp_4 = value;
		Il2CppCodeGenWriteBarrier(&___img_temp_4, value);
	}

	inline static int32_t get_offset_of_postion_temp_5() { return static_cast<int32_t>(offsetof(RoomListTL_t667271979, ___postion_temp_5)); }
	inline Vector3U5BU5D_t1172311765* get_postion_temp_5() const { return ___postion_temp_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_postion_temp_5() { return &___postion_temp_5; }
	inline void set_postion_temp_5(Vector3U5BU5D_t1172311765* value)
	{
		___postion_temp_5 = value;
		Il2CppCodeGenWriteBarrier(&___postion_temp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
