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
			continue;//�����Ϊ0������������������ 
		else if(shu<0)//�жϷ������ 
			printf("-");
		else if(shu>0&& i!= n)
			printf("+");
			
		shu=(shu<0)?-shu:shu;//����ֵһ��Ҫ�ҵط��� 
		if(shu==1)//shu����1ʱ����� 
		{
			if(i==0)
				printf("1");
			else if(i==1)
				printf("x");
			else
				printf("x^%d",i);
		}else//��������1ʱ��������һ�͵ڶ������� 
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
	if(!ling)//�п��ܶ���ʽ���Ϊ0����� 
		printf("0");
	return 0;
} 
