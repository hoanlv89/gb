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
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TableSnapshotPacket
struct  TableSnapshotPacket_t3456557784  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TableSnapshotPacket::tableid
	int32_t ___tableid_1;
	// System.String com.cubeia.firebase.io.protocol.TableSnapshotPacket::address
	String_t* ___address_2;
	// System.String com.cubeia.firebase.io.protocol.TableSnapshotPacket::name
	String_t* ___name_3;
	// System.Int16 com.cubeia.firebase.io.protocol.TableSnapshotPacket::capacity
	int16_t ___capacity_4;
	// System.Int16 com.cubeia.firebase.io.protocol.TableSnapshotPacket::seated
	int16_t ___seated_5;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.TableSnapshotPacket::parameters
	List_1_t890982683 * ___parameters_6;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier(&___address_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___capacity_4)); }
	inline int16_t get_capacity_4() const { return ___capacity_4; }
	inline int16_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int16_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_seated_5() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___seated_5)); }
	inline int16_t get_seated_5() const { return ___seated_5; }
	inline int16_t* get_address_of_seated_5() { return &___seated_5; }
	inline void set_seated_5(int16_t value)
	{
		___seated_5 = value;
	}

	inline static int32_t get_offset_of_parameters_6() { return static_cast<int32_t>(offsetof(TableSnapshotPacket_t3456557784, ___parameters_6)); }
	inline List_1_t890982683 * get_parameters_6() const { return ___parameters_6; }
	inline List_1_t890982683 ** get_address_of_parameters_6() { return &___parameters_6; }
	inline void set_parameters_6(List_1_t890982683 * value)
	{
		___parameters_6 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
