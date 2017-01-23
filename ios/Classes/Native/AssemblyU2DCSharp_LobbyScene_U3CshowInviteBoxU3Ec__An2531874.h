#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SDialog
struct SDialog_t1510781833;
// LobbyScene
struct LobbyScene_t2733604496;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LobbyScene/<showInviteBox>c__AnonStorey1
struct  U3CshowInviteBoxU3Ec__AnonStorey1_t2531874  : public Il2CppObject
{
public:
	// SDialog LobbyScene/<showInviteBox>c__AnonStorey1::dialog
	SDialog_t1510781833 * ___dialog_0;
	// System.Int32 LobbyScene/<showInviteBox>c__AnonStorey1::tid
	int32_t ___tid_1;
	// LobbyScene LobbyScene/<showInviteBox>c__AnonStorey1::$this
	LobbyScene_t2733604496 * ___U24this_2;

public:
	inline static int32_t get_offset_of_dialog_0() { return static_cast<int32_t>(offsetof(U3CshowInviteBoxU3Ec__AnonStorey1_t2531874, ___dialog_0)); }
	inline SDialog_t1510781833 * get_dialog_0() const { return ___dialog_0; }
	inline SDialog_t1510781833 ** get_address_of_dialog_0() { return &___dialog_0; }
	inline void set_dialog_0(SDialog_t1510781833 * value)
	{
		___dialog_0 = value;
		Il2CppCodeGenWriteBarrier(&___dialog_0, value);
	}

	inline static int32_t get_offset_of_tid_1() { return static_cast<int32_t>(offsetof(U3CshowInviteBoxU3Ec__AnonStorey1_t2531874, ___tid_1)); }
	inline int32_t get_tid_1() const { return ___tid_1; }
	inline int32_t* get_address_of_tid_1() { return &___tid_1; }
	inline void set_tid_1(int32_t value)
	{
		___tid_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CshowInviteBoxU3Ec__AnonStorey1_t2531874, ___U24this_2)); }
	inline LobbyScene_t2733604496 * get_U24this_2() const { return ___U24this_2; }
	inline LobbyScene_t2733604496 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(LobbyScene_t2733604496 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
