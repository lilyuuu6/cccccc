#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	puts("������һ������");
	scanf("%d", &a);
	switch (a % 2) {
	case 0:puts("�������ż��"); break;
	case 1:puts("�����������"); break;
	}
	return 0;
}