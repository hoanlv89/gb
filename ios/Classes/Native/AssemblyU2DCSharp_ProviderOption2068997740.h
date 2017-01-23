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

// ProviderOption
struct  ProviderOption_t2068997740  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite ProviderOption::activeSprite
	Sprite_t309593783 * ___activeSprite_2;
	// UnityEngine.Sprite ProviderOption::deactiveSprite
	Sprite_t309593783 * ___deactiveSprite_3;

public:
	inline static int32_t get_offset_of_activeSprite_2() { return static_cast<int32_t>(offsetof(ProviderOption_t2068997740, ___activeSprite_2)); }
	inline Sprite_t309593783 * get_activeSprite_2() const { return ___activeSprite_2; }
	inline Sprite_t309593783 ** get_address_of_activeSprite_2() { return &___activeSprite_2; }
	inline void set_activeSprite_2(Sprite_t309593783 * value)
	{
		___activeSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeSprite_2, value);
	}

	inline static int32_t get_offset_of_deactiveSprite_3() { return static_cast<int32_t>(offsetof(ProviderOption_t2068997740, ___deactiveSprite_3)); }
	inline Sprite_t309593783 * get_deactiveSprite_3() const { return ___deactiveSprite_3; }
	inline Sprite_t309593783 ** get_address_of_deactiveSprite_3() { return &___deactiveSprite_3; }
	inline void set_deactiveSprite_3(Sprite_t309593783 * value)
	{
		___deactiveSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___deactiveSprite_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
