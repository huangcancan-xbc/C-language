#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入3个整数
	scanf("%d %d %d", &a, &b, &c);
	//调整
	//最大的值放在a中，最小值放在c中，剩余的一个放在b中
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
	//输出
	printf("%d %d %d\n", a, b, c);
	return 0;
}
