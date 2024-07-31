#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������

void Swap(char* buf1, char* buf2, size_t width)
{
	char tmp;
	for (size_t i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int com_par(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void effervescence(void* base, size_t sz, size_t width, int (*cmp)(const void*, const void*))
{
	for (size_t i = 0; i < sz; i++)
	{
		for (size_t j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				// ����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main()
{
	int arr[] = { 31,21,54,56,78,91,18,61,75,49 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);

	effervescence(arr, sz, sizeof(arr[0]), com_par); //effervescence:ð��

	for (size_t i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}







//#include<stdio.h>
//
////��qsort������дð������
//int cmp(void* e1, void* e2)   //��ѡ��ıȽϷ���
//{
//	return *((int*)e1) - *((int*)e2);
//}
//void swap(char* p1, char* p2, int width)   //ʵ������Ԫ�صĽ���
//{
//	int t = 0;
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		t = *p1;
//		*p1 = *p2;
//		*p2 = t;
//		p1++;
//		p2++;
//	}
//}
//void bubble_sort(void* arr, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ð����������
//		for (j = 0; j < sz - 1 - i; j++)   //ÿһ��ð������
//		{
//			if (cmp((char*)arr + (j * width), (char*)arr + (j + 1) * width) > 0)
//			{
//				//�����������н���
//				swap((char*)arr + (j * width), (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };     //�����������鲢��ʼ��
//	int sz = sizeof(arr) / sizeof(arr[0]);    //�������鳤��
//	int i = 0;
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);    //ģ��qsort����ʵ��ð������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);                     //��������������д�ӡ����֤�����Ƿ�ɹ�
//	}
//}
//
