#include <stdio.h>
#define N 100

int main(void)
{ 
	int age; 
	int sage[N];            			//定义能存放N个整数的数组sage
	double sum = 0;    
	int n = 0;         
	while(1)  
	{
		scanf("%d", &age);   
		if(age <= 0) break;    
		sum += age;
		sage[n] = age;       			//将age赋值给元素sage[n]
		n++;
	}
	int k = 0;
	if(n > 0)
	{
		printf("%.2f\n", sum/n);
		for(int i = 0;i < n; i++)
		    if(sage[i] > sum/n)  		//判断sage[i]的值是否大于平均年龄sum/n
			    k++;
		printf("%d\n" , k);
	}	        
		
	return 0;	
}
