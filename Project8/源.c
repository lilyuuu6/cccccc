#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum;
	double ave;
	puts("��������������");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	ave = (double)sum / 3;
	printf("���ǵĺ���%d\n���ǵ�ƽ������%.3f", sum, ave);
	return 0;
}