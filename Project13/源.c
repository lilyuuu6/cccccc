#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	puts("��������������");
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && a == c) {
		puts("����������ֵ�����");
	}
	else if (a == b || a == c || b ==c) {
		puts("����������ֵ���");
	}
	else {
		puts("���Ƕ������");
	}
	return 0;
}