#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    int DigitSum(int n);
    printf("������һ������:");
    scanf("%d", &n);
    
    printf("�����ĸ�λ������:");
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