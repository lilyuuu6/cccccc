#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int retry;
	do {
		int a;
		puts("请输入一个整数");
		scanf("%d", &a);
		if (a % 2)
			puts("这个数是奇数");
		else 
			puts("这个数是偶数");
		puts("是否继续？是则输入1否则输入0");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}