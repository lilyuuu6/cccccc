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
	puts("倒序后如下：");
	for (t = 0; t < 7; t++)
		printf("arr[%d]=%d\n", t, arr[6-t]);
	return 0;
}