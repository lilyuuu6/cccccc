#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    puts("��������������");
    float x, y;
    printf("����1\n");
    scanf("%f", &x);
    printf("����2\n");
    scanf("%f", &y);
    float z = x / y * 100;
    printf("%.2f%%", z);
    return 0;
}