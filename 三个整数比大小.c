#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//����3������
	scanf("%d %d %d", &a, &b, &c);
	//����
	//����ֵ����a�У���Сֵ����c�У�ʣ���һ������b��
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	//���
	printf("%d %d %d\n", a, b, c);
	return 0;
}
