﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement
struct  Curve25519FieldElement_t2608249339  : public ECFieldElement_t1092946118
{
public:
	// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::x
	UInt32U5BU5D_t59386216* ___x_2;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Curve25519FieldElement_t2608249339, ___x_2)); }
	inline UInt32U5BU5D_t59386216* get_x_2() const { return ___x_2; }
	inline UInt32U5BU5D_t59386216** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(UInt32U5BU5D_t59386216* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier(&___x_2, value);
	}
};

struct Curve25519FieldElement_t2608249339_StaticFields
{
public:
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::Q
	BigInteger_t4268922522 * ___Q_0;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement::PRECOMP_POW2
	UInt32U5BU5D_t59386216* ___PRECOMP_POW2_1;

public:
	inline static int32_t get_offset_of_Q_0() { return static_cast<int32_t>(offsetof(Curve25519FieldElement_t2608249339_StaticFields, ___Q_0)); }
	inline BigInteger_t4268922522 * get_Q_0() const { return ___Q_0; }
	inline BigInteger_t4268922522 ** get_address_of_Q_0() { return &___Q_0; }
	inline void set_Q_0(BigInteger_t4268922522 * value)
	{
		___Q_0 = value;
		Il2CppCodeGenWriteBarrier(&___Q_0, value);
	}

	inline static int32_t get_offset_of_PRECOMP_POW2_1() { return static_cast<int32_t>(offsetof(Curve25519FieldElement_t2608249339_StaticFields, ___PRECOMP_POW2_1)); }
	inline UInt32U5BU5D_t59386216* get_PRECOMP_POW2_1() const { return ___PRECOMP_POW2_1; }
	inline UInt32U5BU5D_t59386216** get_address_of_PRECOMP_POW2_1() { return &___PRECOMP_POW2_1; }
	inline void set_PRECOMP_POW2_1(UInt32U5BU5D_t59386216* value)
	{
		___PRECOMP_POW2_1 = value;
		Il2CppCodeGenWriteBarrier(&___PRECOMP_POW2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
