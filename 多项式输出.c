#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ling=0;
	
	for(int i=n;i>=0;i--)
	{
		int shu;
		scanf("%d",&shu);
		
		if(shu==0)
			continue;//如果数为0，不做处理，跳过本次 
		else if(shu<0)//判断符号情况 
			printf("-");
		else if(shu>0&& i!= n)
			printf("+");
			
		shu=(shu<0)?-shu:shu;//返回值一定要找地方存 
		if(shu==1)//shu等于1时的情况 
		{
			if(i==0)
				printf("1");
			else if(i==1)
				printf("x");
			else
				printf("x^%d",i);
		}else//数不等于1时，倒数第一和第二项的情况 
		{
			if(i==0)
				printf("%d",shu);
			else if(i==1)
				printf("%dx",shu);
			else 
				printf("%dx^%d",shu,i);
		}
		ling=1;
	}
	if(!ling)//有可能多项式结果为0的情况 
		printf("0");
	return 0;
} 
