#include <stdio.h>

int Input(int arr[]);                  		//��������arr��Ԫ�أ�����Ԫ�ظ��� 
double GetAverage(int arr[], int size);   	//����������size��Ԫ�ص�ƽ��ֵ 
int Count(int arr[], int size, double ave);  	//����������size��Ԫ���д���ave��Ԫ�ظ��� 
const int N=10;

int main (void)
{
    int age[N], n, k;     					//�ֱ�洢���䡢ʵ��ѧ�������Լ�����ƽ�������ѧ����
    double ave;                				//���ѧ����ƽ������	

    n=Input(age);              				//����ѧ�����䣬����ѧ����n
    ave = GetAverage(age, n);    			//��n��ѧ��ƽ������
    k=Count(age, n, ave);        				//�����ƽ�������ѧ����
    printf("ƽ��������:%.1f\n����ƽ�������ѧ������:%d\n", ave, k); 

    return 0;
}
int Input(int arr[])
{
    int n = 0, a;               				//�洢ѧ��������ѧ��������
	
    while(1)
    {
	    scanf("%d", &a);
	    if(a <= 0 ) break;   				//���䲻�Ϸ����������� 
	    arr[n++] = a;     					//��a��ֵ���±�Ϊn��Ԫ�أ�ͬʱѧ������1
    }

    return n;	
} 
double GetAverage(int arr[], int size)
{
    int  i;
    double ave, sum = 0;
		
    for (i = 0; i < size; ++i)
    {
	    sum += arr[i];
    }	
    ave = sum / size;
	
    return ave;
}
int Count(int arr[], int size, double ave)
{
	int k = 0, i;	            				//�洢ֵ����ave��Ԫ�ظ���
	for(i = 0; i < size; i++)
	{
		if(arr[i] > ave)     k++;      		//Ԫ��ֵ����aveʱ��k����1 
	}

	return k;                      			//����k
}
