#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1
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
	//�ݹ�ʵ��
	int n = 0;
	printf("������n��");
	scanf("%d", &n);
	printf("쳲��������еĵ�%d��Ϊ��%d\n", n, fibonacci(n));
}

////�ǵݹ�ʵ��
//int main()
//{
//	//�ǵݹ�ʵ��
//	int n = 0;
//	int a = 0, b = 1, c = 0;
//	printf("������n��");
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
//	printf("쳲��������еĵ�%d��Ϊ��%d\n", n, a);
//}