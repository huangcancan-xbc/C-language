#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������


/*
˼·��
1. ��ȡ���е�����λ�������λ��1�����1����0�����0
2. ��ͬ���ķ�ʽ��ȡż��λ��


 ���num��ĳһλ��0����1�ķ�ʽ��
   1. ��num�����ƶ�iλ
   2. ������λ֮��Ľ����1��λ�룬�����
	  �����0�����i������λ��0
	  ����Ƿ�0�����i������λ��1
*/
void Printbit(int num)
{
	printf("������");
	for (int i = 31; i >= 1; i -= 2)
	{
		
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("ż����");
	for (int i = 30; i >= 0; i -= 2)
	{
		
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("������һ��������");
	scanf("%d", &num);
	Printbit(num);
	return 0;
}