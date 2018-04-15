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

std::string CStringUtil::DoubleToString(const double& dValue, const int &iDecimalPlaces)
{
	char strBuf[MAXBYTE] = { 0 };
	char strFormat[MAXBYTE] = { 0 };
	sprintf_s(strFormat, MAXBYTE, "%%.%dlf", iDecimalPlaces);
	sprintf_s(strBuf, MAXBYTE, strFormat, dValue);
	return strBuf;
}

std::wstring CStringUtil::IntegerToWString(const int& iValue, const int& iRadix)
{
	wchar_t wstrBuf[MAXBYTE] = { 0 };
	_itow_s(iValue, wstrBuf, iRadix);
	return wstrBuf;
}

std::wstring CStringUtil::DoubleToWString(const double& dValue, const int &iDecimalPlaces)
{
	wchar_t wstrBuf[MAXBYTE] = { 0 };
	wchar_t wstrFormat[MAXBYTE] = { 0 };
	swprintf_s(wstrFormat, MAXBYTE, L"%%.%dlf", iDecimalPlaces);
	swprintf_s(wstrBuf, MAXBYTE, wstrFormat, dValue);
	return wstrBuf;
}

std::string CStringUtil::ToUpper(std::string& strValue)
{
	for (size_t i = 0; i<strValue.size(); ++i)
	{
		strValue[i] = toupper(strValue[i]);
	}

	return strValue;
}

std::wstring CStringUtil::ToUpper(std::wstring& wstrValue)
{
	for (size_t i = 0; i<wstrValue.size(); ++i)
	{
		wstrValue[i] = towupper(wstrValue[i]);
	}

	return wstrValue;
}

std::string CStringUtil::ToLower(std::string& strValue)
{
	for (size_t i = 0; i<strValue.size(); ++i)
	{
		strValue[i] = tolower(strValue[i]);
	}

	return strValue;
}

std::wstring CStringUtil::ToLower(std::wstring& wstrValue)
{
	for (size_t i = 0; i<wstrValue.size(); ++i)
	{
		wstrValue[i] = towlower(wstrValue[i]);
	}

	return wstrValue;
}

std::string CStringUtil::TrimLeft(std::string& strValue)
{
	if (!strValue.empty())
	{
		strValue.erase(0, strValue.find_first_not_of(" \t"));
	}

	return strValue;
}

std::wstring CStringUtil::TrimLeft(std::wstring& wstrValue)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(0, wstrValue.find_first_not_of(L" \t"));
	}

	return wstrValue;
}

std::string CStringUtil::TrimRight(std::string& strValue)
{
	if (!strValue.empty())
	{
		strValue.erase(strValue.find_last_not_of(" \t") + 1);
	}

	return strValue;
}

std::wstring CStringUtil::TrimRight(std::wstring& wstrValue)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(wstrValue.find_last_not_of(L" \t"));
	}

	return wstrValue;
}

std::string CStringUtil::Trim(std::string &strValue)
{
	TrimLeft(strValue);
	TrimRight(strValue);

	return strValue;
}

std::wstring CStringUtil::Trim(std::wstring& wstrValue)
{
	TrimLeft(wstrValue);
	TrimRight(wstrValue);

	return wstrValue;
}

std::wstring CStringUtil::StringToWString(const std::string& strValue)
{
	std::wstring wstrRet;

	do
	{
		int iSize = MultiByteToWideChar(CP_ACP, 0, strValue.c_str(), strValue.length(), nullptr, 0);
		if (iSize <= 0)
		{
			break;
		}

		wchar_t *pWBuf = new wchar_t[iSize + 1];
		if (nullptr == pWBuf)
		{
			break;
		}

		MultiByteToWideChar(CP_ACP, 0, strValue.c_str(), strValue.length(), pWBuf, iSize);
		pWBuf[iSize] = 0;
		// 跳过0xFEFF，这个值应该是签名属性
		if (0xFEFF == pWBuf[0])
		{
			for (int i=0; i<iSize; ++i)
			{
				pWBuf[i] = pWBuf[i + 1];
			}
		}

		wstrRet = pWBuf;
		delete[] pWBuf;
	}
	while (false);

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


