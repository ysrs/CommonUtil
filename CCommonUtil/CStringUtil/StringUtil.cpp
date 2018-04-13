#include "StringUtil.h"

#include <Windows.h>


int CStringUtil::ToInteger(const std::string& strValue)
{
	return atoi(strValue.c_str());
}

int CStringUtil::ToInteger(const std::wstring& wstrValue)
{
	return _wtoi(wstrValue.c_str());
}

double CStringUtil::ToDouble(const std::string& strValue)
{
	return atof(strValue.c_str());
}

double CStringUtil::ToDouble(const std::wstring& wstrValue)
{
	return _wtof(wstrValue.c_str());
}

std::string CStringUtil::IntegerToString(const int& iValue, const int &iRadix)
{
	char strBuf[MAXBYTE] = { 0 };
	_itoa_s(iValue, strBuf, MAXBYTE, iRadix);
	return strBuf;
}

std::string CStringUtil::DoubleToString(const double& dValue, const std::string& strPrecision)
{
	char strBuf[MAXBYTE] = { 0 };
	sprintf_s(strBuf, strPrecision.c_str(), dValue);
	return strBuf;
}

std::wstring CStringUtil::IntegerToWString(const int& iValue, const int& iRadix)
{
	wchar_t wstrBuf[MAXBYTE] = { 0 };
	_itow_s(iValue, wstrBuf, iRadix);
	return wstrBuf;
}

std::wstring CStringUtil::DoubleToWString(const double& dValue, const std::wstring& wstrPrecision)
{
	wchar_t wstrBuf[MAXBYTE] = { 0 };
	wsprintf(wstrBuf, wstrPrecision.c_str(), dValue);
	return wstrBuf;
}

std::string CStringUtil::ToUpper(const std::string& strValue)
{
	std::string strRet;

	for (size_t i = 0; i<strValue.size(); ++i)
	{
		strRet += toupper(strValue[i]);
	}

	return strRet;
}

std::wstring CStringUtil::ToUpper(const std::wstring& wstrValue)
{
	std::wstring wstrRet;

	for (size_t i = 0; i<wstrValue.size(); ++i)
	{
		wstrRet += towupper(wstrValue[i]);
	}

	return wstrRet;
}

std::string CStringUtil::ToLower(const std::string& strValue)
{
	std::string strRet;

	for (size_t i = 0; i<strValue.size(); ++i)
	{
		strRet += tolower(strValue[i]);
	}

	return strRet;
}

std::wstring CStringUtil::ToLower(const std::wstring& wstrValue)
{
	std::wstring wstrRet;

	for (size_t i = 0; i<wstrValue.size(); ++i)
	{
		wstrRet += towlower(wstrValue[i]);
	}

	return wstrRet;
}

std::string CStringUtil::TrimLeft(const std::string& strValue)
{
	std::string strRet;


	return strRet;
}

std::wstring CStringUtil::StringToWString(const std::string& strValue)
{
	std::wstring wstrRet;


	return wstrRet;
}

std::string CStringUtil::WStringToString(const std::wstring& wstrValue)
{
	std::string strRet;


	return strRet;
}

std::string CStringUtil::UTF8ToGBK(const std::string& strValue)
{
	std::string strRet;


	return strRet;
}


