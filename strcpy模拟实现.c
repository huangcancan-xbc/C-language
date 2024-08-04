#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrcpy

char* my_strcpy(char* destination, const char* source)
{
	assert(destination&& source);
	char* initial = destination;
	while (*destination++ = *source++)
	{
		;
	}
	return initial;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxx";
	char arr2[] = "abcdef";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}