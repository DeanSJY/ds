// pointer_1.cpp : �������̨Ӧ�ó������ڵ㡣
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

