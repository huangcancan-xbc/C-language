#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//Ä£ÄâÊµÏÖstrcat

char* my_strcat(char* destination, const char* source)
{
	assert(destination && source);
	char* initial = destination;
	while (*destination)
	{
		destination++;
	}

	while (*destination++ = *source++)
	{
		;
	}

	return initial;
}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "word";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}