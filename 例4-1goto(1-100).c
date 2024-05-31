#include <stdio.h>

int main(void)
{
	int i, sum;	
	sum = 0;
	i = 1;
	L1: if(i <= 100)
	{		
		sum += i; 
		i++; 
		goto L1;      //转向L1，判断循环条件
	}
	printf("sum = %d\n", sum);
	
	return 0;
}
