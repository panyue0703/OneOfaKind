#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year;
	printf("请输入年份：");
	scanf_s("%d", &year);
	if ((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("%d年是闰年\n",year);
	}
	else
	{
		printf("%d年不是闰年\n",year);
	}
	system("pause");
	return 0;
}