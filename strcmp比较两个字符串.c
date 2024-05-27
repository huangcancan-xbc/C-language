#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    if (result < 0) printf("str1 小于 str2\n");
    else if (result > 0) printf("str1 大于 str2\n");
    else printf("str1 等于 str2\n");
}
