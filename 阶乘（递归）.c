#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    int Fun(int n);
    printf("请输入一个整数:");
    scanf("%d", &n);
    int b=jiecheng(n);
    printf("n的阶乘是:%d\n",b );
        return 0;

}int jiecheng(int n)
    {
    if (n > 1)
        return n * jiecheng(n - 1);

    }