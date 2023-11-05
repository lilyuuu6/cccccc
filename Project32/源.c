#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int b[5];
	for (i = 0; i < 5; i++)
		b[i] = a[i];
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
		printf("b[%d]=%d\n", i, b[i]);
	}
	return 0;
}
//Êý×é¸´ÖÆ