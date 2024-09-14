#define _CRT_SECURE_NO_WARNINGS 1

//https://www.luogu.com.cn/problem/P8834

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n = 0, k = 0;
    scanf("%lld %lld", &n, &k); // ʹ��%lld������long long����

    int* a = (int*)malloc(n * sizeof(int)); // ��̬�����ڴ�

    for (long long i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (long long j = 1; j < n; j++) {
        for (long long i = 0; i < j; i++) {
            if ((long long)a[i] * a[j] <= k) { // ʹ��long long����ֹ���
                count++;
            }
        }
    }

    printf("%d", count);

    free(a); // �ͷ��ڴ�
    return 0;
}
