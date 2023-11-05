#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	double t, sum=0, aver;
	for (i = 1; i < 1001; i++)
	{
		puts("ÇëÊäÈë¾è¿îÊý");
		scanf("%lf", &t);
		sum += t;
		if (sum >= 100000)break;
	}
	aver = sum / i;
	printf("sum=%f\naver=%f", sum, aver);
	return 0;
}