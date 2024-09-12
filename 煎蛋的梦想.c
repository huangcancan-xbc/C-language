#define _CRT_SECURE_NO_WARNINGS 1

//https://www.lanqiao.cn/problems/19789/learning/?contest_id=204
#include <stdio.h>

int main() {
    long long n, ans = 0;
    scanf("%lld", &n);  // 使用 %lld 读取 long long 类型的 n

    if (n == 1) {
        puts("0");  // 如果 n 是 1，则不需要任何热量
        return 0;
    }

    // 寻找小蛋的质因数，并计算消耗的热量
    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {  // 如果 i 是 n 的因数
            ans += i;  // 消耗 i 点热量
            n /= i;  // 将 n 除以 i
        }
    }

    // 如果 n 剩下的值是一个大于 1 的质数
    if (n > 1) {
        ans += n;
    }

    printf("%lld\n", ans);  // 输出累计消耗的热量
    return 0;
}
