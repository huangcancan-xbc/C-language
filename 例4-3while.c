#include <stdio.h>

int main(void)
{
	int i, sum;               	//分别存放循环变量及和 	
	sum = 0; i = 1;             	//循环初始操作 
	while(i <= 100)           	//循环条件 
	{
		sum += i;               	//将当前i加到和中 
		i++ ;                 	//i加1 
	}
    printf("sum = %d\n", sum);    	//输出和

	return 0;
}
