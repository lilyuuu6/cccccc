#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	double ave;
	puts("请输入三个整数");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	ave = (double)sum / 3;
	printf("它们的和是%d\n它们的平均数是%.3f", sum, ave);
	return 0;
}