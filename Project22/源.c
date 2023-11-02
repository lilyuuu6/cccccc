#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b;
    for (a = 1; a < 10; a++)
    {
        for (b = 1; b < 10; b++)
            printf("%3d", a * b);
        putchar('\n');
    }
}