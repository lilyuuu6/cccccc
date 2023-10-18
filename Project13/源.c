#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	puts("请输入三个整数");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && a == c) {
		puts("它们三个的值都相等");
	}
	else if (a == b || a == c || b ==c) {
		puts("它们中两个值相等");
	}
	else {
		puts("它们都不相等");
	}
	return 0;
}