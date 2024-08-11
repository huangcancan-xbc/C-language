#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strncpy

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncpy(char* destination, const char* source, size_t num)
{
    char* temp = destination;
    assert(destination && source);

    for (size_t i = 0; i < num; i++)
    {
        if (*source == '\0')
            break;

        *destination = *source;
        destination++;
        source++;
    }

    // 如果 num 大于源字符串长度，或者 num 达到后刚好遇到源字符串的结束符，
    // 需要确保目标字符串以空字符结尾。
    *destination = '\0';

    return temp;
}

int main()
{
    char arr1[] = "我喜欢编程";
    char arr2[20] = { 0 };
    my_strncpy(arr2, arr1, 10);
    printf("复制的字符串：%s\n", arr2);
    return 0;
}





//char* mystrncpy(char* dst, const char* src, size_t n)
//{
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    if (i < n)
//    {
//        dst[i] = 0;
//    }
//    return dst;
//}