#include <stdio.h>
#define N 10

void Input(int a[], int n);         			//���������n��Ԫ�� 
int Search ( int a[], int n, int x );

int main (void)
{
	int cScore[N], x, t;        				//����һ����10��Ԫ�ص�����cScore
	printf("��������cScore��%d��Ԫ�أ�\n", N);
	Input(cScore, N);         				//��������cScore��N��Ԫ�� 	
	printf("����Ҫ���ҵ�����x��"); 
	scanf("%d", &x);        					//����Ҫ���ҵ�Ԫ��x	
	//����N��Ԫ�ص�����cScore�в���x�����ҵ�������ŷ��أ����򷵻�-1 
	t = Search(cScore, N, x);   				//����˳����Һ���
	if(t != -1) 
	    printf("����%d�ɹ����������Ϊ%d\n", x, t);
	else 
	    printf("����%dʧ��\n");
		
  return 0;
}
void Input(int a[], int n)
{//��������a��n��Ԫ��
    int i;
    for(i = 0; i < n; i++) 
        scanf("%d", &a[ i ]);
}
int Search(int a[], int n, int x)  
{//�ں���n��Ԫ�ص�����a�в���x������ҵ����򷵻������ 
 //������Ҳ��ɹ����򷵻�-1
    int  i;
    i = 0;
    while(i < n)
    {
        if (a[i] == x)  break;
        i++;
    } 
    if ( i < n ) return  i+1;    				//���ҳɹ������������
    return  -1;             					//���Ҳ��ɹ�������-1
}
