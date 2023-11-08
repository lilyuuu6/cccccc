#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//对数组元素进行倒序排列
{
	int arr[7];
	int t;
	for (t = 0; t < 7; t++)
	{
		printf("arr[%d]:", t);
		scanf("%d", &arr[t]);
	}
	for (t = 0; t < 3; t++)
	{
		int i;
		i = arr[t];
		arr[t] = arr[6 - t];
		arr[6 - t] = i;
	}
	puts("倒序后如下：");
	for (t = 0; t < 7; t++)
		printf("arr[%d]=%d\n", t, arr[t]);
	return 0;
}
