#include <stdio.h>

const int N = 10;

int main(void)
{
	int a[N];              				//定义有N个整数元素的数组a
	int n;
	scanf("%d", &n) ;       				//输入整数个数
	for(int i = 0; i < n; i++)   		//输入数组a的n个元素 
		scanf("%d", &a[i]);  			//输入元素a[i], 注意它是a的第i+1个元素 
	for(int i = 0;i < n/2;i++)  			//逆置，距离首（a[0]）和尾（a[n-1]）相等的元素交换其值
	{
        int t;
        t = a[i];  a[i] = a[n-1-i];  a[n-1-i] = t;	//交换a[i]与a[n-1-i]的值 
	}
	for(int i = 0;i < n;i++)    			//输出a的n个元素 
	    printf("%d  ",a[i]);                   
	
	return 0;
}
