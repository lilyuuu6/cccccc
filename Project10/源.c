#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, max;
	puts("��������������");
	scanf("%d%d", &a, &b);
	max = (a > b) ? a : b;
	printf("�ϴ��������%d\n", max);
	return 0;
}