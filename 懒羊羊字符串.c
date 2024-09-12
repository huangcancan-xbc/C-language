#define _CRT_SECURE_NO_WARNINGS 1

//https://www.lanqiao.cn/problems/19787/learning/?contest_id=204
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);
    int count = 0;
    char a[4];
    while (n--)
    {
        scanf("%s", a);

        if (a[0] != a[1] && a[0] != a[2] && a[1] == a[2])
        {
            count++;
        }
    }

    printf("%d", count);
    // 请在此输入您的代码
    return 0;
}