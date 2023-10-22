#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int month;
	printf("请输入月份\n");
	scanf("%d", &month);
	switch (month) {
	case 12 :case 1:case 2:puts("这个月份是冬天"); break;
	case 3:case 4:case 5:puts("这个月份是春天"); break;
	case 6:case 7:case 8:puts("这个月份是夏天"); break;
	case 9:case 10:case 11:puts("这个月份是秋天"); break;
	default:puts("不存在这个月份"); break;
	}
	return 0;
}