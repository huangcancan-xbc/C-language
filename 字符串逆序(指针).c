#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，可以逆序一个字符串的内容
#include <stdio.h>
#include <string.h>

void ni_xv(char str[], int len, const char* p)
{
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", *(p + i));
    }
}


int main()
{
    char str[10000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    char* p = str;
    ni_xv(str, len, p);

    return 0;
}