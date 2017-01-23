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
// System.Collections.Generic.List`1<GameLog>
struct List_1_t367330176;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogs
struct  GameLogs_t4281606111  : public Il2CppObject
{
public:
	// System.String GameLogs::id
	String_t* ___id_0;
	// System.Int32 GameLogs::gameid
	int32_t ___gameid_1;
	// System.Int32 GameLogs::tableid
	int32_t ___tableid_2;
	// System.String GameLogs::thisplayername
	String_t* ___thisplayername_3;
	// System.Collections.Generic.List`1<GameLog> GameLogs::logs
	List_1_t367330176 * ___logs_4;
	// System.String GameLogs::ip
	String_t* ___ip_5;
	// System.String GameLogs::time
	String_t* ___time_6;
	// System.Boolean GameLogs::playerReported
	bool ___playerReported_7;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_gameid_1() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___gameid_1)); }
	inline int32_t get_gameid_1() const { return ___gameid_1; }
	inline int32_t* get_address_of_gameid_1() { return &___gameid_1; }
	inline void set_gameid_1(int32_t value)
	{
		___gameid_1 = value;
	}

	inline static int32_t get_offset_of_tableid_2() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___tableid_2)); }
	inline int32_t get_tableid_2() const { return ___tableid_2; }
	inline int32_t* get_address_of_tableid_2() { return &___tableid_2; }
	inline void set_tableid_2(int32_t value)
	{
		___tableid_2 = value;
	}

	inline static int32_t get_offset_of_thisplayername_3() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___thisplayername_3)); }
	inline String_t* get_thisplayername_3() const { return ___thisplayername_3; }
	inline String_t** get_address_of_thisplayername_3() { return &___thisplayername_3; }
	inline void set_thisplayername_3(String_t* value)
	{
		___thisplayername_3 = value;
		Il2CppCodeGenWriteBarrier(&___thisplayername_3, value);
	}

	inline static int32_t get_offset_of_logs_4() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___logs_4)); }
	inline List_1_t367330176 * get_logs_4() const { return ___logs_4; }
	inline List_1_t367330176 ** get_address_of_logs_4() { return &___logs_4; }
	inline void set_logs_4(List_1_t367330176 * value)
	{
		___logs_4 = value;
		Il2CppCodeGenWriteBarrier(&___logs_4, value);
	}

	inline static int32_t get_offset_of_ip_5() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___ip_5)); }
	inline String_t* get_ip_5() const { return ___ip_5; }
	inline String_t** get_address_of_ip_5() { return &___ip_5; }
	inline void set_ip_5(String_t* value)
	{
		___ip_5 = value;
		Il2CppCodeGenWriteBarrier(&___ip_5, value);
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___time_6)); }
	inline String_t* get_time_6() const { return ___time_6; }
	inline String_t** get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(String_t* value)
	{
		___time_6 = value;
		Il2CppCodeGenWriteBarrier(&___time_6, value);
	}

	inline static int32_t get_offset_of_playerReported_7() { return static_cast<int32_t>(offsetof(GameLogs_t4281606111, ___playerReported_7)); }
	inline bool get_playerReported_7() const { return ___playerReported_7; }
	inline bool* get_address_of_playerReported_7() { return &___playerReported_7; }
	inline void set_playerReported_7(bool value)
	{
		___playerReported_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
