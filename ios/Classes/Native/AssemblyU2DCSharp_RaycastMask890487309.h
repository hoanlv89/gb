#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaycastMask
struct  RaycastMask_t890487309  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite RaycastMask::_sprite
	Sprite_t309593783 * ____sprite_2;

public:
	inline static int32_t get_offset_of__sprite_2() { return static_cast<int32_t>(offsetof(RaycastMask_t890487309, ____sprite_2)); }
	inline Sprite_t309593783 * get__sprite_2() const { return ____sprite_2; }
	inline Sprite_t309593783 ** get_address_of__sprite_2() { return &____sprite_2; }
	inline void set__sprite_2(Sprite_t309593783 * value)
	{
		____sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
