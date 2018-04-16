#include <stdio.h>
#include <iostream>

#include "StringUtil.h"


int main()
{
	//std::string str = "Hello world! Nice to meet you! How are you? Fine! Thank you!";
	//std::wstring wstr = CStringUtil::StringToWString(str);
	//printf("str: %s\n", str.c_str());
	//wprintf(L"wstr: %s\n", wstr.c_str());

	//std::wstring wstr = L"你好，世界！你好，程序猿！Thank You!";
	//std::string str = CStringUtil::WStringToString(wstr);

	//std::string strGBK = "该换手机号绝对是了解到科技市场hello Nihao!!！！！111ehfiu";
	//std::string strUTF8 = CStringUtil::GBKToUTF8(strGBK);
	//std::string strUTF8ToGBK = CStringUtil::UTF8ToGBK(strUTF8);
	


	//std::wstring wstr = L"abcdefg";
	//std::string str = CStringUtil::WStringToString(wstr);


	//std::vector<std::string> vecRes;
	//std::string strSplit = "	 hello world	   how are you		 Fine Thank you	";
	//CStringUtil::Split(strSplit, "	", vecRes);
	

	std::vector<std::wstring> vecRes;
	std::wstring wstrSplit = L"	 hello world	   how are you		 Fine Thank you	";
	CStringUtil::Split(wstrSplit, L"	", vecRes);


	system("pause");
	return 0;
}

