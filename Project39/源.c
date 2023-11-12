#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c,sum;
	for (a = 0; a < 34; a++)
	{
		for (b = 0; b < 51; b++)
		{
			c = 100 - b - a;
			if (c % 2 != 0) continue;
			sum = 3 * a + 2 * b + c / 2;
			if (sum == 100)
				printf("大马%d个,中马%d个,小马%d个\n", a, b, c);
		}
	}
	return 0;
}