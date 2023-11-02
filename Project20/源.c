#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m, n;
	int a, b, c;
	puts("请输入一个三位数");
	scanf("%d", &m);
	a = m / 100;
	b = m / 10 % 10;
	c = m % 100 % 10;
	n = c * 100 + b * 10 + a;
	printf("%d", n);
	return 0;
}