#include <stdio.h>

int main(void)
{
	int n,  i;	
	printf("����������");
	scanf("%d", &n);               	//��������n 
	double sum = 0.0 , sign = 1.0, term;   	//�ֱ��ź͡��������ڱ����������ֵ 
	for(i = 1; i <= n; i++)
	{		
		term = sign / i;           	//���i���ֵ 
		sum += term;            	//����i���ֵterm�ӵ��ۼ���sum�� 
		sign *= -1;              	//�ı���һ��ķ��� 
	}
	printf("sum = %f\n", sum);       	//��������� 
	
	return 0;
}
