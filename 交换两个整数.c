#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	void jiaohuan(int n);
	int n=0,m=0;
	printf("����������������");
	scanf("%d%d", &n, &m);
	jiaohuan(n,m);
	return 0;
}

void jiaohuan(int n, int m)
{
	int temp;
	temp = n;
	n = m;
	m = temp;
	printf("������n=%d,m=%d\n", n, m);
}