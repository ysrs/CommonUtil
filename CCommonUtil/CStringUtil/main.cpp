#include <stdio.h>
#include <iostream>

#include "StringUtil.h"


int main()
{
	std::string str = "Hello world! Nice to meet you! How are you? Fine! Thank you!";
	std::wstring wstr = CStringUtil::StringToWString(str);
	printf("str: %s\n", str.c_str());
	wprintf(L"wstr: %s\n", wstr.c_str());

	system("pause");
	return 0;
}

