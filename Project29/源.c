#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, n, m, An = 0, Sn = 0;
	puts("������һ������������λ��");
	scanf("%d", &a);
	scanf("%d", &m);
	for (n = 0; n < m; n++)
	{
		An = pow(10, n) * a + An;
		Sn = Sn + An;
	}
	printf("%d", Sn);//���Sn=a+aa+aaa+aaaa+.......n��a
	return 0;
}