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
	static std::string DoubleToString(const double &dValue, const std::string &strPrecision = "%.2lf");
	static std::wstring IntegerToWString(const int &iValue, const int &iRadix);
	static std::wstring DoubleToWString(const double &dValue, const std::wstring &wstrPrecision = L"%.2lf");
	static std::string ToUpper(const std::string &strValue);
	static std::wstring ToUpper(const std::wstring &wstrValue);
	static std::string ToLower(const std::string &strValue);
	static std::wstring ToLower(const std::wstring &wstrValue);
	static std::string TrimLeft(const std::string &strValue);

	// ×ª»»
	static std::wstring StringToWString(const std::string &strValue);
	static std::string WStringToString(const std::wstring &wstrValue);
	static std::string UTF8ToGBK(const std::string &strValue);
};


