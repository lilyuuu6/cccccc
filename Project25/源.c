#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int retry;
	do {
		int a, b;
		do {
			puts("������һ��������");
			scanf("%d", &a);
			if (a <= 0)
				puts("�벻Ҫ�����������");
		} while (a <= 0);
		for (b = 1; b <= a; b++)
			putchar('*');
		putchar('\n');
		puts("�Ƿ������������0������1");
		scanf("%d", &retry);
	} while (retry == 0);
	return 0;
}