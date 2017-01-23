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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spine.Unity.Examples.SpineBlinkPlayer
struct  SpineBlinkPlayer_t1942739946  : public MonoBehaviour_t1158329972
{
public:
	// System.String Spine.Unity.Examples.SpineBlinkPlayer::blinkAnimation
	String_t* ___blinkAnimation_3;
	// System.Single Spine.Unity.Examples.SpineBlinkPlayer::minimumDelay
	float ___minimumDelay_4;
	// System.Single Spine.Unity.Examples.SpineBlinkPlayer::maximumDelay
	float ___maximumDelay_5;

public:
	inline static int32_t get_offset_of_blinkAnimation_3() { return static_cast<int32_t>(offsetof(SpineBlinkPlayer_t1942739946, ___blinkAnimation_3)); }
	inline String_t* get_blinkAnimation_3() const { return ___blinkAnimation_3; }
	inline String_t** get_address_of_blinkAnimation_3() { return &___blinkAnimation_3; }
	inline void set_blinkAnimation_3(String_t* value)
	{
		___blinkAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___blinkAnimation_3, value);
	}

	inline static int32_t get_offset_of_minimumDelay_4() { return static_cast<int32_t>(offsetof(SpineBlinkPlayer_t1942739946, ___minimumDelay_4)); }
	inline float get_minimumDelay_4() const { return ___minimumDelay_4; }
	inline float* get_address_of_minimumDelay_4() { return &___minimumDelay_4; }
	inline void set_minimumDelay_4(float value)
	{
		___minimumDelay_4 = value;
	}

	inline static int32_t get_offset_of_maximumDelay_5() { return static_cast<int32_t>(offsetof(SpineBlinkPlayer_t1942739946, ___maximumDelay_5)); }
	inline float get_maximumDelay_5() const { return ___maximumDelay_5; }
	inline float* get_address_of_maximumDelay_5() { return &___maximumDelay_5; }
	inline void set_maximumDelay_5(float value)
	{
		___maximumDelay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
