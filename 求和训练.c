#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int az = 0;
	for (int i = 0; i < a+1; i++)
	{
		az += i;
	}

	int bz=0;
	for (int j = 1; j < b + 1; j++)
	{
		int t = j * j;
		bz += t;
	}

	double cz=0;
	for (int k = 1; k < c + 1; k++)
	{
		double  t = 1.0 / k;
		cz += t;
	}

	double zong = az + bz + cz;
	printf("%.2lf", zong);
	return 0;
}