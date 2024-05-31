#include <stdio.h>

int main(void)
{
    int m, i, n = 0;     	//n为累加质数个数 
    for(m = 2;m <= 100;m++)
    { 		//枚举2~100，依次判断m是否为质数，如果是，输出并计数，每5个换行 
        for(i = 2;i < m;i++)
           if(m % i == 0)  break;
        if(i == m)
        {
        	n++;        
			printf("%3d", m);
        	if(n % 5 == 0)     	//如果本行已经输出5个质数，换行 
            	printf("\n"); 
        }                
    }    
	  
	return 0;
}
