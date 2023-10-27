#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a; int b;
	puts("请输入年份和月份");
	scanf("%d%d", &a, &b);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		switch (b) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: printf("%d年%d月共有31天\n", a, b); break;
		case 2: printf("%d年%d月共有29天\n", a, b); break;
		case 4:case 6:case 9:case 11: printf("%d年%d月共有30天\n", a, b); break;
		default:puts("不存在这个月份");
		}
	}
	else {
		switch (b) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: printf("%d年%d月共有31天\n", a, b); break;
		case 2: printf("%d年%d月共有28天\n", a, b); break;
		case 4:case 6:case 9:case 11: printf("%d年%d月共有30天\n", a, b); break;
		default:puts("不存在这个月份");
		}
	}
	return 0;
}