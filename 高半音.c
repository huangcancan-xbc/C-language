#define _CRT_SECURE_NO_WARNINGS 1

//https://www.lanqiao.cn/problems/19788/learning/?contest_id=204
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char s;
    scanf("%c", &s);
    if (s == 'E' || s == 'B')
    {
        s++;
        printf("%c", s);
    }
    else
    {
        printf("%c#", s);
    }
    // 请在此输入您的代码
    return 0;
}