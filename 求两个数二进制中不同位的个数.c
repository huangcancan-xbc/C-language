#define _CRT_SECURE_NO_WARNINGS 1

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

//输入例子:
//
//1999 2299
//
//输出例子 : 7



//
//思路：
//1. 先将m和n进行按位异或，此时m和n相同的二进制比特位清零，不同的二进制比特位为1
//2. 统计异或完成后结果的二进制比特位中有多少个1即可
//

#include <stdio.h>
int calc_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}


int main()
{
	int m, n;
	while (scanf("%d %d", &m, &n) == 2)
	{
		printf("%d\n", calc_diff_bit(m, n));
	}
	return 0;
}

//#include <stdio.h>
//int main() {
//
//	int n = 0, m = 0;
//
//	scanf("%d%d", &n, &m);
//
//	int a = n ^ m;
//
//	int count = 0;
//
//	while (a)
//
//	{
//
//		if (a & 1)
//
//		{
//
//			count++;
//
//		}
//
//		a >>= 1;
//
//	}
//
//	printf("%d", count);
//
//	return 0;
//
//}