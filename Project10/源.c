#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, max;
	puts("请输入两个整数");
	scanf("%d%d", &a, &b);
	max = (a > b) ? a : b;
	printf("较大的整数是%d\n", max);
	return 0;
}