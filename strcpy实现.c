#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ�ֿ⺯��strcpy
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
//	*dest = *src;//����\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//����\0
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
//	//����
//	//assert�п��Է�һ�����ʽ�����ʽ�Ľ�����Ϊ�٣��ͱ������Ϊ��ɶ�¶�������
//	//assert ��ʵ��release�汾���Ż���
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
//	assert(dest && src);//����ָ�����Ч��
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
//	//strcpy - �ַ�������
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

//�⺯����strcpy���ص���Ŀ��ռ����ʼ��ַ
//

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//����ָ�����Ч��
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
//	//��ʽ����
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}