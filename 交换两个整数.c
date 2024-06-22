#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	void jiaohuan(int n);
	int n=0,m=0;
	printf("请输入两个整数：");
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
	printf("交换后：n=%d,m=%d\n", n, m);
}