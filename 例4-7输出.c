#include <stdio.h>

int main(void)
{
	for(int i = 1;i <= 100;i++)
	{
		if(i % 2 != 0)   continue;    	//后面的循环语句不执行，直接执行i++
		printf("%3d ", i);
	}
	
	return 0;
}
