#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int month;
	puts("�������·�");
	scanf("%d", &month);
	if (month >= 3 && month <= 5)
		printf("%d���Ǵ���\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d��������\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d��������\n", month);
	else if (month == 12 || month == 1 || month == 2)
		printf("%d���Ƕ���\n", month);
	else
		puts("����������·�");
	return 0;
}