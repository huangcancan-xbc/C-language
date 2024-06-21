#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 二分查找函数
int chazhao(int arr[], int a, int b) {
    int c = 0;
    int d = a - 1;

    while (c <= d) {
        int mid = c + (d - c) / 2; // 防止(a + right)溢出
        if (arr[mid] == b) {
            return mid; // 找到目标值，返回下标
        }
        else if (arr[mid] < b) {
            c = mid + 1; // 在右半部分继续查找
        }
        else {
            d = mid - 1; // 在左半部分继续查找
        }
    }

    return -1; // 没有找到目标值，返回-1
}

int main() {
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 }; // 示例有序数组
    int n = sizeof(arr) / sizeof(arr[0]); // 数组大小
    int target = 23; // 需要查找的目标值
    //或者
    //int n=0;
    //scanf("%d",&n);
    //讲target全部改成n即可
    int result = chazhao(arr, n, target);
    if (result != -1) {
        printf("找到，数值位于下标: %d\n", result);
    }
    else {
        printf("找不到。\n");
    }

    return 0;
}