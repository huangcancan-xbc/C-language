#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//模仿qsort的功能实现一个通用的冒泡排序

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
				// 交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main()
{
	int arr[] = { 31,21,54,56,78,91,18,61,75,49 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);

	effervescence(arr, sz, sizeof(arr[0]), com_par); //effervescence:冒泡

	for (size_t i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}







//#include<stdio.h>
//
////仿qsort函数重写冒泡排序
//int cmp(void* e1, void* e2)   //所选择的比较方法
//{
//	return *((int*)e1) - *((int*)e2);
//}
//void swap(char* p1, char* p2, int width)   //实现数组元素的交换
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
//		//冒泡排序趟数
//		for (j = 0; j < sz - 1 - i; j++)   //每一趟冒泡排序
//		{
//			if (cmp((char*)arr + (j * width), (char*)arr + (j + 1) * width) > 0)
//			{
//				//符合条件进行交换
//				swap((char*)arr + (j * width), (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };     //定义整型数组并初始化
//	int sz = sizeof(arr) / sizeof(arr[0]);    //计算数组长度
//	int i = 0;
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);    //模拟qsort函数实现冒泡排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);                     //排序完后对数组进行打印，验证排序是否成功
//	}
//}
//
