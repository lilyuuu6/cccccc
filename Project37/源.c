#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUMBER 5
int main()
{
    int i;
    int arr[NUMBER];
    int max, min;
    for (i = 0; i < NUMBER; i++)
    {
        printf("请输入第%d个学生的成绩:", i + 1);
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (i = 1; i < NUMBER; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("最高分：%d\n最低分：%d", max, min);
    return 0;
}