#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//计算学生总分和平均分
#define NUMBER 9//定义学生数量
int main()
{
	int i;
	double arr[NUMBER];
	double sum = 0;
	for (i = 0; i < NUMBER; i++)
	{
		printf("请输入第%d个学生的成绩:", i + 1);
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	printf("学生总分为%.2f\n学生平均分为%.2f", sum, (double)sum / NUMBER);
	return 0;
}