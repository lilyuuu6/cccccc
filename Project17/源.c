#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 0;
	int cnt = 0;
	int retry;
	do {
		int t;
		puts("������һ������");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;
		printf("�Ƿ����?��������1��������0\n");
		scanf("%d", &retry);
	} while (retry == 1);
	printf("���ǵĺ���%d,���ǵ�ƽ��ֵ��%.2f\n", sum, (double)sum / cnt);
	return 0;
}