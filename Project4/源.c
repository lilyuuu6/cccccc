#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("它的5的倍数是：%d\n", 5 * a);
	return 0;
}