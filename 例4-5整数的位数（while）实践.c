#include <stdio.h>

int main(void)
{
	int m, n;	
	scanf("%d", &m);
	int t = m;
	n = 0;
	do
	{
		m /= 10; n++;
	}while(m != 0);
	printf("%d的位数为%d\n", t, n);
	
	return 0;
}   
