#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//使用函数实现数组操作
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。


void init(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

void print(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    //init(arr, 5);
    print(arr, 5);
    reverse(arr, 5);
    print(arr, 5);
    return 0;
}
