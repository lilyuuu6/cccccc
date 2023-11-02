#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int retry;
	do {
		int a, b;
		do {
			puts("请输入一个正整数");
			scanf("%d", &a);
			if (a <= 0)
				puts("请不要输入非正整数");
		} while (a <= 0);
		for (b = 1; b <= a; b++)
			putchar('*');
		putchar('\n');
		puts("是否继续？是输入0否输入1");
		scanf("%d", &retry);
	} while (retry == 0);
	return 0;
}