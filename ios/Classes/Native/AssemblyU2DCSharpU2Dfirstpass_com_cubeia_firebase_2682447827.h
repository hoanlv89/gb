#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.TableUpdatePacket
struct  TableUpdatePacket_t2682447827  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TableUpdatePacket::tableid
	int32_t ___tableid_1;
	// System.Int16 com.cubeia.firebase.io.protocol.TableUpdatePacket::seated
	int16_t ___seated_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.TableUpdatePacket::parameters
	List_1_t890982683 * ___parameters_3;
	// System.String[] com.cubeia.firebase.io.protocol.TableUpdatePacket::removedParams
	StringU5BU5D_t1642385972* ___removedParams_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(TableUpdatePacket_t2682447827, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_seated_2() { return static_cast<int32_t>(offsetof(TableUpdatePacket_t2682447827, ___seated_2)); }
	inline int16_t get_seated_2() const { return ___seated_2; }
	inline int16_t* get_address_of_seated_2() { return &___seated_2; }
	inline void set_seated_2(int16_t value)
	{
		___seated_2 = value;
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(TableUpdatePacket_t2682447827, ___parameters_3)); }
	inline List_1_t890982683 * get_parameters_3() const { return ___parameters_3; }
	inline List_1_t890982683 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(List_1_t890982683 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}

	inline static int32_t get_offset_of_removedParams_4() { return static_cast<int32_t>(offsetof(TableUpdatePacket_t2682447827, ___removedParams_4)); }
	inline StringU5BU5D_t1642385972* get_removedParams_4() const { return ___removedParams_4; }
	inline StringU5BU5D_t1642385972** get_address_of_removedParams_4() { return &___removedParams_4; }
	inline void set_removedParams_4(StringU5BU5D_t1642385972* value)
	{
		___removedParams_4 = value;
		Il2CppCodeGenWriteBarrier(&___removedParams_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
