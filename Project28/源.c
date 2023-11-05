#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	puts("请输入一个整数");
	scanf("%d", &b);
	printf("小于等于%d且不能被3整除的整数有\n", b);
	for (a = 1; a <= b; a++)
	{
		if (a % 3 == 0)continue;
		printf("%10d", a);
	}
	return 0;
}