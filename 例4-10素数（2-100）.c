#include <stdio.h>

int main(void)
{
    int m, i, n = 0;     	//nΪ�ۼ��������� 
    for(m = 2;m <= 100;m++)
    { 		//ö��2~100�������ж�m�Ƿ�Ϊ����������ǣ������������ÿ5������ 
        for(i = 2;i < m;i++)
           if(m % i == 0)  break;
        if(i == m)
        {
        	n++;        
			printf("%3d", m);
        	if(n % 5 == 0)     	//��������Ѿ����5������������ 
            	printf("\n"); 
        }                
    }    
	  
	return 0;
}
