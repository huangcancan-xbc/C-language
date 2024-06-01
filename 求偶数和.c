#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main5()
{
	int n,a, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a % 2 == 0)
		{
			sum += a;
		}
	}
	printf("%d", sum);
	return 0;
}