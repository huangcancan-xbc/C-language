#define _CRT_SECURE_NO_WARNINGS 1

//https://www.lanqiao.cn/problems/19789/learning/?contest_id=204
#include <stdio.h>

int main() {
    long long n, ans = 0;
    scanf("%lld", &n);  // ʹ�� %lld ��ȡ long long ���͵� n

    if (n == 1) {
        puts("0");  // ��� n �� 1������Ҫ�κ�����
        return 0;
    }

    // Ѱ��С���������������������ĵ�����
    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {  // ��� i �� n ������
            ans += i;  // ���� i ������
            n /= i;  // �� n ���� i
        }
    }

    // ��� n ʣ�µ�ֵ��һ������ 1 ������
    if (n > 1) {
        ans += n;
    }

    printf("%lld\n", ans);  // ����ۼ����ĵ�����
    return 0;
}
