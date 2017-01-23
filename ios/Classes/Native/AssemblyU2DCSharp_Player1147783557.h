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
// GameScene
struct GameScene_t1466645730;
// System.Collections.Generic.List`1<Card>
struct List_1_t3698145834;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>>
struct List_1_t3067266966;
// System.Collections.Generic.List`1<CardChan>
struct List_1_t3617627210;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// CharacterScript
struct CharacterScript_t1308706256;
// ChipBetControl
struct ChipBetControl_t507923406;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// ItemResult
struct ItemResult_t3317645702;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.List`1<Player/DatCuoc>
struct List_1_t4262699677;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public Il2CppObject
{
public:
	// Game Player::game
	Game_t1600141214 * ___game_0;
	// GameScene Player::gameScene
	GameScene_t1466645730 * ___gameScene_1;
	// System.Boolean Player::boLuot
	bool ___boLuot_2;
	// System.Boolean Player::isfold
	bool ___isfold_3;
	// System.Int32 Player::totalBetChip
	int32_t ___totalBetChip_4;
	// System.Collections.Generic.List`1<Card> Player::baidadanh_tala
	List_1_t3698145834 * ___baidadanh_tala_5;
	// System.Collections.Generic.List`1<Card> Player::baidaan_tala
	List_1_t3698145834 * ___baidaan_tala_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Card>> Player::listphomha
	List_1_t3067266966 * ___listphomha_7;
	// System.Int32 Player::phomIndex
	int32_t ___phomIndex_8;
	// System.Collections.Generic.List`1<CardChan> Player::chan_cards
	List_1_t3617627210 * ___chan_cards_9;
	// System.Collections.Generic.List`1<CardChan> Player::chan_cards1
	List_1_t3617627210 * ___chan_cards1_10;
	// System.Collections.Generic.List`1<CardChan> Player::chan_cards2
	List_1_t3617627210 * ___chan_cards2_11;
	// System.String Player::_displayName
	String_t* ____displayName_12;
	// System.String Player::name
	String_t* ___name_13;
	// System.Int32 Player::diem_Dummy
	int32_t ___diem_Dummy_14;
	// System.Int32 Player::ag
	int32_t ___ag_15;
	// System.Int32 Player::lq
	int32_t ___lq_16;
	// System.Int32 Player::vip
	int32_t ___vip_17;
	// System.Boolean Player::_isReady
	bool ____isReady_18;
	// System.Int32 Player::ik
	int32_t ___ik_19;
	// System.Boolean Player::isHost
	bool ___isHost_20;
	// System.Int32 Player::mark
	int32_t ___mark_21;
	// System.Int32 Player::rank
	int32_t ___rank_22;
	// System.String Player::sIP
	String_t* ___sIP_23;
	// System.String Player::ava_url
	String_t* ___ava_url_24;
	// UnityEngine.RectTransform Player::rectTransform
	RectTransform_t3349966182 * ___rectTransform_25;
	// CharacterScript Player::viewControl
	CharacterScript_t1308706256 * ___viewControl_26;
	// ChipBetControl Player::chipBetControl
	ChipBetControl_t507923406 * ___chipBetControl_27;
	// UnityEngine.UI.Text Player::text_name
	Text_t356221433 * ___text_name_28;
	// UnityEngine.UI.Image Player::image_avatar
	Image_t2042527209 * ___image_avatar_29;
	// UnityEngine.UI.Image Player::image_curtain
	Image_t2042527209 * ___image_curtain_30;
	// UnityEngine.UI.Text Player::text_status
	Text_t356221433 * ___text_status_31;
	// UnityEngine.UI.Text Player::text_winning
	Text_t356221433 * ___text_winning_32;
	// UnityEngine.UI.Text Player::text_vip
	Text_t356221433 * ___text_vip_33;
	// System.Int32 Player::D
	int32_t ___D_34;
	// System.Int32 Player::mb
	int32_t ___mb_35;
	// System.Int32 Player::maubinh
	int32_t ___maubinh_36;
	// System.Boolean Player::binhlung
	bool ___binhlung_37;
	// System.Boolean Player::isClickPlayer
	bool ___isClickPlayer_38;
	// ItemResult Player::itemResult
	ItemResult_t3317645702 * ___itemResult_39;
	// UnityEngine.Sprite Player::defaultFBAvatar
	Sprite_t309593783 * ___defaultFBAvatar_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Player::betMap
	Dictionary_2_t3943999495 * ___betMap_41;
	// System.Collections.Generic.List`1<Player/DatCuoc> Player::listDatCuoc
	List_1_t4262699677 * ___listDatCuoc_42;

