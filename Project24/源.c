#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	puts("������һ������");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= a - b; c++)
			putchar(' ');
		for (c = 1; c <= b; c++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}