#include <stdio.h>
#define N 100

int main(void)
{ 
	int age; 
	int sage[N];            			//�����ܴ��N������������sage
	double sum = 0;    
	int n = 0;         
	while(1)  
	{
		scanf("%d", &age);   
		if(age <= 0) break;    
		sum += age;
		sage[n] = age;       			//��age��ֵ��Ԫ��sage[n]
		n++;
	}
	int k = 0;
	if(n > 0)
	{
		printf("%.2f\n", sum/n);
		for(int i = 0;i < n; i++)
		    if(sage[i] > sum/n)  		//�ж�sage[i]��ֵ�Ƿ����ƽ������sum/n
			    k++;
		printf("%d\n" , k);
	}	        
		
	return 0;	
}
