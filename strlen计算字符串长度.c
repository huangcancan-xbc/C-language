#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    size_t len = strlen(str);
    printf("字符串长度: %zu\n", len);//不带'\0'!!! 
}
