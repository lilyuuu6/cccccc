#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int retry;
	do {
		int a;
		puts("������һ������");
		scanf("%d", &a);
		if (a % 2)
			puts("�����������");
		else 
			puts("�������ż��");
		puts("�Ƿ��������������1��������0");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}