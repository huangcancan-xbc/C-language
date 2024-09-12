#define _CRT_SECURE_NO_WARNINGS 1

//https://www.lanqiao.cn/problems/19790/learning/?contest_id=204
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n;
    char a[6];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", a);
        int count = 1;
        for (int i = 0; i < 5; i++)
        {
            if (a[i] != '0')
            {
                count = 0;
                break;
            }
        }


        if (count)
        {
            printf("0\n");
        }
        else
        {
            int i;
            for (i = 0; i < 5 && a[i] == '0'; i++);
            if (i < 5)
            {
                printf("%s\n", a + i);
            }
            else
            {
                printf("0\n");
            }
        }
    }

    // 请在此输入您的代码
    return 0;
}