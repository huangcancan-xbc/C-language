#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("ÇëÊäÈëÒ»´®×Ö·û´®£º");
    scanf("%s", a);
    printf("Õâ¸ö×Ö·û´®µÄÄæÐòÊÇ£º");
    for (int i = strlen(a) - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    return 0;
}