#include <stdio.h>

const int N = 10;

int main(void)
{
	int a[N];              				//������N������Ԫ�ص�����a
	int n;
	scanf("%d", &n) ;       				//������������
	for(int i = 0; i < n; i++)   		//��������a��n��Ԫ�� 
		scanf("%d", &a[i]);  			//����Ԫ��a[i], ע������a�ĵ�i+1��Ԫ�� 
	for(int i = 0;i < n/2;i++)  			//���ã������ף�a[0]����β��a[n-1]����ȵ�Ԫ�ؽ�����ֵ
	{
        int t;
        t = a[i];  a[i] = a[n-1-i];  a[n-1-i] = t;	//����a[i]��a[n-1-i]��ֵ 
	}
	for(int i = 0;i < n;i++)    			//���a��n��Ԫ�� 
	    printf("%d  ",a[i]);                   
	
	return 0;
}
