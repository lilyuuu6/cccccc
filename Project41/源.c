#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double pow(double a, int b)
{  
	int i;
	double x=1;
	for (i = 0; i < b; i++)
		x *= a;
	return x;
}
int main()
{
	double a;
	int b;
	puts("input a,b:");
	scanf("%lf%d", &a, &b);
	printf("%.2f", pow(a, b));
	return 0;
}