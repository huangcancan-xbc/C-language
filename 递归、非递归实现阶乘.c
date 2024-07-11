#define _CRT_SECURE_NO_WARNINGS 1

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

#include <stdio.h>

int jiecheng(int n)
{
    if (n > 1)
        return n * jiecheng(n - 1);
}

int main()
{
    int n = 0;
    printf("请输入一个整数:");
    scanf("%d", &n);

    int b = jiecheng(n);
    printf("n的阶乘是:%d\n", b);
    return 0;
}



//非递归实现
//#include <stdio.h>
//
//int jiecheng(int n)
//{
//    int result = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        result *= i;
//    }
//    return result;
//}
//
//int main()
//{
//    int n = 0;
//    printf("请输入一个整数:");
//    scanf("%d", &n);
//
//    int b = jiecheng(n);
//    printf("n的阶乘是:%d\n", b);
//    return 0;
//}