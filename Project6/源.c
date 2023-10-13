#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    puts("请输入两个整数");
    float x, y;
    printf("整数1\n");
    scanf("%f", &x);
    printf("整数2\n");
    scanf("%f", &y);
    float z = x / y * 100;
    printf("%.2f%%", z);
    return 0;
}