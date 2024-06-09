#include <stdio.h>
#include <math.h>
int main()
{
	int a=0;
	
	for(a=100;a<=200;a++)
	{
		int sushu=1; 
		for(int i=2;i<=(int)sqrt(a);i++)
		{
			if(a%i==0)
			{
				sushu=0;
				break;
			}
		}
		if(sushu==1)
		printf("%d ",a);
	}
	return 0;
}
