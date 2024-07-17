#define _CRT_SECURE_NO_WARNINGS 1

//BC98 序列中删除指定数字
#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[55];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}