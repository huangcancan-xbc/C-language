#include <stdio.h>

// 递归函数 DigitSum 计算非负整数 n 的各位数字之和
// 输入: 非负整数 n
// 返回值: 数字之和
int DigitSum(int n)
{
    if (n > 9)
        return DigitSum(n / 10) + n % 10;
    else
        return n;
}

int main()
{
    int n = 0;

    // 提示用户输入并读取整数，同时检查是否成功读取
    printf("请输入一个非负整数: ");
    if (scanf_s("%d", &n) != 1) {
        printf("读取输入失败，请确保输入的是一个整数。\n");
        return -1; // 或其他错误代码
    }

    // 简单验证输入是否为非负数
    if (n < 0) {
        printf("错误: 输入的不是非负整数。\n");
        return -1; // 或其他错误代码
    }

    int sum = DigitSum(n);
    printf("该数的各位数字之和为: %d\n", sum);

    return 0;
}