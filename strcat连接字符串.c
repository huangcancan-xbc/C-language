#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("���Ӻ���ַ���: %s\n", str1);
}
