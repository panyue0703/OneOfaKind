#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year;
	printf("��������ݣ�");
	scanf_s("%d", &year);
	if ((year%4==0&&year%100!=0)||(year%400==0))
	{
		printf("%d��������\n",year);
	}
	else
	{
		printf("%d�겻������\n",year);
	}
	system("pause");
	return 0;
}