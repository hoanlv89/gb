#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardChan
struct CardChan_t4248506078;

#include "AssemblyU2DCSharp_Game1600141214.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameChan
struct  GameChan_t4167295034  : public Game_t1600141214
{
public:
	// CardChan GameChan::lastCardChan
	CardChan_t4248506078 * ___lastCardChan_19;
	// System.Int32 GameChan::huongdan
	int32_t ___huongdan_20;
	// System.Int32 GameChan::denlang
	int32_t ___denlang_21;

public:
	inline static int32_t get_offset_of_lastCardChan_19() { return static_cast<int32_t>(offsetof(GameChan_t4167295034, ___lastCardChan_19)); }
	inline CardChan_t4248506078 * get_lastCardChan_19() const { return ___lastCardChan_19; }
	inline CardChan_t4248506078 ** get_address_of_lastCardChan_19() { return &___lastCardChan_19; }
	inline void set_lastCardChan_19(CardChan_t4248506078 * value)
	{
		___lastCardChan_19 = value;
		Il2CppCodeGenWriteBarrier(&___lastCardChan_19, value);
	}

	inline static int32_t get_offset_of_huongdan_20() { return static_cast<int32_t>(offsetof(GameChan_t4167295034, ___huongdan_20)); }
	inline int32_t get_huongdan_20() const { return ___huongdan_20; }
	inline int32_t* get_address_of_huongdan_20() { return &___huongdan_20; }
	inline void set_huongdan_20(int32_t value)
	{
		___huongdan_20 = value;
	}

	inline static int32_t get_offset_of_denlang_21() { return static_cast<int32_t>(offsetof(GameChan_t4167295034, ___denlang_21)); }
	inline int32_t get_denlang_21() const { return ___denlang_21; }
	inline int32_t* get_address_of_denlang_21() { return &___denlang_21; }
	inline void set_denlang_21(int32_t value)
	{
		___denlang_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
