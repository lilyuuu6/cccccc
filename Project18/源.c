#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a; int b; int c = 0;
	puts("��������������");
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
	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n",y,b,c);
	return 0;
}