#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// �������ڼ�������n��32λ�����Ʊ�ʾ��1�ĸ���
int jisuan(int n) {
    int count = 0;
    if (n < 0) {
        // ���n�Ǹ��������ǿ���ͨ�������1��������ķ��룬
        // Ȼ��������������1������������ټ������λ��1
        n = ~n + 1;
        count = 1; // ���λ��1
    }
    while (n) {
        // ����������ת����ķ��룬ÿ��һ��n &= (n - 1)���ͻ���ȥ���λ��1
        // ֱ��n��Ϊ0��count�е���ֵ����1�ĸ���
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    int number;
    printf("������һ������: ");
    scanf("%d", &number);

    int m = jisuan(number);
    printf("����32λ�����Ʊ�ʾ��1�ĸ���Ϊ: %d\n", m);

    return 0;
}