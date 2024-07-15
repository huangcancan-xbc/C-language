#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 函数用于计算整数n的32位二进制表示中1的个数
int jisuan(int n) {
    int count = 0;
    if (n < 0) {
        // 如果n是负数，我们可以通过将其加1变成正数的反码，
        // 然后计算正数反码的1的数量，最后再加上最高位的1
        n = ~n + 1;
        count = 1; // 最高位的1
    }
    while (n) {
        // 对于正数或转化后的反码，每做一次n &= (n - 1)，就会消去最低位的1
        // 直到n变为0，count中的数值就是1的个数
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int number;
    printf("请输入一个整数: ");
    scanf("%d", &number);

    int m = jisuan(number);
    printf("该数32位二进制表示中1的个数为: %d\n", m);

    return 0;
}