#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_t1135106623 * ___efxSource_2;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t1135106623 * ___musicSource_3;
	// UnityEngine.AudioSource SoundManager::emoSource
	AudioSource_t1135106623 * ___emoSource_4;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_6;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_7;
	// UnityEngine.AudioClip SoundManager::haine
	AudioClip_t1932558630 * ___haine_8;
	// UnityEngine.AudioClip SoundManager::danhbai
	AudioClip_t1932558630 * ___danhbai_9;
	// UnityEngine.AudioClip SoundManager::dodi
	AudioClip_t1932558630 * ___dodi_10;
	// UnityEngine.AudioClip SoundManager::thuadicung
	AudioClip_t1932558630 * ___thuadicung_11;
	// UnityEngine.AudioClip SoundManager::mayhabuoi
	AudioClip_t1932558630 * ___mayhabuoi_12;
	// UnityEngine.AudioClip SoundManager::chetmayne
	AudioClip_t1932558630 * ___chetmayne_13;
	// UnityEngine.AudioClip SoundManager::silent
	AudioClip_t1932558630 * ___silent_14;
	// UnityEngine.AudioClip SoundManager::message
	AudioClip_t1932558630 * ___message_15;
	// UnityEngine.AudioClip SoundManager::finished
	AudioClip_t1932558630 * ___finished_16;
	// UnityEngine.AudioClip SoundManager::nhat
	AudioClip_t1932558630 * ___nhat_17;
	// UnityEngine.AudioClip SoundManager::bet
	AudioClip_t1932558630 * ___bet_18;
	// UnityEngine.AudioClip SoundManager::knock
	AudioClip_t1932558630 * ___knock_19;
	// UnityEngine.AudioClip SoundManager::binhlung
	AudioClip_t1932558630 * ___binhlung_20;
	// UnityEngine.AudioClip SoundManager::shuffle
	AudioClip_t1932558630 * ___shuffle_21;
	// UnityEngine.AudioClip SoundManager::tala_u
	AudioClip_t1932558630 * ___tala_u_22;
	// UnityEngine.AudioClip SoundManager::tala_mom
	AudioClip_t1932558630 * ___tala_mom_23;
	// UnityEngine.AudioClip SoundManager::habai
	AudioClip_t1932558630 * ___habai_24;
	// UnityEngine.AudioClip SoundManager::guibai
	AudioClip_t1932558630 * ___guibai_25;
	// UnityEngine.AudioClip SoundManager::bocbai
	AudioClip_t1932558630 * ___bocbai_26;
	// UnityEngine.AudioClip SoundManager::to
	AudioClip_t1932558630 * ___to_27;
	// UnityEngine.AudioClip SoundManager::nemcachua
	AudioClip_t1932558630 * ___nemcachua_28;
	// UnityEngine.AudioClip SoundManager::nemtrung
	AudioClip_t1932558630 * ___nemtrung_29;
	// UnityEngine.AudioClip SoundManager::nembom
	AudioClip_t1932558630 * ___nembom_30;
	// UnityEngine.AudioClip SoundManager::tatdep
	AudioClip_t1932558630 * ___tatdep_31;
	// UnityEngine.AudioClip SoundManager::gobua
	AudioClip_t1932558630 * ___gobua_32;
	// UnityEngine.AudioClip SoundManager::tangbia
	AudioClip_t1932558630 * ___tangbia_33;

