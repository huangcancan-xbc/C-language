#include <stdio.h>

int main(void)
{
	int i, j;
	char ch = '*';	
	for(i = 1; i <= 3; i++)         	//i控制行号
	{ //要输出三行*，所以i从初值到终值保证内部循环执行3次 
		for(j = 1;j <= 2 * i - 1; j++)   	//j变量控制每行星号个数
			printf("%c", ch);
		printf("\n");             	//每行*输出完换行 
	}
	
	return 0;
}
