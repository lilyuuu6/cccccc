#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//����ѧ���ֺܷ�ƽ����
#define NUMBER 9//����ѧ������
int main()
{
	int i;
	double arr[NUMBER];
	double sum = 0;
	for (i = 0; i < NUMBER; i++)
	{
		printf("�������%d��ѧ���ĳɼ�:", i + 1);
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	printf("ѧ���ܷ�Ϊ%.2f\nѧ��ƽ����Ϊ%.2f", sum, (double)sum / NUMBER);
	return 0;
}