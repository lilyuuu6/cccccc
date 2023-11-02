#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	puts("请输入一个整数");
	scanf("%d", &b);
	printf("小于等于%d的正偶数有",b);
	for (a = 2; a <= b; a += 2)
		printf("%3d", a);
	return 0;
}