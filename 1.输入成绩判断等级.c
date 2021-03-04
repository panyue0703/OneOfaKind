#include<stdio.h>
#include <stdlib.h>

int GradeJudge(double Mygrade);
int main(void)
{
	double grade;
	int flage;
	printf("plz input your grade:");
	scanf_s("%lf", &grade);
	switch (GradeJudge(grade))
	{
	case 1:printf("优！\n"); break;
	case 2:printf("良！\n"); break;
	case 3:printf("中！\n"); break;
	case 4:printf("差！\n"); break;
	default:printf("输入有误！\n"); break;
	}
	system("pause");
	return 0;
}
int GradeJudge(double Mygrade)
{
	if (Mygrade >= 90)
	{
		return 1;
	}
	else if(Mygrade>=80)
	{
		return 2;
	}
	else if (Mygrade >= 70)
	{
		return 3;
	}
	else
	{
		return 4;
	}
}