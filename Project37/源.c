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
        printf("�������%d��ѧ���ĳɼ�:", i + 1);
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for (i = 1; i < NUMBER; i++)
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("��߷֣�%d\n��ͷ֣�%d", max, min);
    return 0;
}