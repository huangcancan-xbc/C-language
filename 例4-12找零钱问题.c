#include <stdio.h>

int main(void)
{
	int x;	//存放找零前的钱数
	int ones, twos, fives;	//分别存放找零后1角、2角、5角的枚数 	
	printf("输入钱数：");  	//提示输入的钱数 
	scanf("%d", &x);
	printf("找零方案有：\n");
	for(ones = 1; ones < x * 10;ones++)	//穷举1角从1枚到(x*10)-1 枚
	{  		//穷举2角从1枚到(x*10)/2-1 枚
		for(twos = 1; twos < x * 10 / 2; twos++) 
	   {   //穷举5角从1枚到(x*10)/5-1 枚
			for(fives = 1; fives < x * 10 / 5; fives++)
			{
			//如果找零的所有钱的总和与x相同，则是一种方案
		if(ones + twos * 2 + fives * 5 == x * 10)
		{  //输出找零方案
				printf("1角%d枚，2角%d枚,5角%d枚\n", ones, twos, fives); 
			}
		}
		}
	}		
	
	return 0;
}
