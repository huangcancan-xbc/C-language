#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main3()
{
	int a, b, c, d;
	for (a = 100; a < 1000; a++)
	{
		b = a % 10;
		c = a / 10 % 10;
		d = a / 100;//��λ���֣���Ϊ��֪d����λ��������d=a/100%10Ҳ��ȷ
		if (a == b * b * b + c * c * c + d * d * d)
			printf("%d ", a);
	}return 0;
}