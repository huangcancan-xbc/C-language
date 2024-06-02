#include <stdio.h>

int main(void)
{ //while法求整数位数 
	int m, n;	
	printf("输入一个整数：" );	//提示输入语句，通常scanf语句前加一个提示输入语句 
 	scanf("%d", &m);        	//输入欲求位数的整数 
	int t = m;    	//后续while语句会改变m的值，先用临时变量t存储一下m的值 
	n = 0;                	//存储位数 
	m /= 10;             	//如果题中明确n不为0，则此句和下句可以没有 
	n++;
	while(m)
	{
		m /= 10;             	//m去掉个位数 
		n++;                	//位数加1 
	}
	printf("%d的位数为%d\n", t, n);     	//输出整数及其位数 
	
	return 0;
}
