#include <stdio.h>
int main() {
    int N;
    scanf("%d\n", &N);
    int a[N];
    int t=0,p=0;
    for (int i = 0; i < N; i++) {
        scanf("%d ", &a[i]);
    }
    for (int j = 0; j < N; j++) {
        if (a[j] % 2 == 0) {
            t++;
        }
        else { p++; }
    }
    printf("%d %d\n", p, t);
    return 0;
}
