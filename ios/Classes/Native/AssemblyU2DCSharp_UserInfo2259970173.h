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
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInfo
struct  UserInfo_t2259970173  : public MonoBehaviour_t1158329972
{
public:
	// System.String UserInfo::_userName
	String_t* ____userName_2;
	// System.Int32 UserInfo::_gold
	int32_t ____gold_3;
	// System.Boolean UserInfo::panelExpand
	bool ___panelExpand_4;
	// System.Single UserInfo::headerHeight
	float ___headerHeight_5;
	// System.Single UserInfo::bottomHeight
	float ___bottomHeight_6;
	// UnityEngine.RectTransform UserInfo::settingBox
	RectTransform_t3349966182 * ___settingBox_7;
	// System.Int32 UserInfo::<totalBet>k__BackingField
	int32_t ___U3CtotalBetU3Ek__BackingField_8;
	// System.String UserInfo::url
	String_t* ___url_9;
	// UnityEngine.UI.Image UserInfo::rawImage
	Image_t2042527209 * ___rawImage_10;
	// UnityEngine.RectTransform UserInfo::userTrans
	RectTransform_t3349966182 * ___userTrans_11;
	// UnityEngine.RectTransform UserInfo::goldTrans
	RectTransform_t3349966182 * ___goldTrans_12;
	// UnityEngine.RectTransform UserInfo::betTrans
	RectTransform_t3349966182 * ___betTrans_13;
	// UnityEngine.RectTransform UserInfo::winTrans
	RectTransform_t3349966182 * ___winTrans_14;
	// UnityEngine.RectTransform UserInfo::header
	RectTransform_t3349966182 * ___header_15;
	// UnityEngine.RectTransform UserInfo::bottom
	RectTransform_t3349966182 * ___bottom_16;
	// UnityEngine.UI.Button UserInfo::spinBtn
	Button_t2872111280 * ___spinBtn_17;
	// UnityEngine.UI.Button UserInfo::rebetAndSpinBtn
	Button_t2872111280 * ___rebetAndSpinBtn_18;
	// UnityEngine.UI.Button UserInfo::clearBtn
	Button_t2872111280 * ___clearBtn_19;
	// UnityEngine.UI.Button UserInfo::undoBtn
	Button_t2872111280 * ___undoBtn_20;
	// UnityEngine.UI.Button UserInfo::doubleBtn
	Button_t2872111280 * ___doubleBtn_21;
	// UnityEngine.UI.Button UserInfo::rebetAndDoubleBtn
	Button_t2872111280 * ___rebetAndDoubleBtn_22;
	// UnityEngine.UI.Button UserInfo::rebetBtn
	Button_t2872111280 * ___rebetBtn_23;
	// UnityEngine.UI.Button[] UserInfo::bt_chips
	ButtonU5BU5D_t3071100561* ___bt_chips_24;
	// System.Int32[] UserInfo::valueChips
	Int32U5BU5D_t3030399641* ___valueChips_25;

public:
	inline static int32_t get_offset_of__userName_2() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ____userName_2)); }
	inline String_t* get__userName_2() const { return ____userName_2; }
	inline String_t** get_address_of__userName_2() { return &____userName_2; }
	inline void set__userName_2(String_t* value)
	{
		____userName_2 = value;
		Il2CppCodeGenWriteBarrier(&____userName_2, value);
	}

	inline static int32_t get_offset_of__gold_3() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ____gold_3)); }
	inline int32_t get__gold_3() const { return ____gold_3; }
	inline int32_t* get_address_of__gold_3() { return &____gold_3; }
	inline void set__gold_3(int32_t value)
	{
		____gold_3 = value;
	}

	inline static int32_t get_offset_of_panelExpand_4() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___panelExpand_4)); }
	inline bool get_panelExpand_4() const { return ___panelExpand_4; }
	inline bool* get_address_of_panelExpand_4() { return &___panelExpand_4; }
	inline void set_panelExpand_4(bool value)
	{
		___panelExpand_4 = value;
	}

	inline static int32_t get_offset_of_headerHeight_5() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___headerHeight_5)); }
	inline float get_headerHeight_5() const { return ___headerHeight_5; }
	inline float* get_address_of_headerHeight_5() { return &___headerHeight_5; }
	inline void set_headerHeight_5(float value)
	{
		___headerHeight_5 = value;
	}

	inline static int32_t get_offset_of_bottomHeight_6() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___bottomHeight_6)); }
	inline float get_bottomHeight_6() const { return ___bottomHeight_6; }
	inline float* get_address_of_bottomHeight_6() { return &___bottomHeight_6; }
	inline void set_bottomHeight_6(float value)
	{
		___bottomHeight_6 = value;
	}

	inline static int32_t get_offset_of_settingBox_7() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___settingBox_7)); }
	inline RectTransform_t3349966182 * get_settingBox_7() const { return ___settingBox_7; }
	inline RectTransform_t3349966182 ** get_address_of_settingBox_7() { return &___settingBox_7; }
	inline void set_settingBox_7(RectTransform_t3349966182 * value)
	{
		___settingBox_7 = value;
		Il2CppCodeGenWriteBarrier(&___settingBox_7, value);
	}

	inline static int32_t get_offset_of_U3CtotalBetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___U3CtotalBetU3Ek__BackingField_8)); }
	inline int32_t get_U3CtotalBetU3Ek__BackingField_8() const { return ___U3CtotalBetU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CtotalBetU3Ek__BackingField_8() { return &___U3CtotalBetU3Ek__BackingField_8; }
	inline void set_U3CtotalBetU3Ek__BackingField_8(int32_t value)
	{
		___U3CtotalBetU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_url_9() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___url_9)); }
	inline String_t* get_url_9() const { return ___url_9; }
	inline String_t** get_address_of_url_9() { return &___url_9; }
	inline void set_url_9(String_t* value)
	{
		___url_9 = value;
		Il2CppCodeGenWriteBarrier(&___url_9, value);
	}

	inline static int32_t get_offset_of_rawImage_10() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___rawImage_10)); }
	inline Image_t2042527209 * get_rawImage_10() const { return ___rawImage_10; }
	inline Image_t2042527209 ** get_address_of_rawImage_10() { return &___rawImage_10; }
	inline void set_rawImage_10(Image_t2042527209 * value)
	{
		___rawImage_10 = value;
		Il2CppCodeGenWriteBarrier(&___rawImage_10, value);
	}

	inline static int32_t get_offset_of_userTrans_11() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___userTrans_11)); }
	inline RectTransform_t3349966182 * get_userTrans_11() const { return ___userTrans_11; }
	inline RectTransform_t3349966182 ** get_address_of_userTrans_11() { return &___userTrans_11; }
	inline void set_userTrans_11(RectTransform_t3349966182 * value)
	{
		___userTrans_11 = value;
		Il2CppCodeGenWriteBarrier(&___userTrans_11, value);
	}

	inline static int32_t get_offset_of_goldTrans_12() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___goldTrans_12)); }
	inline RectTransform_t3349966182 * get_goldTrans_12() const { return ___goldTrans_12; }
	inline RectTransform_t3349966182 ** get_address_of_goldTrans_12() { return &___goldTrans_12; }
	inline void set_goldTrans_12(RectTransform_t3349966182 * value)
	{
		___goldTrans_12 = value;
		Il2CppCodeGenWriteBarrier(&___goldTrans_12, value);
	}

	inline static int32_t get_offset_of_betTrans_13() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___betTrans_13)); }
	inline RectTransform_t3349966182 * get_betTrans_13() const { return ___betTrans_13; }
	inline RectTransform_t3349966182 ** get_address_of_betTrans_13() { return &___betTrans_13; }
	inline void set_betTrans_13(RectTransform_t3349966182 * value)
	{
		___betTrans_13 = value;
		Il2CppCodeGenWriteBarrier(&___betTrans_13, value);
	}

	inline static int32_t get_offset_of_winTrans_14() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___winTrans_14)); }
	inline RectTransform_t3349966182 * get_winTrans_14() const { return ___winTrans_14; }
	inline RectTransform_t3349966182 ** get_address_of_winTrans_14() { return &___winTrans_14; }
	inline void set_winTrans_14(RectTransform_t3349966182 * value)
	{
		___winTrans_14 = value;
		Il2CppCodeGenWriteBarrier(&___winTrans_14, value);
	}

	inline static int32_t get_offset_of_header_15() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___header_15)); }
	inline RectTransform_t3349966182 * get_header_15() const { return ___header_15; }
	inline RectTransform_t3349966182 ** get_address_of_header_15() { return &___header_15; }
	inline void set_header_15(RectTransform_t3349966182 * value)
	{
		___header_15 = value;
		Il2CppCodeGenWriteBarrier(&___header_15, value);
	}

	inline static int32_t get_offset_of_bottom_16() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___bottom_16)); }
	inline RectTransform_t3349966182 * get_bottom_16() const { return ___bottom_16; }
	inline RectTransform_t3349966182 ** get_address_of_bottom_16() { return &___bottom_16; }
	inline void set_bottom_16(RectTransform_t3349966182 * value)
	{
		___bottom_16 = value;
		Il2CppCodeGenWriteBarrier(&___bottom_16, value);
	}

	inline static int32_t get_offset_of_spinBtn_17() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___spinBtn_17)); }
	inline Button_t2872111280 * get_spinBtn_17() const { return ___spinBtn_17; }
	inline Button_t2872111280 ** get_address_of_spinBtn_17() { return &___spinBtn_17; }
	inline void set_spinBtn_17(Button_t2872111280 * value)
	{
		___spinBtn_17 = value;
		Il2CppCodeGenWriteBarrier(&___spinBtn_17, value);
	}

	inline static int32_t get_offset_of_rebetAndSpinBtn_18() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___rebetAndSpinBtn_18)); }
	inline Button_t2872111280 * get_rebetAndSpinBtn_18() const { return ___rebetAndSpinBtn_18; }
	inline Button_t2872111280 ** get_address_of_rebetAndSpinBtn_18() { return &___rebetAndSpinBtn_18; }
	inline void set_rebetAndSpinBtn_18(Button_t2872111280 * value)
	{
		___rebetAndSpinBtn_18 = value;
		Il2CppCodeGenWriteBarrier(&___rebetAndSpinBtn_18, value);
	}

	inline static int32_t get_offset_of_clearBtn_19() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___clearBtn_19)); }
	inline Button_t2872111280 * get_clearBtn_19() const { return ___clearBtn_19; }
	inline Button_t2872111280 ** get_address_of_clearBtn_19() { return &___clearBtn_19; }
	inline void set_clearBtn_19(Button_t2872111280 * value)
	{
		___clearBtn_19 = value;
		Il2CppCodeGenWriteBarrier(&___clearBtn_19, value);
	}

	inline static int32_t get_offset_of_undoBtn_20() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___undoBtn_20)); }
	inline Button_t2872111280 * get_undoBtn_20() const { return ___undoBtn_20; }
	inline Button_t2872111280 ** get_address_of_undoBtn_20() { return &___undoBtn_20; }
	inline void set_undoBtn_20(Button_t2872111280 * value)
	{
		___undoBtn_20 = value;
		Il2CppCodeGenWriteBarrier(&___undoBtn_20, value);
	}

	inline static int32_t get_offset_of_doubleBtn_21() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___doubleBtn_21)); }
	inline Button_t2872111280 * get_doubleBtn_21() const { return ___doubleBtn_21; }
	inline Button_t2872111280 ** get_address_of_doubleBtn_21() { return &___doubleBtn_21; }
	inline void set_doubleBtn_21(Button_t2872111280 * value)
	{
		___doubleBtn_21 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBtn_21, value);
	}

	inline static int32_t get_offset_of_rebetAndDoubleBtn_22() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___rebetAndDoubleBtn_22)); }
	inline Button_t2872111280 * get_rebetAndDoubleBtn_22() const { return ___rebetAndDoubleBtn_22; }
	inline Button_t2872111280 ** get_address_of_rebetAndDoubleBtn_22() { return &___rebetAndDoubleBtn_22; }
	inline void set_rebetAndDoubleBtn_22(Button_t2872111280 * value)
	{
		___rebetAndDoubleBtn_22 = value;
		Il2CppCodeGenWriteBarrier(&___rebetAndDoubleBtn_22, value);
	}

	inline static int32_t get_offset_of_rebetBtn_23() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___rebetBtn_23)); }
	inline Button_t2872111280 * get_rebetBtn_23() const { return ___rebetBtn_23; }
	inline Button_t2872111280 ** get_address_of_rebetBtn_23() { return &___rebetBtn_23; }
	inline void set_rebetBtn_23(Button_t2872111280 * value)
	{
		___rebetBtn_23 = value;
		Il2CppCodeGenWriteBarrier(&___rebetBtn_23, value);
	}

	inline static int32_t get_offset_of_bt_chips_24() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___bt_chips_24)); }
	inline ButtonU5BU5D_t3071100561* get_bt_chips_24() const { return ___bt_chips_24; }
	inline ButtonU5BU5D_t3071100561** get_address_of_bt_chips_24() { return &___bt_chips_24; }
	inline void set_bt_chips_24(ButtonU5BU5D_t3071100561* value)
	{
		___bt_chips_24 = value;
		Il2CppCodeGenWriteBarrier(&___bt_chips_24, value);
	}

	inline static int32_t get_offset_of_valueChips_25() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___valueChips_25)); }
	inline Int32U5BU5D_t3030399641* get_valueChips_25() const { return ___valueChips_25; }
	inline Int32U5BU5D_t3030399641** get_address_of_valueChips_25() { return &___valueChips_25; }
	inline void set_valueChips_25(Int32U5BU5D_t3030399641* value)
	{
		___valueChips_25 = value;
		Il2CppCodeGenWriteBarrier(&___valueChips_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
