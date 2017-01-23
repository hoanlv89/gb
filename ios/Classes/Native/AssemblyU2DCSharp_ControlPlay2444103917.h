#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// ControlNumberButton
struct ControlNumberButton_t603493868;
// TransMatrixPos
struct TransMatrixPos_t685997475;
// SlotsGameScene
struct SlotsGameScene_t2559174817;
// ColorLine
struct ColorLine_t2724089185;
// Item
struct Item_t2440468191;
// User
struct User_t719925459;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_t3030399642;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.RectTransform[0...,0...]
struct RectTransformU5BU2CU5D_t3948421700;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3948421699;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t2719087314;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "AssemblyU2DCSharp_SlotomaniaScene1881248465.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControlPlay
struct  ControlPlay_t2444103917  : public SlotomaniaScene_t1881248465
{
public:
	// UnityEngine.RectTransform ControlPlay::test
	RectTransform_t3349966182 * ___test_48;
	// ControlNumberButton ControlPlay::ct
	ControlNumberButton_t603493868 * ___ct_49;
	// TransMatrixPos ControlPlay::transMatrixpos
	TransMatrixPos_t685997475 * ___transMatrixpos_50;
	// SlotsGameScene ControlPlay::slotsence
	SlotsGameScene_t2559174817 * ___slotsence_51;
	// ColorLine ControlPlay::color
	ColorLine_t2724089185 * ___color_52;
	// Item ControlPlay::item
	Item_t2440468191 * ___item_53;
	// User ControlPlay::user
	User_t719925459 * ___user_54;
	// System.Int32 ControlPlay::numberItemCreat
	int32_t ___numberItemCreat_55;
	// System.Int32 ControlPlay::timeControl
	int32_t ___timeControl_56;
	// System.Int32 ControlPlay::totalGold
	int32_t ___totalGold_58;
	// System.Boolean ControlPlay::stopSpin
	bool ___stopSpin_63;
	// System.Boolean ControlPlay::auto
	bool ___auto_64;
	// System.Boolean ControlPlay::isRun
	bool ___isRun_65;
	// System.Boolean ControlPlay::firstSpin
	bool ___firstSpin_66;
	// System.Boolean ControlPlay::check
	bool ___check_67;
	// System.Boolean ControlPlay::checkScatter
	bool ___checkScatter_69;
	// System.Boolean ControlPlay::isScatter
	bool ___isScatter_70;
	// System.Int32 ControlPlay::countScatter
	int32_t ___countScatter_71;
	// System.Boolean ControlPlay::finishRun
	bool ___finishRun_72;
	// System.Single ControlPlay::dTime
	float ___dTime_73;
	// System.Single ControlPlay::startSpinTime
	float ___startSpinTime_74;
	// System.Int32[] ControlPlay::itemCreat
	Int32U5BU5D_t3030399641* ___itemCreat_76;
	// System.Int32[] ControlPlay::arrLineEf
	Int32U5BU5D_t3030399641* ___arrLineEf_77;
	// System.Int32[0...,0...] ControlPlay::posMatrix
	Int32U5BU2CU5D_t3030399642* ___posMatrix_81;
	// UnityEngine.RectTransform ControlPlay::border
	RectTransform_t3349966182 * ___border_82;
	// UnityEngine.RectTransform[0...,0...] ControlPlay::listCreat
	RectTransformU5BU2CU5D_t3948421700* ___listCreat_83;
	// UnityEngine.RectTransform[0...,0...] ControlPlay::ldem
	RectTransformU5BU2CU5D_t3948421700* ___ldem_84;
	// UnityEngine.RectTransform[] ControlPlay::listLine
	RectTransformU5BU5D_t3948421699* ___listLine_85;
	// UnityEngine.RectTransform[0...,0...] ControlPlay::listBorder
	RectTransformU5BU2CU5D_t3948421700* ___listBorder_86;
	// UnityEngine.RectTransform[0...,0...] ControlPlay::listNen
	RectTransformU5BU2CU5D_t3948421700* ___listNen_87;
	// UnityEngine.RectTransform[0...,0...] ControlPlay::listAnim
	RectTransformU5BU2CU5D_t3948421700* ___listAnim_88;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> ControlPlay::listBorderBonus
	List_1_t2719087314 * ___listBorderBonus_89;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> ControlPlay::listAnimBonus
	List_1_t2719087314 * ___listAnimBonus_90;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> ControlPlay::listBorderScatter
	List_1_t2719087314 * ___listBorderScatter_91;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> ControlPlay::listAnimScatter
	List_1_t2719087314 * ___listAnimScatter_92;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ControlPlay::listButtonNumber
	List_1_t1125654279 * ___listButtonNumber_93;
	// UnityEngine.UI.Button[] ControlPlay::lButton
	ButtonU5BU5D_t3071100561* ___lButton_94;
	// UnityEngine.UI.Text ControlPlay::gold
	Text_t356221433 * ___gold_95;
	// System.Boolean ControlPlay::mousedown
	bool ___mousedown_96;
	// System.Single ControlPlay::timeMousedown
	float ___timeMousedown_97;
	// System.Single ControlPlay::timeDelayAuto
	float ___timeDelayAuto_98;
	// System.Collections.IEnumerator ControlPlay::controlAfterSpin
	Il2CppObject * ___controlAfterSpin_99;
	// System.Collections.IEnumerator ControlPlay::IEautospin
	Il2CppObject * ___IEautospin_100;
	// System.Collections.IEnumerator ControlPlay::IEscatter
	Il2CppObject * ___IEscatter_101;

public:
	inline static int32_t get_offset_of_test_48() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___test_48)); }
	inline RectTransform_t3349966182 * get_test_48() const { return ___test_48; }
	inline RectTransform_t3349966182 ** get_address_of_test_48() { return &___test_48; }
	inline void set_test_48(RectTransform_t3349966182 * value)
	{
		___test_48 = value;
		Il2CppCodeGenWriteBarrier(&___test_48, value);
	}

	inline static int32_t get_offset_of_ct_49() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___ct_49)); }
	inline ControlNumberButton_t603493868 * get_ct_49() const { return ___ct_49; }
	inline ControlNumberButton_t603493868 ** get_address_of_ct_49() { return &___ct_49; }
	inline void set_ct_49(ControlNumberButton_t603493868 * value)
	{
		___ct_49 = value;
		Il2CppCodeGenWriteBarrier(&___ct_49, value);
	}

	inline static int32_t get_offset_of_transMatrixpos_50() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___transMatrixpos_50)); }
	inline TransMatrixPos_t685997475 * get_transMatrixpos_50() const { return ___transMatrixpos_50; }
	inline TransMatrixPos_t685997475 ** get_address_of_transMatrixpos_50() { return &___transMatrixpos_50; }
	inline void set_transMatrixpos_50(TransMatrixPos_t685997475 * value)
	{
		___transMatrixpos_50 = value;
		Il2CppCodeGenWriteBarrier(&___transMatrixpos_50, value);
	}

	inline static int32_t get_offset_of_slotsence_51() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___slotsence_51)); }
	inline SlotsGameScene_t2559174817 * get_slotsence_51() const { return ___slotsence_51; }
	inline SlotsGameScene_t2559174817 ** get_address_of_slotsence_51() { return &___slotsence_51; }
	inline void set_slotsence_51(SlotsGameScene_t2559174817 * value)
	{
		___slotsence_51 = value;
		Il2CppCodeGenWriteBarrier(&___slotsence_51, value);
	}

	inline static int32_t get_offset_of_color_52() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___color_52)); }
	inline ColorLine_t2724089185 * get_color_52() const { return ___color_52; }
	inline ColorLine_t2724089185 ** get_address_of_color_52() { return &___color_52; }
	inline void set_color_52(ColorLine_t2724089185 * value)
	{
		___color_52 = value;
		Il2CppCodeGenWriteBarrier(&___color_52, value);
	}

	inline static int32_t get_offset_of_item_53() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___item_53)); }
	inline Item_t2440468191 * get_item_53() const { return ___item_53; }
	inline Item_t2440468191 ** get_address_of_item_53() { return &___item_53; }
	inline void set_item_53(Item_t2440468191 * value)
	{
		___item_53 = value;
		Il2CppCodeGenWriteBarrier(&___item_53, value);
	}

	inline static int32_t get_offset_of_user_54() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___user_54)); }
	inline User_t719925459 * get_user_54() const { return ___user_54; }
	inline User_t719925459 ** get_address_of_user_54() { return &___user_54; }
	inline void set_user_54(User_t719925459 * value)
	{
		___user_54 = value;
		Il2CppCodeGenWriteBarrier(&___user_54, value);
	}

	inline static int32_t get_offset_of_numberItemCreat_55() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___numberItemCreat_55)); }
	inline int32_t get_numberItemCreat_55() const { return ___numberItemCreat_55; }
	inline int32_t* get_address_of_numberItemCreat_55() { return &___numberItemCreat_55; }
	inline void set_numberItemCreat_55(int32_t value)
	{
		___numberItemCreat_55 = value;
	}

	inline static int32_t get_offset_of_timeControl_56() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___timeControl_56)); }
	inline int32_t get_timeControl_56() const { return ___timeControl_56; }
	inline int32_t* get_address_of_timeControl_56() { return &___timeControl_56; }
	inline void set_timeControl_56(int32_t value)
	{
		___timeControl_56 = value;
	}

	inline static int32_t get_offset_of_totalGold_58() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___totalGold_58)); }
	inline int32_t get_totalGold_58() const { return ___totalGold_58; }
	inline int32_t* get_address_of_totalGold_58() { return &___totalGold_58; }
	inline void set_totalGold_58(int32_t value)
	{
		___totalGold_58 = value;
	}

	inline static int32_t get_offset_of_stopSpin_63() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___stopSpin_63)); }
	inline bool get_stopSpin_63() const { return ___stopSpin_63; }
	inline bool* get_address_of_stopSpin_63() { return &___stopSpin_63; }
	inline void set_stopSpin_63(bool value)
	{
		___stopSpin_63 = value;
	}

	inline static int32_t get_offset_of_auto_64() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___auto_64)); }
	inline bool get_auto_64() const { return ___auto_64; }
	inline bool* get_address_of_auto_64() { return &___auto_64; }
	inline void set_auto_64(bool value)
	{
		___auto_64 = value;
	}

	inline static int32_t get_offset_of_isRun_65() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___isRun_65)); }
	inline bool get_isRun_65() const { return ___isRun_65; }
	inline bool* get_address_of_isRun_65() { return &___isRun_65; }
	inline void set_isRun_65(bool value)
	{
		___isRun_65 = value;
	}

	inline static int32_t get_offset_of_firstSpin_66() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___firstSpin_66)); }
	inline bool get_firstSpin_66() const { return ___firstSpin_66; }
	inline bool* get_address_of_firstSpin_66() { return &___firstSpin_66; }
	inline void set_firstSpin_66(bool value)
	{
		___firstSpin_66 = value;
	}

	inline static int32_t get_offset_of_check_67() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___check_67)); }
	inline bool get_check_67() const { return ___check_67; }
	inline bool* get_address_of_check_67() { return &___check_67; }
	inline void set_check_67(bool value)
	{
		___check_67 = value;
	}

	inline static int32_t get_offset_of_checkScatter_69() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___checkScatter_69)); }
	inline bool get_checkScatter_69() const { return ___checkScatter_69; }
	inline bool* get_address_of_checkScatter_69() { return &___checkScatter_69; }
	inline void set_checkScatter_69(bool value)
	{
		___checkScatter_69 = value;
	}

	inline static int32_t get_offset_of_isScatter_70() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___isScatter_70)); }
	inline bool get_isScatter_70() const { return ___isScatter_70; }
	inline bool* get_address_of_isScatter_70() { return &___isScatter_70; }
	inline void set_isScatter_70(bool value)
	{
		___isScatter_70 = value;
	}

	inline static int32_t get_offset_of_countScatter_71() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___countScatter_71)); }
	inline int32_t get_countScatter_71() const { return ___countScatter_71; }
	inline int32_t* get_address_of_countScatter_71() { return &___countScatter_71; }
	inline void set_countScatter_71(int32_t value)
	{
		___countScatter_71 = value;
	}

	inline static int32_t get_offset_of_finishRun_72() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___finishRun_72)); }
	inline bool get_finishRun_72() const { return ___finishRun_72; }
	inline bool* get_address_of_finishRun_72() { return &___finishRun_72; }
	inline void set_finishRun_72(bool value)
	{
		___finishRun_72 = value;
	}

	inline static int32_t get_offset_of_dTime_73() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___dTime_73)); }
	inline float get_dTime_73() const { return ___dTime_73; }
	inline float* get_address_of_dTime_73() { return &___dTime_73; }
	inline void set_dTime_73(float value)
	{
		___dTime_73 = value;
	}

	inline static int32_t get_offset_of_startSpinTime_74() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___startSpinTime_74)); }
	inline float get_startSpinTime_74() const { return ___startSpinTime_74; }
	inline float* get_address_of_startSpinTime_74() { return &___startSpinTime_74; }
	inline void set_startSpinTime_74(float value)
	{
		___startSpinTime_74 = value;
	}

	inline static int32_t get_offset_of_itemCreat_76() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___itemCreat_76)); }
	inline Int32U5BU5D_t3030399641* get_itemCreat_76() const { return ___itemCreat_76; }
	inline Int32U5BU5D_t3030399641** get_address_of_itemCreat_76() { return &___itemCreat_76; }
	inline void set_itemCreat_76(Int32U5BU5D_t3030399641* value)
	{
		___itemCreat_76 = value;
		Il2CppCodeGenWriteBarrier(&___itemCreat_76, value);
	}

	inline static int32_t get_offset_of_arrLineEf_77() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___arrLineEf_77)); }
	inline Int32U5BU5D_t3030399641* get_arrLineEf_77() const { return ___arrLineEf_77; }
	inline Int32U5BU5D_t3030399641** get_address_of_arrLineEf_77() { return &___arrLineEf_77; }
	inline void set_arrLineEf_77(Int32U5BU5D_t3030399641* value)
	{
		___arrLineEf_77 = value;
		Il2CppCodeGenWriteBarrier(&___arrLineEf_77, value);
	}

	inline static int32_t get_offset_of_posMatrix_81() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___posMatrix_81)); }
	inline Int32U5BU2CU5D_t3030399642* get_posMatrix_81() const { return ___posMatrix_81; }
	inline Int32U5BU2CU5D_t3030399642** get_address_of_posMatrix_81() { return &___posMatrix_81; }
	inline void set_posMatrix_81(Int32U5BU2CU5D_t3030399642* value)
	{
		___posMatrix_81 = value;
		Il2CppCodeGenWriteBarrier(&___posMatrix_81, value);
	}

	inline static int32_t get_offset_of_border_82() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___border_82)); }
	inline RectTransform_t3349966182 * get_border_82() const { return ___border_82; }
	inline RectTransform_t3349966182 ** get_address_of_border_82() { return &___border_82; }
	inline void set_border_82(RectTransform_t3349966182 * value)
	{
		___border_82 = value;
		Il2CppCodeGenWriteBarrier(&___border_82, value);
	}

	inline static int32_t get_offset_of_listCreat_83() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listCreat_83)); }
	inline RectTransformU5BU2CU5D_t3948421700* get_listCreat_83() const { return ___listCreat_83; }
	inline RectTransformU5BU2CU5D_t3948421700** get_address_of_listCreat_83() { return &___listCreat_83; }
	inline void set_listCreat_83(RectTransformU5BU2CU5D_t3948421700* value)
	{
		___listCreat_83 = value;
		Il2CppCodeGenWriteBarrier(&___listCreat_83, value);
	}

	inline static int32_t get_offset_of_ldem_84() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___ldem_84)); }
	inline RectTransformU5BU2CU5D_t3948421700* get_ldem_84() const { return ___ldem_84; }
	inline RectTransformU5BU2CU5D_t3948421700** get_address_of_ldem_84() { return &___ldem_84; }
	inline void set_ldem_84(RectTransformU5BU2CU5D_t3948421700* value)
	{
		___ldem_84 = value;
		Il2CppCodeGenWriteBarrier(&___ldem_84, value);
	}

	inline static int32_t get_offset_of_listLine_85() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listLine_85)); }
	inline RectTransformU5BU5D_t3948421699* get_listLine_85() const { return ___listLine_85; }
	inline RectTransformU5BU5D_t3948421699** get_address_of_listLine_85() { return &___listLine_85; }
	inline void set_listLine_85(RectTransformU5BU5D_t3948421699* value)
	{
		___listLine_85 = value;
		Il2CppCodeGenWriteBarrier(&___listLine_85, value);
	}

	inline static int32_t get_offset_of_listBorder_86() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listBorder_86)); }
	inline RectTransformU5BU2CU5D_t3948421700* get_listBorder_86() const { return ___listBorder_86; }
	inline RectTransformU5BU2CU5D_t3948421700** get_address_of_listBorder_86() { return &___listBorder_86; }
	inline void set_listBorder_86(RectTransformU5BU2CU5D_t3948421700* value)
	{
		___listBorder_86 = value;
		Il2CppCodeGenWriteBarrier(&___listBorder_86, value);
	}

	inline static int32_t get_offset_of_listNen_87() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listNen_87)); }
	inline RectTransformU5BU2CU5D_t3948421700* get_listNen_87() const { return ___listNen_87; }
	inline RectTransformU5BU2CU5D_t3948421700** get_address_of_listNen_87() { return &___listNen_87; }
	inline void set_listNen_87(RectTransformU5BU2CU5D_t3948421700* value)
	{
		___listNen_87 = value;
		Il2CppCodeGenWriteBarrier(&___listNen_87, value);
	}

	inline static int32_t get_offset_of_listAnim_88() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listAnim_88)); }
	inline RectTransformU5BU2CU5D_t3948421700* get_listAnim_88() const { return ___listAnim_88; }
	inline RectTransformU5BU2CU5D_t3948421700** get_address_of_listAnim_88() { return &___listAnim_88; }
	inline void set_listAnim_88(RectTransformU5BU2CU5D_t3948421700* value)
	{
		___listAnim_88 = value;
		Il2CppCodeGenWriteBarrier(&___listAnim_88, value);
	}

	inline static int32_t get_offset_of_listBorderBonus_89() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listBorderBonus_89)); }
	inline List_1_t2719087314 * get_listBorderBonus_89() const { return ___listBorderBonus_89; }
	inline List_1_t2719087314 ** get_address_of_listBorderBonus_89() { return &___listBorderBonus_89; }
	inline void set_listBorderBonus_89(List_1_t2719087314 * value)
	{
		___listBorderBonus_89 = value;
		Il2CppCodeGenWriteBarrier(&___listBorderBonus_89, value);
	}

	inline static int32_t get_offset_of_listAnimBonus_90() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listAnimBonus_90)); }
	inline List_1_t2719087314 * get_listAnimBonus_90() const { return ___listAnimBonus_90; }
	inline List_1_t2719087314 ** get_address_of_listAnimBonus_90() { return &___listAnimBonus_90; }
	inline void set_listAnimBonus_90(List_1_t2719087314 * value)
	{
		___listAnimBonus_90 = value;
		Il2CppCodeGenWriteBarrier(&___listAnimBonus_90, value);
	}

	inline static int32_t get_offset_of_listBorderScatter_91() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listBorderScatter_91)); }
	inline List_1_t2719087314 * get_listBorderScatter_91() const { return ___listBorderScatter_91; }
	inline List_1_t2719087314 ** get_address_of_listBorderScatter_91() { return &___listBorderScatter_91; }
	inline void set_listBorderScatter_91(List_1_t2719087314 * value)
	{
		___listBorderScatter_91 = value;
		Il2CppCodeGenWriteBarrier(&___listBorderScatter_91, value);
	}

	inline static int32_t get_offset_of_listAnimScatter_92() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listAnimScatter_92)); }
	inline List_1_t2719087314 * get_listAnimScatter_92() const { return ___listAnimScatter_92; }
	inline List_1_t2719087314 ** get_address_of_listAnimScatter_92() { return &___listAnimScatter_92; }
	inline void set_listAnimScatter_92(List_1_t2719087314 * value)
	{
		___listAnimScatter_92 = value;
		Il2CppCodeGenWriteBarrier(&___listAnimScatter_92, value);
	}

	inline static int32_t get_offset_of_listButtonNumber_93() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___listButtonNumber_93)); }
	inline List_1_t1125654279 * get_listButtonNumber_93() const { return ___listButtonNumber_93; }
	inline List_1_t1125654279 ** get_address_of_listButtonNumber_93() { return &___listButtonNumber_93; }
	inline void set_listButtonNumber_93(List_1_t1125654279 * value)
	{
		___listButtonNumber_93 = value;
		Il2CppCodeGenWriteBarrier(&___listButtonNumber_93, value);
	}

	inline static int32_t get_offset_of_lButton_94() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___lButton_94)); }
	inline ButtonU5BU5D_t3071100561* get_lButton_94() const { return ___lButton_94; }
	inline ButtonU5BU5D_t3071100561** get_address_of_lButton_94() { return &___lButton_94; }
	inline void set_lButton_94(ButtonU5BU5D_t3071100561* value)
	{
		___lButton_94 = value;
		Il2CppCodeGenWriteBarrier(&___lButton_94, value);
	}

	inline static int32_t get_offset_of_gold_95() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___gold_95)); }
	inline Text_t356221433 * get_gold_95() const { return ___gold_95; }
	inline Text_t356221433 ** get_address_of_gold_95() { return &___gold_95; }
	inline void set_gold_95(Text_t356221433 * value)
	{
		___gold_95 = value;
		Il2CppCodeGenWriteBarrier(&___gold_95, value);
	}

	inline static int32_t get_offset_of_mousedown_96() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___mousedown_96)); }
	inline bool get_mousedown_96() const { return ___mousedown_96; }
	inline bool* get_address_of_mousedown_96() { return &___mousedown_96; }
	inline void set_mousedown_96(bool value)
	{
		___mousedown_96 = value;
	}

	inline static int32_t get_offset_of_timeMousedown_97() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___timeMousedown_97)); }
	inline float get_timeMousedown_97() const { return ___timeMousedown_97; }
	inline float* get_address_of_timeMousedown_97() { return &___timeMousedown_97; }
	inline void set_timeMousedown_97(float value)
	{
		___timeMousedown_97 = value;
	}

	inline static int32_t get_offset_of_timeDelayAuto_98() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___timeDelayAuto_98)); }
	inline float get_timeDelayAuto_98() const { return ___timeDelayAuto_98; }
	inline float* get_address_of_timeDelayAuto_98() { return &___timeDelayAuto_98; }
	inline void set_timeDelayAuto_98(float value)
	{
		___timeDelayAuto_98 = value;
	}

	inline static int32_t get_offset_of_controlAfterSpin_99() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___controlAfterSpin_99)); }
	inline Il2CppObject * get_controlAfterSpin_99() const { return ___controlAfterSpin_99; }
	inline Il2CppObject ** get_address_of_controlAfterSpin_99() { return &___controlAfterSpin_99; }
	inline void set_controlAfterSpin_99(Il2CppObject * value)
	{
		___controlAfterSpin_99 = value;
		Il2CppCodeGenWriteBarrier(&___controlAfterSpin_99, value);
	}

	inline static int32_t get_offset_of_IEautospin_100() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___IEautospin_100)); }
	inline Il2CppObject * get_IEautospin_100() const { return ___IEautospin_100; }
	inline Il2CppObject ** get_address_of_IEautospin_100() { return &___IEautospin_100; }
	inline void set_IEautospin_100(Il2CppObject * value)
	{
		___IEautospin_100 = value;
		Il2CppCodeGenWriteBarrier(&___IEautospin_100, value);
	}

	inline static int32_t get_offset_of_IEscatter_101() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917, ___IEscatter_101)); }
	inline Il2CppObject * get_IEscatter_101() const { return ___IEscatter_101; }
	inline Il2CppObject ** get_address_of_IEscatter_101() { return &___IEscatter_101; }
	inline void set_IEscatter_101(Il2CppObject * value)
	{
		___IEscatter_101 = value;
		Il2CppCodeGenWriteBarrier(&___IEscatter_101, value);
	}
};

