#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，可以左旋字符串中的k个字符。
//
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include <stdio.h>
#include <string.h>
void levorotation(char* arr, int k)
{
	int len = strlen(arr);
	k %= 4;//会循环，用于减少时间
	for (int i = 0; i < k; i++)
	{
		char temp = arr[0];
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = temp;
	}
}
int main()
{
	char arr[] = "ABCD";
	int k = 0;
	printf("请输入需要左旋字符串的字符个数：");
	scanf("%d", &k);
	levorotation(arr, k);//levorotation左旋
	printf("%s\n", arr);
	return 0;
}




//设计循环使其可以旋1次，然后让他执行n次是一个最简单的思路：
//void leftRound(char* src, int time)
//{
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
//	for (i = 0; i < time; i++) //执行k次的单次平移
//	{
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) //单次平移
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//
//
//改进一：
//这个思路当然可以，但是一次一次转毕竟太麻烦，就不能一次到位么？
//当然可以，我们可以选择拼接法，一次到位：
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //断开位置的下标
//	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp
//
//	strcpy(tmp, src + pos); //先将后面的全部拷过来
//	strncat(tmp, src, pos); //然后将前面几个接上
//	strcpy(src, tmp); //最后拷回去
//}
//
//
//改进二：
//这个方法要用到一个数组形成的辅助空间，让人觉得有点不爽，还可以有更好的选择，
//例如ABCDEFG，左旋3次后变成DEFGABC，有一个特殊的操作方式：
//先将要左旋的前三个家伙逆序（CBADEFG），然后将后半段也逆序（CBAGFED），最后整体逆序（DEFGABC）即可。
//这样只需要做数值交换即可，可以写一个函数帮我们完成局部逆序，代码如下：
//void reverse_part(char* str, int start, int end) //将字符串从start到end这一段逆序
//{
//	int i, j;
//	char tmp;
//
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len;
//	reverse_part(src, 0, pos - 1); //逆序前段
//	reverse_part(src, pos, len - 1); //逆序后段
//	reverse_part(src, 0, len - 1); //整体逆序
//}
//
//
//这样就舒服多了。
//
