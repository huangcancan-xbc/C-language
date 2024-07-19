#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//模拟出一个3行4列的数组
	int a[] = { 1,2,3,4 };
	int b[] = { 2,3,4,5 };
	int c[] = { 3,4,5,6 };
	int* arr[3] = { a, b, c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}