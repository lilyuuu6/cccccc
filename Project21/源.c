#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int t; int a = 0;
    puts("ÇëÊäÈë¸öÊı");
    scanf("%d", &t);
    if (t <= 0)
        printf("");
    else if (t % 2) {
        do {
            printf("+-");
            a = a + 1;
        } while (2 * a + 1 < t);
        printf("+");
    }
    else {
        do {
            printf("+-");
            a = a + 1;
        } while (2 * a < t);
    }
    return 0;
}