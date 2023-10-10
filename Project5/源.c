#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	puts("整数1：");
	scanf("%d", &a);
	puts("整数2：");
	scanf("%d", &b);
	c = a * b;
	printf("它们的乘积是%d\n", c);
	return 0;
}