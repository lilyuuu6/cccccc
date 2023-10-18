#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int month;
	puts("请输入月份");
	scanf("%d", &month);
	if (month >= 3 && month <= 5)
		printf("%d月是春天\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d月是夏天\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d月是秋天\n", month);
	else if (month == 12 || month == 1 || month == 2)
		printf("%d月是冬天\n", month);
	else
		puts("不存在这个月份");
	return 0;
}