#include <stdio.h>
#define int long long
int a[100000000];//����ѧ���ĳ�ʼ�ɼ�
int b[100000000]; 
int main()
{
    int n, p,x,y,z; 
    scanf("%lld %lld", &n, &p);
    //����ѧ���ĳ�ʼ�ɼ�
    for(int i=1;i<=n;i++)
    {
    	scanf("%lld ",&a[i]);
    	
	}
	
	for (int i = 1;i <= n;i++)
	{
		b[i] = a[i] - a[i - 1];
	}
        
    for(int i=1;i<=p;i++)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
		
		b[x] += z;
		b[y + 1] -= z;
		
    }
    
    int temp=100;
    //���+z�������
    for (int i = 1;i <= n;i++)
    {
    	a[i] = b[i] + a[i - 1];//b[i] = b[i - 1] + b[i];
    	if(temp>a[i])
    	{
    		temp=a[i];
		}
    	
	}
        
    printf("%d ",temp);
    
        
    return 0;
}
