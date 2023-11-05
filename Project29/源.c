#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, n, m, An = 0, Sn = 0;
	puts("请输入一个整数并输入位数");
	scanf("%d", &a);
	scanf("%d", &m);
	for (n = 0; n < m; n++)
	{
		An = pow(10, n) * a + An;
		Sn = Sn + An;
	}
	printf("%d", Sn);//输出Sn=a+aa+aaa+aaaa+.......n个a
	return 0;
}