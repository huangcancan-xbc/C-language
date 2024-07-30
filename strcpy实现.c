#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现库函数strcpy
#include <stdio.h>

//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL);
//    assert(src != NULL);
//
//    while ((*dest++ = *src++))
//    {
//        ;
//    }
//    return ret;
//}

my_strcpy(char* arr1, char* arr2)
{
    while (*arr2 != '\0')
    {
        *arr1 = *arr2;
        arr1++;
        arr2++;
    }
    *arr1 = *arr2;
}
int main()
{
    char arr1[20] = "***************";
    char arr2[] = "hello";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    
    return 0;
}





//#include <stdio.h>
//#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//拷贝\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}*/
//
//	//断言
//	//assert中可以放一个表达式，表达式的结果如果为假，就报错，如果为真啥事都不发生
//	//assert 其实在release版本中优化了
//	/*assert(src != NULL);
//	assert(dest != NULL);*/
//
//	assert(dest && src);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);//断言指针的有效性
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//
//int main()
//{
//	//strcpy - 字符串拷贝
//	//char arr1[20] = "xxxxxxxxxxx";
//	//char arr2[] =   "hello";
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char arr3[20] = {0};
//	char* p = NULL;
//	my_strcpy(arr3, p);
//
//	return 0;
//}

//库函数的strcpy返回的是目标空间的起始地址
//

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//断言指针的有效性
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//	
//	//链式访问
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}