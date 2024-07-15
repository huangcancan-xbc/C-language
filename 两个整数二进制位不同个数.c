#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);

    // 使用足够大的数组来存储二进制表示，包括null终止符
    char binary[64]; // 64位足以覆盖大多数平台上的整数类型
    int i = 0;

    // 如果n为0，直接设置为"0"
    if (n == 0) {
        binary[0] = '0';
        binary[1] = '\0';
    }
    else {
        // 从最低位开始填充，但之后需要反转字符串
        while (n > 0) {
            binary[i++] = (n % 2) + '0';
            n /= 2;
        }
        binary[i] = '\0'; // 添加null终止符

        // 反转字符串，确保从最高位开始
        char temp;
        for (int j = 0; j < i / 2; ++j) {
            temp = binary[j];
            binary[j] = binary[i - 1 - j];
            binary[i - 1 - j] = temp;
        }
    }

    // 打印偶数位
    printf("偶数位: ");
    for (int j = 0; j < i; j += 2) {
        printf("%c ", binary[j]);
    }
    printf("\n");

    // 打印奇数位
    printf("奇数位: ");
    for (int j = 1; j < i; j += 2) {
        printf("%c ", binary[j]);
    }
    printf("\n");

    return 0;
}