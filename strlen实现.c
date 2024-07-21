#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现库函数strlen
#include <stdio.h>

int my_strlen(char* arr)
{
	int count = 0;
	for (int i = 0;; i++)
	{
		if (arr[i] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return count;
}
int main()
{
	char arr[] = "hello,world!";
	int sz = my_strlen(arr);
	printf("%d", sz);
	return 0;
}






//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}