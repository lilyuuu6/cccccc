#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 0;
	int cnt = 0;
	int retry;
	do {
		int t;
		puts("请输入一个整数");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;
		printf("是否继续?是请输入1否则输入0\n");
		scanf("%d", &retry);
	} while (retry == 1);
	printf("它们的和是%d,它们的平均值是%.2f\n", sum, (double)sum / cnt);
	return 0;
}