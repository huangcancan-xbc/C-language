#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列


/*
思路：
1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0
2. 以同样的方式提取偶数位置


 检测num中某一位是0还是1的方式：
   1. 将num向右移动i位
   2. 将移完位之后的结果与1按位与，如果：
	  结果是0，则第i个比特位是0
	  结果是非0，则第i个比特位是1
*/
void Printbit(int num)
{
	printf("奇数：");
	for (int i = 31; i >= 1; i -= 2)
	{
		
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("偶数：");
	for (int i = 30; i >= 0; i -= 2)
	{
		
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	Printbit(num);
	return 0;
}