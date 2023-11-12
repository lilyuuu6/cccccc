#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
	int arr2[3][4];
	int i,j;
	puts("arr1:");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
			printf("%5d", arr1[i][j]);
		}
		putchar('\n');
	}
	puts("arr1:");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <4; j++)
			printf("%5d", arr2[i][j]);
		putchar('\n');
	}
	return 0;
}