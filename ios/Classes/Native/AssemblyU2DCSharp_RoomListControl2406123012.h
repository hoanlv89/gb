#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomListControl
struct  RoomListControl_t2406123012  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform RoomListControl::RoomItem
	Transform_t3275118058 * ___RoomItem_2;
	// UnityEngine.Sprite RoomListControl::redButtonBg
	Sprite_t309593783 * ___redButtonBg_3;
	// UnityEngine.Sprite RoomListControl::goldButtonBg
	Sprite_t309593783 * ___goldButtonBg_4;
	// UnityEngine.Color32 RoomListControl::color_gold
	Color32_t874517518  ___color_gold_5;
	// UnityEngine.Color32 RoomListControl::color_red
	Color32_t874517518  ___color_red_6;

public:
	inline static int32_t get_offset_of_RoomItem_2() { return static_cast<int32_t>(offsetof(RoomListControl_t2406123012, ___RoomItem_2)); }
	inline Transform_t3275118058 * get_RoomItem_2() const { return ___RoomItem_2; }
	inline Transform_t3275118058 ** get_address_of_RoomItem_2() { return &___RoomItem_2; }
	inline void set_RoomItem_2(Transform_t3275118058 * value)
	{
		___RoomItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___RoomItem_2, value);
	}

	inline static int32_t get_offset_of_redButtonBg_3() { return static_cast<int32_t>(offsetof(RoomListControl_t2406123012, ___redButtonBg_3)); }
	inline Sprite_t309593783 * get_redButtonBg_3() const { return ___redButtonBg_3; }
	inline Sprite_t309593783 ** get_address_of_redButtonBg_3() { return &___redButtonBg_3; }
	inline void set_redButtonBg_3(Sprite_t309593783 * value)
	{
		___redButtonBg_3 = value;
		Il2CppCodeGenWriteBarrier(&___redButtonBg_3, value);
	}

	inline static int32_t get_offset_of_goldButtonBg_4() { return static_cast<int32_t>(offsetof(RoomListControl_t2406123012, ___goldButtonBg_4)); }
	inline Sprite_t309593783 * get_goldButtonBg_4() const { return ___goldButtonBg_4; }
	inline Sprite_t309593783 ** get_address_of_goldButtonBg_4() { return &___goldButtonBg_4; }
	inline void set_goldButtonBg_4(Sprite_t309593783 * value)
	{
		___goldButtonBg_4 = value;
		Il2CppCodeGenWriteBarrier(&___goldButtonBg_4, value);
	}

	inline static int32_t get_offset_of_color_gold_5() { return static_cast<int32_t>(offsetof(RoomListControl_t2406123012, ___color_gold_5)); }
	inline Color32_t874517518  get_color_gold_5() const { return ___color_gold_5; }
	inline Color32_t874517518 * get_address_of_color_gold_5() { return &___color_gold_5; }
	inline void set_color_gold_5(Color32_t874517518  value)
	{
		___color_gold_5 = value;
	}

	inline static int32_t get_offset_of_color_red_6() { return static_cast<int32_t>(offsetof(RoomListControl_t2406123012, ___color_red_6)); }
	inline Color32_t874517518  get_color_red_6() const { return ___color_red_6; }
	inline Color32_t874517518 * get_address_of_color_red_6() { return &___color_red_6; }
	inline void set_color_red_6(Color32_t874517518  value)
	{
		___color_red_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
