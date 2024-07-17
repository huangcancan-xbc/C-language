#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
#include <stdio.h>

void print(int arr[],int sz,int* p)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", *(arr + i));
        //printf("%d ", *(p + i));
        //printf("%d ",i[arr]);
    }
}

int main() {
    int arr[] = { 1,2,3,4,5 };
    int* p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr,sz,p);

    return 0;
}