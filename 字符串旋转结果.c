#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <string.h>
int judgment(char* arr1, char* arr2)
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	if (strstr(arr1, arr2) != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr1[30] = "AABCD";
	char arr2[] = "DAABC";
	int flag = judgment(arr1, arr2);//judgment判断
	if (flag == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}


//本题当然可以将所有旋转后的结果放到一个数组里，然后进行查找，但是这种做法既不好操作，也太费事，
//但是这题有一个很简单的做法：
//其实ABCDE无论怎么旋，旋转后的所有结果，都包含在了ABCDEABCD这个字符串里了。
//所以做法很简单，只需要将原字符串再来一遍接在后面，然后找一找待查找的字符串是不是两倍原字符串的子集即可。
//
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}
