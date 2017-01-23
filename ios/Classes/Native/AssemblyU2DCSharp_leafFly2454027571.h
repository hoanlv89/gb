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

// leafFly
struct  leafFly_t2454027571  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform leafFly::button
	Transform_t3275118058 * ___button_2;
	// UnityEngine.UI.Button leafFly::a
	Button_t2872111280 * ___a_3;
	// UnityEngine.Transform leafFly::coin
	Transform_t3275118058 * ___coin_4;
	// UnityEngine.UI.Text leafFly::tcoin
	Text_t356221433 * ___tcoin_5;
	// System.Boolean leafFly::efcoin
	bool ___efcoin_6;
	// System.Single leafFly::dtime2
	float ___dtime2_7;
	// System.Single leafFly::stime
	float ___stime_8;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___button_2)); }
	inline Transform_t3275118058 * get_button_2() const { return ___button_2; }
	inline Transform_t3275118058 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Transform_t3275118058 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___a_3)); }
	inline Button_t2872111280 * get_a_3() const { return ___a_3; }
	inline Button_t2872111280 ** get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(Button_t2872111280 * value)
	{
		___a_3 = value;
		Il2CppCodeGenWriteBarrier(&___a_3, value);
	}

	inline static int32_t get_offset_of_coin_4() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___coin_4)); }
	inline Transform_t3275118058 * get_coin_4() const { return ___coin_4; }
	inline Transform_t3275118058 ** get_address_of_coin_4() { return &___coin_4; }
	inline void set_coin_4(Transform_t3275118058 * value)
	{
		___coin_4 = value;
		Il2CppCodeGenWriteBarrier(&___coin_4, value);
	}

	inline static int32_t get_offset_of_tcoin_5() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___tcoin_5)); }
	inline Text_t356221433 * get_tcoin_5() const { return ___tcoin_5; }
	inline Text_t356221433 ** get_address_of_tcoin_5() { return &___tcoin_5; }
	inline void set_tcoin_5(Text_t356221433 * value)
	{
		___tcoin_5 = value;
		Il2CppCodeGenWriteBarrier(&___tcoin_5, value);
	}

	inline static int32_t get_offset_of_efcoin_6() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___efcoin_6)); }
	inline bool get_efcoin_6() const { return ___efcoin_6; }
	inline bool* get_address_of_efcoin_6() { return &___efcoin_6; }
	inline void set_efcoin_6(bool value)
	{
		___efcoin_6 = value;
	}

	inline static int32_t get_offset_of_dtime2_7() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___dtime2_7)); }
	inline float get_dtime2_7() const { return ___dtime2_7; }
	inline float* get_address_of_dtime2_7() { return &___dtime2_7; }
	inline void set_dtime2_7(float value)
	{
		___dtime2_7 = value;
	}

	inline static int32_t get_offset_of_stime_8() { return static_cast<int32_t>(offsetof(leafFly_t2454027571, ___stime_8)); }
	inline float get_stime_8() const { return ___stime_8; }
	inline float* get_address_of_stime_8() { return &___stime_8; }
	inline void set_stime_8(float value)
	{
		___stime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
