#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    printf("������һ��������");
    scanf("%d", &n);

    // ʹ���㹻����������洢�����Ʊ�ʾ������null��ֹ��
    char binary[64]; // 64λ���Ը��Ǵ����ƽ̨�ϵ���������
    int i = 0;

    // ���nΪ0��ֱ������Ϊ"0"
    if (n == 0) {
        binary[0] = '0';
        binary[1] = '\0';
    }
    else {
        // �����λ��ʼ��䣬��֮����Ҫ��ת�ַ���
        while (n > 0) {
            binary[i++] = (n % 2) + '0';
            n /= 2;
        }
        binary[i] = '\0'; // ���null��ֹ��

        // ��ת�ַ�����ȷ�������λ��ʼ
        char temp;
        for (int j = 0; j < i / 2; ++j) {
            temp = binary[j];
            binary[j] = binary[i - 1 - j];
            binary[i - 1 - j] = temp;
        }
    }

    // ��ӡż��λ
    printf("ż��λ: ");
    for (int j = 0; j < i; j += 2) {
        printf("%c ", binary[j]);
    }
    printf("\n");

    // ��ӡ����λ
    printf("����λ: ");
    for (int j = 1; j < i; j += 2) {
        printf("%c ", binary[j]);
    }
    printf("\n");

    return 0;
}