#define _CRT_SECURE_NO_WARNINGS 1

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的。
// 请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

#include <stdio.h>
Inquire(int arr[4][4], int n)
{
	int hang = 0;
	int lie = 3;
	int flag = 0;
	while (hang >= 0 && lie <= 3)
	{
		if (n < arr[hang][lie])
		{
			lie--;
		}
		else if (n > arr[hang][lie])
		{
			hang++;
		}
		else
		{
			printf("找到了，下标是：%d %d\n\n", hang + 1, lie + 1);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("找不到！\n");
	}
}
int main()
{
	int arr[4][4] = { {1,2,3,4},
					  {5,6,7,8},
					  {9,10,11,12},
					  {13,14,15,16} };
	int n = 0;
	printf("请输入想要查询的数字：");
	scanf("%d", &n);
	Inquire(arr, n);//Inquire查询

	return 0;
}






//我们仔细分析，不难发现，对于杨氏矩阵老说，右上角和左下角的元素是有特点的。
//右上角的元素是一行中最大的，一列中最小的。左下角的元素是一行中最小的，是一列中最大的。
//所以我们可以从右上角或者左下角开始查找。
//比如：从右上角开始查找的时候，右上角的元素比我们要查找元素小，我们就可以去掉右上角元素所在的这一行；
//右上角的元素比我们要查找的元素大，我们就可以去掉右上角元素所在的这一列。
//然后依然找右上角的元素继续和要查找的元素与比较。这样每一次比较去掉一行或者去掉一列。
//这个查找效率是高于遍历数组元素的，所以时间复杂度是小于O(N)，也满足题目要求。
//
//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) //第一个参数的类型需要调整
//{
//	int i = 0, j = y - 1; //从右上角开始遍历
//	while (j >= 0 && i < x)
//	{
//		if (a[i][j] < f) //比我大就向下
//		{
//			i++;
//		}
//		else if (a[i][j] > f) //比我小就向左
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[][3] = { {1, 3, 5},
//				  {3, 5, 7},
//				  {5, 7, 9} }; //一个示例
//
//	if (findnum(a, 3, 3, 2))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}