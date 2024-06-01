#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main6()
{
	int a = 2;
	int sum = a;
	int t;
	scanf("%d", &t);
	for (int i = 2;; i++)
	{
		a += 3;
		sum += a;
		if (i == t)
		{
			printf("%d", sum);
			return 0;
		}
	}
	return 0;
}