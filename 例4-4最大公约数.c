#include <stdio.h>

int main(void)
{
	int x, y, r;                   	//分别存放两个整数及它们的余数 
	int a,b;                     	//分别存放x,y的值 	
	printf("输入两个整数：");    	//提示输入两个整数 
	scanf("%d %d", &x, &y);      	//输入x,y 
	a = x; b = y;                	//分别存放x,y的值 
	while(a % b)        	//用辗转求余法求a,b的余数，直到余数为0 
	{
	    r = a % b;  
	    a = b; 
	    b = r;
	}
    //输出两个整数及它们的最大公约数和最小公倍数 
    printf("%d和%d的最大公约数是：%d  最小公倍数为：%d\n", x, y, b, x*y/b);
	
	return 0;
}
