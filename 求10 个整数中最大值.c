#include <stdio.h>
int main()
{
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int temp=arr[0];
	
	for(int i=1;i<10;i++)
	{
		if(temp<arr[i])
		{
			temp=arr[i];
		}
			
	}
	printf("最大值是：%d",temp);
	
   return 0;
}
