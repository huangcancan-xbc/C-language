#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main2()
{
	int a = 0;
	scanf("%d", &a);
	int bw, sw, gw;
	bw = a / 100;
	sw = (a / 10) % 10;
	gw = a % 10;

	int z = bw * bw * bw + sw * sw * sw + gw * gw * gw;
	if (z == a)
		printf("1");
	else
		printf("0");
	return 0;
}