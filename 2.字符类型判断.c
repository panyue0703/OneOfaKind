#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cl;
	
	printf("������һ���ַ���");
	cl =getchar();
	if (cl < 32)
	{
		printf("���ַ�Ϊ�����ַ�\n");
	}
	else if (cl >= '0' && cl <= '9')
	{
		printf("���ַ���һ������\n");
	}
	else if (cl>='A'&&cl<='Z')
	{
		printf("���ַ���һ����д��ĸ\n");
	}
	else if (cl >= 'a' && cl <= 'z')
	{
		printf("���ַ���һ��Сд��ĸ\n");
	}
	else
	{
		printf("���ַ��������ַ�\n");
	}
	system("pause");
	return 0;
}