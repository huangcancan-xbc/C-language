#include <stdio.h>

int main(void)
{
	int i, sum;               	//�ֱ���ѭ���������� 	
	sum = 0; i = 1;             	//ѭ����ʼ���� 
	while(i <= 100)           	//ѭ������ 
	{
		sum += i;               	//����ǰi�ӵ����� 
		i++ ;                 	//i��1 
	}
    printf("sum = %d\n", sum);    	//�����

	return 0;
}
