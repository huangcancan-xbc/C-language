#include <stdio.h>

int main (void)
{
	int n, maxn, maxk; 						//存储整数个数、最大整数及最大整数的位序
	int x;
	 
	printf("输入整数个数：");
	scanf("%d", &n);
	printf("输入%d个整数：",n);
	scanf("%d", &maxn);   					//输入第一个整数，将其赋值给maxn 
	maxk = 1;             					//假设第一个整数最大，这时位序为1 	
	for(int i = 2; i <= n; i++)  			//输入其他n-1个元素，同时与当前最大整数比较 
	{
		scanf("%d", &x);
		if(x > maxn)
		{
			maxn = x;  maxk = i;
		}
	}
	printf("最大整数为：%d 位序为:%d\n", maxn, maxk);                 
	
	return 0;
}
