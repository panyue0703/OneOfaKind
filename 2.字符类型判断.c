#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cl;
	
	printf("请输入一个字符：");
	cl =getchar();
	if (cl < 32)
	{
		printf("该字符为控制字符\n");
	}
	else if (cl >= '0' && cl <= '9')
	{
		printf("该字符是一个数字\n");
	}
	else if (cl>='A'&&cl<='Z')
	{
		printf("该字符是一个大写字母\n");
	}
	else if (cl >= 'a' && cl <= 'z')
	{
		printf("该字符是一个小写字母\n");
	}
	else
	{
		printf("该字符是其他字符\n");
	}
	system("pause");
	return 0;
}