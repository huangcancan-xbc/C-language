#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("������һ���ַ�����");
    scanf("%s", a);
    printf("����ַ����������ǣ�");
    for (int i = strlen(a) - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    return 0;
}