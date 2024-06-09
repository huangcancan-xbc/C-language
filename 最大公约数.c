#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int t=(a>b?b:a);
	while(1)
	{
		if(a%t==0&&b%t==0)
		{
			break;
		}
		t--;
	}
	printf("%d",t);
	return 0;
}
