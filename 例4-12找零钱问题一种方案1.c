#include <stdio.h> 

int main(void)
{	
	int x;		//�������ǰ��Ǯ��
	int ones, twos, fives;	//�ֱ��������1�ǡ�2�ǡ�5�ǵ�Ȩ�� 
	int exitf = 0; 	//����Ƿ��˳�ѭ���ı�����ֵΪ1�˳���Ϊ0���˳� 
	printf("����Ǯ����");	//��ʾ�����Ǯ�� 
	scanf("%d", &x);
	printf("һ�����㷽��Ϊ��\n");   
	for(ones = 1; ones < x * 10; ones++)
	{
	   for(twos=  1; twos < x * 10 / 2; twos++)
	   {
		for(fives = 1; fives < x * 10 / 5; fives++)
		{
		    if(ones + twos * 2 + fives * 5 == x * 10)
		    {
		        printf("1��%dö��2��%dö,5��%dö\n", ones, twos, fives);
		            exitf = 1;
		            break;
		    }
		    if(exitf) break;
		}
		if(exitf) break;
	    }
	    if(exitf) break;
	}
	
	return 0;
}
