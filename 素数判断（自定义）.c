#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	void is_prime(int n);
	int n = 0;
	printf("������һ������");
	scanf("%d", &n);
	is_prime(n);
	return 0;
}

void is_prime(int n)
{
	int panduan = (int)sqrt(n);
	int flag = 1;
	for (int i = 2; i <= panduan; i++)
	{
		if (n % i == 0)
		{
			printf("%d��������\n", n);
			flag = 0;
			break;
		}
	}
	if (flag)
		{
			printf("%d������\n", n);
		}
}