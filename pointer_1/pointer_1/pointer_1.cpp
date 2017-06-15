// pointer_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

void print_count(int n){
	printf_s("T minus %d and counting \n", n);
}
int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	for (i = 100; i >= 0; i--)
		print_count(i);
	system("pause");
}

