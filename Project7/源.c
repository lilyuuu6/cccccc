#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数\n");
	scanf("%d%d", &a, &b);
	printf("它们的平均数是%f", (double)(a + b) / 2);
	return 0;
}