#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	puts("请输入一个整数");
	scanf("%d", &a);
	if (a % 2)
		puts("它是奇数");
	else
		puts("它是偶数");
	return 0;
}