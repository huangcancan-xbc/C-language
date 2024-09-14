//https://www.luogu.com.cn/problem/P8833

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* a = malloc(n * sizeof(int));
    int* b = malloc(m * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    free(a);
    free(b);
    return 0;
}