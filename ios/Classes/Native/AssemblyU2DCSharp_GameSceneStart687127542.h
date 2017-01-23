#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Game
struct Game_t1600141214;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// CubeiaClient
struct CubeiaClient_t2232589536;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSceneStart
struct  GameSceneStart_t687127542  : public MonoBehaviour_t1158329972
{
public:
	// Game GameSceneStart::game
	Game_t1600141214 * ___game_2;
	// UnityEngine.RectTransform GameSceneStart::binhfunctions
	RectTransform_t3349966182 * ___binhfunctions_3;
	// CubeiaClient GameSceneStart::cubeia
	CubeiaClient_t2232589536 * ___cubeia_4;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(GameSceneStart_t687127542, ___game_2)); }
	inline Game_t1600141214 * get_game_2() const { return ___game_2; }
	inline Game_t1600141214 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(Game_t1600141214 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}

	inline static int32_t get_offset_of_binhfunctions_3() { return static_cast<int32_t>(offsetof(GameSceneStart_t687127542, ___binhfunctions_3)); }
	inline RectTransform_t3349966182 * get_binhfunctions_3() const { return ___binhfunctions_3; }
	inline RectTransform_t3349966182 ** get_address_of_binhfunctions_3() { return &___binhfunctions_3; }
	inline void set_binhfunctions_3(RectTransform_t3349966182 * value)
	{
		___binhfunctions_3 = value;
		Il2CppCodeGenWriteBarrier(&___binhfunctions_3, value);
	}

	inline static int32_t get_offset_of_cubeia_4() { return static_cast<int32_t>(offsetof(GameSceneStart_t687127542, ___cubeia_4)); }
	inline CubeiaClient_t2232589536 * get_cubeia_4() const { return ___cubeia_4; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_4() { return &___cubeia_4; }
	inline void set_cubeia_4(CubeiaClient_t2232589536 * value)
	{
		___cubeia_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
