#include <stdio.h>

int main() {
    int n, m;
    int a[1000];
    int a2 = 0;
    int a3 = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
        a2 += a[i];
    }
    a3 = a2 - n * (m - 1);
    if (a3 <= 0) {
        a3 =0;
    }
    printf("%d\n", a3);

    return 0;
}
