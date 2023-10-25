#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a; int b; int c = 0;
	puts("请输入两个整数");
	scanf("%d%d", &a, &b);
	int x;
	int y;
	if (a > b) {
		y = b; x = a;
		a = b; b = x;
	}
	else
		y = a;
	do {
		c = c + a;
		a++;
	} while (a <= b);
	printf("大于等于%d小于等于%d的所有整数的和是%d\n",y,b,c);
	return 0;
}