struct ControlPlay_t2444103917_StaticFields
{
public:
	// System.Int32 ControlPlay::totalWin
	int32_t ___totalWin_57;
	// System.Int32 ControlPlay::send_nLine
	int32_t ___send_nLine_59;
	// System.Boolean ControlPlay::checkRun
	bool ___checkRun_60;
	// System.Boolean ControlPlay::checkAuto
	bool ___checkAuto_61;
	// System.Boolean ControlPlay::endGameMini
	bool ___endGameMini_62;
	// System.Boolean ControlPlay::checkBonus
	bool ___checkBonus_68;
	// System.Int32[0...,0...] ControlPlay::resultsMatrix
	Int32U5BU2CU5D_t3030399642* ___resultsMatrix_75;
	// System.Int32 ControlPlay::soduong
	int32_t ___soduong_78;
	// System.Int32[] ControlPlay::numberLine
	Int32U5BU5D_t3030399641* ___numberLine_79;
	// System.Int32[] ControlPlay::soluong
	Int32U5BU5D_t3030399641* ___soluong_80;

public:
	inline static int32_t get_offset_of_totalWin_57() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___totalWin_57)); }
	inline int32_t get_totalWin_57() const { return ___totalWin_57; }
	inline int32_t* get_address_of_totalWin_57() { return &___totalWin_57; }
	inline void set_totalWin_57(int32_t value)
	{
		___totalWin_57 = value;
	}

	inline static int32_t get_offset_of_send_nLine_59() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___send_nLine_59)); }
	inline int32_t get_send_nLine_59() const { return ___send_nLine_59; }
	inline int32_t* get_address_of_send_nLine_59() { return &___send_nLine_59; }
	inline void set_send_nLine_59(int32_t value)
	{
		___send_nLine_59 = value;
	}

	inline static int32_t get_offset_of_checkRun_60() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___checkRun_60)); }
	inline bool get_checkRun_60() const { return ___checkRun_60; }
	inline bool* get_address_of_checkRun_60() { return &___checkRun_60; }
	inline void set_checkRun_60(bool value)
	{
		___checkRun_60 = value;
	}

	inline static int32_t get_offset_of_checkAuto_61() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___checkAuto_61)); }
	inline bool get_checkAuto_61() const { return ___checkAuto_61; }
	inline bool* get_address_of_checkAuto_61() { return &___checkAuto_61; }
	inline void set_checkAuto_61(bool value)
	{
		___checkAuto_61 = value;
	}

	inline static int32_t get_offset_of_endGameMini_62() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___endGameMini_62)); }
	inline bool get_endGameMini_62() const { return ___endGameMini_62; }
	inline bool* get_address_of_endGameMini_62() { return &___endGameMini_62; }
	inline void set_endGameMini_62(bool value)
	{
		___endGameMini_62 = value;
	}

	inline static int32_t get_offset_of_checkBonus_68() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___checkBonus_68)); }
	inline bool get_checkBonus_68() const { return ___checkBonus_68; }
	inline bool* get_address_of_checkBonus_68() { return &___checkBonus_68; }
	inline void set_checkBonus_68(bool value)
	{
		___checkBonus_68 = value;
	}

	inline static int32_t get_offset_of_resultsMatrix_75() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___resultsMatrix_75)); }
	inline Int32U5BU2CU5D_t3030399642* get_resultsMatrix_75() const { return ___resultsMatrix_75; }
	inline Int32U5BU2CU5D_t3030399642** get_address_of_resultsMatrix_75() { return &___resultsMatrix_75; }
	inline void set_resultsMatrix_75(Int32U5BU2CU5D_t3030399642* value)
	{
		___resultsMatrix_75 = value;
		Il2CppCodeGenWriteBarrier(&___resultsMatrix_75, value);
	}

	inline static int32_t get_offset_of_soduong_78() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___soduong_78)); }
	inline int32_t get_soduong_78() const { return ___soduong_78; }
	inline int32_t* get_address_of_soduong_78() { return &___soduong_78; }
	inline void set_soduong_78(int32_t value)
	{
		___soduong_78 = value;
	}

	inline static int32_t get_offset_of_numberLine_79() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___numberLine_79)); }
	inline Int32U5BU5D_t3030399641* get_numberLine_79() const { return ___numberLine_79; }
	inline Int32U5BU5D_t3030399641** get_address_of_numberLine_79() { return &___numberLine_79; }
	inline void set_numberLine_79(Int32U5BU5D_t3030399641* value)
	{
		___numberLine_79 = value;
		Il2CppCodeGenWriteBarrier(&___numberLine_79, value);
	}

	inline static int32_t get_offset_of_soluong_80() { return static_cast<int32_t>(offsetof(ControlPlay_t2444103917_StaticFields, ___soluong_80)); }
	inline Int32U5BU5D_t3030399641* get_soluong_80() const { return ___soluong_80; }
	inline Int32U5BU5D_t3030399641** get_address_of_soluong_80() { return &___soluong_80; }
	inline void set_soluong_80(Int32U5BU5D_t3030399641* value)
	{
		___soluong_80 = value;
		Il2CppCodeGenWriteBarrier(&___soluong_80, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
