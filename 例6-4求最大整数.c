#include <stdio.h>

const int N=10;

int main (void)
{
	int a[N];              					//������N������Ԫ�ص�����a
	int n, maxk;           					//�洢ʵ��Ԫ�ظ���������������������±�
	 
	printf("��������������");
	scanf("%d", &n);
	printf("����%d��������", n);
	for(int i = 0; i < n; i++)       			//����n��Ԫ�� 
	    scanf("%d", &a[i]);     				//��������a[i]��ע������a�ĵ�i+1��Ԫ��
	maxk = 0;               					//����a[0]���������������� 
	for(int i = 1; i < n; i++)    			//ÿ��Ԫ��a[i]��a[maxk] �Ƚ� 
	{
	    if(a[i] > a[maxk]) 
		    maxk = i;
	}
	printf("�������Ϊ��%d ��λ��Ϊ:%d\n", a[maxk], maxk+1);                 
	
	return 0;
}
