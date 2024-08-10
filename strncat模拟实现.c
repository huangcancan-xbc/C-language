#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strncat

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strncat(char* destination, const char* source, size_t num)
{
    char* temp = destination;
    assert(destination && source);

    // 找到目标字符串的结尾
    while (*destination)
    {
        destination++;
    }

    // 复制最多 num 个字符
    while (num-- > 0 && (*destination++ = *source++))
    {
        ;
    }

    // 添加字符串结束标志
    *destination = '\0';

    return temp;
}

int main()
{
    char arr1[20] = "我喜欢";
    char arr2[] = "编程！";
    my_strncat(arr1, arr2, 8);
    printf("连接后的字符串：%s\n", arr1);
    return 0;
}





//char* mystrncat(char* dst, const char* src, size_t n)
//{
//    char* tmp = dst;
//
//    while (*dst)
//    {
//        dst++;
//    }
//
//    int i;
//    for (i = 0; src[i] && i < n; i++)
//    {
//        dst[i] = src[i];
//    }
//
//    dst[i] = 0;
//    return tmp;
//}