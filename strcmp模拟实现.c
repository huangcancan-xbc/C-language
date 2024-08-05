#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//Ä£ÄâÊµÏÖstrcmp

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
		return 1;
	else
		return -1;*/
	return *str1 - *str2;
}

//int my_strcmp(const char* src, const char* dst)
//{
//	int ret = 0;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
//		++src, ++dst;
//	?
//		if (ret < 0)
//			ret = -1;
//		else if (ret > 0)
//			ret = 1;
//	?
//		return ret;
//}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "hello";
	int result = my_strcmp(arr1, arr2);
	printf("%d\n", result);
	if (result > 0)
	{
		printf("arr1>arr2\n");
	}
	else if (result < 0)
	{
		printf("arr1<arr2\n");
	}
	else
	{
		printf("arr1=arr2\n");
	}

	return 0;
}