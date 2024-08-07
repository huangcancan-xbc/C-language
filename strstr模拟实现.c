#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	const char* arr1 = NULL;
	const char* arr2 = NULL;
	const char* p = str1;

	while (*p)
	{
		arr1 = p;
		arr2 = str2;
		while (*arr1 != '\0' && *arr2 != '\0' && *arr1 == *arr2)
		{
			arr1++;
			arr2++;
		}

		if (*arr2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}

	return NULL;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cd";
	char* temp = my_strstr(arr1, arr2);
	if (temp == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了 %s\n", temp);
	}
		
	return 0;
}