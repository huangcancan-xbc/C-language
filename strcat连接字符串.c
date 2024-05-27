#include <string.h>
#include <stdio.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("连接后的字符串: %s\n", str1);
}
