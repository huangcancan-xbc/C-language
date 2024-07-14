#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//实现一个对整形数组的冒泡排序
void paixv(int arr[],int n)
{
	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = 0; j < n - i - 1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n ; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 29,11,54,4,77,45,4574,454,71,43,25,7,14 };
	int n = sizeof(arr) / sizeof(arr[0]);
	paixv(arr, n);
	
	return 0;
}