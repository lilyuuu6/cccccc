#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//������Ԫ�ؽ��е�������
{
	int arr[7];
	int t;
	for (t = 0; t < 7; t++)
	{
		printf("arr[%d]:", t);
		scanf("%d", &arr[t]);
	}
	puts("��������£�");
	for (t = 0; t < 7; t++)
		printf("arr[%d]=%d\n", t, arr[6-t]);
	return 0;
}