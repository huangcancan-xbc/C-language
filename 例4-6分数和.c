#include <stdio.h>

int main(void)
{
	int n,  i;	
	printf("输入项数：");
	scanf("%d", &n);               	//输入项数n 
	double sum = 0.0 , sign = 1.0, term;   	//分别存放和、正负调节变量、各项的值 
	for(i = 1; i <= n; i++)
	{		
		term = sign / i;           	//求第i项的值 
		sum += term;            	//将第i项的值term加到累加器sum中 
		sign *= -1;              	//改变下一项的符号 
	}
	printf("sum = %f\n", sum);       	//输出分数和 
	
	return 0;
}
