#include <stdio.h>
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
int main()
{
	printf("1/1");
	for(int i=2;i<=100;i++)
	{
		if(i%2==0)
		{
			printf("-"); 
		}else
		{
			printf("+");
		}
		printf("1/%d",i);
	}
   return 0;
}
