#include <stdio.h>

int main(void)
{
	int x;	//�������ǰ��Ǯ��
	int ones, twos, fives;	//�ֱ��������1�ǡ�2�ǡ�5�ǵ�ö�� 	
	printf("����Ǯ����");  	//��ʾ�����Ǯ�� 
	scanf("%d", &x);
	printf("���㷽���У�\n");
	for(ones = 1; ones < x * 10;ones++)	//���1�Ǵ�1ö��(x*10)-1 ö
	{  		//���2�Ǵ�1ö��(x*10)/2-1 ö
		for(twos = 1; twos < x * 10 / 2; twos++) 
	   {   //���5�Ǵ�1ö��(x*10)/5-1 ö
			for(fives = 1; fives < x * 10 / 5; fives++)
			{
			//������������Ǯ���ܺ���x��ͬ������һ�ַ���
		if(ones + twos * 2 + fives * 5 == x * 10)
		{  //������㷽��
				printf("1��%dö��2��%dö,5��%dö\n", ones, twos, fives); 
			}
		}
		}
	}		
	
	return 0;
}
