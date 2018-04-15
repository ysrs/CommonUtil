#pragma once

#include <string>


class CStringUtil
{
public:
	static int ToInteger(const std::string &strValue);
	static int ToInteger(const std::wstring &wstrValue);
	static double ToDouble(const std::string &strValue);
	static double ToDouble(const std::wstring &wstrValue);
	static std::string IntegerToString(const int &iValue, const int &iRadix);
	static std::string DoubleToString(const double &dValue, const int &iDecimalPlaces = 2);
	static std::wstring IntegerToWString(const int &iValue, const int &iRadix);
	static std::wstring DoubleToWString(const double &dValue, const int &iDecimalPlaces = 2);
	static std::string ToUpper(std::string &strValue);
	static std::wstring ToUpper(std::wstring &wstrValue);
	static std::string ToLower(std::string &strValue);
	static std::wstring ToLower(std::wstring &wstrValue);
	static std::string TrimLeft(std::string &strValue);
	static std::wstring TrimLeft(std::wstring &wstrValue);
	static std::string TrimRight(std::string &strValue);
	static std::wstring TrimRight(std::wstring &wstrValue);
	static std::string Trim(std::string &strValue);
	static std::wstring Trim(std::wstring &wstrValue);

	// ×ª»»
	static std::wstring StringToWString(const std::string &strValue);
	static std::string WStringToString(const std::wstring &wstrValue);
	static std::string UTF8ToGBK(const std::string &strValue);
};


