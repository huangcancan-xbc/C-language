#define _CRT_SECURE_NO_WARNINGS 1

//https://www.luogu.com.cn/problem/P8834

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n = 0, k = 0;
    scanf("%lld %lld", &n, &k); // 使用%lld来处理long long类型

    int* a = (int*)malloc(n * sizeof(int)); // 动态分配内存

    for (long long i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (long long j = 1; j < n; j++) {
        for (long long i = 0; i < j; i++) {
            if ((long long)a[i] * a[j] <= k) { // 使用long long来防止溢出
                count++;
            }
        }
    }

    printf("%d", count);

    free(a); // 释放内存
    return 0;
}
