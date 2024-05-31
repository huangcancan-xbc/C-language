#include <stdio.h> 

int main(void)
{	
	int x;		//存放找零前的钱数
	int ones, twos, fives;	//分别存放找零后1角、2角、5角的权数 
	int exitf = 0; 	//存放是否退出循环的变量，值为1退出，为0不退出 
	printf("输入钱数：");	//提示输入的钱数 
	scanf("%d", &x);
	printf("一种找零方案为：\n");   
	for(ones = 1; ones < x * 10; ones++)
	{
	   for(twos=  1; twos < x * 10 / 2; twos++)
	   {
		for(fives = 1; fives < x * 10 / 5; fives++)
		{
		    if(ones + twos * 2 + fives * 5 == x * 10)
		    {
		        printf("1角%d枚，2角%d枚,5角%d枚\n", ones, twos, fives);
		            exitf = 1;
		            break;
		    }
		    if(exitf) break;
		}
		if(exitf) break;
	    }
	    if(exitf) break;
	}
	
	return 0;
}
