#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Resource
struct Resource_t1323496244;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Resource
struct  Resource_t1323496244  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Resource::card_textures
	SpriteU5BU5D_t3359083662* ___card_textures_3;
	// UnityEngine.Sprite[] Resource::card_chan_textures
	SpriteU5BU5D_t3359083662* ___card_chan_textures_4;

public:
	inline static int32_t get_offset_of_card_textures_3() { return static_cast<int32_t>(offsetof(Resource_t1323496244, ___card_textures_3)); }
	inline SpriteU5BU5D_t3359083662* get_card_textures_3() const { return ___card_textures_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_card_textures_3() { return &___card_textures_3; }
	inline void set_card_textures_3(SpriteU5BU5D_t3359083662* value)
	{
		___card_textures_3 = value;
		Il2CppCodeGenWriteBarrier(&___card_textures_3, value);
	}

	inline static int32_t get_offset_of_card_chan_textures_4() { return static_cast<int32_t>(offsetof(Resource_t1323496244, ___card_chan_textures_4)); }
	inline SpriteU5BU5D_t3359083662* get_card_chan_textures_4() const { return ___card_chan_textures_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_card_chan_textures_4() { return &___card_chan_textures_4; }
	inline void set_card_chan_textures_4(SpriteU5BU5D_t3359083662* value)
	{
		___card_chan_textures_4 = value;
		Il2CppCodeGenWriteBarrier(&___card_chan_textures_4, value);
	}
};

struct Resource_t1323496244_StaticFields
{
public:
	// Resource Resource::_instance
	Resource_t1323496244 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Resource_t1323496244_StaticFields, ____instance_2)); }
	inline Resource_t1323496244 * get__instance_2() const { return ____instance_2; }
	inline Resource_t1323496244 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(Resource_t1323496244 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
