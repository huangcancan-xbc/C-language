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
		goto L1;      //ת��L1���ж�ѭ������
	}
	printf("sum = %d\n", sum);
	
	return 0;
}
