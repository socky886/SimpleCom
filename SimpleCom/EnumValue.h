#pragma once

#include <Windows.h>

class EnumValue
{
protected:
	int _value;
	LPTSTR _str;

public:
	constexpr explicit EnumValue(const int value, LPCTSTR str) noexcept : _value(value), _str(const_cast<LPTSTR>(str)) {};

	constexpr operator int() const noexcept { return _value; };
	EnumValue& operator = (EnumValue& rvalue) = default;
	bool operator == (EnumValue& rvalue) { return _value == rvalue._value; };

	inline constexpr LPCTSTR tstr() const noexcept { return _str; };
};