public:
	inline static int32_t get_offset_of_efxSource_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___efxSource_2)); }
	inline AudioSource_t1135106623 * get_efxSource_2() const { return ___efxSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_efxSource_2() { return &___efxSource_2; }
	inline void set_efxSource_2(AudioSource_t1135106623 * value)
	{
		___efxSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___efxSource_2, value);
	}

	inline static int32_t get_offset_of_musicSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___musicSource_3)); }
	inline AudioSource_t1135106623 * get_musicSource_3() const { return ___musicSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_musicSource_3() { return &___musicSource_3; }
	inline void set_musicSource_3(AudioSource_t1135106623 * value)
	{
		___musicSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_3, value);
	}

	inline static int32_t get_offset_of_emoSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___emoSource_4)); }
	inline AudioSource_t1135106623 * get_emoSource_4() const { return ___emoSource_4; }
	inline AudioSource_t1135106623 ** get_address_of_emoSource_4() { return &___emoSource_4; }
	inline void set_emoSource_4(AudioSource_t1135106623 * value)
	{
		___emoSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___emoSource_4, value);
	}

	inline static int32_t get_offset_of_lowPitchRange_6() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___lowPitchRange_6)); }
	inline float get_lowPitchRange_6() const { return ___lowPitchRange_6; }
	inline float* get_address_of_lowPitchRange_6() { return &___lowPitchRange_6; }
	inline void set_lowPitchRange_6(float value)
	{
		___lowPitchRange_6 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___highPitchRange_7)); }
	inline float get_highPitchRange_7() const { return ___highPitchRange_7; }
	inline float* get_address_of_highPitchRange_7() { return &___highPitchRange_7; }
	inline void set_highPitchRange_7(float value)
	{
		___highPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_haine_8() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___haine_8)); }
	inline AudioClip_t1932558630 * get_haine_8() const { return ___haine_8; }
	inline AudioClip_t1932558630 ** get_address_of_haine_8() { return &___haine_8; }
	inline void set_haine_8(AudioClip_t1932558630 * value)
	{
		___haine_8 = value;
		Il2CppCodeGenWriteBarrier(&___haine_8, value);
	}

	inline static int32_t get_offset_of_danhbai_9() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___danhbai_9)); }
	inline AudioClip_t1932558630 * get_danhbai_9() const { return ___danhbai_9; }
	inline AudioClip_t1932558630 ** get_address_of_danhbai_9() { return &___danhbai_9; }
	inline void set_danhbai_9(AudioClip_t1932558630 * value)
	{
		___danhbai_9 = value;
		Il2CppCodeGenWriteBarrier(&___danhbai_9, value);
	}

	inline static int32_t get_offset_of_dodi_10() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___dodi_10)); }
	inline AudioClip_t1932558630 * get_dodi_10() const { return ___dodi_10; }
	inline AudioClip_t1932558630 ** get_address_of_dodi_10() { return &___dodi_10; }
	inline void set_dodi_10(AudioClip_t1932558630 * value)
	{
		___dodi_10 = value;
		Il2CppCodeGenWriteBarrier(&___dodi_10, value);
	}

	inline static int32_t get_offset_of_thuadicung_11() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___thuadicung_11)); }
	inline AudioClip_t1932558630 * get_thuadicung_11() const { return ___thuadicung_11; }
	inline AudioClip_t1932558630 ** get_address_of_thuadicung_11() { return &___thuadicung_11; }
	inline void set_thuadicung_11(AudioClip_t1932558630 * value)
	{
		___thuadicung_11 = value;
		Il2CppCodeGenWriteBarrier(&___thuadicung_11, value);
	}

	inline static int32_t get_offset_of_mayhabuoi_12() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___mayhabuoi_12)); }
	inline AudioClip_t1932558630 * get_mayhabuoi_12() const { return ___mayhabuoi_12; }
	inline AudioClip_t1932558630 ** get_address_of_mayhabuoi_12() { return &___mayhabuoi_12; }
	inline void set_mayhabuoi_12(AudioClip_t1932558630 * value)
	{
		___mayhabuoi_12 = value;
		Il2CppCodeGenWriteBarrier(&___mayhabuoi_12, value);
	}

	inline static int32_t get_offset_of_chetmayne_13() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___chetmayne_13)); }
	inline AudioClip_t1932558630 * get_chetmayne_13() const { return ___chetmayne_13; }
	inline AudioClip_t1932558630 ** get_address_of_chetmayne_13() { return &___chetmayne_13; }
	inline void set_chetmayne_13(AudioClip_t1932558630 * value)
	{
		___chetmayne_13 = value;
		Il2CppCodeGenWriteBarrier(&___chetmayne_13, value);
	}

	inline static int32_t get_offset_of_silent_14() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___silent_14)); }
	inline AudioClip_t1932558630 * get_silent_14() const { return ___silent_14; }
	inline AudioClip_t1932558630 ** get_address_of_silent_14() { return &___silent_14; }
	inline void set_silent_14(AudioClip_t1932558630 * value)
	{
		___silent_14 = value;
		Il2CppCodeGenWriteBarrier(&___silent_14, value);
	}

	inline static int32_t get_offset_of_message_15() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___message_15)); }
	inline AudioClip_t1932558630 * get_message_15() const { return ___message_15; }
	inline AudioClip_t1932558630 ** get_address_of_message_15() { return &___message_15; }
	inline void set_message_15(AudioClip_t1932558630 * value)
	{
		___message_15 = value;
		Il2CppCodeGenWriteBarrier(&___message_15, value);
	}

	inline static int32_t get_offset_of_finished_16() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___finished_16)); }
	inline AudioClip_t1932558630 * get_finished_16() const { return ___finished_16; }
	inline AudioClip_t1932558630 ** get_address_of_finished_16() { return &___finished_16; }
	inline void set_finished_16(AudioClip_t1932558630 * value)
	{
		___finished_16 = value;
		Il2CppCodeGenWriteBarrier(&___finished_16, value);
	}

	inline static int32_t get_offset_of_nhat_17() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___nhat_17)); }
	inline AudioClip_t1932558630 * get_nhat_17() const { return ___nhat_17; }
	inline AudioClip_t1932558630 ** get_address_of_nhat_17() { return &___nhat_17; }
	inline void set_nhat_17(AudioClip_t1932558630 * value)
	{
		___nhat_17 = value;
		Il2CppCodeGenWriteBarrier(&___nhat_17, value);
	}

	inline static int32_t get_offset_of_bet_18() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___bet_18)); }
	inline AudioClip_t1932558630 * get_bet_18() const { return ___bet_18; }
	inline AudioClip_t1932558630 ** get_address_of_bet_18() { return &___bet_18; }
	inline void set_bet_18(AudioClip_t1932558630 * value)
	{
		___bet_18 = value;
		Il2CppCodeGenWriteBarrier(&___bet_18, value);
	}

	inline static int32_t get_offset_of_knock_19() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___knock_19)); }
	inline AudioClip_t1932558630 * get_knock_19() const { return ___knock_19; }
	inline AudioClip_t1932558630 ** get_address_of_knock_19() { return &___knock_19; }
	inline void set_knock_19(AudioClip_t1932558630 * value)
	{
		___knock_19 = value;
		Il2CppCodeGenWriteBarrier(&___knock_19, value);
	}

	inline static int32_t get_offset_of_binhlung_20() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___binhlung_20)); }
	inline AudioClip_t1932558630 * get_binhlung_20() const { return ___binhlung_20; }
	inline AudioClip_t1932558630 ** get_address_of_binhlung_20() { return &___binhlung_20; }
	inline void set_binhlung_20(AudioClip_t1932558630 * value)
	{
		___binhlung_20 = value;
		Il2CppCodeGenWriteBarrier(&___binhlung_20, value);
	}

	inline static int32_t get_offset_of_shuffle_21() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___shuffle_21)); }
	inline AudioClip_t1932558630 * get_shuffle_21() const { return ___shuffle_21; }
	inline AudioClip_t1932558630 ** get_address_of_shuffle_21() { return &___shuffle_21; }
	inline void set_shuffle_21(AudioClip_t1932558630 * value)
	{
		___shuffle_21 = value;
		Il2CppCodeGenWriteBarrier(&___shuffle_21, value);
	}

	inline static int32_t get_offset_of_tala_u_22() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___tala_u_22)); }
	inline AudioClip_t1932558630 * get_tala_u_22() const { return ___tala_u_22; }
	inline AudioClip_t1932558630 ** get_address_of_tala_u_22() { return &___tala_u_22; }
	inline void set_tala_u_22(AudioClip_t1932558630 * value)
	{
		___tala_u_22 = value;
		Il2CppCodeGenWriteBarrier(&___tala_u_22, value);
	}

	inline static int32_t get_offset_of_tala_mom_23() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___tala_mom_23)); }
	inline AudioClip_t1932558630 * get_tala_mom_23() const { return ___tala_mom_23; }
	inline AudioClip_t1932558630 ** get_address_of_tala_mom_23() { return &___tala_mom_23; }
	inline void set_tala_mom_23(AudioClip_t1932558630 * value)
	{
		___tala_mom_23 = value;
		Il2CppCodeGenWriteBarrier(&___tala_mom_23, value);
	}

	inline static int32_t get_offset_of_habai_24() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___habai_24)); }
	inline AudioClip_t1932558630 * get_habai_24() const { return ___habai_24; }
	inline AudioClip_t1932558630 ** get_address_of_habai_24() { return &___habai_24; }
	inline void set_habai_24(AudioClip_t1932558630 * value)
	{
		___habai_24 = value;
		Il2CppCodeGenWriteBarrier(&___habai_24, value);
	}

	inline static int32_t get_offset_of_guibai_25() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___guibai_25)); }
	inline AudioClip_t1932558630 * get_guibai_25() const { return ___guibai_25; }
	inline AudioClip_t1932558630 ** get_address_of_guibai_25() { return &___guibai_25; }
	inline void set_guibai_25(AudioClip_t1932558630 * value)
	{
		___guibai_25 = value;
		Il2CppCodeGenWriteBarrier(&___guibai_25, value);
	}

	inline static int32_t get_offset_of_bocbai_26() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___bocbai_26)); }
	inline AudioClip_t1932558630 * get_bocbai_26() const { return ___bocbai_26; }
	inline AudioClip_t1932558630 ** get_address_of_bocbai_26() { return &___bocbai_26; }
	inline void set_bocbai_26(AudioClip_t1932558630 * value)
	{
		___bocbai_26 = value;
		Il2CppCodeGenWriteBarrier(&___bocbai_26, value);
	}

	inline static int32_t get_offset_of_to_27() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___to_27)); }
	inline AudioClip_t1932558630 * get_to_27() const { return ___to_27; }
	inline AudioClip_t1932558630 ** get_address_of_to_27() { return &___to_27; }
	inline void set_to_27(AudioClip_t1932558630 * value)
	{
		___to_27 = value;
		Il2CppCodeGenWriteBarrier(&___to_27, value);
	}

	inline static int32_t get_offset_of_nemcachua_28() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___nemcachua_28)); }
	inline AudioClip_t1932558630 * get_nemcachua_28() const { return ___nemcachua_28; }
	inline AudioClip_t1932558630 ** get_address_of_nemcachua_28() { return &___nemcachua_28; }
	inline void set_nemcachua_28(AudioClip_t1932558630 * value)
	{
		___nemcachua_28 = value;
		Il2CppCodeGenWriteBarrier(&___nemcachua_28, value);
	}

	inline static int32_t get_offset_of_nemtrung_29() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___nemtrung_29)); }
	inline AudioClip_t1932558630 * get_nemtrung_29() const { return ___nemtrung_29; }
	inline AudioClip_t1932558630 ** get_address_of_nemtrung_29() { return &___nemtrung_29; }
	inline void set_nemtrung_29(AudioClip_t1932558630 * value)
	{
		___nemtrung_29 = value;
		Il2CppCodeGenWriteBarrier(&___nemtrung_29, value);
	}

	inline static int32_t get_offset_of_nembom_30() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___nembom_30)); }
	inline AudioClip_t1932558630 * get_nembom_30() const { return ___nembom_30; }
	inline AudioClip_t1932558630 ** get_address_of_nembom_30() { return &___nembom_30; }
	inline void set_nembom_30(AudioClip_t1932558630 * value)
	{
		___nembom_30 = value;
		Il2CppCodeGenWriteBarrier(&___nembom_30, value);
	}

	inline static int32_t get_offset_of_tatdep_31() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___tatdep_31)); }
	inline AudioClip_t1932558630 * get_tatdep_31() const { return ___tatdep_31; }
	inline AudioClip_t1932558630 ** get_address_of_tatdep_31() { return &___tatdep_31; }
	inline void set_tatdep_31(AudioClip_t1932558630 * value)
	{
		___tatdep_31 = value;
		Il2CppCodeGenWriteBarrier(&___tatdep_31, value);
	}

	inline static int32_t get_offset_of_gobua_32() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___gobua_32)); }
	inline AudioClip_t1932558630 * get_gobua_32() const { return ___gobua_32; }
	inline AudioClip_t1932558630 ** get_address_of_gobua_32() { return &___gobua_32; }
	inline void set_gobua_32(AudioClip_t1932558630 * value)
	{
		___gobua_32 = value;
		Il2CppCodeGenWriteBarrier(&___gobua_32, value);
	}

	inline static int32_t get_offset_of_tangbia_33() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___tangbia_33)); }
	inline AudioClip_t1932558630 * get_tangbia_33() const { return ___tangbia_33; }
	inline AudioClip_t1932558630 ** get_address_of_tangbia_33() { return &___tangbia_33; }
	inline void set_tangbia_33(AudioClip_t1932558630 * value)
	{
		___tangbia_33 = value;
		Il2CppCodeGenWriteBarrier(&___tangbia_33, value);
	}
};

struct SoundManager_t654432262_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t654432262 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___instance_5)); }
	inline SoundManager_t654432262 * get_instance_5() const { return ___instance_5; }
	inline SoundManager_t654432262 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(SoundManager_t654432262 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
