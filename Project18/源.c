#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a; int b; int c = 0;
	puts("��������������");
	scanf("%d%d", &a, &b);
	int x;
	if (a > b) {
		x = a; a = b; b = x;
	}
	do {
		c = c + a;
		a++;
	} while (a <= b);
	printf("%d", c);
	return 0;
}