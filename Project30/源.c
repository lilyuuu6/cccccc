#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int v[5];
	for (i = 0; i < 5; i++)
		v[i] = i + 1;
	for (i = 0; i < 5; i++)
		printf("v[%d]=%d\n", i, v[i]);
	return 0;
}