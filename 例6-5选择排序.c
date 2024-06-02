#include <stdio.h>

void SelectSort(int r[ ], int n);    		//��ѡ������˼�������a�е�n��Ԫ������  
const int N = 6 ;

int main (void)
{	
	int a[N] ;                      		//�ٶ�����N��Ԫ�ص����� a 		
	printf("����%d��������\n", N);   		//��ʾ����N��Ԫ�� 
	for(int i = 0; i < N; i++)          	//�����������N��Ԫ��  		
	    scanf("%d", &a[i]);		
	SelectSort(a, N);             		//�۵��ú���������a��������
	
	printf("�������Ϊ��");
	for(int i = 0; i < N; i++)        	//���������������Ԫ��
	    printf("%d ", a[i]);
	printf("\n");
	
 	return 0;
}
void SelectSort(int r[ ], int n)
{
    int i, j, mink, m;           			//mink�����СԪ�ص��±� 
    for(i = 0; i < n-1; i++)
    {
        mink = i;           				//��r[i]~r[n-1]������Ԫ�أ���mink��¼��СԪ���±� 
        for(j = i + 1; j < n; j++)
        {
            if(r[mink] > r[j])  mink = j;            
        }
        if(mink != i)      		//���a[i]Ԫ�ز���r[i]~r[n-1]�е���СԪ�أ��򽻻�a[mink],a[i] 
	    {
            int t;
            t = r[i];  r[i] = r[mink];  r[mink] = t;
        }       
    }
}
