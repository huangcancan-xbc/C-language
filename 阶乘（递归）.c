#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    int Fun(int n);
    printf("������һ������:");
    scanf("%d", &n);
    int b=jiecheng(n);
    printf("n�Ľ׳���:%d\n",b );
        return 0;

}int jiecheng(int n)
    {
    if (n > 1)
        return n * jiecheng(n - 1);

    }