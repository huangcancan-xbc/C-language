#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int number;
    printf("������һ������: ");
    scanf("%d", &number);

    // ���ǰ32���ַ���Ϊ�����Ʊ�ʾ��ǰ׺
    for (int i = 31; i >= 0; i--) {
        int k = number >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
        // ÿ8λ����ӿո�����߿ɶ���
        if ((i % 8) == 0 && i != 31)
            printf(" ");
    }
    printf("\n");

    return 0;
}