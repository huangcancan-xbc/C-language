#define _CRT_SECURE_NO_WARNINGS 1

//BC111 小乐乐与进制转换

#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char a[100];
    int i = 0;
    while (n)
    {
        a[i++] = n % 6;
        n /= 6;
    }
    for (--i; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}

////递归的实现
//void Print(int n)
//{
//    if (n > 5)
//    {
//        Print(n / 6);
//    }
//    printf("%d", n % 6);
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    Print(n);
//    return 0;
//}