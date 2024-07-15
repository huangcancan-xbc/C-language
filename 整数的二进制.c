#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int number;
    printf("请输入一个整数: ");
    scanf("%d", &number);

    // 输出前32个字符作为二进制表示的前缀
    for (int i = 31; i >= 0; i--) {
        int k = number >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
        // 每8位后添加空格以提高可读性
        if ((i % 8) == 0 && i != 31)
            printf(" ");
    }
    printf("\n");

    return 0;
}