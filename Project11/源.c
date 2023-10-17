#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, max, min;
	puts("请输入两个整数");
	scanf("%d%d", &a, &b);
	if (a > b) {
		max = a; min = b;
	}
	else {
		max = b; min = a;
	}
	printf("它们较大的是%d\n它们较小的是%d\n",max,min);
	return 0;
}