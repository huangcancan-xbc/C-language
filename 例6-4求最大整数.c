#include <stdio.h>

const int N=10;

int main (void)
{
	int a[N];              					//定义有N个整数元素的数组a
	int n, maxk;           					//存储实际元素个数及这组数中最大数的下标
	 
	printf("输入整数个数：");
	scanf("%d", &n);
	printf("输入%d个整数：", n);
	for(int i = 0; i < n; i++)       			//输入n个元素 
	    scanf("%d", &a[i]);     				//输入数组a[i]，注意它是a的第i+1个元素
	maxk = 0;               					//假设a[0]是这组整数中最大的 
	for(int i = 1; i < n; i++)    			//每个元素a[i]与a[maxk] 比较 
	{
	    if(a[i] > a[maxk]) 
		    maxk = i;
	}
	printf("最大整数为：%d ，位序为:%d\n", a[maxk], maxk+1);                 
	
	return 0;
}
