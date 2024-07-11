#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
#include <stdio.h>

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main()
{
	//递归实现
	int n = 0;
	printf("请输入n：");
	scanf("%d", &n);
	printf("斐波那契数列的第%d项为：%d\n", n, fibonacci(n));
}

////非递归实现
//int main()
//{
//	//非递归实现
//	int n = 0;
//	int a = 0, b = 1, c = 0;
//	printf("请输入n：");
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		a = 0;
//	}
//	else if (n == 1)
//	{
//		a = 1;
//	}
//	else
//	{
//		for (int i = 2; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		a = c;
//	}
//	printf("斐波那契数列的第%d项为：%d\n", n, a);
//}