#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, max, min;
	puts("��������������");
	scanf("%d%d", &a, &b);
	if (a > b) {
		max = a; min = b;
	}
	else {
		max = b; min = a;
	}
	printf("���ǽϴ����%d\n���ǽ�С����%d\n",max,min);
	return 0;
}