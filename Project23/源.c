#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	puts("������һ������");
	scanf("%d", &b);
	printf("С�ڵ���%d����ż����",b);
	for (a = 2; a <= b; a += 2)
		printf("%3d", a);
	return 0;
}