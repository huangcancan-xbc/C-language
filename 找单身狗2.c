#define _CRT_SECURE_NO_WARNINGS 1

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.

#include <stdio.h>
#include <string.h>

void find_single_dog(int arr[], int sz, int single_dog[])//find:找到		single:单		dog：狗
{
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//计算ret的哪一位二进制位是1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			single_dog[0] ^= arr[i];
		}
		else
		{
			single_dog[1] ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,8,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int single_dog[2] = {0};

	find_single_dog(arr, sz, single_dog);
	printf("%d %d\n", single_dog[0], single_dog[1]);
	return 0;
}







//找出一个只出现过一次的数字的问题处理方法就是找一个数字把里面所有的数字都异或一遍，利用异或两次等于没异或的特点来处理。
//那么如果有两个数字都只出现了一次，那么如此得到的应该是两个数异或的结果。
//首先这个结果肯定不是0（要不然就全都配对了），所以里面一定至少一位是一。
//找出值为1的一位，以这一位的值将结果分为两组。例如1 2 3 4 1 2，异或完的结果应该是3 ^ 4得到的111，那么随便找一位就行了。
//例如找最低位，那么这一位是1的有1 3 1，是0的有2 4 2，由于是利用异或结果为1的某一位分的组，所以两个待查询数字一定分别在两组中。
//所以再找两个变量，分别异或两组数，即可找到这两个数。
//
//void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
//{
//	int i;
//	int sum = 0;
//	​
//		for (i = 0; i < 9; i++)
//		{
//			sum ^= arr[i];
//		} //先找到两个数互相异或的结果
//	​
//		int pos;
//	for (i = 0; i < 32; i++)
//	{
//		if (sum & 1 << i)
//		{
//			pos = i;
//			break;
//		}
//	} //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
//	​
//		* pnum1 = *pnum2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] & 1 << pos)
//		{
//			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
//		}
//		else
//		{
//			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
//		}
//	}
//}







//版本1：有一个数组，其中只有一个数字出现1次，其余数字都出现了2次
//例如：1 2 3 4 5 1 2 3 4
//

//版本2：
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//例如： 1 2 3 4 5 1 2 3 4 6
// //001
// //010
// //011
// //100
// //101 110
// //
// 编写一个函数找出这两个只出现一次的数字。
//
//分组：
//分组的要领，就是讲2个单身狗必须放在2个组，同时每个组剩余的数字都是成对出现的
//
//5^6
//101
//110
//011
//
//5 1 1 3 3
//6 2 2 4 4
//
//5 1 1 4 4 
//6 2 2 3 3
//n*n =100*100 =10000
//
//void find_single_dog(int arr[], int sz, int single_dog[])
//{
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算ret的哪一位二进制位是1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			single_dog[0] ^= arr[i];
//		}
//		else
//		{
//			single_dog[1] ^= arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,8,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int single_dog[2] = {0};
//
//	find_single_dog(arr, sz, single_dog);
//	printf("%d %d\n", single_dog[0], single_dog[1]);
//	return 0;
//}