#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a; int b;
	puts("��������ݺ��·�");
	scanf("%d%d", &a, &b);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		switch (b) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: printf("%d��%d�¹���31��\n", a, b); break;
		case 2: printf("%d��%d�¹���29��\n", a, b); break;
		case 4:case 6:case 9:case 11: printf("%d��%d�¹���30��\n", a, b); break;
		default:puts("����������·�");
		}
	}
	else {
		switch (b) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12: printf("%d��%d�¹���31��\n", a, b); break;
		case 2: printf("%d��%d�¹���28��\n", a, b); break;
		case 4:case 6:case 9:case 11: printf("%d��%d�¹���30��\n", a, b); break;
		default:puts("����������·�");
		}
	}
	return 0;
}