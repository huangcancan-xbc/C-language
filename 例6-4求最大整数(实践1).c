#include <stdio.h>

int main (void)
{
	int n, maxn, maxk; 						//�洢����������������������������λ��
	int x;
	 
	printf("��������������");
	scanf("%d", &n);
	printf("����%d��������",n);
	scanf("%d", &maxn);   					//�����һ�����������丳ֵ��maxn 
	maxk = 1;             					//�����һ�����������ʱλ��Ϊ1 	
	for(int i = 2; i <= n; i++)  			//��������n-1��Ԫ�أ�ͬʱ�뵱ǰ��������Ƚ� 
	{
		scanf("%d", &x);
		if(x > maxn)
		{
			maxn = x;  maxk = i;
		}
	}
	printf("�������Ϊ��%d λ��Ϊ:%d\n", maxn, maxk);                 
	
	return 0;
}
