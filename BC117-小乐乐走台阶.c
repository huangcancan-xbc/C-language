#define _CRT_SECURE_NO_WARNINGS 1

//BC117-Ð¡ÀÖÀÖ×ßÌ¨½×

#include <stdio.h>

int fib(int n)
{
    if (n <= 2)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}


//#include <stdio.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int a[n];
//    a[0] = 1;
//    a[1] = 2;
//    a[2] = 3;
//    for (int i = 3; i < n; i++)
//    {
//        a[i] = a[i - 1] + a[i - 2];
//    }
//    printf("%d", a[n - 1]);
//    return 0;
//}
//