public:
	inline static int32_t get_offset_of_game_0() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___game_0)); }
	inline Game_t1600141214 * get_game_0() const { return ___game_0; }
	inline Game_t1600141214 ** get_address_of_game_0() { return &___game_0; }
	inline void set_game_0(Game_t1600141214 * value)
	{
		___game_0 = value;
		Il2CppCodeGenWriteBarrier(&___game_0, value);
	}

	inline static int32_t get_offset_of_gameScene_1() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gameScene_1)); }
	inline GameScene_t1466645730 * get_gameScene_1() const { return ___gameScene_1; }
	inline GameScene_t1466645730 ** get_address_of_gameScene_1() { return &___gameScene_1; }
	inline void set_gameScene_1(GameScene_t1466645730 * value)
	{
		___gameScene_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameScene_1, value);
	}

	inline static int32_t get_offset_of_boLuot_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___boLuot_2)); }
	inline bool get_boLuot_2() const { return ___boLuot_2; }
	inline bool* get_address_of_boLuot_2() { return &___boLuot_2; }
	inline void set_boLuot_2(bool value)
	{
		___boLuot_2 = value;
	}

	inline static int32_t get_offset_of_isfold_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___isfold_3)); }
	inline bool get_isfold_3() const { return ___isfold_3; }
	inline bool* get_address_of_isfold_3() { return &___isfold_3; }
	inline void set_isfold_3(bool value)
	{
		___isfold_3 = value;
	}

	inline static int32_t get_offset_of_totalBetChip_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___totalBetChip_4)); }
	inline int32_t get_totalBetChip_4() const { return ___totalBetChip_4; }
	inline int32_t* get_address_of_totalBetChip_4() { return &___totalBetChip_4; }
	inline void set_totalBetChip_4(int32_t value)
	{
		___totalBetChip_4 = value;
	}

	inline static int32_t get_offset_of_baidadanh_tala_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___baidadanh_tala_5)); }
	inline List_1_t3698145834 * get_baidadanh_tala_5() const { return ___baidadanh_tala_5; }
	inline List_1_t3698145834 ** get_address_of_baidadanh_tala_5() { return &___baidadanh_tala_5; }
	inline void set_baidadanh_tala_5(List_1_t3698145834 * value)
	{
		___baidadanh_tala_5 = value;
		Il2CppCodeGenWriteBarrier(&___baidadanh_tala_5, value);
	}

	inline static int32_t get_offset_of_baidaan_tala_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___baidaan_tala_6)); }
	inline List_1_t3698145834 * get_baidaan_tala_6() const { return ___baidaan_tala_6; }
	inline List_1_t3698145834 ** get_address_of_baidaan_tala_6() { return &___baidaan_tala_6; }
	inline void set_baidaan_tala_6(List_1_t3698145834 * value)
	{
		___baidaan_tala_6 = value;
		Il2CppCodeGenWriteBarrier(&___baidaan_tala_6, value);
	}

	inline static int32_t get_offset_of_listphomha_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___listphomha_7)); }
	inline List_1_t3067266966 * get_listphomha_7() const { return ___listphomha_7; }
	inline List_1_t3067266966 ** get_address_of_listphomha_7() { return &___listphomha_7; }
	inline void set_listphomha_7(List_1_t3067266966 * value)
	{
		___listphomha_7 = value;
		Il2CppCodeGenWriteBarrier(&___listphomha_7, value);
	}

	inline static int32_t get_offset_of_phomIndex_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___phomIndex_8)); }
	inline int32_t get_phomIndex_8() const { return ___phomIndex_8; }
	inline int32_t* get_address_of_phomIndex_8() { return &___phomIndex_8; }
	inline void set_phomIndex_8(int32_t value)
	{
		___phomIndex_8 = value;
	}

	inline static int32_t get_offset_of_chan_cards_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___chan_cards_9)); }
	inline List_1_t3617627210 * get_chan_cards_9() const { return ___chan_cards_9; }
	inline List_1_t3617627210 ** get_address_of_chan_cards_9() { return &___chan_cards_9; }
	inline void set_chan_cards_9(List_1_t3617627210 * value)
	{
		___chan_cards_9 = value;
		Il2CppCodeGenWriteBarrier(&___chan_cards_9, value);
	}

	inline static int32_t get_offset_of_chan_cards1_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___chan_cards1_10)); }
	inline List_1_t3617627210 * get_chan_cards1_10() const { return ___chan_cards1_10; }
	inline List_1_t3617627210 ** get_address_of_chan_cards1_10() { return &___chan_cards1_10; }
	inline void set_chan_cards1_10(List_1_t3617627210 * value)
	{
		___chan_cards1_10 = value;
		Il2CppCodeGenWriteBarrier(&___chan_cards1_10, value);
	}

	inline static int32_t get_offset_of_chan_cards2_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___chan_cards2_11)); }
	inline List_1_t3617627210 * get_chan_cards2_11() const { return ___chan_cards2_11; }
	inline List_1_t3617627210 ** get_address_of_chan_cards2_11() { return &___chan_cards2_11; }
	inline void set_chan_cards2_11(List_1_t3617627210 * value)
	{
		___chan_cards2_11 = value;
		Il2CppCodeGenWriteBarrier(&___chan_cards2_11, value);
	}

	inline static int32_t get_offset_of__displayName_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ____displayName_12)); }
	inline String_t* get__displayName_12() const { return ____displayName_12; }
	inline String_t** get_address_of__displayName_12() { return &____displayName_12; }
	inline void set__displayName_12(String_t* value)
	{
		____displayName_12 = value;
		Il2CppCodeGenWriteBarrier(&____displayName_12, value);
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier(&___name_13, value);
	}

	inline static int32_t get_offset_of_diem_Dummy_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___diem_Dummy_14)); }
	inline int32_t get_diem_Dummy_14() const { return ___diem_Dummy_14; }
	inline int32_t* get_address_of_diem_Dummy_14() { return &___diem_Dummy_14; }
	inline void set_diem_Dummy_14(int32_t value)
	{
		___diem_Dummy_14 = value;
	}

	inline static int32_t get_offset_of_ag_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___ag_15)); }
	inline int32_t get_ag_15() const { return ___ag_15; }
	inline int32_t* get_address_of_ag_15() { return &___ag_15; }
	inline void set_ag_15(int32_t value)
	{
		___ag_15 = value;
	}

	inline static int32_t get_offset_of_lq_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___lq_16)); }
	inline int32_t get_lq_16() const { return ___lq_16; }
	inline int32_t* get_address_of_lq_16() { return &___lq_16; }
	inline void set_lq_16(int32_t value)
	{
		___lq_16 = value;
	}

	inline static int32_t get_offset_of_vip_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___vip_17)); }
	inline int32_t get_vip_17() const { return ___vip_17; }
	inline int32_t* get_address_of_vip_17() { return &___vip_17; }
	inline void set_vip_17(int32_t value)
	{
		___vip_17 = value;
	}

	inline static int32_t get_offset_of__isReady_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ____isReady_18)); }
	inline bool get__isReady_18() const { return ____isReady_18; }
	inline bool* get_address_of__isReady_18() { return &____isReady_18; }
	inline void set__isReady_18(bool value)
	{
		____isReady_18 = value;
	}

	inline static int32_t get_offset_of_ik_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___ik_19)); }
	inline int32_t get_ik_19() const { return ___ik_19; }
	inline int32_t* get_address_of_ik_19() { return &___ik_19; }
	inline void set_ik_19(int32_t value)
	{
		___ik_19 = value;
	}

	inline static int32_t get_offset_of_isHost_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___isHost_20)); }
	inline bool get_isHost_20() const { return ___isHost_20; }
	inline bool* get_address_of_isHost_20() { return &___isHost_20; }
	inline void set_isHost_20(bool value)
	{
		___isHost_20 = value;
	}

	inline static int32_t get_offset_of_mark_21() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___mark_21)); }
	inline int32_t get_mark_21() const { return ___mark_21; }
	inline int32_t* get_address_of_mark_21() { return &___mark_21; }
	inline void set_mark_21(int32_t value)
	{
		___mark_21 = value;
	}

	inline static int32_t get_offset_of_rank_22() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rank_22)); }
	inline int32_t get_rank_22() const { return ___rank_22; }
	inline int32_t* get_address_of_rank_22() { return &___rank_22; }
	inline void set_rank_22(int32_t value)
	{
		___rank_22 = value;
	}

	inline static int32_t get_offset_of_sIP_23() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___sIP_23)); }
	inline String_t* get_sIP_23() const { return ___sIP_23; }
	inline String_t** get_address_of_sIP_23() { return &___sIP_23; }
	inline void set_sIP_23(String_t* value)
	{
		___sIP_23 = value;
		Il2CppCodeGenWriteBarrier(&___sIP_23, value);
	}

	inline static int32_t get_offset_of_ava_url_24() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___ava_url_24)); }
	inline String_t* get_ava_url_24() const { return ___ava_url_24; }
	inline String_t** get_address_of_ava_url_24() { return &___ava_url_24; }
	inline void set_ava_url_24(String_t* value)
	{
		___ava_url_24 = value;
		Il2CppCodeGenWriteBarrier(&___ava_url_24, value);
	}

	inline static int32_t get_offset_of_rectTransform_25() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rectTransform_25)); }
	inline RectTransform_t3349966182 * get_rectTransform_25() const { return ___rectTransform_25; }
	inline RectTransform_t3349966182 ** get_address_of_rectTransform_25() { return &___rectTransform_25; }
	inline void set_rectTransform_25(RectTransform_t3349966182 * value)
	{
		___rectTransform_25 = value;
		Il2CppCodeGenWriteBarrier(&___rectTransform_25, value);
	}

	inline static int32_t get_offset_of_viewControl_26() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___viewControl_26)); }
	inline CharacterScript_t1308706256 * get_viewControl_26() const { return ___viewControl_26; }
	inline CharacterScript_t1308706256 ** get_address_of_viewControl_26() { return &___viewControl_26; }
	inline void set_viewControl_26(CharacterScript_t1308706256 * value)
	{
		___viewControl_26 = value;
		Il2CppCodeGenWriteBarrier(&___viewControl_26, value);
	}

	inline static int32_t get_offset_of_chipBetControl_27() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___chipBetControl_27)); }
	inline ChipBetControl_t507923406 * get_chipBetControl_27() const { return ___chipBetControl_27; }
	inline ChipBetControl_t507923406 ** get_address_of_chipBetControl_27() { return &___chipBetControl_27; }
	inline void set_chipBetControl_27(ChipBetControl_t507923406 * value)
	{
		___chipBetControl_27 = value;
		Il2CppCodeGenWriteBarrier(&___chipBetControl_27, value);
	}

	inline static int32_t get_offset_of_text_name_28() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___text_name_28)); }
	inline Text_t356221433 * get_text_name_28() const { return ___text_name_28; }
	inline Text_t356221433 ** get_address_of_text_name_28() { return &___text_name_28; }
	inline void set_text_name_28(Text_t356221433 * value)
	{
		___text_name_28 = value;
		Il2CppCodeGenWriteBarrier(&___text_name_28, value);
	}

	inline static int32_t get_offset_of_image_avatar_29() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___image_avatar_29)); }
	inline Image_t2042527209 * get_image_avatar_29() const { return ___image_avatar_29; }
	inline Image_t2042527209 ** get_address_of_image_avatar_29() { return &___image_avatar_29; }
	inline void set_image_avatar_29(Image_t2042527209 * value)
	{
		___image_avatar_29 = value;
		Il2CppCodeGenWriteBarrier(&___image_avatar_29, value);
	}

	inline static int32_t get_offset_of_image_curtain_30() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___image_curtain_30)); }
	inline Image_t2042527209 * get_image_curtain_30() const { return ___image_curtain_30; }
	inline Image_t2042527209 ** get_address_of_image_curtain_30() { return &___image_curtain_30; }
	inline void set_image_curtain_30(Image_t2042527209 * value)
	{
		___image_curtain_30 = value;
		Il2CppCodeGenWriteBarrier(&___image_curtain_30, value);
	}

	inline static int32_t get_offset_of_text_status_31() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___text_status_31)); }
	inline Text_t356221433 * get_text_status_31() const { return ___text_status_31; }
	inline Text_t356221433 ** get_address_of_text_status_31() { return &___text_status_31; }
	inline void set_text_status_31(Text_t356221433 * value)
	{
		___text_status_31 = value;
		Il2CppCodeGenWriteBarrier(&___text_status_31, value);
	}

	inline static int32_t get_offset_of_text_winning_32() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___text_winning_32)); }
	inline Text_t356221433 * get_text_winning_32() const { return ___text_winning_32; }
	inline Text_t356221433 ** get_address_of_text_winning_32() { return &___text_winning_32; }
	inline void set_text_winning_32(Text_t356221433 * value)
	{
		___text_winning_32 = value;
		Il2CppCodeGenWriteBarrier(&___text_winning_32, value);
	}

	inline static int32_t get_offset_of_text_vip_33() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___text_vip_33)); }
	inline Text_t356221433 * get_text_vip_33() const { return ___text_vip_33; }
	inline Text_t356221433 ** get_address_of_text_vip_33() { return &___text_vip_33; }
	inline void set_text_vip_33(Text_t356221433 * value)
	{
		___text_vip_33 = value;
		Il2CppCodeGenWriteBarrier(&___text_vip_33, value);
	}

	inline static int32_t get_offset_of_D_34() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___D_34)); }
	inline int32_t get_D_34() const { return ___D_34; }
	inline int32_t* get_address_of_D_34() { return &___D_34; }
	inline void set_D_34(int32_t value)
	{
		___D_34 = value;
	}

	inline static int32_t get_offset_of_mb_35() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___mb_35)); }
	inline int32_t get_mb_35() const { return ___mb_35; }
	inline int32_t* get_address_of_mb_35() { return &___mb_35; }
	inline void set_mb_35(int32_t value)
	{
		___mb_35 = value;
	}

	inline static int32_t get_offset_of_maubinh_36() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___maubinh_36)); }
	inline int32_t get_maubinh_36() const { return ___maubinh_36; }
	inline int32_t* get_address_of_maubinh_36() { return &___maubinh_36; }
	inline void set_maubinh_36(int32_t value)
	{
		___maubinh_36 = value;
	}

	inline static int32_t get_offset_of_binhlung_37() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___binhlung_37)); }
	inline bool get_binhlung_37() const { return ___binhlung_37; }
	inline bool* get_address_of_binhlung_37() { return &___binhlung_37; }
	inline void set_binhlung_37(bool value)
	{
		___binhlung_37 = value;
	}

	inline static int32_t get_offset_of_isClickPlayer_38() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___isClickPlayer_38)); }
	inline bool get_isClickPlayer_38() const { return ___isClickPlayer_38; }
	inline bool* get_address_of_isClickPlayer_38() { return &___isClickPlayer_38; }
	inline void set_isClickPlayer_38(bool value)
	{
		___isClickPlayer_38 = value;
	}

	inline static int32_t get_offset_of_itemResult_39() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___itemResult_39)); }
	inline ItemResult_t3317645702 * get_itemResult_39() const { return ___itemResult_39; }
	inline ItemResult_t3317645702 ** get_address_of_itemResult_39() { return &___itemResult_39; }
	inline void set_itemResult_39(ItemResult_t3317645702 * value)
	{
		___itemResult_39 = value;
		Il2CppCodeGenWriteBarrier(&___itemResult_39, value);
	}

	inline static int32_t get_offset_of_defaultFBAvatar_40() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___defaultFBAvatar_40)); }
	inline Sprite_t309593783 * get_defaultFBAvatar_40() const { return ___defaultFBAvatar_40; }
	inline Sprite_t309593783 ** get_address_of_defaultFBAvatar_40() { return &___defaultFBAvatar_40; }
	inline void set_defaultFBAvatar_40(Sprite_t309593783 * value)
	{
		___defaultFBAvatar_40 = value;
		Il2CppCodeGenWriteBarrier(&___defaultFBAvatar_40, value);
	}

	inline static int32_t get_offset_of_betMap_41() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___betMap_41)); }
	inline Dictionary_2_t3943999495 * get_betMap_41() const { return ___betMap_41; }
	inline Dictionary_2_t3943999495 ** get_address_of_betMap_41() { return &___betMap_41; }
	inline void set_betMap_41(Dictionary_2_t3943999495 * value)
	{
		___betMap_41 = value;
		Il2CppCodeGenWriteBarrier(&___betMap_41, value);
	}

	inline static int32_t get_offset_of_listDatCuoc_42() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___listDatCuoc_42)); }
	inline List_1_t4262699677 * get_listDatCuoc_42() const { return ___listDatCuoc_42; }
	inline List_1_t4262699677 ** get_address_of_listDatCuoc_42() { return &___listDatCuoc_42; }
	inline void set_listDatCuoc_42(List_1_t4262699677 * value)
	{
		___listDatCuoc_42 = value;
		Il2CppCodeGenWriteBarrier(&___listDatCuoc_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
