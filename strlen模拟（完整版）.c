#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//strlen �����ַ������ȵģ�����ĳ����ǲ�����Ϊ������
//���Է�����������Ϊsize_t Ҳ�Ǻ�������
//typedef unsigned int size_t
//size_t strlen(const char* string);

////�ݹ�
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
////ָ��-ָ��
//int my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}

int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}