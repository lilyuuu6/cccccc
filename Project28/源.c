#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	puts("������һ������");
	scanf("%d", &b);
	printf("С�ڵ���%d�Ҳ��ܱ�3������������\n", b);
	for (a = 1; a <= b; a++)
	{
		if (a % 3 == 0)continue;
		printf("%10d", a);
	}
	return 0;
}