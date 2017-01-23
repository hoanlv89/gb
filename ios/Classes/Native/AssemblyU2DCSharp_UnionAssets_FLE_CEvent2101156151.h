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
// System.Object
struct Il2CppObject;
// UnionAssets.FLE.IDispatcher
struct IDispatcher_t2183731088;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnionAssets.FLE.CEvent
struct  CEvent_t2101156151  : public Il2CppObject
{
public:
	// System.Int32 UnionAssets.FLE.CEvent::_id
	int32_t ____id_0;
	// System.String UnionAssets.FLE.CEvent::_name
	String_t* ____name_1;
	// System.Object UnionAssets.FLE.CEvent::_data
	Il2CppObject * ____data_2;
	// UnionAssets.FLE.IDispatcher UnionAssets.FLE.CEvent::_dispatcher
	Il2CppObject * ____dispatcher_3;
	// System.Boolean UnionAssets.FLE.CEvent::_isStopped
	bool ____isStopped_4;
	// System.Boolean UnionAssets.FLE.CEvent::_isLocked
	bool ____isLocked_5;
	// System.Object UnionAssets.FLE.CEvent::_currentTarget
	Il2CppObject * ____currentTarget_6;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____id_0)); }
	inline int32_t get__id_0() const { return ____id_0; }
	inline int32_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int32_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier(&____name_1, value);
	}

	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____data_2)); }
	inline Il2CppObject * get__data_2() const { return ____data_2; }
	inline Il2CppObject ** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(Il2CppObject * value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier(&____data_2, value);
	}

	inline static int32_t get_offset_of__dispatcher_3() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____dispatcher_3)); }
	inline Il2CppObject * get__dispatcher_3() const { return ____dispatcher_3; }
	inline Il2CppObject ** get_address_of__dispatcher_3() { return &____dispatcher_3; }
	inline void set__dispatcher_3(Il2CppObject * value)
	{
		____dispatcher_3 = value;
		Il2CppCodeGenWriteBarrier(&____dispatcher_3, value);
	}

	inline static int32_t get_offset_of__isStopped_4() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____isStopped_4)); }
	inline bool get__isStopped_4() const { return ____isStopped_4; }
	inline bool* get_address_of__isStopped_4() { return &____isStopped_4; }
	inline void set__isStopped_4(bool value)
	{
		____isStopped_4 = value;
	}

	inline static int32_t get_offset_of__isLocked_5() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____isLocked_5)); }
	inline bool get__isLocked_5() const { return ____isLocked_5; }
	inline bool* get_address_of__isLocked_5() { return &____isLocked_5; }
	inline void set__isLocked_5(bool value)
	{
		____isLocked_5 = value;
	}

	inline static int32_t get_offset_of__currentTarget_6() { return static_cast<int32_t>(offsetof(CEvent_t2101156151, ____currentTarget_6)); }
	inline Il2CppObject * get__currentTarget_6() const { return ____currentTarget_6; }
	inline Il2CppObject ** get_address_of__currentTarget_6() { return &____currentTarget_6; }
	inline void set__currentTarget_6(Il2CppObject * value)
	{
		____currentTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&____currentTarget_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
