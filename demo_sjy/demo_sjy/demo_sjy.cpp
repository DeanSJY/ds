// demo_sjy.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "MAX.h"

#define N 5

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a[N], *p,b[N];
	printf_s("ENTER %d numbers:", N);
	for (p = a; p < a + N; p++)
		scanf_s("%d", p);


	printf_s("In reverse order:");
	for (p = a + N - 1; p >= a; p--)
		printf_s(" %d", *p);
	printf_s("\n");
	system("pause");
	return 0;

}

