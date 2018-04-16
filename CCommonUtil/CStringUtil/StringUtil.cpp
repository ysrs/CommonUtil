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

std::string CStringUtil::TrimLeft(std::string& strValue, const char& chTaget)
{
	if (!strValue.empty())
	{
		strValue.erase(0, strValue.find_first_not_of(chTaget));
	}

	return strValue;
}

std::wstring CStringUtil::TrimLeft(std::wstring& wstrValue, const wchar_t& wchTarget)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(0, wstrValue.find_first_not_of(wchTarget));
	}

	return wstrValue;
}

std::string CStringUtil::TrimLeft(std::string& strValue, const std::string& strTarget)
{
	if (!strValue.empty())
	{
		strValue.erase(0, strValue.find_first_not_of(strTarget));
	}

	return strValue;
}

std::wstring CStringUtil::TrimLeft(std::wstring& wstrValue, const std::wstring& wstrTarget)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(0, wstrValue.find_first_not_of(wstrTarget));
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
		wstrValue.erase(wstrValue.find_last_not_of(L" \t") + 1);
	}

	return wstrValue;
}

std::string CStringUtil::TrimRight(std::string& strValue, const char& chTarget)
{
	if (!strValue.empty())
	{
		strValue.erase(strValue.find_first_not_of(chTarget) + 1);
	}

	return strValue;
}

std::wstring CStringUtil::TrimRight(std::wstring& wstrValue, const wchar_t& wchTarget)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(wstrValue.find_first_not_of(wchTarget) + 1);
	}

	return wstrValue;
}

std::string CStringUtil::TrimRight(std::string& strValue, const std::string& strTarget)
{
	if (!strValue.empty())
	{
		strValue.erase(strValue.find_first_not_of(strTarget) + 1);
	}

	return strValue;
}

std::wstring CStringUtil::TrimRight(std::wstring& wstrValue, const std::wstring& wstrTarget)
{
	if (!wstrValue.empty())
	{
		wstrValue.erase(wstrValue.find_first_not_of(wstrValue) + 1);
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

std::string CStringUtil::Trim(std::string& strValue, const char& chTarget)
{
	TrimLeft(strValue, chTarget);
	TrimRight(strValue, chTarget);

	return strValue;
}

std::wstring CStringUtil::Trim(std::wstring& wstrValue, const wchar_t& wchTarget)
{
	TrimLeft(wstrValue, wchTarget);
	TrimRight(wstrValue, wchTarget);

	return wstrValue;
}

std::string CStringUtil::Trim(std::string& strValue, const std::string strTarget)
{
	TrimLeft(strValue, strTarget);
	TrimRight(strValue, strTarget);

	return strValue;
}

std::wstring CStringUtil::Trim(std::wstring& wstrValue, const std::wstring& wstrTarget)
{
	TrimLeft(wstrValue, wstrTarget);
	TrimRight(wstrValue, wstrTarget);

	return wstrValue;
}

void CStringUtil::Split(const std::string& strValue, const std::string& strDelimiter, std::vector<std::string>& vecResult)
{
	if (!strValue.empty())
	{
		std::string strExtend = strValue + strDelimiter;

		size_t nPos = 0;
		size_t nLength = strExtend.length();

		for (size_t i=0; i<nLength; ++i)
		{
			nPos = strExtend.find(strDelimiter, i);
			if (nPos < nLength)
			{
				std::string strRes = strExtend.substr(i, nPos - i);
				if (!strRes.empty())
				{
					vecResult.push_back(strRes);
				}

				i = nPos + strDelimiter.length() - 1;
			}
		}
	}
}

void CStringUtil::Split(const std::wstring& wstrValue, const std::wstring& wstrDelimiter, std::vector<std::wstring>& vecResult)
{
	if (!wstrValue.empty())
	{
		std::wstring wstrExtend = wstrValue + wstrDelimiter;

		size_t nPos = 0;
		size_t nLength = wstrExtend.length();

		for (size_t i=0; i<nLength; ++i)
		{
			nPos = wstrExtend.find(wstrDelimiter, i);
			if (nPos < nLength)
			{
				std::wstring wstrRes = wstrExtend.substr(i, nPos - i);
				if (!wstrRes.empty())
				{
					vecResult.push_back(wstrRes);
				}

				i = nPos + wstrDelimiter.length() - 1;
			}
		}
	}
}

std::wstring CStringUtil::StringToWString(const std::string& strValue)
{
	std::wstring wstrRet;

	do
	{
		int iLength = MultiByteToWideChar(CP_ACP, 0, strValue.c_str(), strValue.length(), nullptr, 0);
		if (iLength <= 0)
		{
			break;
		}

		wchar_t *pWBuf = new wchar_t[iLength + 1];
		if (nullptr == pWBuf)
		{
			break;
		}

		MultiByteToWideChar(CP_ACP, 0, strValue.c_str(), strValue.length(), pWBuf, iLength);
		pWBuf[iLength] = 0;
		// 跳过0xFEFF，这个值应该是签名属性
		if (0xFEFF == pWBuf[0])
		{
			for (int i=0; i<iLength; ++i)
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

	do 
	{
		int iLength = WideCharToMultiByte(CP_ACP, 0, wstrValue.c_str(), -1, nullptr, 0, nullptr, nullptr);
		if (iLength <= 0)
		{
			break;
		}

		char *pBuf = new char[iLength];

		if (nullptr == pBuf)
		{
			break;
		}

		WideCharToMultiByte(CP_ACP, 0, wstrValue.c_str(), -1, pBuf, iLength, nullptr, nullptr);

		strRet = pBuf;
		delete[] pBuf;
	} while (false);

	return strRet;
}

//std::string CStringUtil::UTF8ToGBK(const std::string& strValue)
//{
//	std::string strRet;
//
//	do
//	{
//		int iLength = MultiByteToWideChar(CP_UTF8, 0, strValue.c_str(), -1, nullptr, 0);
//		if (iLength <= 0)
//		{
//			break;
//		}
//
//		wchar_t *pWBuf = new wchar_t[iLength];
//
//		if (nullptr == pWBuf)
//		{
//			break;
//		}
//
//		MultiByteToWideChar(CP_UTF8, 0, strValue.c_str(), iLength, pWBuf, iLength);
//
//		strRet = WStringToString(pWBuf);
//	}
//	while (false);
//
//	return strRet;
//}
//
//std::string CStringUtil::GBKToUTF8(const std::string& strValue)
//{
//	std::string strRet;
//
//	do
//	{
//		std::wstring wstrRes = StringToWString(strValue);
//		int iLength = WideCharToMultiByte(CP_UTF8, 0, wstrRes.c_str(), -1, nullptr, 0, nullptr, nullptr);
//		if (iLength <= 0)
//		{
//			break;
//		}
//
//		char *pBuf = new char[iLength + 1];
//		WideCharToMultiByte(CP_UTF8, 0, wstrRes.c_str(), -1, pBuf, iLength, nullptr, nullptr);
//
//		pBuf[iLength] = 0;
//		strRet = pBuf;
//		delete[] pBuf;
//	}
//	while (false);
//
//	return strRet;
//}

