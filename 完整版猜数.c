#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caidan()
{
	printf("**************************\n");
	printf("******   1. play   *******\n");
	printf("******   0. exit   *******\n");
	printf("**************************\n");
}

//rand������ר�����������������
//rand�������ص���0~RAND_MAX(32767)֮���һ�������
//#define RAND_MAX 0x7fff

//rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
//srand�����ڳ�����ֻҪ����һ�ξͿ����ˣ�����ҪƵ������

//ʱ���
//C�����У�time�����᷵��ʱ���
//
//NULL - ��ָ��

void game()
{
	int a = 0;
	//1. ���������
	int ret = rand()%1000+1;
	//printf("%d\n", ret);
	//2. ������
		printf ("���Ѿ������һ��1��1000֮�������\n");
		printf ("��²����1��1000֮�������");
		int count=0;
	while (1)
	{
		
		scanf("%d", &a);
		count++;
		if (a < ret)
		{
			printf("��µ���С��\n");
		}
		else if (a > ret)
		{
			printf("��µ�������\n");
		}
		else
		{
			printf ("̫���ˣ�������%d�ξͲµ��˴𰸡�\n",count);
			break;
		}
	}
}
int main()
{
	int kaishi = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//��ӡ�˵�
		caidan();
		printf("��ѡ��:");
		scanf("%d", &kaishi);
		switch (kaishi)
		{
		case 1:
			game();//game�������ǲ����ֵ�����·���߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (kaishi);

	return 0;
}
