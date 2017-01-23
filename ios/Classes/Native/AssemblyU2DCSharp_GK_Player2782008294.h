#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Action`1<GK_UserPhotoLoadResult>
struct Action_1_t1415997413;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Player
struct  GK_Player_t2782008294  : public Il2CppObject
{
public:
	// System.String GK_Player::_PlayerId
	String_t* ____PlayerId_0;
	// System.String GK_Player::_DisplayName
	String_t* ____DisplayName_1;
	// System.String GK_Player::_Alias
	String_t* ____Alias_2;
	// UnityEngine.Texture2D GK_Player::_SmallPhoto
	Texture2D_t3542995729 * ____SmallPhoto_3;
	// UnityEngine.Texture2D GK_Player::_BigPhoto
	Texture2D_t3542995729 * ____BigPhoto_4;
	// System.Action`1<GK_UserPhotoLoadResult> GK_Player::OnPlayerPhotoLoaded
	Action_1_t1415997413 * ___OnPlayerPhotoLoaded_5;

public:
	inline static int32_t get_offset_of__PlayerId_0() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ____PlayerId_0)); }
	inline String_t* get__PlayerId_0() const { return ____PlayerId_0; }
	inline String_t** get_address_of__PlayerId_0() { return &____PlayerId_0; }
	inline void set__PlayerId_0(String_t* value)
	{
		____PlayerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerId_0, value);
	}

	inline static int32_t get_offset_of__DisplayName_1() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ____DisplayName_1)); }
	inline String_t* get__DisplayName_1() const { return ____DisplayName_1; }
	inline String_t** get_address_of__DisplayName_1() { return &____DisplayName_1; }
	inline void set__DisplayName_1(String_t* value)
	{
		____DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayName_1, value);
	}

	inline static int32_t get_offset_of__Alias_2() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ____Alias_2)); }
	inline String_t* get__Alias_2() const { return ____Alias_2; }
	inline String_t** get_address_of__Alias_2() { return &____Alias_2; }
	inline void set__Alias_2(String_t* value)
	{
		____Alias_2 = value;
		Il2CppCodeGenWriteBarrier(&____Alias_2, value);
	}

	inline static int32_t get_offset_of__SmallPhoto_3() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ____SmallPhoto_3)); }
	inline Texture2D_t3542995729 * get__SmallPhoto_3() const { return ____SmallPhoto_3; }
	inline Texture2D_t3542995729 ** get_address_of__SmallPhoto_3() { return &____SmallPhoto_3; }
	inline void set__SmallPhoto_3(Texture2D_t3542995729 * value)
	{
		____SmallPhoto_3 = value;
		Il2CppCodeGenWriteBarrier(&____SmallPhoto_3, value);
	}

	inline static int32_t get_offset_of__BigPhoto_4() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ____BigPhoto_4)); }
	inline Texture2D_t3542995729 * get__BigPhoto_4() const { return ____BigPhoto_4; }
	inline Texture2D_t3542995729 ** get_address_of__BigPhoto_4() { return &____BigPhoto_4; }
	inline void set__BigPhoto_4(Texture2D_t3542995729 * value)
	{
		____BigPhoto_4 = value;
		Il2CppCodeGenWriteBarrier(&____BigPhoto_4, value);
	}

	inline static int32_t get_offset_of_OnPlayerPhotoLoaded_5() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294, ___OnPlayerPhotoLoaded_5)); }
	inline Action_1_t1415997413 * get_OnPlayerPhotoLoaded_5() const { return ___OnPlayerPhotoLoaded_5; }
	inline Action_1_t1415997413 ** get_address_of_OnPlayerPhotoLoaded_5() { return &___OnPlayerPhotoLoaded_5; }
	inline void set_OnPlayerPhotoLoaded_5(Action_1_t1415997413 * value)
	{
		___OnPlayerPhotoLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerPhotoLoaded_5, value);
	}
};

struct GK_Player_t2782008294_StaticFields
{
public:
	// System.Action`1<GK_UserPhotoLoadResult> GK_Player::<>f__am$cache0
	Action_1_t1415997413 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(GK_Player_t2782008294_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t1415997413 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t1415997413 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t1415997413 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
