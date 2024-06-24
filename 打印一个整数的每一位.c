#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    int DigitSum(int n);
    printf("请输入一个整数:");
    scanf("%d", &n);
    
    printf("该数的各位数字是:");
    DigitSum(n);
    return 0;
}

int DigitSum(int n)
{
    if (n == 0)
        return ;
    else
    {
        DigitSum(n / 10);
        printf("%d\t", n % 10);
    }
}