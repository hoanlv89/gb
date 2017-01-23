#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// User
struct User_t719925459;

#include "AssemblyU2DCSharp_SuperScene3760801569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlotsGameScene
struct  SlotsGameScene_t2559174817  : public SuperScene_t3760801569
{
public:
	// UnityEngine.UI.Text SlotsGameScene::playerName
	Text_t356221433 * ___playerName_29;
	// UnityEngine.UI.Text SlotsGameScene::playerGold
	Text_t356221433 * ___playerGold_30;
	// UnityEngine.UI.Image SlotsGameScene::avatar
	Image_t2042527209 * ___avatar_32;
	// User SlotsGameScene::user
	User_t719925459 * ___user_33;

public:
	inline static int32_t get_offset_of_playerName_29() { return static_cast<int32_t>(offsetof(SlotsGameScene_t2559174817, ___playerName_29)); }
	inline Text_t356221433 * get_playerName_29() const { return ___playerName_29; }
	inline Text_t356221433 ** get_address_of_playerName_29() { return &___playerName_29; }
	inline void set_playerName_29(Text_t356221433 * value)
	{
		___playerName_29 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_29, value);
	}

	inline static int32_t get_offset_of_playerGold_30() { return static_cast<int32_t>(offsetof(SlotsGameScene_t2559174817, ___playerGold_30)); }
	inline Text_t356221433 * get_playerGold_30() const { return ___playerGold_30; }
	inline Text_t356221433 ** get_address_of_playerGold_30() { return &___playerGold_30; }
	inline void set_playerGold_30(Text_t356221433 * value)
	{
		___playerGold_30 = value;
		Il2CppCodeGenWriteBarrier(&___playerGold_30, value);
	}

	inline static int32_t get_offset_of_avatar_32() { return static_cast<int32_t>(offsetof(SlotsGameScene_t2559174817, ___avatar_32)); }
	inline Image_t2042527209 * get_avatar_32() const { return ___avatar_32; }
	inline Image_t2042527209 ** get_address_of_avatar_32() { return &___avatar_32; }
	inline void set_avatar_32(Image_t2042527209 * value)
	{
		___avatar_32 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_32, value);
	}

	inline static int32_t get_offset_of_user_33() { return static_cast<int32_t>(offsetof(SlotsGameScene_t2559174817, ___user_33)); }
	inline User_t719925459 * get_user_33() const { return ___user_33; }
	inline User_t719925459 ** get_address_of_user_33() { return &___user_33; }
	inline void set_user_33(User_t719925459 * value)
	{
		___user_33 = value;
		Il2CppCodeGenWriteBarrier(&___user_33, value);
	}
};

struct SlotsGameScene_t2559174817_StaticFields
{
public:
	// System.Int32 SlotsGameScene::gold
	int32_t ___gold_31;

public:
	inline static int32_t get_offset_of_gold_31() { return static_cast<int32_t>(offsetof(SlotsGameScene_t2559174817_StaticFields, ___gold_31)); }
	inline int32_t get_gold_31() const { return ___gold_31; }
	inline int32_t* get_address_of_gold_31() { return &___gold_31; }
	inline void set_gold_31(int32_t value)
	{
		___gold_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
