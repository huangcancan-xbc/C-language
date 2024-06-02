#include <stdio.h>

int main(void)
{
	int m, i ;
	printf("输入整数m: ");
	scanf("%d", &m) ;
	//依次判断m是否能被2~m-1之间的整数整除 
	for(i = 2;i < m;i++)
	{
	  if(m % i == 0)    	//如果m是i的倍数，即m能被i整除
	    break;      
	}   
	if(i == m)          	//说明是通过 for中i<m为假时终止循环的
	  printf("%d是素数!\n", m);
	else             	//说明是在循环体中执行了break语句而终止循环的
	  printf("%d不是素数!\n", m);
	
	return 0;
}
