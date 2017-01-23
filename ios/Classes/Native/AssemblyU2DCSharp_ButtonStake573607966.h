#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonStake
struct  ButtonStake_t573607966  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button ButtonStake::button
	Button_t2872111280 * ___button_2;
	// UnityEngine.UI.Text ButtonStake::s_stake
	Text_t356221433 * ___s_stake_3;
	// UnityEngine.UI.Text ButtonStake::s_ccus
	Text_t356221433 * ___s_ccus_4;
	// System.Int32 ButtonStake::stake
	int32_t ___stake_5;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(ButtonStake_t573607966, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_s_stake_3() { return static_cast<int32_t>(offsetof(ButtonStake_t573607966, ___s_stake_3)); }
	inline Text_t356221433 * get_s_stake_3() const { return ___s_stake_3; }
	inline Text_t356221433 ** get_address_of_s_stake_3() { return &___s_stake_3; }
	inline void set_s_stake_3(Text_t356221433 * value)
	{
		___s_stake_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_stake_3, value);
	}

	inline static int32_t get_offset_of_s_ccus_4() { return static_cast<int32_t>(offsetof(ButtonStake_t573607966, ___s_ccus_4)); }
	inline Text_t356221433 * get_s_ccus_4() const { return ___s_ccus_4; }
	inline Text_t356221433 ** get_address_of_s_ccus_4() { return &___s_ccus_4; }
	inline void set_s_ccus_4(Text_t356221433 * value)
	{
		___s_ccus_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_ccus_4, value);
	}

	inline static int32_t get_offset_of_stake_5() { return static_cast<int32_t>(offsetof(ButtonStake_t573607966, ___stake_5)); }
	inline int32_t get_stake_5() const { return ___stake_5; }
	inline int32_t* get_address_of_stake_5() { return &___stake_5; }
	inline void set_stake_5(int32_t value)
	{
		___stake_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
