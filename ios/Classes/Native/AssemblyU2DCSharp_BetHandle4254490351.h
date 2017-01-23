#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BetHandle
struct  BetHandle_t4254490351  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32[] BetHandle::Values
	Int32U5BU5D_t3030399641* ___Values_2;
	// UnityEngine.UI.Button[] BetHandle::CellShowIfWin
	ButtonU5BU5D_t3071100561* ___CellShowIfWin_3;
	// System.Boolean BetHandle::PlaceChipAtCell
	bool ___PlaceChipAtCell_4;

public:
	inline static int32_t get_offset_of_Values_2() { return static_cast<int32_t>(offsetof(BetHandle_t4254490351, ___Values_2)); }
	inline Int32U5BU5D_t3030399641* get_Values_2() const { return ___Values_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_Values_2() { return &___Values_2; }
	inline void set_Values_2(Int32U5BU5D_t3030399641* value)
	{
		___Values_2 = value;
		Il2CppCodeGenWriteBarrier(&___Values_2, value);
	}

	inline static int32_t get_offset_of_CellShowIfWin_3() { return static_cast<int32_t>(offsetof(BetHandle_t4254490351, ___CellShowIfWin_3)); }
	inline ButtonU5BU5D_t3071100561* get_CellShowIfWin_3() const { return ___CellShowIfWin_3; }
	inline ButtonU5BU5D_t3071100561** get_address_of_CellShowIfWin_3() { return &___CellShowIfWin_3; }
	inline void set_CellShowIfWin_3(ButtonU5BU5D_t3071100561* value)
	{
		___CellShowIfWin_3 = value;
		Il2CppCodeGenWriteBarrier(&___CellShowIfWin_3, value);
	}

	inline static int32_t get_offset_of_PlaceChipAtCell_4() { return static_cast<int32_t>(offsetof(BetHandle_t4254490351, ___PlaceChipAtCell_4)); }
	inline bool get_PlaceChipAtCell_4() const { return ___PlaceChipAtCell_4; }
	inline bool* get_address_of_PlaceChipAtCell_4() { return &___PlaceChipAtCell_4; }
	inline void set_PlaceChipAtCell_4(bool value)
	{
		___PlaceChipAtCell_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
