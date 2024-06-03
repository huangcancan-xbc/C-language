#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
long long a[1000000]={0};
int main()
{
	
	long long n, k;
	long long time = 0;//跳过的路段时间
	scanf("%lld %lld", &n, &k);

	for (int i = 1; i < n; ++i)
	{
		scanf("%lld", &a[i]);
		a[i] += a[i - 1];
	}

	if (k == 0)
	{
		time = 0;
	}
	else
	{
		for (int i = 0; i + k < n; ++i)
		{
			time = (a[i + k] - a[i] > time) ? (a[i + k] - a[i]) : time;
		}
	}

	printf("%lld\n", a[n - 1] - time);
	return 0;
}
