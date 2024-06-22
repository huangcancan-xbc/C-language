#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	void cheng(int n);
	int n;
	scanf("%d", &n);
	cheng(n);
	return 0;
}

void cheng(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
}