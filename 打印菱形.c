#define _CRT_SECURE_NO_WARNINGS 1

//��ӡ����
#include <stdio.h>

void print(char a[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		a[i] = ' ';
	}

	int i = 6;
	a[i] = '*';
	printf("      *      \n");

	for (int j = 1; j < sz / 2 + 1; j++)
	{
		a[i - j] = a[i + j] = '*';
		for (int j = 0; j < sz; j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}

	for (int j = 1; j < sz / 2; j++)
	{
		a[13 - j] = a[j - 1] = ' ';
		for (int j = 0; j < sz; j++)
		{
			printf("%c", a[j]);
		}
		printf("\n");
	}
	printf("      *      \n");

}

int main()
{
	int sz = 13;
	char a[13];
	char* p = a;
	print(a, sz);
	return 0;
}

///*
//˼·��
//��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
//�����ǣ�������ո񣬺����*��ÿ����
//  �ո񣺴������£�һ�м���һ��
//  *��2*i+1�ķ�ʽ����
//
//�����ǣ�������ո񣬺����*��ÿ����
//  �ո񣺴������£�ÿ�ж�һ���ո�
//  *�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣����У�line��ʾ�ܹ��ж�����
//����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�
//*/
//
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}