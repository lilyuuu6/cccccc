#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	puts("请输入一个整数");
	scanf("%d", &a);
	switch (a % 2) {
	case 0:puts("这个数是偶数"); break;
	case 1:puts("这个数是奇数"); break;
	}
	return 0;
}