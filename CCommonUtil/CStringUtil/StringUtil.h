#pragma once

#include <string>
#include <vector>


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
	static std::string TrimLeft(std::string &strValue, const char &chTaget);
	static std::wstring TrimLeft(std::wstring &wstrValue, const wchar_t &wchTarget);
	static std::string TrimLeft(std::string &strValue, const std::string &strTarget);
	static std::wstring TrimLeft(std::wstring &wstrValue, const std::wstring &wstrTarget);

	static std::string TrimRight(std::string &strValue);
	static std::wstring TrimRight(std::wstring &wstrValue);
	static std::string TrimRight(std::string &strValue, const char &chTarget);
	static std::wstring TrimRight(std::wstring &wstrValue, const wchar_t &wchTarget);
	static std::string TrimRight(std::string &strValue, const std::string &strTarget);
	static std::wstring TrimRight(std::wstring &wstrValue, const std::wstring &wstrTarget);

	static std::string Trim(std::string &strValue);
	static std::wstring Trim(std::wstring &wstrValue);
	static std::string Trim(std::string &strValue, const char &chTarget);
	static std::wstring Trim(std::wstring &wstrValue, const wchar_t &wchTarget);
	static std::string Trim(std::string &strValue, const std::string strTarget);
	static std::wstring Trim(std::wstring &wstrValue, const std::wstring &wstrTarget);

	static void Split(const std::string &strValue, const std::string &strDelimiter, std::vector<std::string> &vecResult);
	static void Split(const std::wstring &wstrValue, const std::wstring &wstrDelimiter, std::vector<std::wstring> &vecResult);

	// ×ª»»
	static std::wstring StringToWString(const std::string &strValue);
	static std::string WStringToString(const std::wstring &wstrValue);
	//static std::string UTF8ToGBK(const std::string &strValue);
	//static std::string GBKToUTF8(const std::string &strValue);
};


