#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	puts("������һ������");
	scanf("%d", &a);
	if (a % 2)
		puts("��������");
	else
		puts("����ż��");
	return 0;
}